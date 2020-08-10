#include <chrono>
#include "StringHelper.h"
#include "HLSError.h"
#include "HLSCommon.h"


#ifndef __MEDIASEGMENT_H__
#define __MEDIASEGMENT_H__

class MediaSegment {
    private:
        std::string uri;
        bool discontinuity;
        double duration;
		bool adware;
		std::chrono::system_clock::time_point timepoint;
    public:
        MediaSegment():
            uri(""),
            discontinuity(false),
            duration(0),
			adware (false),
			timepoint(std::chrono::system_clock::now())
		{
        }

        int parseMediaSegemnt(const std::string &line)
		{
            if(StringHelper::startWith(line, EXTINF))
			{
                parseSegmentDuration(line, &duration);
            }
            if(StringHelper::startWith(line, EXT_X_DISCONTINUITY))
			{
                discontinuity = true;
            }
            if(!StringHelper::startWith(line, "#"))
			{
                uri = line;
            }
            return 0;
        }

        std::string getUri() const
		{
            return uri;
        }

        int getDuration() const
		{
            return int(duration);
        }

		bool isAdware () const
		{
			return adware;
		}

		void setAdware()
		{
			adware = true;
		}

        void dump()
		{
            printf("\n<-------mediasegement------->\n");
            printf("duration : %f\n", duration);
            printf("uri : %s \n", uri.c_str());
			printf("is adware: %d \n", adware);
            printf("<--------------------------->\n\n");
        }


        static bool parseSegmentDuration(std::string line, double *x) {
            int colonPos = line.find(":");
            if(colonPos < 0) {
                return false;
            }
            bool ret = StringHelper::parseDouble(line.c_str() + colonPos + 1, x);
            return ret;
        }

        static bool isMediaSegmentTag(std::string &line) {
            if(StringHelper::startWith(line, EXTINF) || StringHelper::startWith(line, EXT_X_BYTERANGE) || StringHelper::startWith(line, EXT_X_DISCONTINUITY) || StringHelper::startWith(line, EXT_X_KEY) || StringHelper::startWith(line, EXT_X_MAP) || StringHelper::startWith(line, EXT_X_PROGRAM_DATE_TIME) || StringHelper::startWith(line, EXT_X_BYTERANGE)) {
                return true;
            }
            return false;
        }

	std::chrono::system_clock::time_point getTimePoint()
	{
		return timepoint;
	}

	void setTimePoint(const std::chrono::system_clock::time_point& tp)
	{
		timepoint = tp;
	}
};

#endif

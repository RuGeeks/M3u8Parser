#ifndef __HLSCOMMON_H__
#define __HLSCOMMON_H__

//Basic Tags
static constexpr const char* EXTM3U = "#EXTM3U";
static constexpr const char* EXT_X_VERSION = "#EXT-X-VERSION";

//Media Playlist Tags
static constexpr const char* EXT_X_TARGETDURATION = "#EXT-X-TARGETDURATION";
static constexpr const char* EXT_X_MEDIA_SEQUENCE = "#EXT-X-MEDIA-SEQUENCE";
static constexpr const char* EXT_X_DISCONTINUITY_SEQUENCE = "#EXT-X-DISCONTINUITY-SEQUENCE";
static constexpr const char* EXT_X_ENDLIST = "#EXT-X-ENDLIST";
static constexpr const char* EXT_X_PLAYLIST_TYPE = "#EXT-X-PLAYLIST-TYPE";
static constexpr const char* EXT_X_I_FRAMES_ONLY = "#EXT-X-I-FRAMES-ONLY";

//Master Playlist Tags
static constexpr const char* EXT_X_MEDIA = "#EXT-X-MEDIA";
static constexpr const char* EXT_X_STREAM_INF = "#EXT-X-STREAM-INF";
static constexpr const char* EXT_X_I_FRAME_STREAM_INF = "#EXT-X-I-FRAME-STREAM-INF";
static constexpr const char* EXT_X_SESSION_DATA = "#EXT-X-SESSION-DATA";
static constexpr const char* EXT_X_SESSION_KEY = "#EXT-X-SESSION-KEY";

//Media or Master Playlist Tags
static constexpr const char* EXT_X_INDEPENDENT_SEGMENTS = "#EXT-X-INDEPENDENT-SEGMENTS";
static constexpr const char* EXT_X_START = "#EXT-X-START";

//Media Segment Tags
static constexpr const char* EXTINF = "#EXTINF";
static constexpr const char* EXT_X_BYTERANGE = "#EXT-X-BYTERANGE";
static constexpr const char* EXT_X_DISCONTINUITY = "#EXT-X-DISCONTINUITY";
static constexpr const char* EXT_X_KEY = "#EXT-X-KEY";
static constexpr const char* EXT_X_MAP = "#EXT-X-MAP";
static constexpr const char* EXT_X_PROGRAM_DATE_TIME = "#EXT-X-PROGRAM-DATE-TIME";
static constexpr const char* EXT_X_DATERANGE = "#EXT-X-DATERANGE";

//Slice command
static constexpr const char* EXT_X_SCTE35 = "#EXT-X-SCTE35";

#endif

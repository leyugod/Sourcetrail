#ifndef FILE_INFO_H
#define FILE_INFO_H

#include <string>

#include "boost/date_time.hpp"

#include "utility/file/FilePath.h"
#include "utility/TimeStamp.h"

struct FileInfo
{
	FileInfo();
	FileInfo(const FilePath& path);
	FileInfo(const FilePath& path, const TimeStamp& lastWriteTime);

	FilePath path;
	TimeStamp lastWriteTime;
};

#endif // FILE_INFO_H

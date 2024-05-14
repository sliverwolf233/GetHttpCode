#ifndef GetHttpCode_HPP
#define GetHttpCode_HPP

#ifdef GetHttpCode_EXPORTS
#define GetHttpCode_API __declspec(dllexport)
#else
#define GetHttpCode_API __declspec(dllimport)
#endif

#include <string>


GetHttpCode_API std::string GetHttpCode(std::string URL,std::string Method);

#endif 
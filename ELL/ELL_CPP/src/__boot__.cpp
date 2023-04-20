#include <hxcpp.h>

#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif
#ifndef INCLUDED_haxe_iterators_ArrayIterator
#include <haxe/iterators/ArrayIterator.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_ELL
#include <ELL.h>
#endif
#ifndef INCLUDED_ELL_MAIN
#include <ELL_MAIN.h>
#endif

void __files__boot();

void __boot_all()
{
__files__boot();
::hx::RegisterResources( ::hx::GetResources() );
::haxe::Log_obj::__register();
::sys::io::File_obj::__register();
::haxe::iterators::ArrayIterator_obj::__register();
::haxe::ds::StringMap_obj::__register();
::haxe::ds::IntMap_obj::__register();
::haxe::IMap_obj::__register();
::Std_obj::__register();
::ELL_obj::__register();
::ELL_MAIN_obj::__register();
::haxe::Log_obj::__boot();
}


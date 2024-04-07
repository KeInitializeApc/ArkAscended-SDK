#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GeometryCacheStreamer.GeometryCacheStreamerSettings
// (None)

class UClass* UGeometryCacheStreamerSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryCacheStreamerSettings");

	return Clss;
}


// GeometryCacheStreamerSettings GeometryCacheStreamer.Default__GeometryCacheStreamerSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryCacheStreamerSettings* UGeometryCacheStreamerSettings::GetDefaultObj()
{
	static class UGeometryCacheStreamerSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryCacheStreamerSettings*>(UGeometryCacheStreamerSettings::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class DLSSMoviePipelineSupport.MoviePipelineDLSSSetting
// (None)

class UClass* UMoviePipelineDLSSSetting::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineDLSSSetting");

	return Clss;
}


// MoviePipelineDLSSSetting DLSSMoviePipelineSupport.Default__MoviePipelineDLSSSetting
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineDLSSSetting* UMoviePipelineDLSSSetting::GetDefaultObj()
{
	static class UMoviePipelineDLSSSetting* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineDLSSSetting*>(UMoviePipelineDLSSSetting::StaticClass()->DefaultObject);

	return Default;
}

}



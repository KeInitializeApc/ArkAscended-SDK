#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_PaintingCanvas.EngramEntry_PaintingCanvas_C
// (None)

class UClass* UEngramEntry_PaintingCanvas_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_PaintingCanvas_C");

	return Clss;
}


// EngramEntry_PaintingCanvas_C EngramEntry_PaintingCanvas.Default__EngramEntry_PaintingCanvas_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_PaintingCanvas_C* UEngramEntry_PaintingCanvas_C::GetDefaultObj()
{
	static class UEngramEntry_PaintingCanvas_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_PaintingCanvas_C*>(UEngramEntry_PaintingCanvas_C::StaticClass()->DefaultObject);

	return Default;
}

}



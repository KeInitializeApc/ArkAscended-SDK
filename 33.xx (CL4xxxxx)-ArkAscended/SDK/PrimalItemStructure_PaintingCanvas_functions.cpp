#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_PaintingCanvas.PrimalItemStructure_PaintingCanvas_C
// (None)

class UClass* UPrimalItemStructure_PaintingCanvas_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_PaintingCanvas_C");

	return Clss;
}


// PrimalItemStructure_PaintingCanvas_C PrimalItemStructure_PaintingCanvas.Default__PrimalItemStructure_PaintingCanvas_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_PaintingCanvas_C* UPrimalItemStructure_PaintingCanvas_C::GetDefaultObj()
{
	static class UPrimalItemStructure_PaintingCanvas_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_PaintingCanvas_C*>(UPrimalItemStructure_PaintingCanvas_C::StaticClass()->DefaultObject);

	return Default;
}

}



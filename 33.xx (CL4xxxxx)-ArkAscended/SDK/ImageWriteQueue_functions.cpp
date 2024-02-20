#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ImageWriteQueue.ImageWriteBlueprintLibrary
// (None)

class UClass* UImageWriteBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ImageWriteBlueprintLibrary");

	return Clss;
}


// ImageWriteBlueprintLibrary ImageWriteQueue.Default__ImageWriteBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UImageWriteBlueprintLibrary* UImageWriteBlueprintLibrary::GetDefaultObj()
{
	static class UImageWriteBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UImageWriteBlueprintLibrary*>(UImageWriteBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function ImageWriteQueue.ImageWriteBlueprintLibrary.ExportToDisk
// (Final, RequiredAPI, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UTexture*                    Texture                                                          (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst)
// class FString                      Filename                                                         (Edit, ExportObject, Net, EditFixedSize, OutParm, ReturnParm)
// struct FImageWriteOptions          Options                                                          (Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

struct FImageWriteOptions UImageWriteBlueprintLibrary::ExportToDisk(class UTexture** Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ImageWriteBlueprintLibrary", "ExportToDisk");

	Params::UImageWriteBlueprintLibrary_ExportToDisk_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Texture != nullptr)
		*Texture = Parms.Texture;

	return Parms.ReturnValue;

}

}



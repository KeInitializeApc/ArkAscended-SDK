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
// class UTexture*                    Texture                                                          (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst)
// class FString                      Filename                                                         (Edit, ExportObject, Net, EditFixedSize, OutParm, ReturnParm)
// struct FImageWriteOptions          Options                                                          (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

struct FImageWriteOptions UImageWriteBlueprintLibrary::ExportToDisk()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ImageWriteBlueprintLibrary", "ExportToDisk");

	Params::UImageWriteBlueprintLibrary_ExportToDisk_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}



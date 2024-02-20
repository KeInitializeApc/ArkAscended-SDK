#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class OpenColorIO.OpenColorIOSettings
// (None)

class UClass* UOpenColorIOSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OpenColorIOSettings");

	return Clss;
}


// OpenColorIOSettings OpenColorIO.Default__OpenColorIOSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UOpenColorIOSettings* UOpenColorIOSettings::GetDefaultObj()
{
	static class UOpenColorIOSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UOpenColorIOSettings*>(UOpenColorIOSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class OpenColorIO.OpenColorIOBlueprintLibrary
// (None)

class UClass* UOpenColorIOBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OpenColorIOBlueprintLibrary");

	return Clss;
}


// OpenColorIOBlueprintLibrary OpenColorIO.Default__OpenColorIOBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UOpenColorIOBlueprintLibrary* UOpenColorIOBlueprintLibrary::GetDefaultObj()
{
	static class UOpenColorIOBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UOpenColorIOBlueprintLibrary*>(UOpenColorIOBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function OpenColorIO.OpenColorIOBlueprintLibrary.ApplyColorSpaceTransform
// (Final, RequiredAPI, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// struct FOpenColorIOColorConversionSettingsConversionSettings                                               (ConstParm, ExportObject, Parm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
// class UTexture*                    InputTexture                                                     (ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
// class UTextureRenderTarget2D*      OutputRenderTarget                                               (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UTextureRenderTarget2D* UOpenColorIOBlueprintLibrary::ApplyColorSpaceTransform(const struct FOpenColorIOColorConversionSettings& ConversionSettings, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OpenColorIOBlueprintLibrary", "ApplyColorSpaceTransform");

	Params::UOpenColorIOBlueprintLibrary_ApplyColorSpaceTransform_Params Parms{};

	Parms.ConversionSettings = ConversionSettings;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OpenColorIO.OpenColorIOColorTransform
// (None)

class UClass* UOpenColorIOColorTransform::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OpenColorIOColorTransform");

	return Clss;
}


// OpenColorIOColorTransform OpenColorIO.Default__OpenColorIOColorTransform
// (Public, ClassDefaultObject, ArchetypeObject)

class UOpenColorIOColorTransform* UOpenColorIOColorTransform::GetDefaultObj()
{
	static class UOpenColorIOColorTransform* Default = nullptr;

	if (!Default)
		Default = static_cast<UOpenColorIOColorTransform*>(UOpenColorIOColorTransform::StaticClass()->DefaultObject);

	return Default;
}


// Class OpenColorIO.OpenColorIOConfiguration
// (None)

class UClass* UOpenColorIOConfiguration::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OpenColorIOConfiguration");

	return Clss;
}


// OpenColorIOConfiguration OpenColorIO.Default__OpenColorIOConfiguration
// (Public, ClassDefaultObject, ArchetypeObject)

class UOpenColorIOConfiguration* UOpenColorIOConfiguration::GetDefaultObj()
{
	static class UOpenColorIOConfiguration* Default = nullptr;

	if (!Default)
		Default = static_cast<UOpenColorIOConfiguration*>(UOpenColorIOConfiguration::StaticClass()->DefaultObject);

	return Default;
}


// Function OpenColorIO.OpenColorIOConfiguration.ReloadExistingColorspaces
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UOpenColorIOConfiguration::ReloadExistingColorspaces()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OpenColorIOConfiguration", "ReloadExistingColorspaces");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class OpenColorIO.OpenColorIODisplayExtensionWrapper
// (None)

class UClass* UOpenColorIODisplayExtensionWrapper::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OpenColorIODisplayExtensionWrapper");

	return Clss;
}


// OpenColorIODisplayExtensionWrapper OpenColorIO.Default__OpenColorIODisplayExtensionWrapper
// (Public, ClassDefaultObject, ArchetypeObject)

class UOpenColorIODisplayExtensionWrapper* UOpenColorIODisplayExtensionWrapper::GetDefaultObj()
{
	static class UOpenColorIODisplayExtensionWrapper* Default = nullptr;

	if (!Default)
		Default = static_cast<UOpenColorIODisplayExtensionWrapper*>(UOpenColorIODisplayExtensionWrapper::StaticClass()->DefaultObject);

	return Default;
}


// Function OpenColorIO.OpenColorIODisplayExtensionWrapper.SetSceneExtensionIsActiveFunctions
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FSceneViewExtensionIsActiveFunctor>IsActiveFunctions                                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

TArray<struct FSceneViewExtensionIsActiveFunctor> UOpenColorIODisplayExtensionWrapper::SetSceneExtensionIsActiveFunctions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OpenColorIODisplayExtensionWrapper", "SetSceneExtensionIsActiveFunctions");

	Params::UOpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunctions_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OpenColorIO.OpenColorIODisplayExtensionWrapper.SetSceneExtensionIsActiveFunction
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSceneViewExtensionIsActiveFunctorIsActiveFunction                                                 (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

struct FSceneViewExtensionIsActiveFunctor UOpenColorIODisplayExtensionWrapper::SetSceneExtensionIsActiveFunction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OpenColorIODisplayExtensionWrapper", "SetSceneExtensionIsActiveFunction");

	Params::UOpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunction_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OpenColorIO.OpenColorIODisplayExtensionWrapper.SetOpenColorIOConfiguration
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FOpenColorIODisplayConfigurationInDisplayConfiguration                                           (ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

struct FOpenColorIODisplayConfiguration UOpenColorIODisplayExtensionWrapper::SetOpenColorIOConfiguration()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OpenColorIODisplayExtensionWrapper", "SetOpenColorIOConfiguration");

	Params::UOpenColorIODisplayExtensionWrapper_SetOpenColorIOConfiguration_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OpenColorIO.OpenColorIODisplayExtensionWrapper.RemoveSceneExtension
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UOpenColorIODisplayExtensionWrapper::RemoveSceneExtension()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OpenColorIODisplayExtensionWrapper", "RemoveSceneExtension");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function OpenColorIO.OpenColorIODisplayExtensionWrapper.GetOpenColorIOConfiguration
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FOpenColorIODisplayConfigurationReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UOpenColorIODisplayExtensionWrapper::GetOpenColorIOConfiguration(const struct FOpenColorIODisplayConfiguration& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OpenColorIODisplayExtensionWrapper", "GetOpenColorIOConfiguration");

	Params::UOpenColorIODisplayExtensionWrapper_GetOpenColorIOConfiguration_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function OpenColorIO.OpenColorIODisplayExtensionWrapper.CreateOpenColorIODisplayExtension
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FOpenColorIODisplayConfigurationInDisplayConfiguration                                           (ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
// struct FSceneViewExtensionIsActiveFunctorIsActiveFunction                                                 (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
// class UOpenColorIODisplayExtensionWrapper*ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FSceneViewExtensionIsActiveFunctor UOpenColorIODisplayExtensionWrapper::CreateOpenColorIODisplayExtension(class UOpenColorIODisplayExtensionWrapper* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OpenColorIODisplayExtensionWrapper", "CreateOpenColorIODisplayExtension");

	Params::UOpenColorIODisplayExtensionWrapper_CreateOpenColorIODisplayExtension_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OpenColorIO.OpenColorIODisplayExtensionWrapper.CreateInGameOpenColorIODisplayExtension
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FOpenColorIODisplayConfigurationInDisplayConfiguration                                           (ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
// class UOpenColorIODisplayExtensionWrapper*ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FOpenColorIODisplayConfiguration UOpenColorIODisplayExtensionWrapper::CreateInGameOpenColorIODisplayExtension(class UOpenColorIODisplayExtensionWrapper* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OpenColorIODisplayExtensionWrapper", "CreateInGameOpenColorIODisplayExtension");

	Params::UOpenColorIODisplayExtensionWrapper_CreateInGameOpenColorIODisplayExtension_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}



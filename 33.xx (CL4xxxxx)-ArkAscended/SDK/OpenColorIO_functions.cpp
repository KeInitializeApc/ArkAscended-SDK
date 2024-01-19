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
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FOpenColorIOColorConversionSettingsConversionSettings                                               (BlueprintVisible, ExportObject, Parm, OutParm, Config, InstancedReference, SubobjectReference)
// class UTexture*                    InputTexture                                                     (Net, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UTextureRenderTarget2D*      OutputRenderTarget                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UOpenColorIOBlueprintLibrary::ApplyColorSpaceTransform(class UObject* WorldContextObject, struct FOpenColorIOColorConversionSettings* ConversionSettings, class UTexture** InputTexture, class UTextureRenderTarget2D** OutputRenderTarget, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OpenColorIOBlueprintLibrary", "ApplyColorSpaceTransform");

	Params::UOpenColorIOBlueprintLibrary_ApplyColorSpaceTransform_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ConversionSettings != nullptr)
		*ConversionSettings = std::move(Parms.ConversionSettings);

	if (InputTexture != nullptr)
		*InputTexture = Parms.InputTexture;

	if (OutputRenderTarget != nullptr)
		*OutputRenderTarget = Parms.OutputRenderTarget;

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
// TArray<struct FSceneViewExtensionIsActiveFunctor>IsActiveFunctions                                                (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UOpenColorIODisplayExtensionWrapper::SetSceneExtensionIsActiveFunctions(TArray<struct FSceneViewExtensionIsActiveFunctor>* IsActiveFunctions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OpenColorIODisplayExtensionWrapper", "SetSceneExtensionIsActiveFunctions");

	Params::UOpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunctions_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (IsActiveFunctions != nullptr)
		*IsActiveFunctions = std::move(Parms.IsActiveFunctions);

}


// Function OpenColorIO.OpenColorIODisplayExtensionWrapper.SetSceneExtensionIsActiveFunction
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSceneViewExtensionIsActiveFunctorIsActiveFunction                                                 (BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UOpenColorIODisplayExtensionWrapper::SetSceneExtensionIsActiveFunction(struct FSceneViewExtensionIsActiveFunctor* IsActiveFunction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OpenColorIODisplayExtensionWrapper", "SetSceneExtensionIsActiveFunction");

	Params::UOpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunction_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (IsActiveFunction != nullptr)
		*IsActiveFunction = std::move(Parms.IsActiveFunction);

}


// Function OpenColorIO.OpenColorIODisplayExtensionWrapper.SetOpenColorIOConfiguration
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FOpenColorIODisplayConfigurationInDisplayConfiguration                                           (Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UOpenColorIODisplayExtensionWrapper::SetOpenColorIOConfiguration(struct FOpenColorIODisplayConfiguration* InDisplayConfiguration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OpenColorIODisplayExtensionWrapper", "SetOpenColorIOConfiguration");

	Params::UOpenColorIODisplayExtensionWrapper_SetOpenColorIOConfiguration_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InDisplayConfiguration != nullptr)
		*InDisplayConfiguration = std::move(Parms.InDisplayConfiguration);

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
// struct FOpenColorIODisplayConfigurationReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

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
// struct FOpenColorIODisplayConfigurationInDisplayConfiguration                                           (Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FSceneViewExtensionIsActiveFunctorIsActiveFunction                                                 (BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UOpenColorIODisplayExtensionWrapper*ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UOpenColorIODisplayExtensionWrapper::CreateOpenColorIODisplayExtension(struct FOpenColorIODisplayConfiguration* InDisplayConfiguration, struct FSceneViewExtensionIsActiveFunctor* IsActiveFunction, class UOpenColorIODisplayExtensionWrapper* ReturnValue)
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

	if (InDisplayConfiguration != nullptr)
		*InDisplayConfiguration = std::move(Parms.InDisplayConfiguration);

	if (IsActiveFunction != nullptr)
		*IsActiveFunction = std::move(Parms.IsActiveFunction);

}


// Function OpenColorIO.OpenColorIODisplayExtensionWrapper.CreateInGameOpenColorIODisplayExtension
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FOpenColorIODisplayConfigurationInDisplayConfiguration                                           (Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UOpenColorIODisplayExtensionWrapper*ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UOpenColorIODisplayExtensionWrapper::CreateInGameOpenColorIODisplayExtension(struct FOpenColorIODisplayConfiguration* InDisplayConfiguration, class UOpenColorIODisplayExtensionWrapper* ReturnValue)
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

	if (InDisplayConfiguration != nullptr)
		*InDisplayConfiguration = std::move(Parms.InDisplayConfiguration);

}

}



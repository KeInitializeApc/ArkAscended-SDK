#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class CinematicCamera.CameraRig_Crane
// (Actor)

class UClass* ACameraRig_Crane::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraRig_Crane");

	return Clss;
}


// CameraRig_Crane CinematicCamera.Default__CameraRig_Crane
// (Public, ClassDefaultObject, ArchetypeObject)

class ACameraRig_Crane* ACameraRig_Crane::GetDefaultObj()
{
	static class ACameraRig_Crane* Default = nullptr;

	if (!Default)
		Default = static_cast<ACameraRig_Crane*>(ACameraRig_Crane::StaticClass()->DefaultObject);

	return Default;
}


// Class CinematicCamera.CameraRig_Rail
// (Actor)

class UClass* ACameraRig_Rail::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraRig_Rail");

	return Clss;
}


// CameraRig_Rail CinematicCamera.Default__CameraRig_Rail
// (Public, ClassDefaultObject, ArchetypeObject)

class ACameraRig_Rail* ACameraRig_Rail::GetDefaultObj()
{
	static class ACameraRig_Rail* Default = nullptr;

	if (!Default)
		Default = static_cast<ACameraRig_Rail*>(ACameraRig_Rail::StaticClass()->DefaultObject);

	return Default;
}


// Function CinematicCamera.CameraRig_Rail.GetRailSplineComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class USplineComponent*            ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void ACameraRig_Rail::GetRailSplineComponent(class USplineComponent** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraRig_Rail", "GetRailSplineComponent");

	Params::ACameraRig_Rail_GetRailSplineComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Class CinematicCamera.CineCameraActor
// (Actor)

class UClass* ACineCameraActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CineCameraActor");

	return Clss;
}


// CineCameraActor CinematicCamera.Default__CineCameraActor
// (Public, ClassDefaultObject, ArchetypeObject)

class ACineCameraActor* ACineCameraActor::GetDefaultObj()
{
	static class ACineCameraActor* Default = nullptr;

	if (!Default)
		Default = static_cast<ACineCameraActor*>(ACineCameraActor::StaticClass()->DefaultObject);

	return Default;
}


// Function CinematicCamera.CineCameraActor.GetCineCameraComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCineCameraComponent*        ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void ACineCameraActor::GetCineCameraComponent(class UCineCameraComponent** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraActor", "GetCineCameraComponent");

	Params::ACineCameraActor_GetCineCameraComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Class CinematicCamera.CineCameraComponent
// (SceneComponent)

class UClass* UCineCameraComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CineCameraComponent");

	return Clss;
}


// CineCameraComponent CinematicCamera.Default__CineCameraComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UCineCameraComponent* UCineCameraComponent::GetDefaultObj()
{
	static class UCineCameraComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UCineCameraComponent*>(UCineCameraComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function CinematicCamera.CineCameraComponent.SetLensSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FCameraLensSettings         NewLensSettings                                                  (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

struct FCameraLensSettings UCineCameraComponent::SetLensSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraComponent", "SetLensSettings");

	Params::UCineCameraComponent_SetLensSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CinematicCamera.CineCameraComponent.SetLensPresetByName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InPresetName                                                     (ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

class FString UCineCameraComponent::SetLensPresetByName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraComponent", "SetLensPresetByName");

	Params::UCineCameraComponent_SetLensPresetByName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CinematicCamera.CineCameraComponent.SetFocusSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FCameraFocusSettings        NewFocusSettings                                                 (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

struct FCameraFocusSettings UCineCameraComponent::SetFocusSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraComponent", "SetFocusSettings");

	Params::UCineCameraComponent_SetFocusSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CinematicCamera.CineCameraComponent.SetFilmbackPresetByName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InPresetName                                                     (ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

class FString UCineCameraComponent::SetFilmbackPresetByName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraComponent", "SetFilmbackPresetByName");

	Params::UCineCameraComponent_SetFilmbackPresetByName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CinematicCamera.CineCameraComponent.SetFilmback
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FCameraFilmbackSettings     NewFilmback                                                      (ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

struct FCameraFilmbackSettings UCineCameraComponent::SetFilmback()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraComponent", "SetFilmback");

	Params::UCineCameraComponent_SetFilmback_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CinematicCamera.CineCameraComponent.SetCustomNearClippingPlane
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewCustomNearClippingPlane                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

float UCineCameraComponent::SetCustomNearClippingPlane()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraComponent", "SetCustomNearClippingPlane");

	Params::UCineCameraComponent_SetCustomNearClippingPlane_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CinematicCamera.CineCameraComponent.SetCurrentFocalLength
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InFocalLength                                                    (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

float UCineCameraComponent::SetCurrentFocalLength()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraComponent", "SetCurrentFocalLength");

	Params::UCineCameraComponent_SetCurrentFocalLength_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CinematicCamera.CineCameraComponent.SetCurrentAperture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewCurrentAperture                                               (ExportObject, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

float UCineCameraComponent::SetCurrentAperture()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraComponent", "SetCurrentAperture");

	Params::UCineCameraComponent_SetCurrentAperture_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CinematicCamera.CineCameraComponent.SetCropSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPlateCropSettings          NewCropSettings                                                  (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

struct FPlateCropSettings UCineCameraComponent::SetCropSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraComponent", "SetCropSettings");

	Params::UCineCameraComponent_SetCropSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CinematicCamera.CineCameraComponent.SetCropPresetByName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InPresetName                                                     (ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

class FString UCineCameraComponent::SetCropPresetByName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraComponent", "SetCropPresetByName");

	Params::UCineCameraComponent_SetCropPresetByName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CinematicCamera.CineCameraComponent.GetVerticalFieldOfView
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UCineCameraComponent::GetVerticalFieldOfView(float* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraComponent", "GetVerticalFieldOfView");

	Params::UCineCameraComponent_GetVerticalFieldOfView_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function CinematicCamera.CineCameraComponent.GetLensPresetsCopy
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<struct FNamedLensPreset>    ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UCineCameraComponent::GetLensPresetsCopy(TArray<struct FNamedLensPreset>* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraComponent", "GetLensPresetsCopy");

	Params::UCineCameraComponent_GetLensPresetsCopy_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function CinematicCamera.CineCameraComponent.GetLensPresetName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UCineCameraComponent::GetLensPresetName(class FString* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraComponent", "GetLensPresetName");

	Params::UCineCameraComponent_GetLensPresetName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UCineCameraComponent::GetHorizontalFieldOfView(float* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraComponent", "GetHorizontalFieldOfView");

	Params::UCineCameraComponent_GetHorizontalFieldOfView_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function CinematicCamera.CineCameraComponent.GetFilmbackPresetsCopy
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<struct FNamedFilmbackPreset>ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UCineCameraComponent::GetFilmbackPresetsCopy(TArray<struct FNamedFilmbackPreset>* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraComponent", "GetFilmbackPresetsCopy");

	Params::UCineCameraComponent_GetFilmbackPresetsCopy_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function CinematicCamera.CineCameraComponent.GetFilmbackPresetName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UCineCameraComponent::GetFilmbackPresetName(class FString* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraComponent", "GetFilmbackPresetName");

	Params::UCineCameraComponent_GetFilmbackPresetName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function CinematicCamera.CineCameraComponent.GetDefaultFilmbackPresetName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UCineCameraComponent::GetDefaultFilmbackPresetName(class FString* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraComponent", "GetDefaultFilmbackPresetName");

	Params::UCineCameraComponent_GetDefaultFilmbackPresetName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function CinematicCamera.CineCameraComponent.GetCropPresetName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UCineCameraComponent::GetCropPresetName(class FString* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraComponent", "GetCropPresetName");

	Params::UCineCameraComponent_GetCropPresetName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Class CinematicCamera.CineCameraSettings
// (None)

class UClass* UCineCameraSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CineCameraSettings");

	return Clss;
}


// CineCameraSettings CinematicCamera.Default__CineCameraSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UCineCameraSettings* UCineCameraSettings::GetDefaultObj()
{
	static class UCineCameraSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UCineCameraSettings*>(UCineCameraSettings::StaticClass()->DefaultObject);

	return Default;
}


// Function CinematicCamera.CineCameraSettings.SetLensPresets
// (Final, Native, Private, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FNamedLensPreset>    InLensPresets                                                    (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

TArray<struct FNamedLensPreset> UCineCameraSettings::SetLensPresets()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraSettings", "SetLensPresets");

	Params::UCineCameraSettings_SetLensPresets_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CinematicCamera.CineCameraSettings.SetFilmbackPresets
// (Final, Native, Private, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FNamedFilmbackPreset>InFilmbackPresets                                                (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

TArray<struct FNamedFilmbackPreset> UCineCameraSettings::SetFilmbackPresets()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraSettings", "SetFilmbackPresets");

	Params::UCineCameraSettings_SetFilmbackPresets_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CinematicCamera.CineCameraSettings.SetDefaultLensPresetName
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// class FString                      InDefaultLensPresetName                                          (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

class FString UCineCameraSettings::SetDefaultLensPresetName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraSettings", "SetDefaultLensPresetName");

	Params::UCineCameraSettings_SetDefaultLensPresetName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CinematicCamera.CineCameraSettings.SetDefaultLensFStop
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// float                              InDefaultLensFStop                                               (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

float UCineCameraSettings::SetDefaultLensFStop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraSettings", "SetDefaultLensFStop");

	Params::UCineCameraSettings_SetDefaultLensFStop_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CinematicCamera.CineCameraSettings.SetDefaultLensFocalLength
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// float                              InDefaultLensFocalLength                                         (BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

float UCineCameraSettings::SetDefaultLensFocalLength()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraSettings", "SetDefaultLensFocalLength");

	Params::UCineCameraSettings_SetDefaultLensFocalLength_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CinematicCamera.CineCameraSettings.SetDefaultFilmbackPreset
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// class FString                      InDefaultFilmbackPreset                                          (Edit, ConstParm, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

class FString UCineCameraSettings::SetDefaultFilmbackPreset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraSettings", "SetDefaultFilmbackPreset");

	Params::UCineCameraSettings_SetDefaultFilmbackPreset_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CinematicCamera.CineCameraSettings.SetDefaultCropPresetName
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// class FString                      InDefaultCropPresetName                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

class FString UCineCameraSettings::SetDefaultCropPresetName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraSettings", "SetDefaultCropPresetName");

	Params::UCineCameraSettings_SetDefaultCropPresetName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CinematicCamera.CineCameraSettings.SetCropPresets
// (Final, Native, Private, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FNamedPlateCropPreset>InCropPresets                                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

TArray<struct FNamedPlateCropPreset> UCineCameraSettings::SetCropPresets()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraSettings", "SetCropPresets");

	Params::UCineCameraSettings_SetCropPresets_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CinematicCamera.CineCameraSettings.GetLensPresetNames
// (Final, Native, Private, Const)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UCineCameraSettings::GetLensPresetNames(TArray<class FString>* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraSettings", "GetLensPresetNames");

	Params::UCineCameraSettings_GetLensPresetNames_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function CinematicCamera.CineCameraSettings.GetLensPresetByName
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      PresetName                                                       (Edit, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
// struct FCameraLensSettings         LensSettings                                                     (Edit, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
// bool                               ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FCameraLensSettings UCineCameraSettings::GetLensPresetByName(const class FString& PresetName, bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraSettings", "GetLensPresetByName");

	Params::UCineCameraSettings_GetLensPresetByName_Params Parms{};

	Parms.PresetName = PresetName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function CinematicCamera.CineCameraSettings.GetFilmbackPresetNames
// (Final, Native, Private, Const)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UCineCameraSettings::GetFilmbackPresetNames(TArray<class FString>* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraSettings", "GetFilmbackPresetNames");

	Params::UCineCameraSettings_GetFilmbackPresetNames_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function CinematicCamera.CineCameraSettings.GetFilmbackPresetByName
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      PresetName                                                       (Edit, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
// struct FCameraFilmbackSettings     FilmbackSettings                                                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FCameraFilmbackSettings UCineCameraSettings::GetFilmbackPresetByName(const class FString& PresetName, bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraSettings", "GetFilmbackPresetByName");

	Params::UCineCameraSettings_GetFilmbackPresetByName_Params Parms{};

	Parms.PresetName = PresetName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function CinematicCamera.CineCameraSettings.GetCropPresetNames
// (Final, Native, Private, Const)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UCineCameraSettings::GetCropPresetNames(TArray<class FString>* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraSettings", "GetCropPresetNames");

	Params::UCineCameraSettings_GetCropPresetNames_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function CinematicCamera.CineCameraSettings.GetCropPresetByName
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      PresetName                                                       (Edit, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
// struct FPlateCropSettings          CropSettings                                                     (Edit, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UCineCameraSettings::GetCropPresetByName(const class FString& PresetName, const struct FPlateCropSettings& CropSettings, bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraSettings", "GetCropPresetByName");

	Params::UCineCameraSettings_GetCropPresetByName_Params Parms{};

	Parms.PresetName = PresetName;
	Parms.CropSettings = CropSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function CinematicCamera.CineCameraSettings.GetCineCameraSettings
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UCineCameraSettings*         ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UCineCameraSettings::GetCineCameraSettings(class UCineCameraSettings** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraSettings", "GetCineCameraSettings");

	Params::UCineCameraSettings_GetCineCameraSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}

}



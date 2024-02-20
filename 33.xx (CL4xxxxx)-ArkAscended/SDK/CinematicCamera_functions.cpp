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
// class USplineComponent*            ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void ACameraRig_Rail::GetRailSplineComponent(class USplineComponent* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraRig_Rail", "GetRailSplineComponent");

	Params::ACameraRig_Rail_GetRailSplineComponent_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// class UCineCameraComponent*        ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void ACineCameraActor::GetCineCameraComponent(class UCineCameraComponent* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraActor", "GetCineCameraComponent");

	Params::ACineCameraActor_GetCineCameraComponent_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// struct FCameraLensSettings         NewLensSettings                                                  (Edit, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UCineCameraComponent::SetLensSettings(const struct FCameraLensSettings& NewLensSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraComponent", "SetLensSettings");

	Params::UCineCameraComponent_SetLensSettings_Params Parms{};

	Parms.NewLensSettings = NewLensSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CinematicCamera.CineCameraComponent.SetLensPresetByName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InPresetName                                                     (Edit, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UCineCameraComponent::SetLensPresetByName(const class FString& InPresetName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraComponent", "SetLensPresetByName");

	Params::UCineCameraComponent_SetLensPresetByName_Params Parms{};

	Parms.InPresetName = InPresetName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CinematicCamera.CineCameraComponent.SetFocusSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FCameraFocusSettings        NewFocusSettings                                                 (ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UCineCameraComponent::SetFocusSettings(const struct FCameraFocusSettings& NewFocusSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraComponent", "SetFocusSettings");

	Params::UCineCameraComponent_SetFocusSettings_Params Parms{};

	Parms.NewFocusSettings = NewFocusSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CinematicCamera.CineCameraComponent.SetFilmbackPresetByName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InPresetName                                                     (Edit, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UCineCameraComponent::SetFilmbackPresetByName(const class FString& InPresetName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraComponent", "SetFilmbackPresetByName");

	Params::UCineCameraComponent_SetFilmbackPresetByName_Params Parms{};

	Parms.InPresetName = InPresetName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CinematicCamera.CineCameraComponent.SetFilmback
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FCameraFilmbackSettings     NewFilmback                                                      (Edit, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UCineCameraComponent::SetFilmback(const struct FCameraFilmbackSettings& NewFilmback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraComponent", "SetFilmback");

	Params::UCineCameraComponent_SetFilmback_Params Parms{};

	Parms.NewFilmback = NewFilmback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CinematicCamera.CineCameraComponent.SetCustomNearClippingPlane
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewCustomNearClippingPlane                                       (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UCineCameraComponent::SetCustomNearClippingPlane(float NewCustomNearClippingPlane)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraComponent", "SetCustomNearClippingPlane");

	Params::UCineCameraComponent_SetCustomNearClippingPlane_Params Parms{};

	Parms.NewCustomNearClippingPlane = NewCustomNearClippingPlane;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CinematicCamera.CineCameraComponent.SetCurrentFocalLength
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InFocalLength                                                    (Edit, ConstParm, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UCineCameraComponent::SetCurrentFocalLength(float InFocalLength)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraComponent", "SetCurrentFocalLength");

	Params::UCineCameraComponent_SetCurrentFocalLength_Params Parms{};

	Parms.InFocalLength = InFocalLength;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CinematicCamera.CineCameraComponent.SetCurrentAperture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewCurrentAperture                                               (Edit, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UCineCameraComponent::SetCurrentAperture(float NewCurrentAperture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraComponent", "SetCurrentAperture");

	Params::UCineCameraComponent_SetCurrentAperture_Params Parms{};

	Parms.NewCurrentAperture = NewCurrentAperture;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CinematicCamera.CineCameraComponent.SetCropSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPlateCropSettings          NewCropSettings                                                  (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UCineCameraComponent::SetCropSettings(const struct FPlateCropSettings& NewCropSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraComponent", "SetCropSettings");

	Params::UCineCameraComponent_SetCropSettings_Params Parms{};

	Parms.NewCropSettings = NewCropSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CinematicCamera.CineCameraComponent.SetCropPresetByName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InPresetName                                                     (Edit, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UCineCameraComponent::SetCropPresetByName(const class FString& InPresetName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraComponent", "SetCropPresetByName");

	Params::UCineCameraComponent_SetCropPresetByName_Params Parms{};

	Parms.InPresetName = InPresetName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CinematicCamera.CineCameraComponent.GetVerticalFieldOfView
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UCineCameraComponent::GetVerticalFieldOfView(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraComponent", "GetVerticalFieldOfView");

	Params::UCineCameraComponent_GetVerticalFieldOfView_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CinematicCamera.CineCameraComponent.GetLensPresetsCopy
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<struct FNamedLensPreset>    ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UCineCameraComponent::GetLensPresetsCopy(const TArray<struct FNamedLensPreset>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraComponent", "GetLensPresetsCopy");

	Params::UCineCameraComponent_GetLensPresetsCopy_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CinematicCamera.CineCameraComponent.GetLensPresetName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UCineCameraComponent::GetLensPresetName(const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraComponent", "GetLensPresetName");

	Params::UCineCameraComponent_GetLensPresetName_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UCineCameraComponent::GetHorizontalFieldOfView(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraComponent", "GetHorizontalFieldOfView");

	Params::UCineCameraComponent_GetHorizontalFieldOfView_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CinematicCamera.CineCameraComponent.GetFilmbackPresetsCopy
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<struct FNamedFilmbackPreset>ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UCineCameraComponent::GetFilmbackPresetsCopy(const TArray<struct FNamedFilmbackPreset>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraComponent", "GetFilmbackPresetsCopy");

	Params::UCineCameraComponent_GetFilmbackPresetsCopy_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CinematicCamera.CineCameraComponent.GetFilmbackPresetName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UCineCameraComponent::GetFilmbackPresetName(const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraComponent", "GetFilmbackPresetName");

	Params::UCineCameraComponent_GetFilmbackPresetName_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CinematicCamera.CineCameraComponent.GetDefaultFilmbackPresetName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UCineCameraComponent::GetDefaultFilmbackPresetName(const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraComponent", "GetDefaultFilmbackPresetName");

	Params::UCineCameraComponent_GetDefaultFilmbackPresetName_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CinematicCamera.CineCameraComponent.GetCropPresetName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UCineCameraComponent::GetCropPresetName(const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraComponent", "GetCropPresetName");

	Params::UCineCameraComponent_GetCropPresetName_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// TArray<struct FNamedLensPreset>    InLensPresets                                                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UCineCameraSettings::SetLensPresets(const TArray<struct FNamedLensPreset>& InLensPresets)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraSettings", "SetLensPresets");

	Params::UCineCameraSettings_SetLensPresets_Params Parms{};

	Parms.InLensPresets = InLensPresets;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CinematicCamera.CineCameraSettings.SetFilmbackPresets
// (Final, Native, Private, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FNamedFilmbackPreset>InFilmbackPresets                                                (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UCineCameraSettings::SetFilmbackPresets(const TArray<struct FNamedFilmbackPreset>& InFilmbackPresets)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraSettings", "SetFilmbackPresets");

	Params::UCineCameraSettings_SetFilmbackPresets_Params Parms{};

	Parms.InFilmbackPresets = InFilmbackPresets;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CinematicCamera.CineCameraSettings.SetDefaultLensPresetName
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// class FString                      InDefaultLensPresetName                                          (Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UCineCameraSettings::SetDefaultLensPresetName(const class FString& InDefaultLensPresetName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraSettings", "SetDefaultLensPresetName");

	Params::UCineCameraSettings_SetDefaultLensPresetName_Params Parms{};

	Parms.InDefaultLensPresetName = InDefaultLensPresetName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CinematicCamera.CineCameraSettings.SetDefaultLensFStop
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// float                              InDefaultLensFStop                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UCineCameraSettings::SetDefaultLensFStop(float InDefaultLensFStop)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraSettings", "SetDefaultLensFStop");

	Params::UCineCameraSettings_SetDefaultLensFStop_Params Parms{};

	Parms.InDefaultLensFStop = InDefaultLensFStop;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CinematicCamera.CineCameraSettings.SetDefaultLensFocalLength
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// float                              InDefaultLensFocalLength                                         (Edit, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UCineCameraSettings::SetDefaultLensFocalLength(float InDefaultLensFocalLength)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraSettings", "SetDefaultLensFocalLength");

	Params::UCineCameraSettings_SetDefaultLensFocalLength_Params Parms{};

	Parms.InDefaultLensFocalLength = InDefaultLensFocalLength;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CinematicCamera.CineCameraSettings.SetDefaultFilmbackPreset
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// class FString                      InDefaultFilmbackPreset                                          (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UCineCameraSettings::SetDefaultFilmbackPreset(const class FString& InDefaultFilmbackPreset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraSettings", "SetDefaultFilmbackPreset");

	Params::UCineCameraSettings_SetDefaultFilmbackPreset_Params Parms{};

	Parms.InDefaultFilmbackPreset = InDefaultFilmbackPreset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CinematicCamera.CineCameraSettings.SetDefaultCropPresetName
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// class FString                      InDefaultCropPresetName                                          (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UCineCameraSettings::SetDefaultCropPresetName(const class FString& InDefaultCropPresetName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraSettings", "SetDefaultCropPresetName");

	Params::UCineCameraSettings_SetDefaultCropPresetName_Params Parms{};

	Parms.InDefaultCropPresetName = InDefaultCropPresetName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CinematicCamera.CineCameraSettings.SetCropPresets
// (Final, Native, Private, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FNamedPlateCropPreset>InCropPresets                                                    (Edit, ConstParm, BlueprintVisible, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UCineCameraSettings::SetCropPresets(const TArray<struct FNamedPlateCropPreset>& InCropPresets)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraSettings", "SetCropPresets");

	Params::UCineCameraSettings_SetCropPresets_Params Parms{};

	Parms.InCropPresets = InCropPresets;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CinematicCamera.CineCameraSettings.GetLensPresetNames
// (Final, Native, Private, Const)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UCineCameraSettings::GetLensPresetNames(const TArray<class FString>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraSettings", "GetLensPresetNames");

	Params::UCineCameraSettings_GetLensPresetNames_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CinematicCamera.CineCameraSettings.GetLensPresetByName
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      PresetName                                                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FCameraLensSettings         LensSettings                                                     (ConstParm, ExportObject, Net, Parm, ZeroConstructor, Transient, EditConst)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UCineCameraSettings::GetLensPresetByName(class FString* PresetName, const struct FCameraLensSettings& LensSettings, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraSettings", "GetLensPresetByName");

	Params::UCineCameraSettings_GetLensPresetByName_Params Parms{};

	Parms.LensSettings = LensSettings;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PresetName != nullptr)
		*PresetName = std::move(Parms.PresetName);

}


// Function CinematicCamera.CineCameraSettings.GetFilmbackPresetNames
// (Final, Native, Private, Const)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UCineCameraSettings::GetFilmbackPresetNames(const TArray<class FString>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraSettings", "GetFilmbackPresetNames");

	Params::UCineCameraSettings_GetFilmbackPresetNames_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CinematicCamera.CineCameraSettings.GetFilmbackPresetByName
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      PresetName                                                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FCameraFilmbackSettings     FilmbackSettings                                                 (ConstParm, BlueprintVisible, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UCineCameraSettings::GetFilmbackPresetByName(class FString* PresetName, const struct FCameraFilmbackSettings& FilmbackSettings, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraSettings", "GetFilmbackPresetByName");

	Params::UCineCameraSettings_GetFilmbackPresetByName_Params Parms{};

	Parms.FilmbackSettings = FilmbackSettings;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PresetName != nullptr)
		*PresetName = std::move(Parms.PresetName);

}


// Function CinematicCamera.CineCameraSettings.GetCropPresetNames
// (Final, Native, Private, Const)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UCineCameraSettings::GetCropPresetNames(const TArray<class FString>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraSettings", "GetCropPresetNames");

	Params::UCineCameraSettings_GetCropPresetNames_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CinematicCamera.CineCameraSettings.GetCropPresetByName
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      PresetName                                                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FPlateCropSettings          CropSettings                                                     (ConstParm, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UCineCameraSettings::GetCropPresetByName(class FString* PresetName, const struct FPlateCropSettings& CropSettings, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraSettings", "GetCropPresetByName");

	Params::UCineCameraSettings_GetCropPresetByName_Params Parms{};

	Parms.CropSettings = CropSettings;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PresetName != nullptr)
		*PresetName = std::move(Parms.PresetName);

}


// Function CinematicCamera.CineCameraSettings.GetCineCameraSettings
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UCineCameraSettings*         ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UCineCameraSettings::GetCineCameraSettings(class UCineCameraSettings* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraSettings", "GetCineCameraSettings");

	Params::UCineCameraSettings_GetCineCameraSettings_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}



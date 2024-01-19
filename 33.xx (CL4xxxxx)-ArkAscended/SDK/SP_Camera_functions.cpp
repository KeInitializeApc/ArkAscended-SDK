#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class SP_Camera.SPCameraMode
// (None)

class UClass* USPCameraMode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SPCameraMode");

	return Clss;
}


// SPCameraMode SP_Camera.Default__SPCameraMode
// (Public, ClassDefaultObject, ArchetypeObject)

class USPCameraMode* USPCameraMode::GetDefaultObj()
{
	static class USPCameraMode* Default = nullptr;

	if (!Default)
		Default = static_cast<USPCameraMode*>(USPCameraMode::StaticClass()->DefaultObject);

	return Default;
}


// Function SP_Camera.SPCameraMode.ResetToDefaultSettings
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USPCameraMode::ResetToDefaultSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPCameraMode", "ResetToDefaultSettings");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SP_Camera.SPCameraMode.GetCustomFocusDistance
// (Event, Protected, HasOutParams, HasDefaults, BlueprintEvent, Const)
// Parameters:
// class AActor*                      ViewTarget                                                       (Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// struct FTransform                  ViewToWorld                                                      (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FTransform USPCameraMode::GetCustomFocusDistance(class AActor* ViewTarget, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPCameraMode", "GetCustomFocusDistance");

	Params::USPCameraMode_GetCustomFocusDistance_Params Parms{};

	Parms.ViewTarget = ViewTarget;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Class SP_Camera.SPCam_AttachedCamera
// (None)

class UClass* USPCam_AttachedCamera::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SPCam_AttachedCamera");

	return Clss;
}


// SPCam_AttachedCamera SP_Camera.Default__SPCam_AttachedCamera
// (Public, ClassDefaultObject, ArchetypeObject)

class USPCam_AttachedCamera* USPCam_AttachedCamera::GetDefaultObj()
{
	static class USPCam_AttachedCamera* Default = nullptr;

	if (!Default)
		Default = static_cast<USPCam_AttachedCamera*>(USPCam_AttachedCamera::StaticClass()->DefaultObject);

	return Default;
}


// Function SP_Camera.SPCam_AttachedCamera.ChooseViewCameraComponent
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class AActor*                      ViewTarget                                                       (Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// class UCameraComponent*            ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void USPCam_AttachedCamera::ChooseViewCameraComponent(class AActor* ViewTarget, class UCameraComponent* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPCam_AttachedCamera", "ChooseViewCameraComponent");

	Params::USPCam_AttachedCamera_ChooseViewCameraComponent_Params Parms{};

	Parms.ViewTarget = ViewTarget;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SP_Camera.SPCam_ThirdPerson
// (None)

class UClass* USPCam_ThirdPerson::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SPCam_ThirdPerson");

	return Clss;
}


// SPCam_ThirdPerson SP_Camera.Default__SPCam_ThirdPerson
// (Public, ClassDefaultObject, ArchetypeObject)

class USPCam_ThirdPerson* USPCam_ThirdPerson::GetDefaultObj()
{
	static class USPCam_ThirdPerson* Default = nullptr;

	if (!Default)
		Default = static_cast<USPCam_ThirdPerson*>(USPCam_ThirdPerson::StaticClass()->DefaultObject);

	return Default;
}


// Class SP_Camera.SPPlayerCameraManager
// (Actor)

class UClass* ASPPlayerCameraManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SPPlayerCameraManager");

	return Clss;
}


// SPPlayerCameraManager SP_Camera.Default__SPPlayerCameraManager
// (Public, ClassDefaultObject, ArchetypeObject)

class ASPPlayerCameraManager* ASPPlayerCameraManager::GetDefaultObj()
{
	static class ASPPlayerCameraManager* Default = nullptr;

	if (!Default)
		Default = static_cast<ASPPlayerCameraManager*>(ASPPlayerCameraManager::StaticClass()->DefaultObject);

	return Default;
}


// Function SP_Camera.SPPlayerCameraManager.StopAmbientCameraShake
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bImmediate                                                       (Edit, Net, EditFixedSize, Parm, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)

void ASPPlayerCameraManager::StopAmbientCameraShake(bool* bImmediate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPPlayerCameraManager", "StopAmbientCameraShake");

	Params::ASPPlayerCameraManager_StopAmbientCameraShake_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bImmediate != nullptr)
		*bImmediate = Parms.bImmediate;

}


// Function SP_Camera.SPPlayerCameraManager.StartAmbientCameraShake
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void ASPPlayerCameraManager::StartAmbientCameraShake()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPPlayerCameraManager", "StartAmbientCameraShake");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SP_Camera.SPPlayerCameraManager.SkipNextInterpolation
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void ASPPlayerCameraManager::SkipNextInterpolation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPPlayerCameraManager", "SkipNextInterpolation");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SP_Camera.SPPlayerCameraManager.SkipBlends
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void ASPPlayerCameraManager::SkipBlends()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPPlayerCameraManager", "SkipBlends");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SP_Camera.SPPlayerCameraManager.SetViewPitchLimits
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              MinPitch                                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
// float                              MaxPitch                                                         (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)

void ASPPlayerCameraManager::SetViewPitchLimits(float* MinPitch, float* MaxPitch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPPlayerCameraManager", "SetViewPitchLimits");

	Params::ASPPlayerCameraManager_SetViewPitchLimits_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MinPitch != nullptr)
		*MinPitch = Parms.MinPitch;

	if (MaxPitch != nullptr)
		*MaxPitch = Parms.MaxPitch;

}


// Function SP_Camera.SPPlayerCameraManager.SetUsingAlternateCamera
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewUsingAltCamera                                               (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)

void ASPPlayerCameraManager::SetUsingAlternateCamera(bool* bNewUsingAltCamera)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPPlayerCameraManager", "SetUsingAlternateCamera");

	Params::ASPPlayerCameraManager_SetUsingAlternateCamera_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bNewUsingAltCamera != nullptr)
		*bNewUsingAltCamera = Parms.bNewUsingAltCamera;

}


// Function SP_Camera.SPPlayerCameraManager.SetDebugCameraStyle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EDebugCameraStyle       NewDebugCameraStyle                                              (BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)

void ASPPlayerCameraManager::SetDebugCameraStyle(enum class EDebugCameraStyle* NewDebugCameraStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPPlayerCameraManager", "SetDebugCameraStyle");

	Params::ASPPlayerCameraManager_SetDebugCameraStyle_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NewDebugCameraStyle != nullptr)
		*NewDebugCameraStyle = Parms.NewDebugCameraStyle;

}


// Function SP_Camera.SPPlayerCameraManager.ResetViewPitchLimits
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void ASPPlayerCameraManager::ResetViewPitchLimits()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPPlayerCameraManager", "ResetViewPitchLimits");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SP_Camera.SPPlayerCameraManager.IsUsingAlternateCamera
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void ASPPlayerCameraManager::IsUsingAlternateCamera(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPPlayerCameraManager", "IsUsingAlternateCamera");

	Params::ASPPlayerCameraManager_IsUsingAlternateCamera_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SP_Camera.SPPlayerCameraManager.GetCurrentCameraMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USPCameraMode*               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void ASPPlayerCameraManager::GetCurrentCameraMode(class USPCameraMode* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPPlayerCameraManager", "GetCurrentCameraMode");

	Params::ASPPlayerCameraManager_GetCurrentCameraMode_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SP_Camera.SPPlayerCameraManager.GetCameraClassForCharacter
// (Native, Event, Protected, BlueprintEvent, Const)
// Parameters:
// class AActor*                      InViewTarget                                                     (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
// class UClass*                      ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void ASPPlayerCameraManager::GetCameraClassForCharacter(class AActor** InViewTarget, class UClass* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPPlayerCameraManager", "GetCameraClassForCharacter");

	Params::ASPPlayerCameraManager_GetCameraClassForCharacter_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InViewTarget != nullptr)
		*InViewTarget = Parms.InViewTarget;

}


// Function SP_Camera.SPPlayerCameraManager.ConfigureAlternateCamera
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                      NewAltCameraMode                                                 (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
// class AActor*                      NewAltViewTarget                                                 (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
// float                              NewAltCameraTransitionTime                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)

void ASPPlayerCameraManager::ConfigureAlternateCamera(class UClass** NewAltCameraMode, class AActor** NewAltViewTarget, float* NewAltCameraTransitionTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPPlayerCameraManager", "ConfigureAlternateCamera");

	Params::ASPPlayerCameraManager_ConfigureAlternateCamera_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NewAltCameraMode != nullptr)
		*NewAltCameraMode = Parms.NewAltCameraMode;

	if (NewAltViewTarget != nullptr)
		*NewAltViewTarget = Parms.NewAltViewTarget;

	if (NewAltCameraTransitionTime != nullptr)
		*NewAltCameraTransitionTime = Parms.NewAltCameraTransitionTime;

}


// Function SP_Camera.SPPlayerCameraManager.ClearAlternateCamera
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void ASPPlayerCameraManager::ClearAlternateCamera()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPPlayerCameraManager", "ClearAlternateCamera");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}

}



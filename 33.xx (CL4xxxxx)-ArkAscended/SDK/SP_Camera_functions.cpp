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
// class AActor*                      ViewTarget                                                       (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FTransform                  ViewToWorld                                                      (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float USPCameraMode::GetCustomFocusDistance(class AActor* ViewTarget, struct FTransform* ViewToWorld)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPCameraMode", "GetCustomFocusDistance");

	Params::USPCameraMode_GetCustomFocusDistance_Params Parms{};

	Parms.ViewTarget = ViewTarget;

	UObject::ProcessEvent(Func, &Parms);

	if (ViewToWorld != nullptr)
		*ViewToWorld = std::move(Parms.ViewToWorld);

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
// class AActor*                      ViewTarget                                                       (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UCameraComponent*            ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UCameraComponent* USPCam_AttachedCamera::ChooseViewCameraComponent(class AActor* ViewTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPCam_AttachedCamera", "ChooseViewCameraComponent");

	Params::USPCam_AttachedCamera_ChooseViewCameraComponent_Params Parms{};

	Parms.ViewTarget = ViewTarget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

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
// bool                               bImmediate                                                       (Edit, BlueprintVisible, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

bool ASPPlayerCameraManager::StopAmbientCameraShake()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPPlayerCameraManager", "StopAmbientCameraShake");

	Params::ASPPlayerCameraManager_StopAmbientCameraShake_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

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
// float                              MinPitch                                                         (ConstParm, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              MaxPitch                                                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

float ASPPlayerCameraManager::SetViewPitchLimits()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPPlayerCameraManager", "SetViewPitchLimits");

	Params::ASPPlayerCameraManager_SetViewPitchLimits_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SP_Camera.SPPlayerCameraManager.SetUsingAlternateCamera
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewUsingAltCamera                                               (Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

bool ASPPlayerCameraManager::SetUsingAlternateCamera()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPPlayerCameraManager", "SetUsingAlternateCamera");

	Params::ASPPlayerCameraManager_SetUsingAlternateCamera_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SP_Camera.SPPlayerCameraManager.SetDebugCameraStyle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EDebugCameraStyle       NewDebugCameraStyle                                              (ExportObject, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

enum class EDebugCameraStyle ASPPlayerCameraManager::SetDebugCameraStyle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPPlayerCameraManager", "SetDebugCameraStyle");

	Params::ASPPlayerCameraManager_SetDebugCameraStyle_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

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
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool ASPPlayerCameraManager::IsUsingAlternateCamera()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPPlayerCameraManager", "IsUsingAlternateCamera");

	Params::ASPPlayerCameraManager_IsUsingAlternateCamera_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SP_Camera.SPPlayerCameraManager.GetCurrentCameraMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USPCameraMode*               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class USPCameraMode* ASPPlayerCameraManager::GetCurrentCameraMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPPlayerCameraManager", "GetCurrentCameraMode");

	Params::ASPPlayerCameraManager_GetCurrentCameraMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SP_Camera.SPPlayerCameraManager.GetCameraClassForCharacter
// (Native, Event, Protected, BlueprintEvent, Const)
// Parameters:
// class AActor*                      InViewTarget                                                     (Edit, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UClass*                      ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UClass* ASPPlayerCameraManager::GetCameraClassForCharacter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPPlayerCameraManager", "GetCameraClassForCharacter");

	Params::ASPPlayerCameraManager_GetCameraClassForCharacter_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SP_Camera.SPPlayerCameraManager.ConfigureAlternateCamera
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                      NewAltCameraMode                                                 (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class AActor*                      NewAltViewTarget                                                 (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              NewAltCameraTransitionTime                                       (Edit, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

float ASPPlayerCameraManager::ConfigureAlternateCamera()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPPlayerCameraManager", "ConfigureAlternateCamera");

	Params::ASPPlayerCameraManager_ConfigureAlternateCamera_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

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



#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class HeadMountedDisplay.HandKeypointConversion
// (None)

class UClass* UHandKeypointConversion::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HandKeypointConversion");

	return Clss;
}


// HandKeypointConversion HeadMountedDisplay.Default__HandKeypointConversion
// (Public, ClassDefaultObject, ArchetypeObject)

class UHandKeypointConversion* UHandKeypointConversion::GetDefaultObj()
{
	static class UHandKeypointConversion* Default = nullptr;

	if (!Default)
		Default = static_cast<UHandKeypointConversion*>(UHandKeypointConversion::StaticClass()->DefaultObject);

	return Default;
}


// Function HeadMountedDisplay.HandKeypointConversion.Conv_HandKeypointToInt32
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EHandKeypoint           Input                                                            (Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor)
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UHandKeypointConversion::Conv_HandKeypointToInt32(enum class EHandKeypoint Input)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HandKeypointConversion", "Conv_HandKeypointToInt32");

	Params::UHandKeypointConversion_Conv_HandKeypointToInt32_Params Parms{};

	Parms.Input = Input;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class HeadMountedDisplay.HeadMountedDisplayFunctionLibrary
// (None)

class UClass* UHeadMountedDisplayFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HeadMountedDisplayFunctionLibrary");

	return Clss;
}


// HeadMountedDisplayFunctionLibrary HeadMountedDisplay.Default__HeadMountedDisplayFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UHeadMountedDisplayFunctionLibrary* UHeadMountedDisplayFunctionLibrary::GetDefaultObj()
{
	static class UHeadMountedDisplayFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UHeadMountedDisplayFunctionLibrary*>(UHeadMountedDisplayFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.UpdateExternalTrackingHMDPosition
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform                  ExternalTrackingTransform                                        (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

struct FTransform UHeadMountedDisplayFunctionLibrary::UpdateExternalTrackingHMDPosition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "UpdateExternalTrackingHMDPosition");

	Params::UHeadMountedDisplayFunctionLibrary_UpdateExternalTrackingHMDPosition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetXRTimedInputActionDelegate
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        ActionName                                                       (BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// FDelegateProperty_                 InDelegate                                                       (BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

void UHeadMountedDisplayFunctionLibrary::SetXRTimedInputActionDelegate(class FName* ActionName, FDelegateProperty_ InDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "SetXRTimedInputActionDelegate");

	Params::UHeadMountedDisplayFunctionLibrary_SetXRTimedInputActionDelegate_Params Parms{};

	Parms.InDelegate = InDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ActionName != nullptr)
		*ActionName = Parms.ActionName;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetXRDisconnectDelegate
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 InDisconnectedDelegate                                           (ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

void UHeadMountedDisplayFunctionLibrary::SetXRDisconnectDelegate(FDelegateProperty_ InDisconnectedDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "SetXRDisconnectDelegate");

	Params::UHeadMountedDisplayFunctionLibrary_SetXRDisconnectDelegate_Params Parms{};

	Parms.InDisconnectedDelegate = InDisconnectedDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetWorldToMetersScale
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContext                                                     (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, EditConst)
// float                              NewScale                                                         (Edit, ConstParm, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)

void UHeadMountedDisplayFunctionLibrary::SetWorldToMetersScale(class UObject* WorldContext, float NewScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "SetWorldToMetersScale");

	Params::UHeadMountedDisplayFunctionLibrary_SetWorldToMetersScale_Params Parms{};

	Parms.WorldContext = WorldContext;
	Parms.NewScale = NewScale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetTrackingOrigin
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EHMDTrackingOrigin      Origin                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)

void UHeadMountedDisplayFunctionLibrary::SetTrackingOrigin(enum class EHMDTrackingOrigin* Origin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "SetTrackingOrigin");

	Params::UHeadMountedDisplayFunctionLibrary_SetTrackingOrigin_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Origin != nullptr)
		*Origin = Parms.Origin;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenTexture
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UTexture*                    InTexture                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

void UHeadMountedDisplayFunctionLibrary::SetSpectatorScreenTexture(class UTexture** InTexture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "SetSpectatorScreenTexture");

	Params::UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenTexture_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InTexture != nullptr)
		*InTexture = Parms.InTexture;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenModeTexturePlusEyeLayout
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   EyeRectMin                                                       (ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector2D                   EyeRectMax                                                       (BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector2D                   TextureRectMin                                                   (BlueprintVisible, EditFixedSize, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector2D                   TextureRectMax                                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bDrawEyeFirst                                                    (BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bClearBlack                                                      (Edit, BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bUseAlpha                                                        (Edit, ConstParm, BlueprintVisible, Net, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

void UHeadMountedDisplayFunctionLibrary::SetSpectatorScreenModeTexturePlusEyeLayout(const struct FVector2D& EyeRectMin, const struct FVector2D& EyeRectMax, const struct FVector2D& TextureRectMin, const struct FVector2D& TextureRectMax, bool bDrawEyeFirst, bool bClearBlack, bool bUseAlpha)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "SetSpectatorScreenModeTexturePlusEyeLayout");

	Params::UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout_Params Parms{};

	Parms.EyeRectMin = EyeRectMin;
	Parms.EyeRectMax = EyeRectMax;
	Parms.TextureRectMin = TextureRectMin;
	Parms.TextureRectMax = TextureRectMax;
	Parms.bDrawEyeFirst = bDrawEyeFirst;
	Parms.bClearBlack = bClearBlack;
	Parms.bUseAlpha = bUseAlpha;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class ESpectatorScreenMode    Mode                                                             (Edit, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, SubobjectReference)

void UHeadMountedDisplayFunctionLibrary::SetSpectatorScreenMode(enum class ESpectatorScreenMode* Mode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "SetSpectatorScreenMode");

	Params::UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Mode != nullptr)
		*Mode = Parms.Mode;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetClippingPlanes
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                              Near                                                             (BlueprintVisible, Net, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// float                              Far                                                              (Edit, Net, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

void UHeadMountedDisplayFunctionLibrary::SetClippingPlanes(float Near, float Far)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "SetClippingPlanes");

	Params::UHeadMountedDisplayFunctionLibrary_SetClippingPlanes_Params Parms{};

	Parms.Near = Near;
	Parms.Far = Far;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ResetOrientationAndPosition
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                              Yaw                                                              (BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config)
// enum class EOrientPositionSelector Options                                                          (ConstParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

enum class EOrientPositionSelector UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "ResetOrientationAndPosition");

	Params::UHeadMountedDisplayFunctionLibrary_ResetOrientationAndPosition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsSpectatorScreenModeControllable
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UHeadMountedDisplayFunctionLibrary::IsSpectatorScreenModeControllable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "IsSpectatorScreenModeControllable");

	Params::UHeadMountedDisplayFunctionLibrary_IsSpectatorScreenModeControllable_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsInLowPersistenceMode
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UHeadMountedDisplayFunctionLibrary::IsInLowPersistenceMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "IsInLowPersistenceMode");

	Params::UHeadMountedDisplayFunctionLibrary_IsInLowPersistenceMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayEnabled
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UHeadMountedDisplayFunctionLibrary::IsHeadMountedDisplayEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "IsHeadMountedDisplayEnabled");

	Params::UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayConnected
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UHeadMountedDisplayFunctionLibrary::IsHeadMountedDisplayConnected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "IsHeadMountedDisplayConnected");

	Params::UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayConnected_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsDeviceTracking
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FXRDeviceId                 XRDeviceId                                                       (ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UHeadMountedDisplayFunctionLibrary::IsDeviceTracking(const struct FXRDeviceId& XRDeviceId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "IsDeviceTracking");

	Params::UHeadMountedDisplayFunctionLibrary_IsDeviceTracking_Params Parms{};

	Parms.XRDeviceId = XRDeviceId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.HasValidTrackingPosition
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UHeadMountedDisplayFunctionLibrary::HasValidTrackingPosition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "HasValidTrackingPosition");

	Params::UHeadMountedDisplayFunctionLibrary_HasValidTrackingPosition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetXRSystemFlags
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UHeadMountedDisplayFunctionLibrary::GetXRSystemFlags()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "GetXRSystemFlags");

	Params::UHeadMountedDisplayFunctionLibrary_GetXRSystemFlags_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetWorldToMetersScale
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContext                                                     (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, EditConst)
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UHeadMountedDisplayFunctionLibrary::GetWorldToMetersScale(class UObject* WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "GetWorldToMetersScale");

	Params::UHeadMountedDisplayFunctionLibrary_GetWorldToMetersScale_Params Parms{};

	Parms.WorldContext = WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetVRFocusState
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               bUseFocus                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bHasFocus                                                        (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

void UHeadMountedDisplayFunctionLibrary::GetVRFocusState(bool bUseFocus, bool bHasFocus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "GetVRFocusState");

	Params::UHeadMountedDisplayFunctionLibrary_GetVRFocusState_Params Parms{};

	Parms.bUseFocus = bUseFocus;
	Parms.bHasFocus = bHasFocus;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetVersionString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FString UHeadMountedDisplayFunctionLibrary::GetVersionString()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "GetVersionString");

	Params::UHeadMountedDisplayFunctionLibrary_GetVersionString_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingToWorldTransform
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContext                                                     (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, EditConst)
// struct FTransform                  ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FTransform UHeadMountedDisplayFunctionLibrary::GetTrackingToWorldTransform(class UObject* WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "GetTrackingToWorldTransform");

	Params::UHeadMountedDisplayFunctionLibrary_GetTrackingToWorldTransform_Params Parms{};

	Parms.WorldContext = WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingSensorParameters
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     Origin                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FRotator                    Rotation                                                         (BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
// float                              LeftFOV                                                          (BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// float                              RightFOV                                                         (Edit, ConstParm, ExportObject, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// float                              TopFOV                                                           (Edit, ConstParm, BlueprintVisible, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// float                              BottomFOV                                                        (Edit, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// float                              Distance                                                         (BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              NearPlane                                                        (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// float                              FarPlane                                                         (Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               IsActive                                                         (ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate)
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)

int32 UHeadMountedDisplayFunctionLibrary::GetTrackingSensorParameters(struct FVector* Origin, struct FRotator* Rotation, float LeftFOV, float RightFOV, float TopFOV, float BottomFOV, bool* IsActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "GetTrackingSensorParameters");

	Params::UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters_Params Parms{};

	Parms.LeftFOV = LeftFOV;
	Parms.RightFOV = RightFOV;
	Parms.TopFOV = TopFOV;
	Parms.BottomFOV = BottomFOV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Origin != nullptr)
		*Origin = std::move(Parms.Origin);

	if (Rotation != nullptr)
		*Rotation = std::move(Parms.Rotation);

	if (IsActive != nullptr)
		*IsActive = Parms.IsActive;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingOriginTransform
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// enum class EHMDTrackingOrigin      Origin                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FTransform                  OutTransform                                                     (Edit, ConstParm, BlueprintReadOnly, OutParm, Transient, Config, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UHeadMountedDisplayFunctionLibrary::GetTrackingOriginTransform(enum class EHMDTrackingOrigin* Origin, struct FTransform* OutTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "GetTrackingOriginTransform");

	Params::UHeadMountedDisplayFunctionLibrary_GetTrackingOriginTransform_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Origin != nullptr)
		*Origin = Parms.Origin;

	if (OutTransform != nullptr)
		*OutTransform = std::move(Parms.OutTransform);

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingOrigin
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EHMDTrackingOrigin      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

enum class EHMDTrackingOrigin UHeadMountedDisplayFunctionLibrary::GetTrackingOrigin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "GetTrackingOrigin");

	Params::UHeadMountedDisplayFunctionLibrary_GetTrackingOrigin_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPositionalTrackingCameraParameters
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     CameraOrigin                                                     (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// struct FRotator                    CameraRotation                                                   (ConstParm, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// float                              HFOV                                                             (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// float                              VFOV                                                             (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// float                              CameraDistance                                                   (Edit, ConstParm, ExportObject, Net, OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
// float                              NearPlane                                                        (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// float                              FarPlane                                                         (Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

float UHeadMountedDisplayFunctionLibrary::GetPositionalTrackingCameraParameters(const struct FRotator& CameraRotation, float* CameraDistance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "GetPositionalTrackingCameraParameters");

	Params::UHeadMountedDisplayFunctionLibrary_GetPositionalTrackingCameraParameters_Params Parms{};

	Parms.CameraRotation = CameraRotation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (CameraDistance != nullptr)
		*CameraDistance = Parms.CameraDistance;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPlayAreaRect
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform                  OutTransform                                                     (Edit, ConstParm, BlueprintReadOnly, OutParm, Transient, Config, InstancedReference, SubobjectReference)
// struct FVector2D                   OutRect                                                          (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UHeadMountedDisplayFunctionLibrary::GetPlayAreaRect(struct FTransform* OutTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "GetPlayAreaRect");

	Params::UHeadMountedDisplayFunctionLibrary_GetPlayAreaRect_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutTransform != nullptr)
		*OutTransform = std::move(Parms.OutTransform);

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPlayAreaBounds
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// enum class EHMDTrackingOrigin      Origin                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector2D                   ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector2D UHeadMountedDisplayFunctionLibrary::GetPlayAreaBounds(enum class EHMDTrackingOrigin* Origin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "GetPlayAreaBounds");

	Params::UHeadMountedDisplayFunctionLibrary_GetPlayAreaBounds_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Origin != nullptr)
		*Origin = Parms.Origin;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPixelDensity
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UHeadMountedDisplayFunctionLibrary::GetPixelDensity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "GetPixelDensity");

	Params::UHeadMountedDisplayFunctionLibrary_GetPixelDensity_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetOrientationAndPosition
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRotator                    DeviceRotation                                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     DevicePosition                                                   (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

struct FVector UHeadMountedDisplayFunctionLibrary::GetOrientationAndPosition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "GetOrientationAndPosition");

	Params::UHeadMountedDisplayFunctionLibrary_GetOrientationAndPosition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetNumOfTrackingSensors
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UHeadMountedDisplayFunctionLibrary::GetNumOfTrackingSensors()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "GetNumOfTrackingSensors");

	Params::UHeadMountedDisplayFunctionLibrary_GetNumOfTrackingSensors_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetMotionControllerData
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContext                                                     (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, EditConst)
// enum class EControllerHand         Hand                                                             (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// struct FXRMotionControllerData     MotionControllerData                                             (Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

struct FXRMotionControllerData UHeadMountedDisplayFunctionLibrary::GetMotionControllerData(class UObject* WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "GetMotionControllerData");

	Params::UHeadMountedDisplayFunctionLibrary_GetMotionControllerData_Params Parms{};

	Parms.WorldContext = WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDWornState
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EHMDWornState           ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

enum class EHMDWornState UHeadMountedDisplayFunctionLibrary::GetHMDWornState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "GetHMDWornState");

	Params::UHeadMountedDisplayFunctionLibrary_GetHMDWornState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDDeviceName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FName UHeadMountedDisplayFunctionLibrary::GetHMDDeviceName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "GetHMDDeviceName");

	Params::UHeadMountedDisplayFunctionLibrary_GetHMDDeviceName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDData
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContext                                                     (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, EditConst)
// struct FXRHMDData                  HMDData                                                          (BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

struct FXRHMDData UHeadMountedDisplayFunctionLibrary::GetHMDData(class UObject* WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "GetHMDData");

	Params::UHeadMountedDisplayFunctionLibrary_GetHMDData_Params Parms{};

	Parms.WorldContext = WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetDeviceWorldPose
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContext                                                     (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, EditConst)
// struct FXRDeviceId                 XRDeviceId                                                       (ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance)
// bool                               bIsTracked                                                       (ExportObject, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// struct FRotator                    Orientation                                                      (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig)
// bool                               bHasPositionalTracking                                           (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     Position                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config)

bool UHeadMountedDisplayFunctionLibrary::GetDeviceWorldPose(class UObject* WorldContext, const struct FXRDeviceId& XRDeviceId, const struct FRotator& Orientation, const struct FVector& Position)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "GetDeviceWorldPose");

	Params::UHeadMountedDisplayFunctionLibrary_GetDeviceWorldPose_Params Parms{};

	Parms.WorldContext = WorldContext;
	Parms.XRDeviceId = XRDeviceId;
	Parms.Orientation = Orientation;
	Parms.Position = Position;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetDevicePose
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FXRDeviceId                 XRDeviceId                                                       (ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance)
// bool                               bIsTracked                                                       (ExportObject, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// struct FRotator                    Orientation                                                      (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig)
// bool                               bHasPositionalTracking                                           (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     Position                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config)

bool UHeadMountedDisplayFunctionLibrary::GetDevicePose(const struct FXRDeviceId& XRDeviceId, const struct FRotator& Orientation, const struct FVector& Position)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "GetDevicePose");

	Params::UHeadMountedDisplayFunctionLibrary_GetDevicePose_Params Parms{};

	Parms.XRDeviceId = XRDeviceId;
	Parms.Orientation = Orientation;
	Parms.Position = Position;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetCurrentInteractionProfile
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class EControllerHand         Hand                                                             (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// class FString                      InteractionProfile                                               (Edit, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UHeadMountedDisplayFunctionLibrary::GetCurrentInteractionProfile()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "GetCurrentInteractionProfile");

	Params::UHeadMountedDisplayFunctionLibrary_GetCurrentInteractionProfile_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetControllerTransformForTime
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContext                                                     (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, EditConst)
// int32                              ControllerIndex                                                  (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class FName                        MotionSource                                                     (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// struct FTimespan                   Time                                                             (Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// bool                               bTimeWasUsed                                                     (Edit, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// struct FRotator                    Orientation                                                      (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig)
// struct FVector                     Position                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config)
// bool                               bProvidedLinearVelocity                                          (BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     LinearVelocity                                                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               bProvidedAngularVelocity                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     AngularVelocityRadPerSec                                         (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bProvidedLinearAcceleration                                      (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     LinearAcceleration                                               (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UHeadMountedDisplayFunctionLibrary::GetControllerTransformForTime(class UObject* WorldContext, const struct FTimespan& Time, const struct FRotator& Orientation, const struct FVector& Position, struct FVector* LinearVelocity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "GetControllerTransformForTime");

	Params::UHeadMountedDisplayFunctionLibrary_GetControllerTransformForTime_Params Parms{};

	Parms.WorldContext = WorldContext;
	Parms.Time = Time;
	Parms.Orientation = Orientation;
	Parms.Position = Position;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (LinearVelocity != nullptr)
		*LinearVelocity = std::move(Parms.LinearVelocity);

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnumerateTrackedDevices
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        SystemId                                                         (BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// enum class EXRTrackedDeviceType    DeviceType                                                       (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
// TArray<struct FXRDeviceId>         ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<struct FXRDeviceId> UHeadMountedDisplayFunctionLibrary::EnumerateTrackedDevices()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "EnumerateTrackedDevices");

	Params::UHeadMountedDisplayFunctionLibrary_EnumerateTrackedDevices_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableLowPersistenceMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bEnable                                                          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)

void UHeadMountedDisplayFunctionLibrary::EnableLowPersistenceMode(bool* bEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "EnableLowPersistenceMode");

	Params::UHeadMountedDisplayFunctionLibrary_EnableLowPersistenceMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bEnable != nullptr)
		*bEnable = Parms.bEnable;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableHMD
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bEnable                                                          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UHeadMountedDisplayFunctionLibrary::EnableHMD(bool* bEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "EnableHMD");

	Params::UHeadMountedDisplayFunctionLibrary_EnableHMD_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bEnable != nullptr)
		*bEnable = Parms.bEnable;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.DisconnectRemoteXRDevice
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UHeadMountedDisplayFunctionLibrary::DisconnectRemoteXRDevice()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "DisconnectRemoteXRDevice");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ConnectRemoteXRDevice
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      IpAddress                                                        (BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// int32                              BitRate                                                          (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// enum class EXRDeviceConnectionResultReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

enum class EXRDeviceConnectionResult UHeadMountedDisplayFunctionLibrary::ConnectRemoteXRDevice(class FString* IpAddress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "ConnectRemoteXRDevice");

	Params::UHeadMountedDisplayFunctionLibrary_ConnectRemoteXRDevice_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (IpAddress != nullptr)
		*IpAddress = std::move(Parms.IpAddress);

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ConfigureGestures
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FXRGestureConfig            GestureConfig                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UHeadMountedDisplayFunctionLibrary::ConfigureGestures()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "ConfigureGestures");

	Params::UHeadMountedDisplayFunctionLibrary_ConfigureGestures_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ClearXRTimedInputActionDelegate
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        ActionPath                                                       (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

class FName UHeadMountedDisplayFunctionLibrary::ClearXRTimedInputActionDelegate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "ClearXRTimedInputActionDelegate");

	Params::UHeadMountedDisplayFunctionLibrary_ClearXRTimedInputActionDelegate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.CalibrateExternalTrackingToHMD
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform                  ExternalTrackingTransform                                        (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

struct FTransform UHeadMountedDisplayFunctionLibrary::CalibrateExternalTrackingToHMD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "CalibrateExternalTrackingToHMD");

	Params::UHeadMountedDisplayFunctionLibrary_CalibrateExternalTrackingToHMD_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.BreakKey
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FKey                        InKey                                                            (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FString                      InteractionProfile                                               (Edit, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// enum class EControllerHand         Hand                                                             (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// class FName                        MotionSource                                                     (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      Indentifier                                                      (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      Component                                                        (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FString UHeadMountedDisplayFunctionLibrary::BreakKey(struct FKey* InKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "BreakKey");

	Params::UHeadMountedDisplayFunctionLibrary_BreakKey_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InKey != nullptr)
		*InKey = std::move(Parms.InKey);

	return Parms.ReturnValue;

}


// Class HeadMountedDisplay.MotionControllerComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UMotionControllerComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MotionControllerComponent");

	return Clss;
}


// MotionControllerComponent HeadMountedDisplay.Default__MotionControllerComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UMotionControllerComponent* UMotionControllerComponent::GetDefaultObj()
{
	static class UMotionControllerComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UMotionControllerComponent*>(UMotionControllerComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function HeadMountedDisplay.MotionControllerComponent.SetTrackingSource
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EControllerHand         NewSource                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

void UMotionControllerComponent::SetTrackingSource(enum class EControllerHand NewSource)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionControllerComponent", "SetTrackingSource");

	Params::UMotionControllerComponent_SetTrackingSource_Params Parms{};

	Parms.NewSource = NewSource;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HeadMountedDisplay.MotionControllerComponent.SetTrackingMotionSource
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        NewSource                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

void UMotionControllerComponent::SetTrackingMotionSource(class FName NewSource)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionControllerComponent", "SetTrackingMotionSource");

	Params::UMotionControllerComponent_SetTrackingMotionSource_Params Parms{};

	Parms.NewSource = NewSource;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HeadMountedDisplay.MotionControllerComponent.SetShowDeviceModel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bShowControllerModel                                             (Edit, ConstParm, ExportObject, Parm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

void UMotionControllerComponent::SetShowDeviceModel(bool bShowControllerModel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionControllerComponent", "SetShowDeviceModel");

	Params::UMotionControllerComponent_SetShowDeviceModel_Params Parms{};

	Parms.bShowControllerModel = bShowControllerModel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HeadMountedDisplay.MotionControllerComponent.SetDisplayModelSource
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        NewDisplayModelSource                                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

void UMotionControllerComponent::SetDisplayModelSource(class FName NewDisplayModelSource)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionControllerComponent", "SetDisplayModelSource");

	Params::UMotionControllerComponent_SetDisplayModelSource_Params Parms{};

	Parms.NewDisplayModelSource = NewDisplayModelSource;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HeadMountedDisplay.MotionControllerComponent.SetCustomDisplayMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UStaticMesh*                 NewDisplayMesh                                                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

void UMotionControllerComponent::SetCustomDisplayMesh(class UStaticMesh* NewDisplayMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionControllerComponent", "SetCustomDisplayMesh");

	Params::UMotionControllerComponent_SetCustomDisplayMesh_Params Parms{};

	Parms.NewDisplayMesh = NewDisplayMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HeadMountedDisplay.MotionControllerComponent.SetAssociatedPlayerIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NewPlayer                                                        (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UMotionControllerComponent::SetAssociatedPlayerIndex(int32* NewPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionControllerComponent", "SetAssociatedPlayerIndex");

	Params::UMotionControllerComponent_SetAssociatedPlayerIndex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NewPlayer != nullptr)
		*NewPlayer = Parms.NewPlayer;

}


// Function HeadMountedDisplay.MotionControllerComponent.OnMotionControllerUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMotionControllerComponent::OnMotionControllerUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionControllerComponent", "OnMotionControllerUpdated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HeadMountedDisplay.MotionControllerComponent.IsTracked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UMotionControllerComponent::IsTracked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionControllerComponent", "IsTracked");

	Params::UMotionControllerComponent_IsTracked_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.MotionControllerComponent.GetTrackingSource
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EControllerHand         ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

enum class EControllerHand UMotionControllerComponent::GetTrackingSource()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionControllerComponent", "GetTrackingSource");

	Params::UMotionControllerComponent_GetTrackingSource_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.MotionControllerComponent.GetParameterValue
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InName                                                           (ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bValueFound                                                      (ConstParm, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UMotionControllerComponent::GetParameterValue(bool bValueFound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionControllerComponent", "GetParameterValue");

	Params::UMotionControllerComponent_GetParameterValue_Params Parms{};

	Parms.bValueFound = bValueFound;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.MotionControllerComponent.GetHandJointPosition
// (Final, Native, Protected, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// int32                              JointIndex                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bValueFound                                                      (ConstParm, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector UMotionControllerComponent::GetHandJointPosition(int32 JointIndex, bool bValueFound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionControllerComponent", "GetHandJointPosition");

	Params::UMotionControllerComponent_GetHandJointPosition_Params Parms{};

	Parms.JointIndex = JointIndex;
	Parms.bValueFound = bValueFound;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary
// (None)

class UClass* UMotionTrackedDeviceFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MotionTrackedDeviceFunctionLibrary");

	return Clss;
}


// MotionTrackedDeviceFunctionLibrary HeadMountedDisplay.Default__MotionTrackedDeviceFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UMotionTrackedDeviceFunctionLibrary* UMotionTrackedDeviceFunctionLibrary::GetDefaultObj()
{
	static class UMotionTrackedDeviceFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UMotionTrackedDeviceFunctionLibrary*>(UMotionTrackedDeviceFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.SetIsControllerMotionTrackingEnabledByDefault
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               Enable                                                           (Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)

bool UMotionTrackedDeviceFunctionLibrary::SetIsControllerMotionTrackingEnabledByDefault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionTrackedDeviceFunctionLibrary", "SetIsControllerMotionTrackingEnabledByDefault");

	Params::UMotionTrackedDeviceFunctionLibrary_SetIsControllerMotionTrackingEnabledByDefault_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForSource
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              PlayerIndex                                                      (BlueprintVisible, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        SourceName                                                       (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UMotionTrackedDeviceFunctionLibrary::IsMotionTrackingEnabledForSource()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionTrackedDeviceFunctionLibrary", "IsMotionTrackingEnabledForSource");

	Params::UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForSource_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForDevice
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              PlayerIndex                                                      (BlueprintVisible, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EControllerHand         Hand                                                             (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UMotionTrackedDeviceFunctionLibrary::IsMotionTrackingEnabledForDevice()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionTrackedDeviceFunctionLibrary", "IsMotionTrackingEnabledForDevice");

	Params::UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForDevice_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForComponent
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMotionControllerComponent*  MotionControllerComponent                                        (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnInstance, GlobalConfig)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UMotionTrackedDeviceFunctionLibrary::IsMotionTrackingEnabledForComponent(class UMotionControllerComponent** MotionControllerComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionTrackedDeviceFunctionLibrary", "IsMotionTrackingEnabledForComponent");

	Params::UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MotionControllerComponent != nullptr)
		*MotionControllerComponent = Parms.MotionControllerComponent;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackedDeviceCountManagementNecessary
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UMotionTrackedDeviceFunctionLibrary::IsMotionTrackedDeviceCountManagementNecessary()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionTrackedDeviceFunctionLibrary", "IsMotionTrackedDeviceCountManagementNecessary");

	Params::UMotionTrackedDeviceFunctionLibrary_IsMotionTrackedDeviceCountManagementNecessary_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionSourceTracking
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              PlayerIndex                                                      (BlueprintVisible, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        SourceName                                                       (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UMotionTrackedDeviceFunctionLibrary::IsMotionSourceTracking()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionTrackedDeviceFunctionLibrary", "IsMotionSourceTracking");

	Params::UMotionTrackedDeviceFunctionLibrary_IsMotionSourceTracking_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMotionTrackingEnabledControllerCount
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UMotionTrackedDeviceFunctionLibrary::GetMotionTrackingEnabledControllerCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionTrackedDeviceFunctionLibrary", "GetMotionTrackingEnabledControllerCount");

	Params::UMotionTrackedDeviceFunctionLibrary_GetMotionTrackingEnabledControllerCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMaximumMotionTrackedControllerCount
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UMotionTrackedDeviceFunctionLibrary::GetMaximumMotionTrackedControllerCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionTrackedDeviceFunctionLibrary", "GetMaximumMotionTrackedControllerCount");

	Params::UMotionTrackedDeviceFunctionLibrary_GetMaximumMotionTrackedControllerCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetActiveTrackingSystemName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FName UMotionTrackedDeviceFunctionLibrary::GetActiveTrackingSystemName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionTrackedDeviceFunctionLibrary", "GetActiveTrackingSystemName");

	Params::UMotionTrackedDeviceFunctionLibrary_GetActiveTrackingSystemName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnumerateMotionSources
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class FName>                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<class FName> UMotionTrackedDeviceFunctionLibrary::EnumerateMotionSources()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionTrackedDeviceFunctionLibrary", "EnumerateMotionSources");

	Params::UMotionTrackedDeviceFunctionLibrary_EnumerateMotionSources_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfSource
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              PlayerIndex                                                      (BlueprintVisible, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        SourceName                                                       (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UMotionTrackedDeviceFunctionLibrary::EnableMotionTrackingOfSource()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionTrackedDeviceFunctionLibrary", "EnableMotionTrackingOfSource");

	Params::UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfSource_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfDevice
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              PlayerIndex                                                      (BlueprintVisible, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EControllerHand         Hand                                                             (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UMotionTrackedDeviceFunctionLibrary::EnableMotionTrackingOfDevice()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionTrackedDeviceFunctionLibrary", "EnableMotionTrackingOfDevice");

	Params::UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfDevice_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingForComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMotionControllerComponent*  MotionControllerComponent                                        (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnInstance, GlobalConfig)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UMotionTrackedDeviceFunctionLibrary::EnableMotionTrackingForComponent(class UMotionControllerComponent** MotionControllerComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionTrackedDeviceFunctionLibrary", "EnableMotionTrackingForComponent");

	Params::UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingForComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MotionControllerComponent != nullptr)
		*MotionControllerComponent = Parms.MotionControllerComponent;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfSource
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              PlayerIndex                                                      (BlueprintVisible, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        SourceName                                                       (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)

class FName UMotionTrackedDeviceFunctionLibrary::DisableMotionTrackingOfSource()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionTrackedDeviceFunctionLibrary", "DisableMotionTrackingOfSource");

	Params::UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfSource_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfDevice
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              PlayerIndex                                                      (BlueprintVisible, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EControllerHand         Hand                                                             (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)

enum class EControllerHand UMotionTrackedDeviceFunctionLibrary::DisableMotionTrackingOfDevice()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionTrackedDeviceFunctionLibrary", "DisableMotionTrackingOfDevice");

	Params::UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfDevice_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfControllersForPlayer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              PlayerIndex                                                      (BlueprintVisible, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

int32 UMotionTrackedDeviceFunctionLibrary::DisableMotionTrackingOfControllersForPlayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionTrackedDeviceFunctionLibrary", "DisableMotionTrackingOfControllersForPlayer");

	Params::UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfControllersForPlayer_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfAllControllers
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UMotionTrackedDeviceFunctionLibrary::DisableMotionTrackingOfAllControllers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionTrackedDeviceFunctionLibrary", "DisableMotionTrackingOfAllControllers");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingForComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMotionControllerComponent*  MotionControllerComponent                                        (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnInstance, GlobalConfig)

void UMotionTrackedDeviceFunctionLibrary::DisableMotionTrackingForComponent(class UMotionControllerComponent** MotionControllerComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionTrackedDeviceFunctionLibrary", "DisableMotionTrackingForComponent");

	Params::UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingForComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MotionControllerComponent != nullptr)
		*MotionControllerComponent = Parms.MotionControllerComponent;

}


// Class HeadMountedDisplay.VRNotificationsComponent
// (None)

class UClass* UVRNotificationsComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VRNotificationsComponent");

	return Clss;
}


// VRNotificationsComponent HeadMountedDisplay.Default__VRNotificationsComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UVRNotificationsComponent* UVRNotificationsComponent::GetDefaultObj()
{
	static class UVRNotificationsComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UVRNotificationsComponent*>(UVRNotificationsComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class HeadMountedDisplay.XRAssetFunctionLibrary
// (None)

class UClass* UXRAssetFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("XRAssetFunctionLibrary");

	return Clss;
}


// XRAssetFunctionLibrary HeadMountedDisplay.Default__XRAssetFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UXRAssetFunctionLibrary* UXRAssetFunctionLibrary::GetDefaultObj()
{
	static class UXRAssetFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UXRAssetFunctionLibrary*>(UXRAssetFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function HeadMountedDisplay.XRAssetFunctionLibrary.AddNamedDeviceVisualizationComponentBlocking
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                      Target                                                           (Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, Config)
// class FName                        SystemName                                                       (ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig)
// class FName                        DeviceName                                                       (EditFixedSize, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
// bool                               bManualAttachment                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
// struct FTransform                  RelativeTransform                                                (BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
// struct FXRDeviceId                 XRDeviceId                                                       (ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance)
// class UPrimitiveComponent*         ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UPrimitiveComponent* UXRAssetFunctionLibrary::AddNamedDeviceVisualizationComponentBlocking(class AActor* Target, class FName SystemName, class FName DeviceName, const struct FXRDeviceId& XRDeviceId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("XRAssetFunctionLibrary", "AddNamedDeviceVisualizationComponentBlocking");

	Params::UXRAssetFunctionLibrary_AddNamedDeviceVisualizationComponentBlocking_Params Parms{};

	Parms.Target = Target;
	Parms.SystemName = SystemName;
	Parms.DeviceName = DeviceName;
	Parms.XRDeviceId = XRDeviceId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.XRAssetFunctionLibrary.AddDeviceVisualizationComponentBlocking
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                      Target                                                           (Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, Config)
// struct FXRDeviceId                 XRDeviceId                                                       (ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance)
// bool                               bManualAttachment                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
// struct FTransform                  RelativeTransform                                                (BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
// class UPrimitiveComponent*         ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UPrimitiveComponent* UXRAssetFunctionLibrary::AddDeviceVisualizationComponentBlocking(class AActor* Target, const struct FXRDeviceId& XRDeviceId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("XRAssetFunctionLibrary", "AddDeviceVisualizationComponentBlocking");

	Params::UXRAssetFunctionLibrary_AddDeviceVisualizationComponentBlocking_Params Parms{};

	Parms.Target = Target;
	Parms.XRDeviceId = XRDeviceId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent
// (None)

class UClass* UAsyncTask_LoadXRDeviceVisComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AsyncTask_LoadXRDeviceVisComponent");

	return Clss;
}


// AsyncTask_LoadXRDeviceVisComponent HeadMountedDisplay.Default__AsyncTask_LoadXRDeviceVisComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAsyncTask_LoadXRDeviceVisComponent* UAsyncTask_LoadXRDeviceVisComponent::GetDefaultObj()
{
	static class UAsyncTask_LoadXRDeviceVisComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAsyncTask_LoadXRDeviceVisComponent*>(UAsyncTask_LoadXRDeviceVisComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddNamedDeviceVisualizationComponentAsync
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                      Target                                                           (Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, Config)
// class FName                        SystemName                                                       (ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig)
// class FName                        DeviceName                                                       (EditFixedSize, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
// bool                               bManualAttachment                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
// struct FTransform                  RelativeTransform                                                (BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
// struct FXRDeviceId                 XRDeviceId                                                       (ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance)
// class UPrimitiveComponent*         NewComponent                                                     (Edit, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UAsyncTask_LoadXRDeviceVisComponent*ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UAsyncTask_LoadXRDeviceVisComponent* UAsyncTask_LoadXRDeviceVisComponent::AddNamedDeviceVisualizationComponentAsync(class AActor* Target, class FName SystemName, class FName DeviceName, const struct FXRDeviceId& XRDeviceId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AsyncTask_LoadXRDeviceVisComponent", "AddNamedDeviceVisualizationComponentAsync");

	Params::UAsyncTask_LoadXRDeviceVisComponent_AddNamedDeviceVisualizationComponentAsync_Params Parms{};

	Parms.Target = Target;
	Parms.SystemName = SystemName;
	Parms.DeviceName = DeviceName;
	Parms.XRDeviceId = XRDeviceId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddDeviceVisualizationComponentAsync
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                      Target                                                           (Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, Config)
// struct FXRDeviceId                 XRDeviceId                                                       (ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance)
// bool                               bManualAttachment                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
// struct FTransform                  RelativeTransform                                                (BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
// class UPrimitiveComponent*         NewComponent                                                     (Edit, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UAsyncTask_LoadXRDeviceVisComponent*ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UAsyncTask_LoadXRDeviceVisComponent* UAsyncTask_LoadXRDeviceVisComponent::AddDeviceVisualizationComponentAsync(class AActor* Target, const struct FXRDeviceId& XRDeviceId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AsyncTask_LoadXRDeviceVisComponent", "AddDeviceVisualizationComponentAsync");

	Params::UAsyncTask_LoadXRDeviceVisComponent_AddDeviceVisualizationComponentAsync_Params Parms{};

	Parms.Target = Target;
	Parms.XRDeviceId = XRDeviceId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class HeadMountedDisplay.XRDeviceVisualizationComponent
// (SceneComponent, PrimitiveComponent, StaticMeshComponent)

class UClass* UXRDeviceVisualizationComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("XRDeviceVisualizationComponent");

	return Clss;
}


// XRDeviceVisualizationComponent HeadMountedDisplay.Default__XRDeviceVisualizationComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UXRDeviceVisualizationComponent* UXRDeviceVisualizationComponent::GetDefaultObj()
{
	static class UXRDeviceVisualizationComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UXRDeviceVisualizationComponent*>(UXRDeviceVisualizationComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function HeadMountedDisplay.XRDeviceVisualizationComponent.SetIsVisualizationActive
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewVisualizationState                                           (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

void UXRDeviceVisualizationComponent::SetIsVisualizationActive(bool* bNewVisualizationState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("XRDeviceVisualizationComponent", "SetIsVisualizationActive");

	Params::UXRDeviceVisualizationComponent_SetIsVisualizationActive_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bNewVisualizationState != nullptr)
		*bNewVisualizationState = Parms.bNewVisualizationState;

}


// Function HeadMountedDisplay.XRDeviceVisualizationComponent.SetIsRenderingActive
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bRenderingIsActive                                               (Edit, BlueprintVisible, OutParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

void UXRDeviceVisualizationComponent::SetIsRenderingActive(bool* bRenderingIsActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("XRDeviceVisualizationComponent", "SetIsRenderingActive");

	Params::UXRDeviceVisualizationComponent_SetIsRenderingActive_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bRenderingIsActive != nullptr)
		*bRenderingIsActive = Parms.bRenderingIsActive;

}


// Function HeadMountedDisplay.XRDeviceVisualizationComponent.SetDisplayModelSource
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        NewDisplayModelSource                                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

void UXRDeviceVisualizationComponent::SetDisplayModelSource(class FName NewDisplayModelSource)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("XRDeviceVisualizationComponent", "SetDisplayModelSource");

	Params::UXRDeviceVisualizationComponent_SetDisplayModelSource_Params Parms{};

	Parms.NewDisplayModelSource = NewDisplayModelSource;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HeadMountedDisplay.XRDeviceVisualizationComponent.SetCustomDisplayMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UStaticMesh*                 NewDisplayMesh                                                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

void UXRDeviceVisualizationComponent::SetCustomDisplayMesh(class UStaticMesh* NewDisplayMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("XRDeviceVisualizationComponent", "SetCustomDisplayMesh");

	Params::UXRDeviceVisualizationComponent_SetCustomDisplayMesh_Params Parms{};

	Parms.NewDisplayMesh = NewDisplayMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class HeadMountedDisplay.XRLoadingScreenFunctionLibrary
// (None)

class UClass* UXRLoadingScreenFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("XRLoadingScreenFunctionLibrary");

	return Clss;
}


// XRLoadingScreenFunctionLibrary HeadMountedDisplay.Default__XRLoadingScreenFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UXRLoadingScreenFunctionLibrary* UXRLoadingScreenFunctionLibrary::GetDefaultObj()
{
	static class UXRLoadingScreenFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UXRLoadingScreenFunctionLibrary*>(UXRLoadingScreenFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.ShowLoadingScreen
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UXRLoadingScreenFunctionLibrary::ShowLoadingScreen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("XRLoadingScreenFunctionLibrary", "ShowLoadingScreen");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.SetLoadingScreen
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UTexture*                    Texture                                                          (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst)
// struct FVector2D                   Scale                                                            (Edit, ExportObject, Parm, ZeroConstructor, Transient, Config)
// struct FVector                     Offset                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
// bool                               bShowLoadingMovie                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bShowOnSet                                                       (BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

struct FVector UXRLoadingScreenFunctionLibrary::SetLoadingScreen(const struct FVector2D& Scale, bool* bShowLoadingMovie, bool* bShowOnSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("XRLoadingScreenFunctionLibrary", "SetLoadingScreen");

	Params::UXRLoadingScreenFunctionLibrary_SetLoadingScreen_Params Parms{};

	Parms.Scale = Scale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bShowLoadingMovie != nullptr)
		*bShowLoadingMovie = Parms.bShowLoadingMovie;

	if (bShowOnSet != nullptr)
		*bShowOnSet = Parms.bShowOnSet;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.HideLoadingScreen
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UXRLoadingScreenFunctionLibrary::HideLoadingScreen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("XRLoadingScreenFunctionLibrary", "HideLoadingScreen");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.ClearLoadingScreenSplashes
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UXRLoadingScreenFunctionLibrary::ClearLoadingScreenSplashes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("XRLoadingScreenFunctionLibrary", "ClearLoadingScreenSplashes");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.AddLoadingScreenSplash
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UTexture*                    Texture                                                          (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst)
// struct FVector                     Translation                                                      (ConstParm, Parm, ZeroConstructor, Transient, Config)
// struct FRotator                    Rotation                                                         (BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
// struct FVector2D                   Size                                                             (Edit, ExportObject, EditFixedSize, ReturnParm, Transient, Config)
// struct FRotator                    DeltaRotation                                                    (BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               bClearBeforeAdd                                                  (Edit, ConstParm, BlueprintVisible, Net, OutParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

struct FVector2D UXRLoadingScreenFunctionLibrary::AddLoadingScreenSplash(const struct FVector& Translation, struct FRotator* Rotation, const struct FRotator& DeltaRotation, bool* bClearBeforeAdd)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("XRLoadingScreenFunctionLibrary", "AddLoadingScreenSplash");

	Params::UXRLoadingScreenFunctionLibrary_AddLoadingScreenSplash_Params Parms{};

	Parms.Translation = Translation;
	Parms.DeltaRotation = DeltaRotation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Rotation != nullptr)
		*Rotation = std::move(Parms.Rotation);

	if (bClearBeforeAdd != nullptr)
		*bClearBeforeAdd = Parms.bClearBeforeAdd;

	return Parms.ReturnValue;

}

}



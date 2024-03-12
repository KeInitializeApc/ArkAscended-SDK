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
// int32                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// struct FTransform                  ExternalTrackingTransform                                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)

void UHeadMountedDisplayFunctionLibrary::UpdateExternalTrackingHMDPosition(struct FTransform* ExternalTrackingTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "UpdateExternalTrackingHMDPosition");

	Params::UHeadMountedDisplayFunctionLibrary_UpdateExternalTrackingHMDPosition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ExternalTrackingTransform != nullptr)
		*ExternalTrackingTransform = std::move(Parms.ExternalTrackingTransform);

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetXRTimedInputActionDelegate
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        ActionName                                                       (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, EditConst, SubobjectReference)
// FDelegateProperty_                 InDelegate                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)

void UHeadMountedDisplayFunctionLibrary::SetXRTimedInputActionDelegate(class FName ActionName, FDelegateProperty_ InDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "SetXRTimedInputActionDelegate");

	Params::UHeadMountedDisplayFunctionLibrary_SetXRTimedInputActionDelegate_Params Parms{};

	Parms.ActionName = ActionName;
	Parms.InDelegate = InDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetXRDisconnectDelegate
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 InDisconnectedDelegate                                           (Edit, ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)

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
// class UObject*                     WorldContext                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst)
// float                              NewScale                                                         (Edit, ConstParm, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UHeadMountedDisplayFunctionLibrary::SetWorldToMetersScale(class UObject** WorldContext, float NewScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "SetWorldToMetersScale");

	Params::UHeadMountedDisplayFunctionLibrary_SetWorldToMetersScale_Params Parms{};

	Parms.NewScale = NewScale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContext != nullptr)
		*WorldContext = Parms.WorldContext;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetTrackingOrigin
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EHMDTrackingOrigin      Origin                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)

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
// class UTexture*                    InTexture                                                        (ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// struct FVector2D                   EyeRectMin                                                       (Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector2D                   EyeRectMax                                                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector2D                   TextureRectMin                                                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector2D                   TextureRectMax                                                   (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bDrawEyeFirst                                                    (Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bClearBlack                                                      (EditFixedSize, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bUseAlpha                                                        (ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)

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
// enum class ESpectatorScreenMode    Mode                                                             (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)

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
// float                              Near                                                             (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// float                              Far                                                              (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)

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
// float                              Yaw                                                              (ZeroConstructor, ReturnParm, Transient, Config)
// enum class EOrientPositionSelector Options                                                          (Edit, ExportObject, Parm, ZeroConstructor, GlobalConfig, SubobjectReference)

float UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition(enum class EOrientPositionSelector Options)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "ResetOrientationAndPosition");

	Params::UHeadMountedDisplayFunctionLibrary_ResetOrientationAndPosition_Params Parms{};

	Parms.Options = Options;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsSpectatorScreenModeControllable
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// struct FXRDeviceId                 XRDeviceId                                                       (ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UHeadMountedDisplayFunctionLibrary::IsDeviceTracking(struct FXRDeviceId* XRDeviceId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "IsDeviceTracking");

	Params::UHeadMountedDisplayFunctionLibrary_IsDeviceTracking_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (XRDeviceId != nullptr)
		*XRDeviceId = std::move(Parms.XRDeviceId);

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.HasValidTrackingPosition
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// int32                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class UObject*                     WorldContext                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst)
// float                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float UHeadMountedDisplayFunctionLibrary::GetWorldToMetersScale(class UObject** WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "GetWorldToMetersScale");

	Params::UHeadMountedDisplayFunctionLibrary_GetWorldToMetersScale_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContext != nullptr)
		*WorldContext = Parms.WorldContext;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetVRFocusState
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               bUseFocus                                                        (ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bHasFocus                                                        (ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)

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
// class FString                      ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class UObject*                     WorldContext                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst)
// struct FTransform                  ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FTransform UHeadMountedDisplayFunctionLibrary::GetTrackingToWorldTransform(class UObject** WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "GetTrackingToWorldTransform");

	Params::UHeadMountedDisplayFunctionLibrary_GetTrackingToWorldTransform_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContext != nullptr)
		*WorldContext = Parms.WorldContext;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingSensorParameters
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     Origin                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FRotator                    Rotation                                                         (BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
// float                              LeftFOV                                                          (Edit, ConstParm, Net, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// float                              RightFOV                                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// float                              TopFOV                                                           (ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// float                              BottomFOV                                                        (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// float                              Distance                                                         (Edit, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// float                              NearPlane                                                        (Edit, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// float                              FarPlane                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               IsActive                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate)
// int32                              Index                                                            (EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)

int32 UHeadMountedDisplayFunctionLibrary::GetTrackingSensorParameters(struct FVector* Origin, struct FRotator* Rotation, float LeftFOV, float RightFOV, float TopFOV, float BottomFOV, float NearPlane, float* FarPlane, bool* IsActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "GetTrackingSensorParameters");

	Params::UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters_Params Parms{};

	Parms.LeftFOV = LeftFOV;
	Parms.RightFOV = RightFOV;
	Parms.TopFOV = TopFOV;
	Parms.BottomFOV = BottomFOV;
	Parms.NearPlane = NearPlane;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Origin != nullptr)
		*Origin = std::move(Parms.Origin);

	if (Rotation != nullptr)
		*Rotation = std::move(Parms.Rotation);

	if (FarPlane != nullptr)
		*FarPlane = Parms.FarPlane;

	if (IsActive != nullptr)
		*IsActive = Parms.IsActive;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingOriginTransform
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// enum class EHMDTrackingOrigin      Origin                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FTransform                  OutTransform                                                     (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// enum class EHMDTrackingOrigin      ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// struct FVector                     CameraOrigin                                                     (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// struct FRotator                    CameraRotation                                                   (Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              HFOV                                                             (ConstParm, ExportObject, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// float                              VFOV                                                             (Edit, ConstParm, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// float                              CameraDistance                                                   (Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              NearPlane                                                        (Edit, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// float                              FarPlane                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)

float UHeadMountedDisplayFunctionLibrary::GetPositionalTrackingCameraParameters(const struct FVector& CameraOrigin, const struct FRotator& CameraRotation, float HFOV, float VFOV, float NearPlane, float* FarPlane)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "GetPositionalTrackingCameraParameters");

	Params::UHeadMountedDisplayFunctionLibrary_GetPositionalTrackingCameraParameters_Params Parms{};

	Parms.CameraOrigin = CameraOrigin;
	Parms.CameraRotation = CameraRotation;
	Parms.HFOV = HFOV;
	Parms.VFOV = VFOV;
	Parms.NearPlane = NearPlane;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (FarPlane != nullptr)
		*FarPlane = Parms.FarPlane;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPlayAreaRect
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform                  OutTransform                                                     (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FVector2D                   OutRect                                                          (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UHeadMountedDisplayFunctionLibrary::GetPlayAreaRect(struct FTransform* OutTransform, struct FVector2D* OutRect)
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

	if (OutRect != nullptr)
		*OutRect = std::move(Parms.OutRect);

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPlayAreaBounds
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// enum class EHMDTrackingOrigin      Origin                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FVector2D                   ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// float                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// struct FRotator                    DeviceRotation                                                   (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     DevicePosition                                                   (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)

void UHeadMountedDisplayFunctionLibrary::GetOrientationAndPosition(struct FRotator* DeviceRotation, struct FVector* DevicePosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "GetOrientationAndPosition");

	Params::UHeadMountedDisplayFunctionLibrary_GetOrientationAndPosition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (DeviceRotation != nullptr)
		*DeviceRotation = std::move(Parms.DeviceRotation);

	if (DevicePosition != nullptr)
		*DevicePosition = std::move(Parms.DevicePosition);

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetNumOfTrackingSensors
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class UObject*                     WorldContext                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst)
// enum class EControllerHand         Hand                                                             (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FXRMotionControllerData     MotionControllerData                                             (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)

enum class EControllerHand UHeadMountedDisplayFunctionLibrary::GetMotionControllerData(class UObject** WorldContext, struct FXRMotionControllerData* MotionControllerData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "GetMotionControllerData");

	Params::UHeadMountedDisplayFunctionLibrary_GetMotionControllerData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContext != nullptr)
		*WorldContext = Parms.WorldContext;

	if (MotionControllerData != nullptr)
		*MotionControllerData = std::move(Parms.MotionControllerData);

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDWornState
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EHMDWornState           ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class FName                        ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class UObject*                     WorldContext                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst)
// struct FXRHMDData                  HMDData                                                          (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)

void UHeadMountedDisplayFunctionLibrary::GetHMDData(class UObject** WorldContext, struct FXRHMDData* HMDData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "GetHMDData");

	Params::UHeadMountedDisplayFunctionLibrary_GetHMDData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContext != nullptr)
		*WorldContext = Parms.WorldContext;

	if (HMDData != nullptr)
		*HMDData = std::move(Parms.HMDData);

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetDeviceWorldPose
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContext                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst)
// struct FXRDeviceId                 XRDeviceId                                                       (ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance)
// bool                               bIsTracked                                                       (Edit, ConstParm, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// struct FRotator                    Orientation                                                      (Edit, ConstParm, ExportObject, BlueprintReadOnly, ReturnParm, Config, EditConst, GlobalConfig)
// bool                               bHasPositionalTracking                                           (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     Position                                                         (Edit, ConstParm, ExportObject, ReturnParm, Transient, Config)

struct FVector UHeadMountedDisplayFunctionLibrary::GetDeviceWorldPose(class UObject** WorldContext, struct FXRDeviceId* XRDeviceId, bool bIsTracked, bool* bHasPositionalTracking)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "GetDeviceWorldPose");

	Params::UHeadMountedDisplayFunctionLibrary_GetDeviceWorldPose_Params Parms{};

	Parms.bIsTracked = bIsTracked;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContext != nullptr)
		*WorldContext = Parms.WorldContext;

	if (XRDeviceId != nullptr)
		*XRDeviceId = std::move(Parms.XRDeviceId);

	if (bHasPositionalTracking != nullptr)
		*bHasPositionalTracking = Parms.bHasPositionalTracking;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetDevicePose
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FXRDeviceId                 XRDeviceId                                                       (ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance)
// bool                               bIsTracked                                                       (Edit, ConstParm, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// struct FRotator                    Orientation                                                      (Edit, ConstParm, ExportObject, BlueprintReadOnly, ReturnParm, Config, EditConst, GlobalConfig)
// bool                               bHasPositionalTracking                                           (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     Position                                                         (Edit, ConstParm, ExportObject, ReturnParm, Transient, Config)

struct FVector UHeadMountedDisplayFunctionLibrary::GetDevicePose(struct FXRDeviceId* XRDeviceId, bool bIsTracked, bool* bHasPositionalTracking)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "GetDevicePose");

	Params::UHeadMountedDisplayFunctionLibrary_GetDevicePose_Params Parms{};

	Parms.bIsTracked = bIsTracked;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (XRDeviceId != nullptr)
		*XRDeviceId = std::move(Parms.XRDeviceId);

	if (bHasPositionalTracking != nullptr)
		*bHasPositionalTracking = Parms.bHasPositionalTracking;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetCurrentInteractionProfile
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class EControllerHand         Hand                                                             (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FString                      InteractionProfile                                               (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UHeadMountedDisplayFunctionLibrary::GetCurrentInteractionProfile(class FString* InteractionProfile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "GetCurrentInteractionProfile");

	Params::UHeadMountedDisplayFunctionLibrary_GetCurrentInteractionProfile_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InteractionProfile != nullptr)
		*InteractionProfile = std::move(Parms.InteractionProfile);

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetControllerTransformForTime
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContext                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst)
// int32                              ControllerIndex                                                  (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class FName                        MotionSource                                                     (Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// struct FTimespan                   Time                                                             (Edit, ConstParm, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               bTimeWasUsed                                                     (BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// struct FRotator                    Orientation                                                      (Edit, ConstParm, ExportObject, BlueprintReadOnly, ReturnParm, Config, EditConst, GlobalConfig)
// struct FVector                     Position                                                         (Edit, ConstParm, ExportObject, ReturnParm, Transient, Config)
// bool                               bProvidedLinearVelocity                                          (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     LinearVelocity                                                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               bProvidedAngularVelocity                                         (ConstParm, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     AngularVelocityRadPerSec                                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bProvidedLinearAcceleration                                      (ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     LinearAcceleration                                               (BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UHeadMountedDisplayFunctionLibrary::GetControllerTransformForTime(class UObject** WorldContext, class FName* MotionSource, bool* bTimeWasUsed, bool* bProvidedLinearVelocity, struct FVector* LinearVelocity, bool* bProvidedAngularVelocity, struct FVector* AngularVelocityRadPerSec, bool* bProvidedLinearAcceleration, struct FVector* LinearAcceleration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "GetControllerTransformForTime");

	Params::UHeadMountedDisplayFunctionLibrary_GetControllerTransformForTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContext != nullptr)
		*WorldContext = Parms.WorldContext;

	if (MotionSource != nullptr)
		*MotionSource = Parms.MotionSource;

	if (bTimeWasUsed != nullptr)
		*bTimeWasUsed = Parms.bTimeWasUsed;

	if (bProvidedLinearVelocity != nullptr)
		*bProvidedLinearVelocity = Parms.bProvidedLinearVelocity;

	if (LinearVelocity != nullptr)
		*LinearVelocity = std::move(Parms.LinearVelocity);

	if (bProvidedAngularVelocity != nullptr)
		*bProvidedAngularVelocity = Parms.bProvidedAngularVelocity;

	if (AngularVelocityRadPerSec != nullptr)
		*AngularVelocityRadPerSec = std::move(Parms.AngularVelocityRadPerSec);

	if (bProvidedLinearAcceleration != nullptr)
		*bProvidedLinearAcceleration = Parms.bProvidedLinearAcceleration;

	if (LinearAcceleration != nullptr)
		*LinearAcceleration = std::move(Parms.LinearAcceleration);

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnumerateTrackedDevices
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        SystemId                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// enum class EXRTrackedDeviceType    DeviceType                                                       (ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, EditConst)
// TArray<struct FXRDeviceId>         ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<struct FXRDeviceId> UHeadMountedDisplayFunctionLibrary::EnumerateTrackedDevices(class FName* SystemId, enum class EXRTrackedDeviceType* DeviceType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "EnumerateTrackedDevices");

	Params::UHeadMountedDisplayFunctionLibrary_EnumerateTrackedDevices_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SystemId != nullptr)
		*SystemId = Parms.SystemId;

	if (DeviceType != nullptr)
		*DeviceType = Parms.DeviceType;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableLowPersistenceMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bEnable                                                          (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

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
// bool                               bEnable                                                          (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class FString                      IpAddress                                                        (ConstParm, BlueprintVisible, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              BitRate                                                          (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// enum class EXRDeviceConnectionResultReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

enum class EXRDeviceConnectionResult UHeadMountedDisplayFunctionLibrary::ConnectRemoteXRDevice(class FString* IpAddress, int32* BitRate)
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

	if (BitRate != nullptr)
		*BitRate = Parms.BitRate;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ConfigureGestures
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FXRGestureConfig            GestureConfig                                                    (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UHeadMountedDisplayFunctionLibrary::ConfigureGestures(struct FXRGestureConfig* GestureConfig)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "ConfigureGestures");

	Params::UHeadMountedDisplayFunctionLibrary_ConfigureGestures_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (GestureConfig != nullptr)
		*GestureConfig = std::move(Parms.GestureConfig);

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ClearXRTimedInputActionDelegate
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        ActionPath                                                       (BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)

void UHeadMountedDisplayFunctionLibrary::ClearXRTimedInputActionDelegate(class FName* ActionPath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "ClearXRTimedInputActionDelegate");

	Params::UHeadMountedDisplayFunctionLibrary_ClearXRTimedInputActionDelegate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ActionPath != nullptr)
		*ActionPath = Parms.ActionPath;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.CalibrateExternalTrackingToHMD
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform                  ExternalTrackingTransform                                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)

void UHeadMountedDisplayFunctionLibrary::CalibrateExternalTrackingToHMD(struct FTransform* ExternalTrackingTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "CalibrateExternalTrackingToHMD");

	Params::UHeadMountedDisplayFunctionLibrary_CalibrateExternalTrackingToHMD_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ExternalTrackingTransform != nullptr)
		*ExternalTrackingTransform = std::move(Parms.ExternalTrackingTransform);

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.BreakKey
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FKey                        InKey                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FString                      InteractionProfile                                               (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// enum class EControllerHand         Hand                                                             (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        MotionSource                                                     (Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      Indentifier                                                      (ConstParm, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      Component                                                        (ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class FString UHeadMountedDisplayFunctionLibrary::BreakKey(struct FKey* InKey, class FString* InteractionProfile, class FName* MotionSource, class FString* Indentifier)
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

	if (InteractionProfile != nullptr)
		*InteractionProfile = std::move(Parms.InteractionProfile);

	if (MotionSource != nullptr)
		*MotionSource = Parms.MotionSource;

	if (Indentifier != nullptr)
		*Indentifier = std::move(Parms.Indentifier);

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
// enum class EControllerHand         NewSource                                                        (Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)

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
// class FName                        NewSource                                                        (Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)

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
// bool                               bShowControllerModel                                             (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)

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
// class FName                        NewDisplayModelSource                                            (ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)

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
// class UStaticMesh*                 NewDisplayMesh                                                   (ConstParm, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)

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
// int32                              NewPlayer                                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, GlobalConfig, SubobjectReference)

void UMotionControllerComponent::SetAssociatedPlayerIndex(int32 NewPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionControllerComponent", "SetAssociatedPlayerIndex");

	Params::UMotionControllerComponent_SetAssociatedPlayerIndex_Params Parms{};

	Parms.NewPlayer = NewPlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// enum class EControllerHand         ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class FName                        InName                                                           (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// bool                               bValueFound                                                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float UMotionControllerComponent::GetParameterValue(class FName* InName, bool bValueFound)
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

	if (InName != nullptr)
		*InName = Parms.InName;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.MotionControllerComponent.GetHandJointPosition
// (Final, Native, Protected, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// int32                              JointIndex                                                       (BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bValueFound                                                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// bool                               Enable                                                           (Edit, ConstParm, ExportObject, Parm, Transient, Config, DisableEditOnInstance)

void UMotionTrackedDeviceFunctionLibrary::SetIsControllerMotionTrackingEnabledByDefault(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionTrackedDeviceFunctionLibrary", "SetIsControllerMotionTrackingEnabledByDefault");

	Params::UMotionTrackedDeviceFunctionLibrary_SetIsControllerMotionTrackingEnabledByDefault_Params Parms{};

	Parms.Enable = Enable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForSource
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              PlayerIndex                                                      (BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class FName                        SourceName                                                       (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UMotionTrackedDeviceFunctionLibrary::IsMotionTrackingEnabledForSource(int32 PlayerIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionTrackedDeviceFunctionLibrary", "IsMotionTrackingEnabledForSource");

	Params::UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForSource_Params Parms{};

	Parms.PlayerIndex = PlayerIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForDevice
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              PlayerIndex                                                      (BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// enum class EControllerHand         Hand                                                             (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UMotionTrackedDeviceFunctionLibrary::IsMotionTrackingEnabledForDevice(int32 PlayerIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionTrackedDeviceFunctionLibrary", "IsMotionTrackingEnabledForDevice");

	Params::UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForDevice_Params Parms{};

	Parms.PlayerIndex = PlayerIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForComponent
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMotionControllerComponent*  MotionControllerComponent                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, GlobalConfig)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// int32                              PlayerIndex                                                      (BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class FName                        SourceName                                                       (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UMotionTrackedDeviceFunctionLibrary::IsMotionSourceTracking(int32 PlayerIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionTrackedDeviceFunctionLibrary", "IsMotionSourceTracking");

	Params::UMotionTrackedDeviceFunctionLibrary_IsMotionSourceTracking_Params Parms{};

	Parms.PlayerIndex = PlayerIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMotionTrackingEnabledControllerCount
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// int32                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class FName                        ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// TArray<class FName>                ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// int32                              PlayerIndex                                                      (BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class FName                        SourceName                                                       (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UMotionTrackedDeviceFunctionLibrary::EnableMotionTrackingOfSource(int32 PlayerIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionTrackedDeviceFunctionLibrary", "EnableMotionTrackingOfSource");

	Params::UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfSource_Params Parms{};

	Parms.PlayerIndex = PlayerIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfDevice
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              PlayerIndex                                                      (BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// enum class EControllerHand         Hand                                                             (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UMotionTrackedDeviceFunctionLibrary::EnableMotionTrackingOfDevice(int32 PlayerIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionTrackedDeviceFunctionLibrary", "EnableMotionTrackingOfDevice");

	Params::UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfDevice_Params Parms{};

	Parms.PlayerIndex = PlayerIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingForComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMotionControllerComponent*  MotionControllerComponent                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, GlobalConfig)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// int32                              PlayerIndex                                                      (BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class FName                        SourceName                                                       (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)

class FName UMotionTrackedDeviceFunctionLibrary::DisableMotionTrackingOfSource(int32 PlayerIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionTrackedDeviceFunctionLibrary", "DisableMotionTrackingOfSource");

	Params::UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfSource_Params Parms{};

	Parms.PlayerIndex = PlayerIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfDevice
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              PlayerIndex                                                      (BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// enum class EControllerHand         Hand                                                             (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

enum class EControllerHand UMotionTrackedDeviceFunctionLibrary::DisableMotionTrackingOfDevice(int32 PlayerIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionTrackedDeviceFunctionLibrary", "DisableMotionTrackingOfDevice");

	Params::UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfDevice_Params Parms{};

	Parms.PlayerIndex = PlayerIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfControllersForPlayer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              PlayerIndex                                                      (BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

void UMotionTrackedDeviceFunctionLibrary::DisableMotionTrackingOfControllersForPlayer(int32 PlayerIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionTrackedDeviceFunctionLibrary", "DisableMotionTrackingOfControllersForPlayer");

	Params::UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfControllersForPlayer_Params Parms{};

	Parms.PlayerIndex = PlayerIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// class UMotionControllerComponent*  MotionControllerComponent                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, GlobalConfig)

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
// class AActor*                      Target                                                           (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config)
// class FName                        SystemName                                                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig)
// class FName                        DeviceName                                                       (ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               bManualAttachment                                                (BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// struct FTransform                  RelativeTransform                                                (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FXRDeviceId                 XRDeviceId                                                       (ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance)
// class UPrimitiveComponent*         ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UPrimitiveComponent* UXRAssetFunctionLibrary::AddNamedDeviceVisualizationComponentBlocking(bool* bManualAttachment, const struct FTransform& RelativeTransform, struct FXRDeviceId* XRDeviceId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("XRAssetFunctionLibrary", "AddNamedDeviceVisualizationComponentBlocking");

	Params::UXRAssetFunctionLibrary_AddNamedDeviceVisualizationComponentBlocking_Params Parms{};

	Parms.RelativeTransform = RelativeTransform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bManualAttachment != nullptr)
		*bManualAttachment = Parms.bManualAttachment;

	if (XRDeviceId != nullptr)
		*XRDeviceId = std::move(Parms.XRDeviceId);

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.XRAssetFunctionLibrary.AddDeviceVisualizationComponentBlocking
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                      Target                                                           (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config)
// struct FXRDeviceId                 XRDeviceId                                                       (ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance)
// bool                               bManualAttachment                                                (BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// struct FTransform                  RelativeTransform                                                (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class UPrimitiveComponent*         ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UPrimitiveComponent* UXRAssetFunctionLibrary::AddDeviceVisualizationComponentBlocking(struct FXRDeviceId* XRDeviceId, bool* bManualAttachment, const struct FTransform& RelativeTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("XRAssetFunctionLibrary", "AddDeviceVisualizationComponentBlocking");

	Params::UXRAssetFunctionLibrary_AddDeviceVisualizationComponentBlocking_Params Parms{};

	Parms.RelativeTransform = RelativeTransform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (XRDeviceId != nullptr)
		*XRDeviceId = std::move(Parms.XRDeviceId);

	if (bManualAttachment != nullptr)
		*bManualAttachment = Parms.bManualAttachment;

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
// class AActor*                      Target                                                           (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config)
// class FName                        SystemName                                                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig)
// class FName                        DeviceName                                                       (ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               bManualAttachment                                                (BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// struct FTransform                  RelativeTransform                                                (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FXRDeviceId                 XRDeviceId                                                       (ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance)
// class UPrimitiveComponent*         NewComponent                                                     (ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UAsyncTask_LoadXRDeviceVisComponent*ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UAsyncTask_LoadXRDeviceVisComponent* UAsyncTask_LoadXRDeviceVisComponent::AddNamedDeviceVisualizationComponentAsync(bool* bManualAttachment, const struct FTransform& RelativeTransform, struct FXRDeviceId* XRDeviceId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AsyncTask_LoadXRDeviceVisComponent", "AddNamedDeviceVisualizationComponentAsync");

	Params::UAsyncTask_LoadXRDeviceVisComponent_AddNamedDeviceVisualizationComponentAsync_Params Parms{};

	Parms.RelativeTransform = RelativeTransform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bManualAttachment != nullptr)
		*bManualAttachment = Parms.bManualAttachment;

	if (XRDeviceId != nullptr)
		*XRDeviceId = std::move(Parms.XRDeviceId);

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddDeviceVisualizationComponentAsync
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                      Target                                                           (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config)
// struct FXRDeviceId                 XRDeviceId                                                       (ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance)
// bool                               bManualAttachment                                                (BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// struct FTransform                  RelativeTransform                                                (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class UPrimitiveComponent*         NewComponent                                                     (ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UAsyncTask_LoadXRDeviceVisComponent*ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UAsyncTask_LoadXRDeviceVisComponent* UAsyncTask_LoadXRDeviceVisComponent::AddDeviceVisualizationComponentAsync(struct FXRDeviceId* XRDeviceId, bool* bManualAttachment, const struct FTransform& RelativeTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AsyncTask_LoadXRDeviceVisComponent", "AddDeviceVisualizationComponentAsync");

	Params::UAsyncTask_LoadXRDeviceVisComponent_AddDeviceVisualizationComponentAsync_Params Parms{};

	Parms.RelativeTransform = RelativeTransform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (XRDeviceId != nullptr)
		*XRDeviceId = std::move(Parms.XRDeviceId);

	if (bManualAttachment != nullptr)
		*bManualAttachment = Parms.bManualAttachment;

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
// bool                               bNewVisualizationState                                           (ConstParm, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)

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
// bool                               bRenderingIsActive                                               (ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)

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
// class FName                        NewDisplayModelSource                                            (ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)

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
// class UStaticMesh*                 NewDisplayMesh                                                   (ConstParm, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)

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
// class UTexture*                    Texture                                                          (ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
// struct FVector2D                   Scale                                                            (Edit, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config)
// struct FVector                     Offset                                                           (Edit, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst)
// bool                               bShowLoadingMovie                                                (Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bShowOnSet                                                       (Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)

struct FVector UXRLoadingScreenFunctionLibrary::SetLoadingScreen(bool* bShowLoadingMovie, bool* bShowOnSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("XRLoadingScreenFunctionLibrary", "SetLoadingScreen");

	Params::UXRLoadingScreenFunctionLibrary_SetLoadingScreen_Params Parms{};


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
// class UTexture*                    Texture                                                          (ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
// struct FVector                     Translation                                                      (ConstParm, BlueprintReadOnly, Net, ReturnParm, Transient, Config)
// struct FRotator                    Rotation                                                         (BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
// struct FVector2D                   Size                                                             (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config)
// struct FRotator                    DeltaRotation                                                    (BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               bClearBeforeAdd                                                  (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)

struct FVector2D UXRLoadingScreenFunctionLibrary::AddLoadingScreenSplash(struct FRotator* Rotation, const struct FRotator& DeltaRotation, bool* bClearBeforeAdd)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("XRLoadingScreenFunctionLibrary", "AddLoadingScreenSplash");

	Params::UXRLoadingScreenFunctionLibrary_AddLoadingScreenSplash_Params Parms{};

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



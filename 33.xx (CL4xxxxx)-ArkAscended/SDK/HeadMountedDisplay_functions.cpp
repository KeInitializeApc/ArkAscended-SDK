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
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UHandKeypointConversion::Conv_HandKeypointToInt32(enum class EHandKeypoint Input, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HandKeypointConversion", "Conv_HandKeypointToInt32");

	Params::UHandKeypointConversion_Conv_HandKeypointToInt32_Params Parms{};

	Parms.Input = Input;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// struct FTransform                  ExternalTrackingTransform                                        (ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// class FName                        ActionName                                                       (EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// FDelegateProperty_                 InDelegate                                                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// FDelegateProperty_                 InDisconnectedDelegate                                           (Edit, ConstParm, BlueprintReadOnly, Parm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// class UObject*                     WorldContext                                                     (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, EditConst)
// float                              NewScale                                                         (ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)

float UHeadMountedDisplayFunctionLibrary::SetWorldToMetersScale()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "SetWorldToMetersScale");

	Params::UHeadMountedDisplayFunctionLibrary_SetWorldToMetersScale_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetTrackingOrigin
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EHMDTrackingOrigin      Origin                                                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)

enum class EHMDTrackingOrigin UHeadMountedDisplayFunctionLibrary::SetTrackingOrigin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "SetTrackingOrigin");

	Params::UHeadMountedDisplayFunctionLibrary_SetTrackingOrigin_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenTexture
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UTexture*                    InTexture                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)

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
// struct FVector2D                   EyeRectMin                                                       (Edit, BlueprintVisible, ExportObject, Parm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector2D                   EyeRectMax                                                       (Edit, ConstParm, BlueprintVisible, Parm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector2D                   TextureRectMin                                                   (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector2D                   TextureRectMax                                                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               bDrawEyeFirst                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               bClearBlack                                                      (ExportObject, Net, EditFixedSize, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               bUseAlpha                                                        (ConstParm, Net, EditFixedSize, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// enum class ESpectatorScreenMode    Mode                                                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)

void UHeadMountedDisplayFunctionLibrary::SetSpectatorScreenMode(enum class ESpectatorScreenMode Mode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "SetSpectatorScreenMode");

	Params::UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenMode_Params Parms{};

	Parms.Mode = Mode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetClippingPlanes
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                              Near                                                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              Far                                                              (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// float                              Yaw                                                              (ConstParm, ExportObject, Parm, OutParm, ReturnParm, Transient, Config)
// enum class EOrientPositionSelector Options                                                          (Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

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
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UHeadMountedDisplayFunctionLibrary::IsSpectatorScreenModeControllable(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "IsSpectatorScreenModeControllable");

	Params::UHeadMountedDisplayFunctionLibrary_IsSpectatorScreenModeControllable_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsInLowPersistenceMode
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UHeadMountedDisplayFunctionLibrary::IsInLowPersistenceMode(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "IsInLowPersistenceMode");

	Params::UHeadMountedDisplayFunctionLibrary_IsInLowPersistenceMode_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayEnabled
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UHeadMountedDisplayFunctionLibrary::IsHeadMountedDisplayEnabled(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "IsHeadMountedDisplayEnabled");

	Params::UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayEnabled_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayConnected
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UHeadMountedDisplayFunctionLibrary::IsHeadMountedDisplayConnected(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "IsHeadMountedDisplayConnected");

	Params::UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayConnected_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsDeviceTracking
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FXRDeviceId                 XRDeviceId                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FXRDeviceId UHeadMountedDisplayFunctionLibrary::IsDeviceTracking(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "IsDeviceTracking");

	Params::UHeadMountedDisplayFunctionLibrary_IsDeviceTracking_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.HasValidTrackingPosition
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UHeadMountedDisplayFunctionLibrary::HasValidTrackingPosition(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "HasValidTrackingPosition");

	Params::UHeadMountedDisplayFunctionLibrary_HasValidTrackingPosition_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetXRSystemFlags
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UHeadMountedDisplayFunctionLibrary::GetXRSystemFlags(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "GetXRSystemFlags");

	Params::UHeadMountedDisplayFunctionLibrary_GetXRSystemFlags_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetWorldToMetersScale
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContext                                                     (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, EditConst)
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UObject* UHeadMountedDisplayFunctionLibrary::GetWorldToMetersScale(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "GetWorldToMetersScale");

	Params::UHeadMountedDisplayFunctionLibrary_GetWorldToMetersScale_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetVRFocusState
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               bUseFocus                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               bHasFocus                                                        (BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// class FString                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UHeadMountedDisplayFunctionLibrary::GetVersionString(const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "GetVersionString");

	Params::UHeadMountedDisplayFunctionLibrary_GetVersionString_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingToWorldTransform
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContext                                                     (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, EditConst)
// struct FTransform                  ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UObject* UHeadMountedDisplayFunctionLibrary::GetTrackingToWorldTransform(const struct FTransform& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "GetTrackingToWorldTransform");

	Params::UHeadMountedDisplayFunctionLibrary_GetTrackingToWorldTransform_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingSensorParameters
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     Origin                                                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// struct FRotator                    Rotation                                                         (BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
// float                              LeftFOV                                                          (Edit, ConstParm, ExportObject, EditFixedSize, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              RightFOV                                                         (ConstParm, BlueprintVisible, EditFixedSize, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              TopFOV                                                           (ConstParm, EditFixedSize, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              BottomFOV                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              Distance                                                         (ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// float                              NearPlane                                                        (Edit, ExportObject, Net, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              FarPlane                                                         (BlueprintVisible, Net, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               IsActive                                                         (ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate)
// int32                              Index                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)

float UHeadMountedDisplayFunctionLibrary::GetTrackingSensorParameters(struct FRotator* Rotation, float LeftFOV, float RightFOV, float TopFOV, float BottomFOV, float NearPlane, float FarPlane, bool* IsActive, int32* Index)
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
	Parms.FarPlane = FarPlane;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Rotation != nullptr)
		*Rotation = std::move(Parms.Rotation);

	if (IsActive != nullptr)
		*IsActive = Parms.IsActive;

	if (Index != nullptr)
		*Index = Parms.Index;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingOriginTransform
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// enum class EHMDTrackingOrigin      Origin                                                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// struct FTransform                  OutTransform                                                     (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FTransform UHeadMountedDisplayFunctionLibrary::GetTrackingOriginTransform(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "GetTrackingOriginTransform");

	Params::UHeadMountedDisplayFunctionLibrary_GetTrackingOriginTransform_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingOrigin
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EHMDTrackingOrigin      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UHeadMountedDisplayFunctionLibrary::GetTrackingOrigin(enum class EHMDTrackingOrigin ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "GetTrackingOrigin");

	Params::UHeadMountedDisplayFunctionLibrary_GetTrackingOrigin_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPositionalTrackingCameraParameters
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     CameraOrigin                                                     (Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FRotator                    CameraRotation                                                   (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
// float                              HFOV                                                             (ConstParm, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              VFOV                                                             (Edit, ConstParm, BlueprintVisible, ExportObject, Net, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              CameraDistance                                                   (Edit, BlueprintVisible, Net, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              NearPlane                                                        (Edit, ExportObject, Net, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              FarPlane                                                         (BlueprintVisible, Net, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UHeadMountedDisplayFunctionLibrary::GetPositionalTrackingCameraParameters(const struct FVector& CameraOrigin, const struct FRotator& CameraRotation, float HFOV, float VFOV, float* CameraDistance, float NearPlane, float FarPlane)
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
	Parms.FarPlane = FarPlane;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (CameraDistance != nullptr)
		*CameraDistance = Parms.CameraDistance;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPlayAreaRect
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform                  OutTransform                                                     (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FVector2D                   OutRect                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FTransform UHeadMountedDisplayFunctionLibrary::GetPlayAreaRect(const struct FVector2D& OutRect, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "GetPlayAreaRect");

	Params::UHeadMountedDisplayFunctionLibrary_GetPlayAreaRect_Params Parms{};

	Parms.OutRect = OutRect;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPlayAreaBounds
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// enum class EHMDTrackingOrigin      Origin                                                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector2D                   ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

enum class EHMDTrackingOrigin UHeadMountedDisplayFunctionLibrary::GetPlayAreaBounds(const struct FVector2D& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "GetPlayAreaBounds");

	Params::UHeadMountedDisplayFunctionLibrary_GetPlayAreaBounds_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPixelDensity
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UHeadMountedDisplayFunctionLibrary::GetPixelDensity(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "GetPixelDensity");

	Params::UHeadMountedDisplayFunctionLibrary_GetPixelDensity_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetOrientationAndPosition
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRotator                    DeviceRotation                                                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     DevicePosition                                                   (Edit, ConstParm, BlueprintVisible, ExportObject, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UHeadMountedDisplayFunctionLibrary::GetOrientationAndPosition(const struct FRotator& DeviceRotation, const struct FVector& DevicePosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "GetOrientationAndPosition");

	Params::UHeadMountedDisplayFunctionLibrary_GetOrientationAndPosition_Params Parms{};

	Parms.DeviceRotation = DeviceRotation;
	Parms.DevicePosition = DevicePosition;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetNumOfTrackingSensors
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UHeadMountedDisplayFunctionLibrary::GetNumOfTrackingSensors(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "GetNumOfTrackingSensors");

	Params::UHeadMountedDisplayFunctionLibrary_GetNumOfTrackingSensors_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetMotionControllerData
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContext                                                     (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, EditConst)
// enum class EControllerHand         Hand                                                             (Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// struct FXRMotionControllerData     MotionControllerData                                             (BlueprintVisible, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

enum class EControllerHand UHeadMountedDisplayFunctionLibrary::GetMotionControllerData(const struct FXRMotionControllerData& MotionControllerData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "GetMotionControllerData");

	Params::UHeadMountedDisplayFunctionLibrary_GetMotionControllerData_Params Parms{};

	Parms.MotionControllerData = MotionControllerData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDWornState
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EHMDWornState           ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UHeadMountedDisplayFunctionLibrary::GetHMDWornState(enum class EHMDWornState ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "GetHMDWornState");

	Params::UHeadMountedDisplayFunctionLibrary_GetHMDWornState_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDDeviceName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UHeadMountedDisplayFunctionLibrary::GetHMDDeviceName(class FName ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "GetHMDDeviceName");

	Params::UHeadMountedDisplayFunctionLibrary_GetHMDDeviceName_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDData
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContext                                                     (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, EditConst)
// struct FXRHMDData                  HMDData                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

struct FXRHMDData UHeadMountedDisplayFunctionLibrary::GetHMDData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "GetHMDData");

	Params::UHeadMountedDisplayFunctionLibrary_GetHMDData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetDeviceWorldPose
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContext                                                     (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, EditConst)
// struct FXRDeviceId                 XRDeviceId                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
// bool                               bIsTracked                                                       (Edit, ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FRotator                    Orientation                                                      (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, Transient, Config, SubobjectReference)
// bool                               bHasPositionalTracking                                           (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     Position                                                         (Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config)

bool UHeadMountedDisplayFunctionLibrary::GetDeviceWorldPose(const struct FRotator& Orientation, struct FVector* Position)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "GetDeviceWorldPose");

	Params::UHeadMountedDisplayFunctionLibrary_GetDeviceWorldPose_Params Parms{};

	Parms.Orientation = Orientation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Position != nullptr)
		*Position = std::move(Parms.Position);

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetDevicePose
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FXRDeviceId                 XRDeviceId                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
// bool                               bIsTracked                                                       (Edit, ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FRotator                    Orientation                                                      (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, Transient, Config, SubobjectReference)
// bool                               bHasPositionalTracking                                           (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     Position                                                         (Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config)

bool UHeadMountedDisplayFunctionLibrary::GetDevicePose(const struct FRotator& Orientation, struct FVector* Position)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "GetDevicePose");

	Params::UHeadMountedDisplayFunctionLibrary_GetDevicePose_Params Parms{};

	Parms.Orientation = Orientation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Position != nullptr)
		*Position = std::move(Parms.Position);

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetCurrentInteractionProfile
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class EControllerHand         Hand                                                             (Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class FString                      InteractionProfile                                               (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class FString UHeadMountedDisplayFunctionLibrary::GetCurrentInteractionProfile(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "GetCurrentInteractionProfile");

	Params::UHeadMountedDisplayFunctionLibrary_GetCurrentInteractionProfile_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetControllerTransformForTime
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContext                                                     (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, EditConst)
// int32                              ControllerIndex                                                  (ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// class FName                        MotionSource                                                     (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FTimespan                   Time                                                             (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               bTimeWasUsed                                                     (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FRotator                    Orientation                                                      (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, Transient, Config, SubobjectReference)
// struct FVector                     Position                                                         (Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config)
// bool                               bProvidedLinearVelocity                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     LinearVelocity                                                   (Edit, ConstParm, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, SubobjectReference)
// bool                               bProvidedAngularVelocity                                         (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     AngularVelocityRadPerSec                                         (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               bProvidedLinearAcceleration                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     LinearAcceleration                                               (BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FVector UHeadMountedDisplayFunctionLibrary::GetControllerTransformForTime(int32 ControllerIndex, const struct FRotator& Orientation, struct FVector* Position, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "GetControllerTransformForTime");

	Params::UHeadMountedDisplayFunctionLibrary_GetControllerTransformForTime_Params Parms{};

	Parms.ControllerIndex = ControllerIndex;
	Parms.Orientation = Orientation;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Position != nullptr)
		*Position = std::move(Parms.Position);

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnumerateTrackedDevices
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        SystemId                                                         (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// enum class EXRTrackedDeviceType    DeviceType                                                       (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, EditConst)
// TArray<struct FXRDeviceId>         ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class FName UHeadMountedDisplayFunctionLibrary::EnumerateTrackedDevices(enum class EXRTrackedDeviceType* DeviceType, const TArray<struct FXRDeviceId>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "EnumerateTrackedDevices");

	Params::UHeadMountedDisplayFunctionLibrary_EnumerateTrackedDevices_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (DeviceType != nullptr)
		*DeviceType = Parms.DeviceType;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableLowPersistenceMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bEnable                                                          (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)

bool UHeadMountedDisplayFunctionLibrary::EnableLowPersistenceMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "EnableLowPersistenceMode");

	Params::UHeadMountedDisplayFunctionLibrary_EnableLowPersistenceMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableHMD
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bEnable                                                          (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UHeadMountedDisplayFunctionLibrary::EnableHMD(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "EnableHMD");

	Params::UHeadMountedDisplayFunctionLibrary_EnableHMD_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// class FString                      IpAddress                                                        (BlueprintVisible, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// int32                              BitRate                                                          (ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// enum class EXRDeviceConnectionResultReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

int32 UHeadMountedDisplayFunctionLibrary::ConnectRemoteXRDevice(class FString* IpAddress, enum class EXRDeviceConnectionResult ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "ConnectRemoteXRDevice");

	Params::UHeadMountedDisplayFunctionLibrary_ConnectRemoteXRDevice_Params Parms{};

	Parms.ReturnValue = ReturnValue;

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
// struct FXRGestureConfig            GestureConfig                                                    (ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FXRGestureConfig UHeadMountedDisplayFunctionLibrary::ConfigureGestures(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "ConfigureGestures");

	Params::UHeadMountedDisplayFunctionLibrary_ConfigureGestures_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ClearXRTimedInputActionDelegate
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        ActionPath                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// struct FTransform                  ExternalTrackingTransform                                        (ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// struct FKey                        InKey                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class FString                      InteractionProfile                                               (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// enum class EControllerHand         Hand                                                             (Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class FName                        MotionSource                                                     (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class FString                      Indentifier                                                      (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class FString                      Component                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)

class FString UHeadMountedDisplayFunctionLibrary::BreakKey(struct FKey* InKey, const class FString& Component)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "BreakKey");

	Params::UHeadMountedDisplayFunctionLibrary_BreakKey_Params Parms{};

	Parms.Component = Component;

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
// enum class EControllerHand         NewSource                                                        (Edit, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// class FName                        NewSource                                                        (Edit, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// bool                               bShowControllerModel                                             (ConstParm, BlueprintVisible, EditFixedSize, Parm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// class FName                        NewDisplayModelSource                                            (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// class UStaticMesh*                 NewDisplayMesh                                                   (ConstParm, BlueprintReadOnly, Net, Parm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// int32                              NewPlayer                                                        (Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)

int32 UMotionControllerComponent::SetAssociatedPlayerIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionControllerComponent", "SetAssociatedPlayerIndex");

	Params::UMotionControllerComponent_SetAssociatedPlayerIndex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

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
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UMotionControllerComponent::IsTracked(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionControllerComponent", "IsTracked");

	Params::UMotionControllerComponent_IsTracked_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HeadMountedDisplay.MotionControllerComponent.GetTrackingSource
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EControllerHand         ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UMotionControllerComponent::GetTrackingSource(enum class EControllerHand ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionControllerComponent", "GetTrackingSource");

	Params::UMotionControllerComponent_GetTrackingSource_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HeadMountedDisplay.MotionControllerComponent.GetParameterValue
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InName                                                           (ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// bool                               bValueFound                                                      (Edit, BlueprintVisible, Net, Parm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class FName UMotionControllerComponent::GetParameterValue(bool bValueFound, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionControllerComponent", "GetParameterValue");

	Params::UMotionControllerComponent_GetParameterValue_Params Parms{};

	Parms.bValueFound = bValueFound;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.MotionControllerComponent.GetHandJointPosition
// (Final, Native, Protected, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// int32                              JointIndex                                                       (BlueprintVisible, ExportObject, Net, Parm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               bValueFound                                                      (Edit, BlueprintVisible, Net, Parm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UMotionControllerComponent::GetHandJointPosition(int32 JointIndex, bool bValueFound, const struct FVector& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionControllerComponent", "GetHandJointPosition");

	Params::UMotionControllerComponent_GetHandJointPosition_Params Parms{};

	Parms.JointIndex = JointIndex;
	Parms.bValueFound = bValueFound;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// bool                               Enable                                                           (Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance)

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
// int32                              PlayerIndex                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class FName                        SourceName                                                       (ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UMotionTrackedDeviceFunctionLibrary::IsMotionTrackingEnabledForSource(int32* PlayerIndex, class FName* SourceName, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionTrackedDeviceFunctionLibrary", "IsMotionTrackingEnabledForSource");

	Params::UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForSource_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PlayerIndex != nullptr)
		*PlayerIndex = Parms.PlayerIndex;

	if (SourceName != nullptr)
		*SourceName = Parms.SourceName;

}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForDevice
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              PlayerIndex                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// enum class EControllerHand         Hand                                                             (Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

enum class EControllerHand UMotionTrackedDeviceFunctionLibrary::IsMotionTrackingEnabledForDevice(int32* PlayerIndex, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionTrackedDeviceFunctionLibrary", "IsMotionTrackingEnabledForDevice");

	Params::UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForDevice_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PlayerIndex != nullptr)
		*PlayerIndex = Parms.PlayerIndex;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForComponent
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMotionControllerComponent*  MotionControllerComponent                                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UMotionControllerComponent* UMotionTrackedDeviceFunctionLibrary::IsMotionTrackingEnabledForComponent(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionTrackedDeviceFunctionLibrary", "IsMotionTrackingEnabledForComponent");

	Params::UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForComponent_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackedDeviceCountManagementNecessary
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UMotionTrackedDeviceFunctionLibrary::IsMotionTrackedDeviceCountManagementNecessary(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionTrackedDeviceFunctionLibrary", "IsMotionTrackedDeviceCountManagementNecessary");

	Params::UMotionTrackedDeviceFunctionLibrary_IsMotionTrackedDeviceCountManagementNecessary_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionSourceTracking
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              PlayerIndex                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class FName                        SourceName                                                       (ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UMotionTrackedDeviceFunctionLibrary::IsMotionSourceTracking(int32* PlayerIndex, class FName* SourceName, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionTrackedDeviceFunctionLibrary", "IsMotionSourceTracking");

	Params::UMotionTrackedDeviceFunctionLibrary_IsMotionSourceTracking_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PlayerIndex != nullptr)
		*PlayerIndex = Parms.PlayerIndex;

	if (SourceName != nullptr)
		*SourceName = Parms.SourceName;

}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMotionTrackingEnabledControllerCount
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UMotionTrackedDeviceFunctionLibrary::GetMotionTrackingEnabledControllerCount(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionTrackedDeviceFunctionLibrary", "GetMotionTrackingEnabledControllerCount");

	Params::UMotionTrackedDeviceFunctionLibrary_GetMotionTrackingEnabledControllerCount_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMaximumMotionTrackedControllerCount
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UMotionTrackedDeviceFunctionLibrary::GetMaximumMotionTrackedControllerCount(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionTrackedDeviceFunctionLibrary", "GetMaximumMotionTrackedControllerCount");

	Params::UMotionTrackedDeviceFunctionLibrary_GetMaximumMotionTrackedControllerCount_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetActiveTrackingSystemName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UMotionTrackedDeviceFunctionLibrary::GetActiveTrackingSystemName(class FName ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionTrackedDeviceFunctionLibrary", "GetActiveTrackingSystemName");

	Params::UMotionTrackedDeviceFunctionLibrary_GetActiveTrackingSystemName_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnumerateMotionSources
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class FName>                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UMotionTrackedDeviceFunctionLibrary::EnumerateMotionSources(const TArray<class FName>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionTrackedDeviceFunctionLibrary", "EnumerateMotionSources");

	Params::UMotionTrackedDeviceFunctionLibrary_EnumerateMotionSources_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfSource
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              PlayerIndex                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class FName                        SourceName                                                       (ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UMotionTrackedDeviceFunctionLibrary::EnableMotionTrackingOfSource(int32* PlayerIndex, class FName* SourceName, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionTrackedDeviceFunctionLibrary", "EnableMotionTrackingOfSource");

	Params::UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfSource_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PlayerIndex != nullptr)
		*PlayerIndex = Parms.PlayerIndex;

	if (SourceName != nullptr)
		*SourceName = Parms.SourceName;

}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfDevice
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              PlayerIndex                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// enum class EControllerHand         Hand                                                             (Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

enum class EControllerHand UMotionTrackedDeviceFunctionLibrary::EnableMotionTrackingOfDevice(int32* PlayerIndex, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionTrackedDeviceFunctionLibrary", "EnableMotionTrackingOfDevice");

	Params::UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfDevice_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PlayerIndex != nullptr)
		*PlayerIndex = Parms.PlayerIndex;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingForComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMotionControllerComponent*  MotionControllerComponent                                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UMotionControllerComponent* UMotionTrackedDeviceFunctionLibrary::EnableMotionTrackingForComponent(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionTrackedDeviceFunctionLibrary", "EnableMotionTrackingForComponent");

	Params::UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingForComponent_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfSource
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              PlayerIndex                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class FName                        SourceName                                                       (ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)

void UMotionTrackedDeviceFunctionLibrary::DisableMotionTrackingOfSource(int32* PlayerIndex, class FName* SourceName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionTrackedDeviceFunctionLibrary", "DisableMotionTrackingOfSource");

	Params::UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfSource_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PlayerIndex != nullptr)
		*PlayerIndex = Parms.PlayerIndex;

	if (SourceName != nullptr)
		*SourceName = Parms.SourceName;

}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfDevice
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              PlayerIndex                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// enum class EControllerHand         Hand                                                             (Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

enum class EControllerHand UMotionTrackedDeviceFunctionLibrary::DisableMotionTrackingOfDevice(int32* PlayerIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionTrackedDeviceFunctionLibrary", "DisableMotionTrackingOfDevice");

	Params::UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfDevice_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PlayerIndex != nullptr)
		*PlayerIndex = Parms.PlayerIndex;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfControllersForPlayer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              PlayerIndex                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

void UMotionTrackedDeviceFunctionLibrary::DisableMotionTrackingOfControllersForPlayer(int32* PlayerIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionTrackedDeviceFunctionLibrary", "DisableMotionTrackingOfControllersForPlayer");

	Params::UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfControllersForPlayer_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PlayerIndex != nullptr)
		*PlayerIndex = Parms.PlayerIndex;

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
// class UMotionControllerComponent*  MotionControllerComponent                                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)

class UMotionControllerComponent* UMotionTrackedDeviceFunctionLibrary::DisableMotionTrackingForComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionTrackedDeviceFunctionLibrary", "DisableMotionTrackingForComponent");

	Params::UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingForComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

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
// class AActor*                      Target                                                           (Edit, ConstParm, ReturnParm, Transient, Config)
// class FName                        SystemName                                                       (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, SubobjectReference)
// class FName                        DeviceName                                                       (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               bManualAttachment                                                (ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FTransform                  RelativeTransform                                                (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// struct FXRDeviceId                 XRDeviceId                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
// class UPrimitiveComponent*         ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FXRDeviceId UXRAssetFunctionLibrary::AddNamedDeviceVisualizationComponentBlocking(class FName* SystemName, class UPrimitiveComponent* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("XRAssetFunctionLibrary", "AddNamedDeviceVisualizationComponentBlocking");

	Params::UXRAssetFunctionLibrary_AddNamedDeviceVisualizationComponentBlocking_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SystemName != nullptr)
		*SystemName = Parms.SystemName;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.XRAssetFunctionLibrary.AddDeviceVisualizationComponentBlocking
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                      Target                                                           (Edit, ConstParm, ReturnParm, Transient, Config)
// struct FXRDeviceId                 XRDeviceId                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
// bool                               bManualAttachment                                                (ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FTransform                  RelativeTransform                                                (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// class UPrimitiveComponent*         ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FTransform UXRAssetFunctionLibrary::AddDeviceVisualizationComponentBlocking(class UPrimitiveComponent* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("XRAssetFunctionLibrary", "AddDeviceVisualizationComponentBlocking");

	Params::UXRAssetFunctionLibrary_AddDeviceVisualizationComponentBlocking_Params Parms{};

	Parms.ReturnValue = ReturnValue;

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
// class AActor*                      Target                                                           (Edit, ConstParm, ReturnParm, Transient, Config)
// class FName                        SystemName                                                       (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, SubobjectReference)
// class FName                        DeviceName                                                       (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               bManualAttachment                                                (ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FTransform                  RelativeTransform                                                (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// struct FXRDeviceId                 XRDeviceId                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
// class UPrimitiveComponent*         NewComponent                                                     (Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class UAsyncTask_LoadXRDeviceVisComponent*ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FXRDeviceId UAsyncTask_LoadXRDeviceVisComponent::AddNamedDeviceVisualizationComponentAsync(class FName* SystemName, class UPrimitiveComponent** NewComponent, class UAsyncTask_LoadXRDeviceVisComponent* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AsyncTask_LoadXRDeviceVisComponent", "AddNamedDeviceVisualizationComponentAsync");

	Params::UAsyncTask_LoadXRDeviceVisComponent_AddNamedDeviceVisualizationComponentAsync_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SystemName != nullptr)
		*SystemName = Parms.SystemName;

	if (NewComponent != nullptr)
		*NewComponent = Parms.NewComponent;

	return Parms.ReturnValue;

}


// Function HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddDeviceVisualizationComponentAsync
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                      Target                                                           (Edit, ConstParm, ReturnParm, Transient, Config)
// struct FXRDeviceId                 XRDeviceId                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
// bool                               bManualAttachment                                                (ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FTransform                  RelativeTransform                                                (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// class UPrimitiveComponent*         NewComponent                                                     (Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class UAsyncTask_LoadXRDeviceVisComponent*ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FTransform UAsyncTask_LoadXRDeviceVisComponent::AddDeviceVisualizationComponentAsync(class UPrimitiveComponent** NewComponent, class UAsyncTask_LoadXRDeviceVisComponent* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AsyncTask_LoadXRDeviceVisComponent", "AddDeviceVisualizationComponentAsync");

	Params::UAsyncTask_LoadXRDeviceVisComponent_AddDeviceVisualizationComponentAsync_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NewComponent != nullptr)
		*NewComponent = Parms.NewComponent;

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
// bool                               bNewVisualizationState                                           (ConstParm, ExportObject, EditFixedSize, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// bool                               bRenderingIsActive                                               (EditFixedSize, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// class FName                        NewDisplayModelSource                                            (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// class UStaticMesh*                 NewDisplayMesh                                                   (ConstParm, BlueprintReadOnly, Net, Parm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// class UTexture*                    Texture                                                          (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst)
// struct FVector2D                   Scale                                                            (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config)
// struct FVector                     Offset                                                           (Edit, ExportObject, Parm, Transient, Config, DisableEditOnInstance, EditConst)
// bool                               bShowLoadingMovie                                                (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               bShowOnSet                                                       (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UXRLoadingScreenFunctionLibrary::SetLoadingScreen(class UTexture** Texture, struct FVector2D* Scale, const struct FVector& Offset, bool* bShowLoadingMovie, bool* bShowOnSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("XRLoadingScreenFunctionLibrary", "SetLoadingScreen");

	Params::UXRLoadingScreenFunctionLibrary_SetLoadingScreen_Params Parms{};

	Parms.Offset = Offset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Texture != nullptr)
		*Texture = Parms.Texture;

	if (Scale != nullptr)
		*Scale = std::move(Parms.Scale);

	if (bShowLoadingMovie != nullptr)
		*bShowLoadingMovie = Parms.bShowLoadingMovie;

	if (bShowOnSet != nullptr)
		*bShowOnSet = Parms.bShowOnSet;

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
// class UTexture*                    Texture                                                          (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst)
// struct FVector                     Translation                                                      (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config)
// struct FRotator                    Rotation                                                         (BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
// struct FVector2D                   Size                                                             (Edit, ConstParm, Parm, OutParm, ReturnParm, Transient, Config)
// struct FRotator                    DeltaRotation                                                    (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
// bool                               bClearBeforeAdd                                                  (ConstParm, Net, EditFixedSize, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

struct FVector2D UXRLoadingScreenFunctionLibrary::AddLoadingScreenSplash(class UTexture** Texture, struct FVector* Translation, struct FRotator* Rotation, const struct FRotator& DeltaRotation, bool* bClearBeforeAdd)
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

	if (Texture != nullptr)
		*Texture = Parms.Texture;

	if (Translation != nullptr)
		*Translation = std::move(Parms.Translation);

	if (Rotation != nullptr)
		*Rotation = std::move(Parms.Rotation);

	if (bClearBeforeAdd != nullptr)
		*bClearBeforeAdd = Parms.bClearBeforeAdd;

	return Parms.ReturnValue;

}

}



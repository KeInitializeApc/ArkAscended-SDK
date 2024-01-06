#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AugmentedReality.ARActor
// (Actor)

class UClass* AARActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARActor");

	return Clss;
}


// ARActor AugmentedReality.Default__ARActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AARActor* AARActor::GetDefaultObj()
{
	static class AARActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AARActor*>(AARActor::StaticClass()->DefaultObject);

	return Default;
}


// Function AugmentedReality.ARActor.AddARComponent
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UClass*                      InComponentClass                                                 (Edit, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// struct FGuid                       NativeID                                                         (BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// class UARComponent*                ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UClass* AARActor::AddARComponent(const struct FGuid& NativeID, class UARComponent** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARActor", "AddARComponent");

	Params::AARActor_AddARComponent_Params Parms{};

	Parms.NativeID = NativeID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Class AugmentedReality.ARBlueprintLibrary
// (None)

class UClass* UARBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARBlueprintLibrary");

	return Clss;
}


// ARBlueprintLibrary AugmentedReality.Default__ARBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UARBlueprintLibrary* UARBlueprintLibrary::GetDefaultObj()
{
	static class UARBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UARBlueprintLibrary*>(UARBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function AugmentedReality.ARBlueprintLibrary.UnpinComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USceneComponent*             ComponentToUnpin                                                 (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

class USceneComponent* UARBlueprintLibrary::UnpinComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "UnpinComponent");

	Params::UARBlueprintLibrary_UnpinComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AugmentedReality.ARBlueprintLibrary.ToggleARCapture
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bOnOff                                                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
// enum class EARCaptureType          CaptureType                                                      (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

enum class EARCaptureType UARBlueprintLibrary::ToggleARCapture(bool* bOnOff, bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "ToggleARCapture");

	Params::UARBlueprintLibrary_ToggleARCapture_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bOnOff != nullptr)
		*bOnOff = Parms.bOnOff;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function AugmentedReality.ARBlueprintLibrary.StopARSession
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UARBlueprintLibrary::StopARSession()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "StopARSession");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARBlueprintLibrary.StartARSession
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UARSessionConfig*            SessionConfig                                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

class UARSessionConfig* UARBlueprintLibrary::StartARSession()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "StartARSession");

	Params::UARBlueprintLibrary_StartARSession_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AugmentedReality.ARBlueprintLibrary.SetEnabledXRCamera
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bOnOff                                                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)

void UARBlueprintLibrary::SetEnabledXRCamera(bool* bOnOff)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "SetEnabledXRCamera");

	Params::UARBlueprintLibrary_SetEnabledXRCamera_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bOnOff != nullptr)
		*bOnOff = Parms.bOnOff;

}


// Function AugmentedReality.ARBlueprintLibrary.SetARWorldScale
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                              InWorldScale                                                     (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

float UARBlueprintLibrary::SetARWorldScale()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "SetARWorldScale");

	Params::UARBlueprintLibrary_SetARWorldScale_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AugmentedReality.ARBlueprintLibrary.SetARWorldOriginLocationAndRotation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     OriginLocation                                                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// struct FRotator                    OriginRotation                                                   (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bIsTransformInWorldSpace                                         (Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bMaintainUpDirection                                             (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

bool UARBlueprintLibrary::SetARWorldOriginLocationAndRotation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "SetARWorldOriginLocationAndRotation");

	Params::UARBlueprintLibrary_SetARWorldOriginLocationAndRotation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AugmentedReality.ARBlueprintLibrary.SetAlignmentTransform
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform                  InAlignmentTransform                                             (ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

struct FTransform UARBlueprintLibrary::SetAlignmentTransform()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "SetAlignmentTransform");

	Params::UARBlueprintLibrary_SetAlignmentTransform_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AugmentedReality.ARBlueprintLibrary.SaveARPinToLocalStore
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        InSaveName                                                       (Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// class UARPin*                      InPin                                                            (ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UARPin* UARBlueprintLibrary::SaveARPinToLocalStore(bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "SaveARPinToLocalStore");

	Params::UARBlueprintLibrary_SaveARPinToLocalStore_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function AugmentedReality.ARBlueprintLibrary.ResizeXRCamera
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FIntPoint                   InSize                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FIntPoint                   ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FIntPoint UARBlueprintLibrary::ResizeXRCamera(struct FIntPoint* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "ResizeXRCamera");

	Params::UARBlueprintLibrary_ResizeXRCamera_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

	return Parms.ReturnValue;

}


// Function AugmentedReality.ARBlueprintLibrary.RemovePin
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UARPin*                      PinToRemove                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

class UARPin* UARBlueprintLibrary::RemovePin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "RemovePin");

	Params::UARBlueprintLibrary_RemovePin_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AugmentedReality.ARBlueprintLibrary.RemoveARPinFromLocalStore
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        InSaveName                                                       (Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

class FName UARBlueprintLibrary::RemoveARPinFromLocalStore()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "RemoveARPinFromLocalStore");

	Params::UARBlueprintLibrary_RemoveARPinFromLocalStore_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AugmentedReality.ARBlueprintLibrary.RemoveAllARPinsFromLocalStore
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UARBlueprintLibrary::RemoveAllARPinsFromLocalStore()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "RemoveAllARPinsFromLocalStore");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARBlueprintLibrary.PinComponentToTraceResult
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class USceneComponent*             ComponentToPin                                                   (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// struct FARTraceResult              TraceResult                                                      (ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// class FName                        DebugName                                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UARPin*                      ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FARTraceResult UARBlueprintLibrary::PinComponentToTraceResult(class FName DebugName, class UARPin** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "PinComponentToTraceResult");

	Params::UARBlueprintLibrary_PinComponentToTraceResult_Params Parms{};

	Parms.DebugName = DebugName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function AugmentedReality.ARBlueprintLibrary.PinComponentToARPin
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USceneComponent*             ComponentToPin                                                   (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// class UARPin*                      Pin                                                              (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UARPin* UARBlueprintLibrary::PinComponentToARPin(bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "PinComponentToARPin");

	Params::UARBlueprintLibrary_PinComponentToARPin_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function AugmentedReality.ARBlueprintLibrary.PinComponent
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class USceneComponent*             ComponentToPin                                                   (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// struct FTransform                  PinToWorldTransform                                              (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// class UARTrackedGeometry*          TrackedGeometry                                                  (Edit, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// class FName                        DebugName                                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UARPin*                      ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FTransform UARBlueprintLibrary::PinComponent(class UARTrackedGeometry** TrackedGeometry, class FName DebugName, class UARPin** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "PinComponent");

	Params::UARBlueprintLibrary_PinComponent_Params Parms{};

	Parms.DebugName = DebugName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TrackedGeometry != nullptr)
		*TrackedGeometry = Parms.TrackedGeometry;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function AugmentedReality.ARBlueprintLibrary.PauseARSession
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UARBlueprintLibrary::PauseARSession()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "PauseARSession");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARBlueprintLibrary.LoadARPinsFromLocalStore
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TMap<class FName, class UARPin*>   ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARBlueprintLibrary::LoadARPinsFromLocalStore(TMap<class FName, class UARPin*>* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "LoadARPinsFromLocalStore");

	Params::UARBlueprintLibrary_LoadARPinsFromLocalStore_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects3D
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Start                                                            (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
// struct FVector                     End                                                              (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance)
// bool                               bTestFeaturePoints                                               (ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bTestGroundPlane                                                 (Edit, BlueprintVisible, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bTestPlaneExtents                                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bTestPlaneBoundaryPolygon                                        (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<struct FARTraceResult>      ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool UARBlueprintLibrary::LineTraceTrackedObjects3D(struct FVector* Start, const struct FVector& End, TArray<struct FARTraceResult>* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "LineTraceTrackedObjects3D");

	Params::UARBlueprintLibrary_LineTraceTrackedObjects3D_Params Parms{};

	Parms.End = End;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Start != nullptr)
		*Start = std::move(Parms.Start);

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

	return Parms.ReturnValue;

}


// Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   ScreenCoord                                                      (ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bTestFeaturePoints                                               (ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bTestGroundPlane                                                 (Edit, BlueprintVisible, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bTestPlaneExtents                                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bTestPlaneBoundaryPolygon                                        (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<struct FARTraceResult>      ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool UARBlueprintLibrary::LineTraceTrackedObjects(TArray<struct FARTraceResult>* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "LineTraceTrackedObjects");

	Params::UARBlueprintLibrary_LineTraceTrackedObjects_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

	return Parms.ReturnValue;

}


// Function AugmentedReality.ARBlueprintLibrary.IsSessionTypeSupported
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EARSessionType          SessionType                                                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference)
// bool                               ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

enum class EARSessionType UARBlueprintLibrary::IsSessionTypeSupported(bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "IsSessionTypeSupported");

	Params::UARBlueprintLibrary_IsSessionTypeSupported_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function AugmentedReality.ARBlueprintLibrary.IsSessionTrackingFeatureSupported
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EARSessionType          SessionType                                                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference)
// enum class EARSessionTrackingFeatureSessionTrackingFeature                                           (Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

enum class EARSessionTrackingFeature UARBlueprintLibrary::IsSessionTrackingFeatureSupported(bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "IsSessionTrackingFeatureSupported");

	Params::UARBlueprintLibrary_IsSessionTrackingFeatureSupported_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function AugmentedReality.ARBlueprintLibrary.IsSceneReconstructionSupported
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EARSessionType          SessionType                                                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference)
// enum class EARSceneReconstruction  SceneReconstructionMethod                                        (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

enum class EARSceneReconstruction UARBlueprintLibrary::IsSceneReconstructionSupported(bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "IsSceneReconstructionSupported");

	Params::UARBlueprintLibrary_IsSceneReconstructionSupported_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function AugmentedReality.ARBlueprintLibrary.IsARSupported
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARBlueprintLibrary::IsARSupported(bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "IsARSupported");

	Params::UARBlueprintLibrary_IsARSupported_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AugmentedReality.ARBlueprintLibrary.IsARPinLocalStoreSupported
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARBlueprintLibrary::IsARPinLocalStoreSupported(bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "IsARPinLocalStoreSupported");

	Params::UARBlueprintLibrary_IsARPinLocalStoreSupported_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AugmentedReality.ARBlueprintLibrary.IsARPinLocalStoreReady
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARBlueprintLibrary::IsARPinLocalStoreReady(bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "IsARPinLocalStoreReady");

	Params::UARBlueprintLibrary_IsARPinLocalStoreReady_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AugmentedReality.ARBlueprintLibrary.GetWorldMappingStatus
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EARWorldMappingState    ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARBlueprintLibrary::GetWorldMappingStatus(enum class EARWorldMappingState* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "GetWorldMappingStatus");

	Params::UARBlueprintLibrary_GetWorldMappingStatus_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AugmentedReality.ARBlueprintLibrary.GetTrackingQualityReason
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EARTrackingQualityReasonReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARBlueprintLibrary::GetTrackingQualityReason(enum class EARTrackingQualityReason* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "GetTrackingQualityReason");

	Params::UARBlueprintLibrary_GetTrackingQualityReason_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AugmentedReality.ARBlueprintLibrary.GetTrackingQuality
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EARTrackingQuality      ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARBlueprintLibrary::GetTrackingQuality(enum class EARTrackingQuality* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "GetTrackingQuality");

	Params::UARBlueprintLibrary_GetTrackingQuality_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AugmentedReality.ARBlueprintLibrary.GetSupportedVideoFormats
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EARSessionType          SessionType                                                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference)
// TArray<struct FARVideoFormat>      ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

enum class EARSessionType UARBlueprintLibrary::GetSupportedVideoFormats(TArray<struct FARVideoFormat>* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "GetSupportedVideoFormats");

	Params::UARBlueprintLibrary_GetSupportedVideoFormats_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

	return Parms.ReturnValue;

}


// Function AugmentedReality.ARBlueprintLibrary.GetSessionConfig
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UARSessionConfig*            ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARBlueprintLibrary::GetSessionConfig(class UARSessionConfig** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "GetSessionConfig");

	Params::UARBlueprintLibrary_GetSessionConfig_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AugmentedReality.ARBlueprintLibrary.GetPointCloud
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FVector>             ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARBlueprintLibrary::GetPointCloud(TArray<struct FVector>* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "GetPointCloud");

	Params::UARBlueprintLibrary_GetPointCloud_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationImage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UARTexture*                  ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARBlueprintLibrary::GetPersonSegmentationImage(class UARTexture** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "GetPersonSegmentationImage");

	Params::UARBlueprintLibrary_GetPersonSegmentationImage_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationDepthImage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UARTexture*                  ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARBlueprintLibrary::GetPersonSegmentationDepthImage(class UARTexture** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "GetPersonSegmentationDepthImage");

	Params::UARBlueprintLibrary_GetPersonSegmentationDepthImage_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AugmentedReality.ARBlueprintLibrary.GetObjectClassificationAtLocation
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     InWorldLocation                                                  (ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// enum class EARObjectClassification OutClassification                                                (EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     OutClassificationLocation                                        (ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// float                              MaxLocationDiff                                                  (Edit, ExportObject, Net, Parm, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UARBlueprintLibrary::GetObjectClassificationAtLocation(bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "GetObjectClassificationAtLocation");

	Params::UARBlueprintLibrary_GetObjectClassificationAtLocation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function AugmentedReality.ARBlueprintLibrary.GetNumberOfTrackedFacesSupported
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARBlueprintLibrary::GetNumberOfTrackedFacesSupported(int32* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "GetNumberOfTrackedFacesSupported");

	Params::UARBlueprintLibrary_GetNumberOfTrackedFacesSupported_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AugmentedReality.ARBlueprintLibrary.GetCurrentLightEstimate
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UARLightEstimate*            ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARBlueprintLibrary::GetCurrentLightEstimate(class UARLightEstimate** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "GetCurrentLightEstimate");

	Params::UARBlueprintLibrary_GetCurrentLightEstimate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AugmentedReality.ARBlueprintLibrary.GetCameraIntrinsics
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FARCameraIntrinsics         OutCameraIntrinsics                                              (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FARCameraIntrinsics UARBlueprintLibrary::GetCameraIntrinsics(bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "GetCameraIntrinsics");

	Params::UARBlueprintLibrary_GetCameraIntrinsics_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function AugmentedReality.ARBlueprintLibrary.GetCameraImage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UARTextureCameraImage*       ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARBlueprintLibrary::GetCameraImage(class UARTextureCameraImage** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "GetCameraImage");

	Params::UARBlueprintLibrary_GetCameraImage_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AugmentedReality.ARBlueprintLibrary.GetCameraDepth
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UARTextureCameraDepth*       ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARBlueprintLibrary::GetCameraDepth(class UARTextureCameraDepth** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "GetCameraDepth");

	Params::UARBlueprintLibrary_GetCameraDepth_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AugmentedReality.ARBlueprintLibrary.GetARWorldScale
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARBlueprintLibrary::GetARWorldScale(float* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "GetARWorldScale");

	Params::UARBlueprintLibrary_GetARWorldScale_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AugmentedReality.ARBlueprintLibrary.GetARTexture
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EARTextureType          TextureType                                                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// class UARTexture*                  ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

enum class EARTextureType UARBlueprintLibrary::GetARTexture(class UARTexture** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "GetARTexture");

	Params::UARBlueprintLibrary_GetARTexture_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function AugmentedReality.ARBlueprintLibrary.GetARSessionStatus
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FARSessionStatus            ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARBlueprintLibrary::GetARSessionStatus(struct FARSessionStatus* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "GetARSessionStatus");

	Params::UARBlueprintLibrary_GetARSessionStatus_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoses
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class UARTrackedPose*>      ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARBlueprintLibrary::GetAllTrackedPoses(TArray<class UARTrackedPose*>* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "GetAllTrackedPoses");

	Params::UARBlueprintLibrary_GetAllTrackedPoses_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoints
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class UARTrackedPoint*>     ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARBlueprintLibrary::GetAllTrackedPoints(TArray<class UARTrackedPoint*>* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "GetAllTrackedPoints");

	Params::UARBlueprintLibrary_GetAllTrackedPoints_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPlanes
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class UARPlaneGeometry*>    ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARBlueprintLibrary::GetAllTrackedPlanes(TArray<class UARPlaneGeometry*>* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "GetAllTrackedPlanes");

	Params::UARBlueprintLibrary_GetAllTrackedPlanes_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedImages
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class UARTrackedImage*>     ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARBlueprintLibrary::GetAllTrackedImages(TArray<class UARTrackedImage*>* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "GetAllTrackedImages");

	Params::UARBlueprintLibrary_GetAllTrackedImages_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedEnvironmentCaptureProbes
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class UAREnvironmentCaptureProbe*>ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARBlueprintLibrary::GetAllTrackedEnvironmentCaptureProbes(TArray<class UAREnvironmentCaptureProbe*>* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "GetAllTrackedEnvironmentCaptureProbes");

	Params::UARBlueprintLibrary_GetAllTrackedEnvironmentCaptureProbes_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function AugmentedReality.ARBlueprintLibrary.GetAllTracked2DPoses
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<struct FARPose2D>           ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARBlueprintLibrary::GetAllTracked2DPoses(TArray<struct FARPose2D>* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "GetAllTracked2DPoses");

	Params::UARBlueprintLibrary_GetAllTracked2DPoses_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function AugmentedReality.ARBlueprintLibrary.GetAllPins
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class UARPin*>              ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARBlueprintLibrary::GetAllPins(TArray<class UARPin*>* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "GetAllPins");

	Params::UARBlueprintLibrary_GetAllPins_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function AugmentedReality.ARBlueprintLibrary.GetAllGeometriesByClass
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UClass*                      GeometryClass                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<class UARTrackedGeometry*>  ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UClass* UARBlueprintLibrary::GetAllGeometriesByClass(TArray<class UARTrackedGeometry*>* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "GetAllGeometriesByClass");

	Params::UARBlueprintLibrary_GetAllGeometriesByClass_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

	return Parms.ReturnValue;

}


// Function AugmentedReality.ARBlueprintLibrary.GetAllGeometries
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class UARTrackedGeometry*>  ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARBlueprintLibrary::GetAllGeometries(TArray<class UARTrackedGeometry*>* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "GetAllGeometries");

	Params::UARBlueprintLibrary_GetAllGeometries_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function AugmentedReality.ARBlueprintLibrary.GetAlignmentTransform
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTransform                  ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARBlueprintLibrary::GetAlignmentTransform(struct FTransform* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "GetAlignmentTransform");

	Params::UARBlueprintLibrary_GetAlignmentTransform_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function AugmentedReality.ARBlueprintLibrary.FindTrackedPointsByName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      PointName                                                        (Edit, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<class UARTrackedPoint*>     ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class FString UARBlueprintLibrary::FindTrackedPointsByName(TArray<class UARTrackedPoint*>* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "FindTrackedPointsByName");

	Params::UARBlueprintLibrary_FindTrackedPointsByName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

	return Parms.ReturnValue;

}


// Function AugmentedReality.ARBlueprintLibrary.DebugDrawTrackedGeometry
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UARTrackedGeometry*          TrackedGeometry                                                  (Edit, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// class UObject*                     WorldContextObject                                               (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FLinearColor                Color                                                            (Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
// float                              OutlineThickness                                                 (ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// float                              PersistForSeconds                                                (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

float UARBlueprintLibrary::DebugDrawTrackedGeometry(class UARTrackedGeometry** TrackedGeometry, struct FLinearColor* Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "DebugDrawTrackedGeometry");

	Params::UARBlueprintLibrary_DebugDrawTrackedGeometry_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TrackedGeometry != nullptr)
		*TrackedGeometry = Parms.TrackedGeometry;

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

	return Parms.ReturnValue;

}


// Function AugmentedReality.ARBlueprintLibrary.DebugDrawPin
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UARPin*                      ARPin                                                            (BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig)
// class UObject*                     WorldContextObject                                               (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FLinearColor                Color                                                            (Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
// float                              Scale                                                            (Edit, ExportObject, Parm, ZeroConstructor, Transient, Config)
// float                              PersistForSeconds                                                (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

float UARBlueprintLibrary::DebugDrawPin(class UARPin* ARPin, struct FLinearColor* Color, float Scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "DebugDrawPin");

	Params::UARBlueprintLibrary_DebugDrawPin_Params Parms{};

	Parms.ARPin = ARPin;
	Parms.Scale = Scale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

	return Parms.ReturnValue;

}


// Function AugmentedReality.ARBlueprintLibrary.CalculateClosestIntersection
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// TArray<struct FVector>             StartPoints                                                      (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<struct FVector>             EndPoints                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     ClosestIntersection                                              (BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

struct FVector UARBlueprintLibrary::CalculateClosestIntersection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "CalculateClosestIntersection");

	Params::UARBlueprintLibrary_CalculateClosestIntersection_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AugmentedReality.ARBlueprintLibrary.CalculateAlignmentTransform
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform                  TransformInFirstCoordinateSystem                                 (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// struct FTransform                  TransformInSecondCoordinateSystem                                (Edit, EditFixedSize, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// struct FTransform                  AlignmentTransform                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

struct FTransform UARBlueprintLibrary::CalculateAlignmentTransform()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "CalculateAlignmentTransform");

	Params::UARBlueprintLibrary_CalculateAlignmentTransform_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AugmentedReality.ARBlueprintLibrary.AddTrackedPointWithName
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform                  WorldTransform                                                   (BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// class FString                      PointName                                                        (Edit, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bDeletePointsWithSameName                                        (Edit, ConstParm, Net, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool UARBlueprintLibrary::AddTrackedPointWithName(struct FTransform* WorldTransform, bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "AddTrackedPointWithName");

	Params::UARBlueprintLibrary_AddTrackedPointWithName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldTransform != nullptr)
		*WorldTransform = std::move(Parms.WorldTransform);

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function AugmentedReality.ARBlueprintLibrary.AddRuntimeCandidateImage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UARSessionConfig*            SessionConfig                                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// class UTexture2D*                  CandidateTexture                                                 (ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      FriendlyName                                                     (Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst)
// float                              PhysicalWidth                                                    (ConstParm, ExportObject, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// class UARCandidateImage*           ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UARBlueprintLibrary::AddRuntimeCandidateImage(class FString* FriendlyName, class UARCandidateImage** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "AddRuntimeCandidateImage");

	Params::UARBlueprintLibrary_AddRuntimeCandidateImage_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (FriendlyName != nullptr)
		*FriendlyName = std::move(Parms.FriendlyName);

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function AugmentedReality.ARBlueprintLibrary.AddManualEnvironmentCaptureProbe
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Location                                                         (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
// struct FVector                     Extent                                                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector UARBlueprintLibrary::AddManualEnvironmentCaptureProbe(struct FVector* Location, bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBlueprintLibrary", "AddManualEnvironmentCaptureProbe");

	Params::UARBlueprintLibrary_AddManualEnvironmentCaptureProbe_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Class AugmentedReality.ARTraceResultLibrary
// (None)

class UClass* UARTraceResultLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARTraceResultLibrary");

	return Clss;
}


// ARTraceResultLibrary AugmentedReality.Default__ARTraceResultLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UARTraceResultLibrary* UARTraceResultLibrary::GetDefaultObj()
{
	static class UARTraceResultLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UARTraceResultLibrary*>(UARTraceResultLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function AugmentedReality.ARTraceResultLibrary.GetTrackedGeometry
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FARTraceResult              TraceResult                                                      (ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// class UARTrackedGeometry*          ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FARTraceResult UARTraceResultLibrary::GetTrackedGeometry(class UARTrackedGeometry** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARTraceResultLibrary", "GetTrackedGeometry");

	Params::UARTraceResultLibrary_GetTrackedGeometry_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function AugmentedReality.ARTraceResultLibrary.GetTraceChannel
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FARTraceResult              TraceResult                                                      (ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// enum class EARLineTraceChannels    ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FARTraceResult UARTraceResultLibrary::GetTraceChannel(enum class EARLineTraceChannels* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARTraceResultLibrary", "GetTraceChannel");

	Params::UARTraceResultLibrary_GetTraceChannel_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function AugmentedReality.ARTraceResultLibrary.GetLocalTransform
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FARTraceResult              TraceResult                                                      (ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// struct FTransform                  ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FARTraceResult UARTraceResultLibrary::GetLocalTransform(struct FTransform* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARTraceResultLibrary", "GetLocalTransform");

	Params::UARTraceResultLibrary_GetLocalTransform_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

	return Parms.ReturnValue;

}


// Function AugmentedReality.ARTraceResultLibrary.GetLocalToWorldTransform
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FARTraceResult              TraceResult                                                      (ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// struct FTransform                  ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FARTraceResult UARTraceResultLibrary::GetLocalToWorldTransform(struct FTransform* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARTraceResultLibrary", "GetLocalToWorldTransform");

	Params::UARTraceResultLibrary_GetLocalToWorldTransform_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

	return Parms.ReturnValue;

}


// Function AugmentedReality.ARTraceResultLibrary.GetLocalToTrackingTransform
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FARTraceResult              TraceResult                                                      (ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// struct FTransform                  ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FARTraceResult UARTraceResultLibrary::GetLocalToTrackingTransform(struct FTransform* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARTraceResultLibrary", "GetLocalToTrackingTransform");

	Params::UARTraceResultLibrary_GetLocalToTrackingTransform_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

	return Parms.ReturnValue;

}


// Function AugmentedReality.ARTraceResultLibrary.GetDistanceFromCamera
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FARTraceResult              TraceResult                                                      (ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FARTraceResult UARTraceResultLibrary::GetDistanceFromCamera(float* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARTraceResultLibrary", "GetDistanceFromCamera");

	Params::UARTraceResultLibrary_GetDistanceFromCamera_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Class AugmentedReality.ARBaseAsyncTaskBlueprintProxy
// (None)

class UClass* UARBaseAsyncTaskBlueprintProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARBaseAsyncTaskBlueprintProxy");

	return Clss;
}


// ARBaseAsyncTaskBlueprintProxy AugmentedReality.Default__ARBaseAsyncTaskBlueprintProxy
// (Public, ClassDefaultObject, ArchetypeObject)

class UARBaseAsyncTaskBlueprintProxy* UARBaseAsyncTaskBlueprintProxy::GetDefaultObj()
{
	static class UARBaseAsyncTaskBlueprintProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UARBaseAsyncTaskBlueprintProxy*>(UARBaseAsyncTaskBlueprintProxy::StaticClass()->DefaultObject);

	return Default;
}


// Class AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy
// (None)

class UClass* UARSaveWorldAsyncTaskBlueprintProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARSaveWorldAsyncTaskBlueprintProxy");

	return Clss;
}


// ARSaveWorldAsyncTaskBlueprintProxy AugmentedReality.Default__ARSaveWorldAsyncTaskBlueprintProxy
// (Public, ClassDefaultObject, ArchetypeObject)

class UARSaveWorldAsyncTaskBlueprintProxy* UARSaveWorldAsyncTaskBlueprintProxy::GetDefaultObj()
{
	static class UARSaveWorldAsyncTaskBlueprintProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UARSaveWorldAsyncTaskBlueprintProxy*>(UARSaveWorldAsyncTaskBlueprintProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy.ARSaveWorld
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// class UARSaveWorldAsyncTaskBlueprintProxy*ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UObject* UARSaveWorldAsyncTaskBlueprintProxy::ARSaveWorld(class UARSaveWorldAsyncTaskBlueprintProxy** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSaveWorldAsyncTaskBlueprintProxy", "ARSaveWorld");

	Params::UARSaveWorldAsyncTaskBlueprintProxy_ARSaveWorld_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Class AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy
// (None)

class UClass* UARGetCandidateObjectAsyncTaskBlueprintProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARGetCandidateObjectAsyncTaskBlueprintProxy");

	return Clss;
}


// ARGetCandidateObjectAsyncTaskBlueprintProxy AugmentedReality.Default__ARGetCandidateObjectAsyncTaskBlueprintProxy
// (Public, ClassDefaultObject, ArchetypeObject)

class UARGetCandidateObjectAsyncTaskBlueprintProxy* UARGetCandidateObjectAsyncTaskBlueprintProxy::GetDefaultObj()
{
	static class UARGetCandidateObjectAsyncTaskBlueprintProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UARGetCandidateObjectAsyncTaskBlueprintProxy*>(UARGetCandidateObjectAsyncTaskBlueprintProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy.ARGetCandidateObject
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     Location                                                         (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
// struct FVector                     Extent                                                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// class UARGetCandidateObjectAsyncTaskBlueprintProxy*ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector UARGetCandidateObjectAsyncTaskBlueprintProxy::ARGetCandidateObject(struct FVector* Location, class UARGetCandidateObjectAsyncTaskBlueprintProxy** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARGetCandidateObjectAsyncTaskBlueprintProxy", "ARGetCandidateObject");

	Params::UARGetCandidateObjectAsyncTaskBlueprintProxy_ARGetCandidateObject_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Class AugmentedReality.ARComponent
// (SceneComponent)

class UClass* UARComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARComponent");

	return Clss;
}


// ARComponent AugmentedReality.Default__ARComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UARComponent* UARComponent::GetDefaultObj()
{
	static class UARComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UARComponent*>(UARComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function AugmentedReality.ARComponent.UpdateVisualization
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UARComponent::UpdateVisualization()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARComponent", "UpdateVisualization");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARComponent.SetNativeID
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGuid                       NativeID                                                         (BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)

void UARComponent::SetNativeID(const struct FGuid& NativeID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARComponent", "SetNativeID");

	Params::UARComponent_SetNativeID_Params Parms{};

	Parms.NativeID = NativeID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARComponent.ReceiveRemove
// (Event, Public, BlueprintEvent)
// Parameters:

void UARComponent::ReceiveRemove()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARComponent", "ReceiveRemove");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AugmentedReality.ARComponent.OnRep_Payload
// (Native, Protected)
// Parameters:

void UARComponent::OnRep_Payload()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARComponent", "OnRep_Payload");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARComponent.GetMRMesh
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMRMeshComponent*            ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARComponent::GetMRMesh(class UMRMeshComponent** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARComponent", "GetMRMesh");

	Params::UARComponent_GetMRMesh_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Class AugmentedReality.ARPlaneComponent
// (SceneComponent)

class UClass* UARPlaneComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARPlaneComponent");

	return Clss;
}


// ARPlaneComponent AugmentedReality.Default__ARPlaneComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UARPlaneComponent* UARPlaneComponent::GetDefaultObj()
{
	static class UARPlaneComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UARPlaneComponent*>(UARPlaneComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function AugmentedReality.ARPlaneComponent.SetPlaneComponentDebugMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EPlaneComponentDebugModeNewDebugMode                                                     (BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

enum class EPlaneComponentDebugMode UARPlaneComponent::SetPlaneComponentDebugMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARPlaneComponent", "SetPlaneComponentDebugMode");

	Params::UARPlaneComponent_SetPlaneComponentDebugMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AugmentedReality.ARPlaneComponent.SetObjectClassificationDebugColors
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TMap<enum class EARObjectClassification, struct FLinearColor>InColors                                                         (Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

TMap<enum class EARObjectClassification, struct FLinearColor> UARPlaneComponent::SetObjectClassificationDebugColors()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARPlaneComponent", "SetObjectClassificationDebugColors");

	Params::UARPlaneComponent_SetObjectClassificationDebugColors_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AugmentedReality.ARPlaneComponent.ServerUpdatePayload
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FARPlaneUpdatePayload       NewPayload                                                       (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

struct FARPlaneUpdatePayload UARPlaneComponent::ServerUpdatePayload()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARPlaneComponent", "ServerUpdatePayload");

	Params::UARPlaneComponent_ServerUpdatePayload_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AugmentedReality.ARPlaneComponent.ReceiveUpdate
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FARPlaneUpdatePayload       Payload                                                          (BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FARPlaneUpdatePayload UARPlaneComponent::ReceiveUpdate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARPlaneComponent", "ReceiveUpdate");

	Params::UARPlaneComponent_ReceiveUpdate_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AugmentedReality.ARPlaneComponent.ReceiveAdd
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FARPlaneUpdatePayload       Payload                                                          (BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FARPlaneUpdatePayload UARPlaneComponent::ReceiveAdd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARPlaneComponent", "ReceiveAdd");

	Params::UARPlaneComponent_ReceiveAdd_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AugmentedReality.ARPlaneComponent.GetObjectClassificationDebugColors
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TMap<enum class EARObjectClassification, struct FLinearColor>ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARPlaneComponent::GetObjectClassificationDebugColors(TMap<enum class EARObjectClassification, struct FLinearColor>* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARPlaneComponent", "GetObjectClassificationDebugColors");

	Params::UARPlaneComponent_GetObjectClassificationDebugColors_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Class AugmentedReality.ARPointComponent
// (SceneComponent)

class UClass* UARPointComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARPointComponent");

	return Clss;
}


// ARPointComponent AugmentedReality.Default__ARPointComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UARPointComponent* UARPointComponent::GetDefaultObj()
{
	static class UARPointComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UARPointComponent*>(UARPointComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function AugmentedReality.ARPointComponent.ServerUpdatePayload
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FARPointUpdatePayload       NewPayload                                                       (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

struct FARPointUpdatePayload UARPointComponent::ServerUpdatePayload()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARPointComponent", "ServerUpdatePayload");

	Params::UARPointComponent_ServerUpdatePayload_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AugmentedReality.ARPointComponent.ReceiveUpdate
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FARPointUpdatePayload       Payload                                                          (BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FARPointUpdatePayload UARPointComponent::ReceiveUpdate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARPointComponent", "ReceiveUpdate");

	Params::UARPointComponent_ReceiveUpdate_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AugmentedReality.ARPointComponent.ReceiveAdd
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FARPointUpdatePayload       Payload                                                          (BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FARPointUpdatePayload UARPointComponent::ReceiveAdd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARPointComponent", "ReceiveAdd");

	Params::UARPointComponent_ReceiveAdd_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Class AugmentedReality.ARFaceComponent
// (SceneComponent)

class UClass* UARFaceComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARFaceComponent");

	return Clss;
}


// ARFaceComponent AugmentedReality.Default__ARFaceComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UARFaceComponent* UARFaceComponent::GetDefaultObj()
{
	static class UARFaceComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UARFaceComponent*>(UARFaceComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function AugmentedReality.ARFaceComponent.SetFaceComponentDebugMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EFaceComponentDebugMode NewDebugMode                                                     (BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

enum class EFaceComponentDebugMode UARFaceComponent::SetFaceComponentDebugMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFaceComponent", "SetFaceComponentDebugMode");

	Params::UARFaceComponent_SetFaceComponentDebugMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AugmentedReality.ARFaceComponent.ServerUpdatePayload
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FARFaceUpdatePayload        NewPayload                                                       (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

struct FARFaceUpdatePayload UARFaceComponent::ServerUpdatePayload()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFaceComponent", "ServerUpdatePayload");

	Params::UARFaceComponent_ServerUpdatePayload_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AugmentedReality.ARFaceComponent.ReceiveUpdate
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FARFaceUpdatePayload        Payload                                                          (BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FARFaceUpdatePayload UARFaceComponent::ReceiveUpdate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFaceComponent", "ReceiveUpdate");

	Params::UARFaceComponent_ReceiveUpdate_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AugmentedReality.ARFaceComponent.ReceiveAdd
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FARFaceUpdatePayload        Payload                                                          (BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FARFaceUpdatePayload UARFaceComponent::ReceiveAdd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFaceComponent", "ReceiveAdd");

	Params::UARFaceComponent_ReceiveAdd_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Class AugmentedReality.ARImageComponent
// (SceneComponent)

class UClass* UARImageComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARImageComponent");

	return Clss;
}


// ARImageComponent AugmentedReality.Default__ARImageComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UARImageComponent* UARImageComponent::GetDefaultObj()
{
	static class UARImageComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UARImageComponent*>(UARImageComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function AugmentedReality.ARImageComponent.SetImageComponentDebugMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EImageComponentDebugModeNewDebugMode                                                     (BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

enum class EImageComponentDebugMode UARImageComponent::SetImageComponentDebugMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARImageComponent", "SetImageComponentDebugMode");

	Params::UARImageComponent_SetImageComponentDebugMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AugmentedReality.ARImageComponent.ServerUpdatePayload
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FARImageUpdatePayload       NewPayload                                                       (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

struct FARImageUpdatePayload UARImageComponent::ServerUpdatePayload()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARImageComponent", "ServerUpdatePayload");

	Params::UARImageComponent_ServerUpdatePayload_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AugmentedReality.ARImageComponent.ReceiveUpdate
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FARImageUpdatePayload       Payload                                                          (BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FARImageUpdatePayload UARImageComponent::ReceiveUpdate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARImageComponent", "ReceiveUpdate");

	Params::UARImageComponent_ReceiveUpdate_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AugmentedReality.ARImageComponent.ReceiveAdd
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FARImageUpdatePayload       Payload                                                          (BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FARImageUpdatePayload UARImageComponent::ReceiveAdd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARImageComponent", "ReceiveAdd");

	Params::UARImageComponent_ReceiveAdd_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Class AugmentedReality.ARQRCodeComponent
// (SceneComponent)

class UClass* UARQRCodeComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARQRCodeComponent");

	return Clss;
}


// ARQRCodeComponent AugmentedReality.Default__ARQRCodeComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UARQRCodeComponent* UARQRCodeComponent::GetDefaultObj()
{
	static class UARQRCodeComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UARQRCodeComponent*>(UARQRCodeComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function AugmentedReality.ARQRCodeComponent.SetQRCodeComponentDebugMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EQRCodeComponentDebugModeNewDebugMode                                                     (BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

enum class EQRCodeComponentDebugMode UARQRCodeComponent::SetQRCodeComponentDebugMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARQRCodeComponent", "SetQRCodeComponentDebugMode");

	Params::UARQRCodeComponent_SetQRCodeComponentDebugMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AugmentedReality.ARQRCodeComponent.ServerUpdatePayload
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FARQRCodeUpdatePayload      NewPayload                                                       (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

struct FARQRCodeUpdatePayload UARQRCodeComponent::ServerUpdatePayload()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARQRCodeComponent", "ServerUpdatePayload");

	Params::UARQRCodeComponent_ServerUpdatePayload_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AugmentedReality.ARQRCodeComponent.ReceiveUpdate
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FARQRCodeUpdatePayload      Payload                                                          (BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FARQRCodeUpdatePayload UARQRCodeComponent::ReceiveUpdate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARQRCodeComponent", "ReceiveUpdate");

	Params::UARQRCodeComponent_ReceiveUpdate_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AugmentedReality.ARQRCodeComponent.ReceiveAdd
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FARQRCodeUpdatePayload      Payload                                                          (BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FARQRCodeUpdatePayload UARQRCodeComponent::ReceiveAdd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARQRCodeComponent", "ReceiveAdd");

	Params::UARQRCodeComponent_ReceiveAdd_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Class AugmentedReality.ARPoseComponent
// (SceneComponent)

class UClass* UARPoseComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARPoseComponent");

	return Clss;
}


// ARPoseComponent AugmentedReality.Default__ARPoseComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UARPoseComponent* UARPoseComponent::GetDefaultObj()
{
	static class UARPoseComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UARPoseComponent*>(UARPoseComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function AugmentedReality.ARPoseComponent.SetPoseComponentDebugMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EPoseComponentDebugMode NewDebugMode                                                     (BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

enum class EPoseComponentDebugMode UARPoseComponent::SetPoseComponentDebugMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARPoseComponent", "SetPoseComponentDebugMode");

	Params::UARPoseComponent_SetPoseComponentDebugMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AugmentedReality.ARPoseComponent.ServerUpdatePayload
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FARPoseUpdatePayload        NewPayload                                                       (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

struct FARPoseUpdatePayload UARPoseComponent::ServerUpdatePayload()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARPoseComponent", "ServerUpdatePayload");

	Params::UARPoseComponent_ServerUpdatePayload_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AugmentedReality.ARPoseComponent.ReceiveUpdate
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FARPoseUpdatePayload        Payload                                                          (BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FARPoseUpdatePayload UARPoseComponent::ReceiveUpdate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARPoseComponent", "ReceiveUpdate");

	Params::UARPoseComponent_ReceiveUpdate_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AugmentedReality.ARPoseComponent.ReceiveAdd
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FARPoseUpdatePayload        Payload                                                          (BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FARPoseUpdatePayload UARPoseComponent::ReceiveAdd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARPoseComponent", "ReceiveAdd");

	Params::UARPoseComponent_ReceiveAdd_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Class AugmentedReality.AREnvironmentProbeComponent
// (SceneComponent)

class UClass* UAREnvironmentProbeComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AREnvironmentProbeComponent");

	return Clss;
}


// AREnvironmentProbeComponent AugmentedReality.Default__AREnvironmentProbeComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAREnvironmentProbeComponent* UAREnvironmentProbeComponent::GetDefaultObj()
{
	static class UAREnvironmentProbeComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAREnvironmentProbeComponent*>(UAREnvironmentProbeComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function AugmentedReality.AREnvironmentProbeComponent.ServerUpdatePayload
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FAREnvironmentProbeUpdatePayloadNewPayload                                                       (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

struct FAREnvironmentProbeUpdatePayload UAREnvironmentProbeComponent::ServerUpdatePayload()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AREnvironmentProbeComponent", "ServerUpdatePayload");

	Params::UAREnvironmentProbeComponent_ServerUpdatePayload_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AugmentedReality.AREnvironmentProbeComponent.ReceiveUpdate
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FAREnvironmentProbeUpdatePayloadPayload                                                          (BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FAREnvironmentProbeUpdatePayload UAREnvironmentProbeComponent::ReceiveUpdate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AREnvironmentProbeComponent", "ReceiveUpdate");

	Params::UAREnvironmentProbeComponent_ReceiveUpdate_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AugmentedReality.AREnvironmentProbeComponent.ReceiveAdd
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FAREnvironmentProbeUpdatePayloadPayload                                                          (BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FAREnvironmentProbeUpdatePayload UAREnvironmentProbeComponent::ReceiveAdd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AREnvironmentProbeComponent", "ReceiveAdd");

	Params::UAREnvironmentProbeComponent_ReceiveAdd_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Class AugmentedReality.ARObjectComponent
// (SceneComponent)

class UClass* UARObjectComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARObjectComponent");

	return Clss;
}


// ARObjectComponent AugmentedReality.Default__ARObjectComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UARObjectComponent* UARObjectComponent::GetDefaultObj()
{
	static class UARObjectComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UARObjectComponent*>(UARObjectComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function AugmentedReality.ARObjectComponent.ServerUpdatePayload
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FARObjectUpdatePayload      NewPayload                                                       (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

struct FARObjectUpdatePayload UARObjectComponent::ServerUpdatePayload()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARObjectComponent", "ServerUpdatePayload");

	Params::UARObjectComponent_ServerUpdatePayload_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AugmentedReality.ARObjectComponent.ReceiveUpdate
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FARObjectUpdatePayload      Payload                                                          (BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FARObjectUpdatePayload UARObjectComponent::ReceiveUpdate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARObjectComponent", "ReceiveUpdate");

	Params::UARObjectComponent_ReceiveUpdate_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AugmentedReality.ARObjectComponent.ReceiveAdd
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FARObjectUpdatePayload      Payload                                                          (BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FARObjectUpdatePayload UARObjectComponent::ReceiveAdd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARObjectComponent", "ReceiveAdd");

	Params::UARObjectComponent_ReceiveAdd_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Class AugmentedReality.ARMeshComponent
// (SceneComponent)

class UClass* UARMeshComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARMeshComponent");

	return Clss;
}


// ARMeshComponent AugmentedReality.Default__ARMeshComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UARMeshComponent* UARMeshComponent::GetDefaultObj()
{
	static class UARMeshComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UARMeshComponent*>(UARMeshComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function AugmentedReality.ARMeshComponent.ServerUpdatePayload
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FARMeshUpdatePayload        NewPayload                                                       (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

struct FARMeshUpdatePayload UARMeshComponent::ServerUpdatePayload()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARMeshComponent", "ServerUpdatePayload");

	Params::UARMeshComponent_ServerUpdatePayload_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AugmentedReality.ARMeshComponent.ReceiveUpdate
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FARMeshUpdatePayload        Payload                                                          (BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FARMeshUpdatePayload UARMeshComponent::ReceiveUpdate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARMeshComponent", "ReceiveUpdate");

	Params::UARMeshComponent_ReceiveUpdate_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AugmentedReality.ARMeshComponent.ReceiveAdd
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FARMeshUpdatePayload        Payload                                                          (BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FARMeshUpdatePayload UARMeshComponent::ReceiveAdd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARMeshComponent", "ReceiveAdd");

	Params::UARMeshComponent_ReceiveAdd_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Class AugmentedReality.ARGeoAnchorComponent
// (SceneComponent)

class UClass* UARGeoAnchorComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARGeoAnchorComponent");

	return Clss;
}


// ARGeoAnchorComponent AugmentedReality.Default__ARGeoAnchorComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UARGeoAnchorComponent* UARGeoAnchorComponent::GetDefaultObj()
{
	static class UARGeoAnchorComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UARGeoAnchorComponent*>(UARGeoAnchorComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function AugmentedReality.ARGeoAnchorComponent.SetGeoAnchorComponentDebugMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EGeoAnchorComponentDebugModeNewDebugMode                                                     (BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

enum class EGeoAnchorComponentDebugMode UARGeoAnchorComponent::SetGeoAnchorComponentDebugMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARGeoAnchorComponent", "SetGeoAnchorComponentDebugMode");

	Params::UARGeoAnchorComponent_SetGeoAnchorComponentDebugMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AugmentedReality.ARGeoAnchorComponent.ServerUpdatePayload
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FARGeoAnchorUpdatePayload   NewPayload                                                       (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

struct FARGeoAnchorUpdatePayload UARGeoAnchorComponent::ServerUpdatePayload()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARGeoAnchorComponent", "ServerUpdatePayload");

	Params::UARGeoAnchorComponent_ServerUpdatePayload_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AugmentedReality.ARGeoAnchorComponent.ReceiveUpdate
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FARGeoAnchorUpdatePayload   Payload                                                          (BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FARGeoAnchorUpdatePayload UARGeoAnchorComponent::ReceiveUpdate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARGeoAnchorComponent", "ReceiveUpdate");

	Params::UARGeoAnchorComponent_ReceiveUpdate_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AugmentedReality.ARGeoAnchorComponent.ReceiveAdd
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FARGeoAnchorUpdatePayload   Payload                                                          (BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FARGeoAnchorUpdatePayload UARGeoAnchorComponent::ReceiveAdd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARGeoAnchorComponent", "ReceiveAdd");

	Params::UARGeoAnchorComponent_ReceiveAdd_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Class AugmentedReality.ARDependencyHandler
// (None)

class UClass* UARDependencyHandler::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARDependencyHandler");

	return Clss;
}


// ARDependencyHandler AugmentedReality.Default__ARDependencyHandler
// (Public, ClassDefaultObject, ArchetypeObject)

class UARDependencyHandler* UARDependencyHandler::GetDefaultObj()
{
	static class UARDependencyHandler* Default = nullptr;

	if (!Default)
		Default = static_cast<UARDependencyHandler*>(UARDependencyHandler::StaticClass()->DefaultObject);

	return Default;
}


// Function AugmentedReality.ARDependencyHandler.StartARSessionLatent
// (Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// class UARSessionConfig*            SessionConfig                                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// struct FLatentActionInfo           LatentInfo                                                       (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, SubobjectReference)

class UARSessionConfig* UARDependencyHandler::StartARSessionLatent(const struct FLatentActionInfo& LatentInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARDependencyHandler", "StartARSessionLatent");

	Params::UARDependencyHandler_StartARSessionLatent_Params Parms{};

	Parms.LatentInfo = LatentInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AugmentedReality.ARDependencyHandler.RequestARSessionPermission
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// class UARSessionConfig*            SessionConfig                                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// struct FLatentActionInfo           LatentInfo                                                       (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class EARServicePermissionRequestResultOutPermissionResult                                              (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

enum class EARServicePermissionRequestResult UARDependencyHandler::RequestARSessionPermission(const struct FLatentActionInfo& LatentInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARDependencyHandler", "RequestARSessionPermission");

	Params::UARDependencyHandler_RequestARSessionPermission_Params Parms{};

	Parms.LatentInfo = LatentInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AugmentedReality.ARDependencyHandler.InstallARService
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FLatentActionInfo           LatentInfo                                                       (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class EARServiceInstallRequestResultOutInstallResult                                                 (Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

enum class EARServiceInstallRequestResult UARDependencyHandler::InstallARService(const struct FLatentActionInfo& LatentInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARDependencyHandler", "InstallARService");

	Params::UARDependencyHandler_InstallARService_Params Parms{};

	Parms.LatentInfo = LatentInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AugmentedReality.ARDependencyHandler.GetARDependencyHandler
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UARDependencyHandler*        ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARDependencyHandler::GetARDependencyHandler(class UARDependencyHandler** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARDependencyHandler", "GetARDependencyHandler");

	Params::UARDependencyHandler_GetARDependencyHandler_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AugmentedReality.ARDependencyHandler.CheckARServiceAvailability
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FLatentActionInfo           LatentInfo                                                       (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class EARServiceAvailability  OutAvailability                                                  (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

enum class EARServiceAvailability UARDependencyHandler::CheckARServiceAvailability(const struct FLatentActionInfo& LatentInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARDependencyHandler", "CheckARServiceAvailability");

	Params::UARDependencyHandler_CheckARServiceAvailability_Params Parms{};

	Parms.LatentInfo = LatentInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class AugmentedReality.ARGeoTrackingSupport
// (None)

class UClass* UARGeoTrackingSupport::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARGeoTrackingSupport");

	return Clss;
}


// ARGeoTrackingSupport AugmentedReality.Default__ARGeoTrackingSupport
// (Public, ClassDefaultObject, ArchetypeObject)

class UARGeoTrackingSupport* UARGeoTrackingSupport::GetDefaultObj()
{
	static class UARGeoTrackingSupport* Default = nullptr;

	if (!Default)
		Default = static_cast<UARGeoTrackingSupport*>(UARGeoTrackingSupport::StaticClass()->DefaultObject);

	return Default;
}


// Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingSupport
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UARGeoTrackingSupport*       ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARGeoTrackingSupport::GetGeoTrackingSupport(class UARGeoTrackingSupport** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARGeoTrackingSupport", "GetGeoTrackingSupport");

	Params::UARGeoTrackingSupport_GetGeoTrackingSupport_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingStateReason
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EARGeoTrackingStateReasonReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARGeoTrackingSupport::GetGeoTrackingStateReason(enum class EARGeoTrackingStateReason* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARGeoTrackingSupport", "GetGeoTrackingStateReason");

	Params::UARGeoTrackingSupport_GetGeoTrackingStateReason_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingState
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EARGeoTrackingState     ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARGeoTrackingSupport::GetGeoTrackingState(enum class EARGeoTrackingState* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARGeoTrackingSupport", "GetGeoTrackingState");

	Params::UARGeoTrackingSupport_GetGeoTrackingState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingAccuracy
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EARGeoTrackingAccuracy  ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARGeoTrackingSupport::GetGeoTrackingAccuracy(enum class EARGeoTrackingAccuracy* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARGeoTrackingSupport", "GetGeoTrackingAccuracy");

	Params::UARGeoTrackingSupport_GetGeoTrackingAccuracy_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AugmentedReality.ARGeoTrackingSupport.AddGeoAnchorAtLocationWithAltitude
// (Native, Public, BlueprintCallable)
// Parameters:
// float                              Longitude                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, InstancedReference)
// float                              Latitude                                                         (Edit, ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// float                              AltitudeMeters                                                   (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Transient, Config, InstancedReference, SubobjectReference)
// class FString                      OptionalAnchorName                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class FString UARGeoTrackingSupport::AddGeoAnchorAtLocationWithAltitude(float Latitude, float AltitudeMeters, bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARGeoTrackingSupport", "AddGeoAnchorAtLocationWithAltitude");

	Params::UARGeoTrackingSupport_AddGeoAnchorAtLocationWithAltitude_Params Parms{};

	Parms.Latitude = Latitude;
	Parms.AltitudeMeters = AltitudeMeters;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function AugmentedReality.ARGeoTrackingSupport.AddGeoAnchorAtLocation
// (Native, Public, BlueprintCallable)
// Parameters:
// float                              Longitude                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, InstancedReference)
// float                              Latitude                                                         (Edit, ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// class FString                      OptionalAnchorName                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class FString UARGeoTrackingSupport::AddGeoAnchorAtLocation(float Latitude, bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARGeoTrackingSupport", "AddGeoAnchorAtLocation");

	Params::UARGeoTrackingSupport_AddGeoAnchorAtLocation_Params Parms{};

	Parms.Latitude = Latitude;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Class AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy
// (None)

class UClass* UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy");

	return Clss;
}


// CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy AugmentedReality.Default__CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy
// (Public, ClassDefaultObject, ArchetypeObject)

class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::GetDefaultObj()
{
	static class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy*>(UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.GeoTrackingAvailabilityDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                               bIsAvailable                                                     (ConstParm, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// class FString                      Error                                                            (ExportObject, EditFixedSize, Parm, ReturnParm)

class FString UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::GeoTrackingAvailabilityDelegate__DelegateSignature(bool bIsAvailable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy", "GeoTrackingAvailabilityDelegate__DelegateSignature");

	Params::UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_GeoTrackingAvailabilityDelegate__DelegateSignature_Params Parms{};

	Parms.bIsAvailable = bIsAvailable;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.CheckGeoTrackingAvailabilityAtLocation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              Longitude                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, InstancedReference)
// float                              Latitude                                                         (Edit, ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy*ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::CheckGeoTrackingAvailabilityAtLocation(float Latitude, class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy", "CheckGeoTrackingAvailabilityAtLocation");

	Params::UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_CheckGeoTrackingAvailabilityAtLocation_Params Parms{};

	Parms.Latitude = Latitude;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.CheckGeoTrackingAvailability
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy*ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UObject* UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::CheckGeoTrackingAvailability(class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy", "CheckGeoTrackingAvailability");

	Params::UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_CheckGeoTrackingAvailability_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Class AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy
// (None)

class UClass* UGetGeoLocationAsyncTaskBlueprintProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GetGeoLocationAsyncTaskBlueprintProxy");

	return Clss;
}


// GetGeoLocationAsyncTaskBlueprintProxy AugmentedReality.Default__GetGeoLocationAsyncTaskBlueprintProxy
// (Public, ClassDefaultObject, ArchetypeObject)

class UGetGeoLocationAsyncTaskBlueprintProxy* UGetGeoLocationAsyncTaskBlueprintProxy::GetDefaultObj()
{
	static class UGetGeoLocationAsyncTaskBlueprintProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UGetGeoLocationAsyncTaskBlueprintProxy*>(UGetGeoLocationAsyncTaskBlueprintProxy::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy.GetGeoLocationDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// float                              Longitude                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, InstancedReference)
// float                              Latitude                                                         (Edit, ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// float                              Altitude                                                         (ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// class FString                      Error                                                            (ExportObject, EditFixedSize, Parm, ReturnParm)

class FString UGetGeoLocationAsyncTaskBlueprintProxy::GetGeoLocationDelegate__DelegateSignature(float Latitude, float Altitude)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GetGeoLocationAsyncTaskBlueprintProxy", "GetGeoLocationDelegate__DelegateSignature");

	Params::UGetGeoLocationAsyncTaskBlueprintProxy_GetGeoLocationDelegate__DelegateSignature_Params Parms{};

	Parms.Latitude = Latitude;
	Parms.Altitude = Altitude;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy.GetGeoLocationAtWorldPosition
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     WorldPosition                                                    (BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, InstancedReference)
// class UGetGeoLocationAsyncTaskBlueprintProxy*ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UObject* UGetGeoLocationAsyncTaskBlueprintProxy::GetGeoLocationAtWorldPosition(struct FVector* WorldPosition, class UGetGeoLocationAsyncTaskBlueprintProxy** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GetGeoLocationAsyncTaskBlueprintProxy", "GetGeoLocationAtWorldPosition");

	Params::UGetGeoLocationAsyncTaskBlueprintProxy_GetGeoLocationAtWorldPosition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldPosition != nullptr)
		*WorldPosition = std::move(Parms.WorldPosition);

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Class AugmentedReality.ARLifeCycleComponent
// (SceneComponent)

class UClass* UARLifeCycleComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARLifeCycleComponent");

	return Clss;
}


// ARLifeCycleComponent AugmentedReality.Default__ARLifeCycleComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UARLifeCycleComponent* UARLifeCycleComponent::GetDefaultObj()
{
	static class UARLifeCycleComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UARLifeCycleComponent*>(UARLifeCycleComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function AugmentedReality.ARLifeCycleComponent.ServerSpawnARActor
// (Final, Net, NetReliable, Native, Event, Private, NetServer, HasDefaults, NetValidate)
// Parameters:
// class UClass*                      ComponentClass                                                   (Edit, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FGuid                       NativeID                                                         (BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)

void UARLifeCycleComponent::ServerSpawnARActor(class UClass* ComponentClass, const struct FGuid& NativeID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARLifeCycleComponent", "ServerSpawnARActor");

	Params::UARLifeCycleComponent_ServerSpawnARActor_Params Parms{};

	Parms.ComponentClass = ComponentClass;
	Parms.NativeID = NativeID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARLifeCycleComponent.ServerDestroyARActor
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// class AARActor*                    Actor                                                            (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)

void UARLifeCycleComponent::ServerDestroyARActor(class AARActor** Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARLifeCycleComponent", "ServerDestroyARActor");

	Params::UARLifeCycleComponent_ServerDestroyARActor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Actor != nullptr)
		*Actor = Parms.Actor;

}


// DelegateFunction AugmentedReality.ARLifeCycleComponent.InstanceARActorToBeDestroyedDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class AARActor*                    Actor                                                            (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)

void UARLifeCycleComponent::InstanceARActorToBeDestroyedDelegate__DelegateSignature(class AARActor** Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARLifeCycleComponent", "InstanceARActorToBeDestroyedDelegate__DelegateSignature");

	Params::UARLifeCycleComponent_InstanceARActorToBeDestroyedDelegate__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Actor != nullptr)
		*Actor = Parms.Actor;

}


// DelegateFunction AugmentedReality.ARLifeCycleComponent.InstanceARActorSpawnedDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasDefaults)
// Parameters:
// class UClass*                      ComponentClass                                                   (Edit, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FGuid                       NativeID                                                         (BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// class AARActor*                    SpawnedActor                                                     (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)

void UARLifeCycleComponent::InstanceARActorSpawnedDelegate__DelegateSignature(class UClass* ComponentClass, const struct FGuid& NativeID, class AARActor* SpawnedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARLifeCycleComponent", "InstanceARActorSpawnedDelegate__DelegateSignature");

	Params::UARLifeCycleComponent_InstanceARActorSpawnedDelegate__DelegateSignature_Params Parms{};

	Parms.ComponentClass = ComponentClass;
	Parms.NativeID = NativeID;
	Parms.SpawnedActor = SpawnedActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Class AugmentedReality.ARLightEstimate
// (None)

class UClass* UARLightEstimate::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARLightEstimate");

	return Clss;
}


// ARLightEstimate AugmentedReality.Default__ARLightEstimate
// (Public, ClassDefaultObject, ArchetypeObject)

class UARLightEstimate* UARLightEstimate::GetDefaultObj()
{
	static class UARLightEstimate* Default = nullptr;

	if (!Default)
		Default = static_cast<UARLightEstimate*>(UARLightEstimate::StaticClass()->DefaultObject);

	return Default;
}


// Class AugmentedReality.ARBasicLightEstimate
// (None)

class UClass* UARBasicLightEstimate::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARBasicLightEstimate");

	return Clss;
}


// ARBasicLightEstimate AugmentedReality.Default__ARBasicLightEstimate
// (Public, ClassDefaultObject, ArchetypeObject)

class UARBasicLightEstimate* UARBasicLightEstimate::GetDefaultObj()
{
	static class UARBasicLightEstimate* Default = nullptr;

	if (!Default)
		Default = static_cast<UARBasicLightEstimate*>(UARBasicLightEstimate::StaticClass()->DefaultObject);

	return Default;
}


// Function AugmentedReality.ARBasicLightEstimate.GetAmbientIntensityLumens
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARBasicLightEstimate::GetAmbientIntensityLumens(float* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBasicLightEstimate", "GetAmbientIntensityLumens");

	Params::UARBasicLightEstimate_GetAmbientIntensityLumens_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AugmentedReality.ARBasicLightEstimate.GetAmbientColorTemperatureKelvin
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARBasicLightEstimate::GetAmbientColorTemperatureKelvin(float* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBasicLightEstimate", "GetAmbientColorTemperatureKelvin");

	Params::UARBasicLightEstimate_GetAmbientColorTemperatureKelvin_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AugmentedReality.ARBasicLightEstimate.GetAmbientColor
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARBasicLightEstimate::GetAmbientColor(struct FLinearColor* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARBasicLightEstimate", "GetAmbientColor");

	Params::UARBasicLightEstimate_GetAmbientColor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Class AugmentedReality.AROriginActor
// (Actor)

class UClass* AAROriginActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AROriginActor");

	return Clss;
}


// AROriginActor AugmentedReality.Default__AROriginActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AAROriginActor* AAROriginActor::GetDefaultObj()
{
	static class AAROriginActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AAROriginActor*>(AAROriginActor::StaticClass()->DefaultObject);

	return Default;
}


// Class AugmentedReality.ARPin
// (None)

class UClass* UARPin::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARPin");

	return Clss;
}


// ARPin AugmentedReality.Default__ARPin
// (Public, ClassDefaultObject, ArchetypeObject)

class UARPin* UARPin::GetDefaultObj()
{
	static class UARPin* Default = nullptr;

	if (!Default)
		Default = static_cast<UARPin*>(UARPin::StaticClass()->DefaultObject);

	return Default;
}


// Function AugmentedReality.ARPin.GetTrackingState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EARTrackingState        ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARPin::GetTrackingState(enum class EARTrackingState* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARPin", "GetTrackingState");

	Params::UARPin_GetTrackingState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AugmentedReality.ARPin.GetTrackedGeometry
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UARTrackedGeometry*          ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARPin::GetTrackedGeometry(class UARTrackedGeometry** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARPin", "GetTrackedGeometry");

	Params::UARPin_GetTrackedGeometry_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AugmentedReality.ARPin.GetPinnedComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USceneComponent*             ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARPin::GetPinnedComponent(class USceneComponent** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARPin", "GetPinnedComponent");

	Params::UARPin_GetPinnedComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AugmentedReality.ARPin.GetLocalToWorldTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform                  ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARPin::GetLocalToWorldTransform(struct FTransform* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARPin", "GetLocalToWorldTransform");

	Params::UARPin_GetLocalToWorldTransform_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function AugmentedReality.ARPin.GetLocalToTrackingTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform                  ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARPin::GetLocalToTrackingTransform(struct FTransform* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARPin", "GetLocalToTrackingTransform");

	Params::UARPin_GetLocalToTrackingTransform_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function AugmentedReality.ARPin.GetDebugName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARPin::GetDebugName(class FName* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARPin", "GetDebugName");

	Params::UARPin_GetDebugName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AugmentedReality.ARPin.DebugDraw
// (Native, Public, HasOutParams, HasDefaults, Const)
// Parameters:
// class UWorld*                      World                                                            (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
// struct FLinearColor                Color                                                            (Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
// float                              Scale                                                            (Edit, ExportObject, Parm, ZeroConstructor, Transient, Config)
// float                              PersistForSeconds                                                (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

float UARPin::DebugDraw(struct FLinearColor* Color, float Scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARPin", "DebugDraw");

	Params::UARPin_DebugDraw_Params Parms{};

	Parms.Scale = Scale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

	return Parms.ReturnValue;

}


// Class AugmentedReality.ARSessionConfig
// (None)

class UClass* UARSessionConfig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARSessionConfig");

	return Clss;
}


// ARSessionConfig AugmentedReality.Default__ARSessionConfig
// (Public, ClassDefaultObject, ArchetypeObject)

class UARSessionConfig* UARSessionConfig::GetDefaultObj()
{
	static class UARSessionConfig* Default = nullptr;

	if (!Default)
		Default = static_cast<UARSessionConfig*>(UARSessionConfig::StaticClass()->DefaultObject);

	return Default;
}


// Function AugmentedReality.ARSessionConfig.ShouldResetTrackedObjects
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARSessionConfig::ShouldResetTrackedObjects(bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSessionConfig", "ShouldResetTrackedObjects");

	Params::UARSessionConfig_ShouldResetTrackedObjects_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AugmentedReality.ARSessionConfig.ShouldResetCameraTracking
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARSessionConfig::ShouldResetCameraTracking(bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSessionConfig", "ShouldResetCameraTracking");

	Params::UARSessionConfig_ShouldResetCameraTracking_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AugmentedReality.ARSessionConfig.ShouldRenderCameraOverlay
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARSessionConfig::ShouldRenderCameraOverlay(bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSessionConfig", "ShouldRenderCameraOverlay");

	Params::UARSessionConfig_ShouldRenderCameraOverlay_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AugmentedReality.ARSessionConfig.ShouldEnableCameraTracking
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARSessionConfig::ShouldEnableCameraTracking(bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSessionConfig", "ShouldEnableCameraTracking");

	Params::UARSessionConfig_ShouldEnableCameraTracking_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AugmentedReality.ARSessionConfig.ShouldEnableAutoFocus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARSessionConfig::ShouldEnableAutoFocus(bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSessionConfig", "ShouldEnableAutoFocus");

	Params::UARSessionConfig_ShouldEnableAutoFocus_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AugmentedReality.ARSessionConfig.SetWorldMapData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<uint8>                      WorldMapData                                                     (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

TArray<uint8> UARSessionConfig::SetWorldMapData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSessionConfig", "SetWorldMapData");

	Params::UARSessionConfig_SetWorldMapData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AugmentedReality.ARSessionConfig.SetSessionTrackingFeatureToEnable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EARSessionTrackingFeatureInSessionTrackingFeature                                         (ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

enum class EARSessionTrackingFeature UARSessionConfig::SetSessionTrackingFeatureToEnable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSessionConfig", "SetSessionTrackingFeatureToEnable");

	Params::UARSessionConfig_SetSessionTrackingFeatureToEnable_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AugmentedReality.ARSessionConfig.SetSceneReconstructionMethod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EARSceneReconstruction  InSceneReconstructionMethod                                      (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

enum class EARSceneReconstruction UARSessionConfig::SetSceneReconstructionMethod()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSessionConfig", "SetSceneReconstructionMethod");

	Params::UARSessionConfig_SetSceneReconstructionMethod_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AugmentedReality.ARSessionConfig.SetResetTrackedObjects
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewValue                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)

bool UARSessionConfig::SetResetTrackedObjects()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSessionConfig", "SetResetTrackedObjects");

	Params::UARSessionConfig_SetResetTrackedObjects_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AugmentedReality.ARSessionConfig.SetResetCameraTracking
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewValue                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)

bool UARSessionConfig::SetResetCameraTracking()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSessionConfig", "SetResetCameraTracking");

	Params::UARSessionConfig_SetResetCameraTracking_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AugmentedReality.ARSessionConfig.SetFaceTrackingUpdate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EARFaceTrackingUpdate   InUpdate                                                         (ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

enum class EARFaceTrackingUpdate UARSessionConfig::SetFaceTrackingUpdate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSessionConfig", "SetFaceTrackingUpdate");

	Params::UARSessionConfig_SetFaceTrackingUpdate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AugmentedReality.ARSessionConfig.SetFaceTrackingDirection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EARFaceTrackingDirectionInDirection                                                      (ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UARSessionConfig::SetFaceTrackingDirection(enum class EARFaceTrackingDirection* InDirection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSessionConfig", "SetFaceTrackingDirection");

	Params::UARSessionConfig_SetFaceTrackingDirection_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InDirection != nullptr)
		*InDirection = Parms.InDirection;

}


// Function AugmentedReality.ARSessionConfig.SetEnableAutoFocus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewValue                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)

bool UARSessionConfig::SetEnableAutoFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSessionConfig", "SetEnableAutoFocus");

	Params::UARSessionConfig_SetEnableAutoFocus_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AugmentedReality.ARSessionConfig.SetDesiredVideoFormat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FARVideoFormat              NewFormat                                                        (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

struct FARVideoFormat UARSessionConfig::SetDesiredVideoFormat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSessionConfig", "SetDesiredVideoFormat");

	Params::UARSessionConfig_SetDesiredVideoFormat_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AugmentedReality.ARSessionConfig.SetCandidateObjectList
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class UARCandidateObject*>  InCandidateObjects                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

TArray<class UARCandidateObject*> UARSessionConfig::SetCandidateObjectList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSessionConfig", "SetCandidateObjectList");

	Params::UARSessionConfig_SetCandidateObjectList_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AugmentedReality.ARSessionConfig.GetWorldMapData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<uint8>                      ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARSessionConfig::GetWorldMapData(TArray<uint8>* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSessionConfig", "GetWorldMapData");

	Params::UARSessionConfig_GetWorldMapData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function AugmentedReality.ARSessionConfig.GetWorldAlignment
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EARWorldAlignment       ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARSessionConfig::GetWorldAlignment(enum class EARWorldAlignment* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSessionConfig", "GetWorldAlignment");

	Params::UARSessionConfig_GetWorldAlignment_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AugmentedReality.ARSessionConfig.GetSessionType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EARSessionType          ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARSessionConfig::GetSessionType(enum class EARSessionType* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSessionConfig", "GetSessionType");

	Params::UARSessionConfig_GetSessionType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AugmentedReality.ARSessionConfig.GetSceneReconstructionMethod
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EARSceneReconstruction  ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARSessionConfig::GetSceneReconstructionMethod(enum class EARSceneReconstruction* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSessionConfig", "GetSceneReconstructionMethod");

	Params::UARSessionConfig_GetSceneReconstructionMethod_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AugmentedReality.ARSessionConfig.GetPlaneDetectionMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EARPlaneDetectionMode   ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARSessionConfig::GetPlaneDetectionMode(enum class EARPlaneDetectionMode* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSessionConfig", "GetPlaneDetectionMode");

	Params::UARSessionConfig_GetPlaneDetectionMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AugmentedReality.ARSessionConfig.GetMaxNumSimultaneousImagesTracked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARSessionConfig::GetMaxNumSimultaneousImagesTracked(int32* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSessionConfig", "GetMaxNumSimultaneousImagesTracked");

	Params::UARSessionConfig_GetMaxNumSimultaneousImagesTracked_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AugmentedReality.ARSessionConfig.GetLightEstimationMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EARLightEstimationMode  ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARSessionConfig::GetLightEstimationMode(enum class EARLightEstimationMode* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSessionConfig", "GetLightEstimationMode");

	Params::UARSessionConfig_GetLightEstimationMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AugmentedReality.ARSessionConfig.GetFrameSyncMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EARFrameSyncMode        ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARSessionConfig::GetFrameSyncMode(enum class EARFrameSyncMode* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSessionConfig", "GetFrameSyncMode");

	Params::UARSessionConfig_GetFrameSyncMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AugmentedReality.ARSessionConfig.GetFaceTrackingUpdate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EARFaceTrackingUpdate   ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARSessionConfig::GetFaceTrackingUpdate(enum class EARFaceTrackingUpdate* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSessionConfig", "GetFaceTrackingUpdate");

	Params::UARSessionConfig_GetFaceTrackingUpdate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AugmentedReality.ARSessionConfig.GetFaceTrackingDirection
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EARFaceTrackingDirectionReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARSessionConfig::GetFaceTrackingDirection(enum class EARFaceTrackingDirection* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSessionConfig", "GetFaceTrackingDirection");

	Params::UARSessionConfig_GetFaceTrackingDirection_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AugmentedReality.ARSessionConfig.GetEnvironmentCaptureProbeType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EAREnvironmentCaptureProbeTypeReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARSessionConfig::GetEnvironmentCaptureProbeType(enum class EAREnvironmentCaptureProbeType* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSessionConfig", "GetEnvironmentCaptureProbeType");

	Params::UARSessionConfig_GetEnvironmentCaptureProbeType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AugmentedReality.ARSessionConfig.GetEnabledSessionTrackingFeature
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EARSessionTrackingFeatureReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARSessionConfig::GetEnabledSessionTrackingFeature(enum class EARSessionTrackingFeature* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSessionConfig", "GetEnabledSessionTrackingFeature");

	Params::UARSessionConfig_GetEnabledSessionTrackingFeature_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AugmentedReality.ARSessionConfig.GetDesiredVideoFormat
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FARVideoFormat              ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARSessionConfig::GetDesiredVideoFormat(struct FARVideoFormat* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSessionConfig", "GetDesiredVideoFormat");

	Params::UARSessionConfig_GetDesiredVideoFormat_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function AugmentedReality.ARSessionConfig.GetCandidateObjectList
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UARCandidateObject*>  ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARSessionConfig::GetCandidateObjectList(TArray<class UARCandidateObject*>* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSessionConfig", "GetCandidateObjectList");

	Params::UARSessionConfig_GetCandidateObjectList_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function AugmentedReality.ARSessionConfig.GetCandidateImageList
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UARCandidateImage*>   ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARSessionConfig::GetCandidateImageList(TArray<class UARCandidateImage*>* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSessionConfig", "GetCandidateImageList");

	Params::UARSessionConfig_GetCandidateImageList_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function AugmentedReality.ARSessionConfig.AddCandidateObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UARCandidateObject*          CandidateObject                                                  (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

class UARCandidateObject* UARSessionConfig::AddCandidateObject()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSessionConfig", "AddCandidateObject");

	Params::UARSessionConfig_AddCandidateObject_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AugmentedReality.ARSessionConfig.AddCandidateImage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UARCandidateImage*           NewCandidateImage                                                (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

class UARCandidateImage* UARSessionConfig::AddCandidateImage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSessionConfig", "AddCandidateImage");

	Params::UARSessionConfig_AddCandidateImage_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class AugmentedReality.ARSharedWorldGameMode
// (Actor)

class UClass* AARSharedWorldGameMode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARSharedWorldGameMode");

	return Clss;
}


// ARSharedWorldGameMode AugmentedReality.Default__ARSharedWorldGameMode
// (Public, ClassDefaultObject, ArchetypeObject)

class AARSharedWorldGameMode* AARSharedWorldGameMode::GetDefaultObj()
{
	static class AARSharedWorldGameMode* Default = nullptr;

	if (!Default)
		Default = static_cast<AARSharedWorldGameMode*>(AARSharedWorldGameMode::StaticClass()->DefaultObject);

	return Default;
}


// Function AugmentedReality.ARSharedWorldGameMode.SetPreviewImageData
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// TArray<uint8>                      ImageData                                                        (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

void AARSharedWorldGameMode::SetPreviewImageData(TArray<uint8>* ImageData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSharedWorldGameMode", "SetPreviewImageData");

	Params::AARSharedWorldGameMode_SetPreviewImageData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ImageData != nullptr)
		*ImageData = std::move(Parms.ImageData);

}


// Function AugmentedReality.ARSharedWorldGameMode.SetARWorldSharingIsReady
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void AARSharedWorldGameMode::SetARWorldSharingIsReady()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSharedWorldGameMode", "SetARWorldSharingIsReady");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARSharedWorldGameMode.SetARSharedWorldData
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// TArray<uint8>                      ARWorldData                                                      (ConstParm, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

void AARSharedWorldGameMode::SetARSharedWorldData(TArray<uint8>* ARWorldData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSharedWorldGameMode", "SetARSharedWorldData");

	Params::AARSharedWorldGameMode_SetARSharedWorldData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ARWorldData != nullptr)
		*ARWorldData = std::move(Parms.ARWorldData);

}


// Function AugmentedReality.ARSharedWorldGameMode.GetARSharedWorldGameState
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class AARSharedWorldGameState*     ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void AARSharedWorldGameMode::GetARSharedWorldGameState(class AARSharedWorldGameState** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSharedWorldGameMode", "GetARSharedWorldGameState");

	Params::AARSharedWorldGameMode_GetARSharedWorldGameState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Class AugmentedReality.ARSharedWorldGameState
// (Actor)

class UClass* AARSharedWorldGameState::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARSharedWorldGameState");

	return Clss;
}


// ARSharedWorldGameState AugmentedReality.Default__ARSharedWorldGameState
// (Public, ClassDefaultObject, ArchetypeObject)

class AARSharedWorldGameState* AARSharedWorldGameState::GetDefaultObj()
{
	static class AARSharedWorldGameState* Default = nullptr;

	if (!Default)
		Default = static_cast<AARSharedWorldGameState*>(AARSharedWorldGameState::StaticClass()->DefaultObject);

	return Default;
}


// Function AugmentedReality.ARSharedWorldGameState.K2_OnARWorldMapIsReady
// (Event, Public, BlueprintEvent)
// Parameters:

void AARSharedWorldGameState::K2_OnARWorldMapIsReady()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSharedWorldGameState", "K2_OnARWorldMapIsReady");



	UObject::ProcessEvent(Func, nullptr);

}


// Class AugmentedReality.ARSharedWorldPlayerController
// (Actor, PlayerController)

class UClass* AARSharedWorldPlayerController::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARSharedWorldPlayerController");

	return Clss;
}


// ARSharedWorldPlayerController AugmentedReality.Default__ARSharedWorldPlayerController
// (Public, ClassDefaultObject, ArchetypeObject)

class AARSharedWorldPlayerController* AARSharedWorldPlayerController::GetDefaultObj()
{
	static class AARSharedWorldPlayerController* Default = nullptr;

	if (!Default)
		Default = static_cast<AARSharedWorldPlayerController*>(AARSharedWorldPlayerController::StaticClass()->DefaultObject);

	return Default;
}


// Function AugmentedReality.ARSharedWorldPlayerController.ServerMarkReadyForReceiving
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:

void AARSharedWorldPlayerController::ServerMarkReadyForReceiving()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSharedWorldPlayerController", "ServerMarkReadyForReceiving");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdatePreviewImageData
// (Net, NetReliable, Native, Event, Public, NetClient, NetValidate)
// Parameters:
// int32                              Offset                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
// TArray<uint8>                      Buffer                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

int32 AARSharedWorldPlayerController::ClientUpdatePreviewImageData(TArray<uint8>* Buffer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSharedWorldPlayerController", "ClientUpdatePreviewImageData");

	Params::AARSharedWorldPlayerController_ClientUpdatePreviewImageData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Buffer != nullptr)
		*Buffer = std::move(Parms.Buffer);

	return Parms.ReturnValue;

}


// Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdateARWorldData
// (Net, NetReliable, Native, Event, Public, NetClient, NetValidate)
// Parameters:
// int32                              Offset                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
// TArray<uint8>                      Buffer                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

int32 AARSharedWorldPlayerController::ClientUpdateARWorldData(TArray<uint8>* Buffer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSharedWorldPlayerController", "ClientUpdateARWorldData");

	Params::AARSharedWorldPlayerController_ClientUpdateARWorldData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Buffer != nullptr)
		*Buffer = std::move(Parms.Buffer);

	return Parms.ReturnValue;

}


// Function AugmentedReality.ARSharedWorldPlayerController.ClientInitSharedWorld
// (Net, NetReliable, Native, Event, Public, NetClient, NetValidate)
// Parameters:
// int32                              PreviewImageSize                                                 (Edit, ConstParm, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              ARWorldDataSize                                                  (ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

void AARSharedWorldPlayerController::ClientInitSharedWorld(int32 PreviewImageSize, int32 ARWorldDataSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSharedWorldPlayerController", "ClientInitSharedWorld");

	Params::AARSharedWorldPlayerController_ClientInitSharedWorld_Params Parms{};

	Parms.PreviewImageSize = PreviewImageSize;
	Parms.ARWorldDataSize = ARWorldDataSize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AugmentedReality.ARSkyLight
// (Actor)

class UClass* AARSkyLight::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARSkyLight");

	return Clss;
}


// ARSkyLight AugmentedReality.Default__ARSkyLight
// (Public, ClassDefaultObject, ArchetypeObject)

class AARSkyLight* AARSkyLight::GetDefaultObj()
{
	static class AARSkyLight* Default = nullptr;

	if (!Default)
		Default = static_cast<AARSkyLight*>(AARSkyLight::StaticClass()->DefaultObject);

	return Default;
}


// Function AugmentedReality.ARSkyLight.SetEnvironmentCaptureProbe
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAREnvironmentCaptureProbe*  InCaptureProbe                                                   (BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

void AARSkyLight::SetEnvironmentCaptureProbe(class UAREnvironmentCaptureProbe* InCaptureProbe)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSkyLight", "SetEnvironmentCaptureProbe");

	Params::AARSkyLight_SetEnvironmentCaptureProbe_Params Parms{};

	Parms.InCaptureProbe = InCaptureProbe;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AugmentedReality.ARTexture
// (None)

class UClass* UARTexture::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARTexture");

	return Clss;
}


// ARTexture AugmentedReality.Default__ARTexture
// (Public, ClassDefaultObject, ArchetypeObject)

class UARTexture* UARTexture::GetDefaultObj()
{
	static class UARTexture* Default = nullptr;

	if (!Default)
		Default = static_cast<UARTexture*>(UARTexture::StaticClass()->DefaultObject);

	return Default;
}


// Class AugmentedReality.ARTextureCameraImage
// (None)

class UClass* UARTextureCameraImage::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARTextureCameraImage");

	return Clss;
}


// ARTextureCameraImage AugmentedReality.Default__ARTextureCameraImage
// (Public, ClassDefaultObject, ArchetypeObject)

class UARTextureCameraImage* UARTextureCameraImage::GetDefaultObj()
{
	static class UARTextureCameraImage* Default = nullptr;

	if (!Default)
		Default = static_cast<UARTextureCameraImage*>(UARTextureCameraImage::StaticClass()->DefaultObject);

	return Default;
}


// Class AugmentedReality.ARTextureCameraDepth
// (None)

class UClass* UARTextureCameraDepth::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARTextureCameraDepth");

	return Clss;
}


// ARTextureCameraDepth AugmentedReality.Default__ARTextureCameraDepth
// (Public, ClassDefaultObject, ArchetypeObject)

class UARTextureCameraDepth* UARTextureCameraDepth::GetDefaultObj()
{
	static class UARTextureCameraDepth* Default = nullptr;

	if (!Default)
		Default = static_cast<UARTextureCameraDepth*>(UARTextureCameraDepth::StaticClass()->DefaultObject);

	return Default;
}


// Class AugmentedReality.AREnvironmentCaptureProbeTexture
// (None)

class UClass* UAREnvironmentCaptureProbeTexture::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AREnvironmentCaptureProbeTexture");

	return Clss;
}


// AREnvironmentCaptureProbeTexture AugmentedReality.Default__AREnvironmentCaptureProbeTexture
// (Public, ClassDefaultObject, ArchetypeObject)

class UAREnvironmentCaptureProbeTexture* UAREnvironmentCaptureProbeTexture::GetDefaultObj()
{
	static class UAREnvironmentCaptureProbeTexture* Default = nullptr;

	if (!Default)
		Default = static_cast<UAREnvironmentCaptureProbeTexture*>(UAREnvironmentCaptureProbeTexture::StaticClass()->DefaultObject);

	return Default;
}


// Class AugmentedReality.ARTraceResultDummy
// (None)

class UClass* UARTraceResultDummy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARTraceResultDummy");

	return Clss;
}


// ARTraceResultDummy AugmentedReality.Default__ARTraceResultDummy
// (Public, ClassDefaultObject, ArchetypeObject)

class UARTraceResultDummy* UARTraceResultDummy::GetDefaultObj()
{
	static class UARTraceResultDummy* Default = nullptr;

	if (!Default)
		Default = static_cast<UARTraceResultDummy*>(UARTraceResultDummy::StaticClass()->DefaultObject);

	return Default;
}


// Class AugmentedReality.ARTrackedGeometry
// (None)

class UClass* UARTrackedGeometry::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARTrackedGeometry");

	return Clss;
}


// ARTrackedGeometry AugmentedReality.Default__ARTrackedGeometry
// (Public, ClassDefaultObject, ArchetypeObject)

class UARTrackedGeometry* UARTrackedGeometry::GetDefaultObj()
{
	static class UARTrackedGeometry* Default = nullptr;

	if (!Default)
		Default = static_cast<UARTrackedGeometry*>(UARTrackedGeometry::StaticClass()->DefaultObject);

	return Default;
}


// Function AugmentedReality.ARTrackedGeometry.IsTracked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARTrackedGeometry::IsTracked(bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARTrackedGeometry", "IsTracked");

	Params::UARTrackedGeometry_IsTracked_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AugmentedReality.ARTrackedGeometry.HasSpatialMeshUsageFlag
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EARSpatialMeshUsageFlagsInFlag                                                           (Edit, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARTrackedGeometry::HasSpatialMeshUsageFlag(enum class EARSpatialMeshUsageFlags InFlag, bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARTrackedGeometry", "HasSpatialMeshUsageFlag");

	Params::UARTrackedGeometry_HasSpatialMeshUsageFlag_Params Parms{};

	Parms.InFlag = InFlag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AugmentedReality.ARTrackedGeometry.GetUnderlyingMesh
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMRMeshComponent*            ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARTrackedGeometry::GetUnderlyingMesh(class UMRMeshComponent** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARTrackedGeometry", "GetUnderlyingMesh");

	Params::UARTrackedGeometry_GetUnderlyingMesh_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AugmentedReality.ARTrackedGeometry.GetTrackingState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EARTrackingState        ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARTrackedGeometry::GetTrackingState(enum class EARTrackingState* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARTrackedGeometry", "GetTrackingState");

	Params::UARTrackedGeometry_GetTrackingState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AugmentedReality.ARTrackedGeometry.GetObjectClassification
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EARObjectClassification ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARTrackedGeometry::GetObjectClassification(enum class EARObjectClassification* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARTrackedGeometry", "GetObjectClassification");

	Params::UARTrackedGeometry_GetObjectClassification_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AugmentedReality.ARTrackedGeometry.GetName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARTrackedGeometry::GetName(class FString* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARTrackedGeometry", "GetName");

	Params::UARTrackedGeometry_GetName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function AugmentedReality.ARTrackedGeometry.GetLocalToWorldTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform                  ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARTrackedGeometry::GetLocalToWorldTransform(struct FTransform* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARTrackedGeometry", "GetLocalToWorldTransform");

	Params::UARTrackedGeometry_GetLocalToWorldTransform_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function AugmentedReality.ARTrackedGeometry.GetLocalToTrackingTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform                  ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARTrackedGeometry::GetLocalToTrackingTransform(struct FTransform* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARTrackedGeometry", "GetLocalToTrackingTransform");

	Params::UARTrackedGeometry_GetLocalToTrackingTransform_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function AugmentedReality.ARTrackedGeometry.GetLastUpdateTimestamp
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARTrackedGeometry::GetLastUpdateTimestamp(float* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARTrackedGeometry", "GetLastUpdateTimestamp");

	Params::UARTrackedGeometry_GetLastUpdateTimestamp_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AugmentedReality.ARTrackedGeometry.GetLastUpdateFrameNumber
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARTrackedGeometry::GetLastUpdateFrameNumber(int32* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARTrackedGeometry", "GetLastUpdateFrameNumber");

	Params::UARTrackedGeometry_GetLastUpdateFrameNumber_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AugmentedReality.ARTrackedGeometry.GetDebugName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARTrackedGeometry::GetDebugName(class FName* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARTrackedGeometry", "GetDebugName");

	Params::UARTrackedGeometry_GetDebugName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Class AugmentedReality.ARPlaneGeometry
// (None)

class UClass* UARPlaneGeometry::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARPlaneGeometry");

	return Clss;
}


// ARPlaneGeometry AugmentedReality.Default__ARPlaneGeometry
// (Public, ClassDefaultObject, ArchetypeObject)

class UARPlaneGeometry* UARPlaneGeometry::GetDefaultObj()
{
	static class UARPlaneGeometry* Default = nullptr;

	if (!Default)
		Default = static_cast<UARPlaneGeometry*>(UARPlaneGeometry::StaticClass()->DefaultObject);

	return Default;
}


// Function AugmentedReality.ARPlaneGeometry.GetSubsumedBy
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UARPlaneGeometry*            ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARPlaneGeometry::GetSubsumedBy(class UARPlaneGeometry** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARPlaneGeometry", "GetSubsumedBy");

	Params::UARPlaneGeometry_GetSubsumedBy_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AugmentedReality.ARPlaneGeometry.GetOrientation
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EARPlaneOrientation     ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARPlaneGeometry::GetOrientation(enum class EARPlaneOrientation* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARPlaneGeometry", "GetOrientation");

	Params::UARPlaneGeometry_GetOrientation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AugmentedReality.ARPlaneGeometry.GetExtent
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARPlaneGeometry::GetExtent(struct FVector* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARPlaneGeometry", "GetExtent");

	Params::UARPlaneGeometry_GetExtent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function AugmentedReality.ARPlaneGeometry.GetCenter
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARPlaneGeometry::GetCenter(struct FVector* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARPlaneGeometry", "GetCenter");

	Params::UARPlaneGeometry_GetCenter_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function AugmentedReality.ARPlaneGeometry.GetBoundaryPolygonInLocalSpace
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FVector>             ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARPlaneGeometry::GetBoundaryPolygonInLocalSpace(TArray<struct FVector>* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARPlaneGeometry", "GetBoundaryPolygonInLocalSpace");

	Params::UARPlaneGeometry_GetBoundaryPolygonInLocalSpace_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Class AugmentedReality.ARTrackedPoint
// (None)

class UClass* UARTrackedPoint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARTrackedPoint");

	return Clss;
}


// ARTrackedPoint AugmentedReality.Default__ARTrackedPoint
// (Public, ClassDefaultObject, ArchetypeObject)

class UARTrackedPoint* UARTrackedPoint::GetDefaultObj()
{
	static class UARTrackedPoint* Default = nullptr;

	if (!Default)
		Default = static_cast<UARTrackedPoint*>(UARTrackedPoint::StaticClass()->DefaultObject);

	return Default;
}


// Class AugmentedReality.ARTrackedImage
// (None)

class UClass* UARTrackedImage::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARTrackedImage");

	return Clss;
}


// ARTrackedImage AugmentedReality.Default__ARTrackedImage
// (Public, ClassDefaultObject, ArchetypeObject)

class UARTrackedImage* UARTrackedImage::GetDefaultObj()
{
	static class UARTrackedImage* Default = nullptr;

	if (!Default)
		Default = static_cast<UARTrackedImage*>(UARTrackedImage::StaticClass()->DefaultObject);

	return Default;
}


// Function AugmentedReality.ARTrackedImage.GetEstimateSize
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARTrackedImage::GetEstimateSize(struct FVector2D* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARTrackedImage", "GetEstimateSize");

	Params::UARTrackedImage_GetEstimateSize_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function AugmentedReality.ARTrackedImage.GetDetectedImage
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UARCandidateImage*           ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARTrackedImage::GetDetectedImage(class UARCandidateImage** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARTrackedImage", "GetDetectedImage");

	Params::UARTrackedImage_GetDetectedImage_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Class AugmentedReality.ARTrackedQRCode
// (None)

class UClass* UARTrackedQRCode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARTrackedQRCode");

	return Clss;
}


// ARTrackedQRCode AugmentedReality.Default__ARTrackedQRCode
// (Public, ClassDefaultObject, ArchetypeObject)

class UARTrackedQRCode* UARTrackedQRCode::GetDefaultObj()
{
	static class UARTrackedQRCode* Default = nullptr;

	if (!Default)
		Default = static_cast<UARTrackedQRCode*>(UARTrackedQRCode::StaticClass()->DefaultObject);

	return Default;
}


// Class AugmentedReality.ARFaceGeometry
// (None)

class UClass* UARFaceGeometry::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARFaceGeometry");

	return Clss;
}


// ARFaceGeometry AugmentedReality.Default__ARFaceGeometry
// (Public, ClassDefaultObject, ArchetypeObject)

class UARFaceGeometry* UARFaceGeometry::GetDefaultObj()
{
	static class UARFaceGeometry* Default = nullptr;

	if (!Default)
		Default = static_cast<UARFaceGeometry*>(UARFaceGeometry::StaticClass()->DefaultObject);

	return Default;
}


// Function AugmentedReality.ARFaceGeometry.GetWorldSpaceEyeTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EAREye                  Eye                                                              (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// struct FTransform                  ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARFaceGeometry::GetWorldSpaceEyeTransform(enum class EAREye Eye, struct FTransform* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFaceGeometry", "GetWorldSpaceEyeTransform");

	Params::UARFaceGeometry_GetWorldSpaceEyeTransform_Params Parms{};

	Parms.Eye = Eye;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function AugmentedReality.ARFaceGeometry.GetLocalSpaceEyeTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EAREye                  Eye                                                              (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// struct FTransform                  ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARFaceGeometry::GetLocalSpaceEyeTransform(enum class EAREye Eye, struct FTransform* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFaceGeometry", "GetLocalSpaceEyeTransform");

	Params::UARFaceGeometry_GetLocalSpaceEyeTransform_Params Parms{};

	Parms.Eye = Eye;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function AugmentedReality.ARFaceGeometry.GetBlendShapeValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EARFaceBlendShape       BlendShape                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARFaceGeometry::GetBlendShapeValue(enum class EARFaceBlendShape BlendShape, float* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFaceGeometry", "GetBlendShapeValue");

	Params::UARFaceGeometry_GetBlendShapeValue_Params Parms{};

	Parms.BlendShape = BlendShape;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AugmentedReality.ARFaceGeometry.GetBlendShapes
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TMap<enum class EARFaceBlendShape, float>ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARFaceGeometry::GetBlendShapes(TMap<enum class EARFaceBlendShape, float>* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFaceGeometry", "GetBlendShapes");

	Params::UARFaceGeometry_GetBlendShapes_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Class AugmentedReality.AREnvironmentCaptureProbe
// (None)

class UClass* UAREnvironmentCaptureProbe::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AREnvironmentCaptureProbe");

	return Clss;
}


// AREnvironmentCaptureProbe AugmentedReality.Default__AREnvironmentCaptureProbe
// (Public, ClassDefaultObject, ArchetypeObject)

class UAREnvironmentCaptureProbe* UAREnvironmentCaptureProbe::GetDefaultObj()
{
	static class UAREnvironmentCaptureProbe* Default = nullptr;

	if (!Default)
		Default = static_cast<UAREnvironmentCaptureProbe*>(UAREnvironmentCaptureProbe::StaticClass()->DefaultObject);

	return Default;
}


// Function AugmentedReality.AREnvironmentCaptureProbe.GetExtent
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UAREnvironmentCaptureProbe::GetExtent(struct FVector* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AREnvironmentCaptureProbe", "GetExtent");

	Params::UAREnvironmentCaptureProbe_GetExtent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function AugmentedReality.AREnvironmentCaptureProbe.GetEnvironmentCaptureTexture
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAREnvironmentCaptureProbeTexture*ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UAREnvironmentCaptureProbe::GetEnvironmentCaptureTexture(class UAREnvironmentCaptureProbeTexture** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AREnvironmentCaptureProbe", "GetEnvironmentCaptureTexture");

	Params::UAREnvironmentCaptureProbe_GetEnvironmentCaptureTexture_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Class AugmentedReality.ARTrackedObject
// (None)

class UClass* UARTrackedObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARTrackedObject");

	return Clss;
}


// ARTrackedObject AugmentedReality.Default__ARTrackedObject
// (Public, ClassDefaultObject, ArchetypeObject)

class UARTrackedObject* UARTrackedObject::GetDefaultObj()
{
	static class UARTrackedObject* Default = nullptr;

	if (!Default)
		Default = static_cast<UARTrackedObject*>(UARTrackedObject::StaticClass()->DefaultObject);

	return Default;
}


// Function AugmentedReality.ARTrackedObject.GetDetectedObject
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UARCandidateObject*          ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARTrackedObject::GetDetectedObject(class UARCandidateObject** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARTrackedObject", "GetDetectedObject");

	Params::UARTrackedObject_GetDetectedObject_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Class AugmentedReality.ARTrackedPose
// (None)

class UClass* UARTrackedPose::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARTrackedPose");

	return Clss;
}


// ARTrackedPose AugmentedReality.Default__ARTrackedPose
// (Public, ClassDefaultObject, ArchetypeObject)

class UARTrackedPose* UARTrackedPose::GetDefaultObj()
{
	static class UARTrackedPose* Default = nullptr;

	if (!Default)
		Default = static_cast<UARTrackedPose*>(UARTrackedPose::StaticClass()->DefaultObject);

	return Default;
}


// Function AugmentedReality.ARTrackedPose.GetTrackedPoseData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FARPose3D                   ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARTrackedPose::GetTrackedPoseData(struct FARPose3D* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARTrackedPose", "GetTrackedPoseData");

	Params::UARTrackedPose_GetTrackedPoseData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Class AugmentedReality.ARMeshGeometry
// (None)

class UClass* UARMeshGeometry::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARMeshGeometry");

	return Clss;
}


// ARMeshGeometry AugmentedReality.Default__ARMeshGeometry
// (Public, ClassDefaultObject, ArchetypeObject)

class UARMeshGeometry* UARMeshGeometry::GetDefaultObj()
{
	static class UARMeshGeometry* Default = nullptr;

	if (!Default)
		Default = static_cast<UARMeshGeometry*>(UARMeshGeometry::StaticClass()->DefaultObject);

	return Default;
}


// Function AugmentedReality.ARMeshGeometry.GetObjectClassificationAtLocation
// (Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     InWorldLocation                                                  (ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// enum class EARObjectClassification OutClassification                                                (EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     OutClassificationLocation                                        (ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// float                              MaxLocationDiff                                                  (Edit, ExportObject, Net, Parm, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UARMeshGeometry::GetObjectClassificationAtLocation(bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARMeshGeometry", "GetObjectClassificationAtLocation");

	Params::UARMeshGeometry_GetObjectClassificationAtLocation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Class AugmentedReality.ARGeoAnchor
// (None)

class UClass* UARGeoAnchor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARGeoAnchor");

	return Clss;
}


// ARGeoAnchor AugmentedReality.Default__ARGeoAnchor
// (Public, ClassDefaultObject, ArchetypeObject)

class UARGeoAnchor* UARGeoAnchor::GetDefaultObj()
{
	static class UARGeoAnchor* Default = nullptr;

	if (!Default)
		Default = static_cast<UARGeoAnchor*>(UARGeoAnchor::StaticClass()->DefaultObject);

	return Default;
}


// Function AugmentedReality.ARGeoAnchor.GetLongitude
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARGeoAnchor::GetLongitude(float* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARGeoAnchor", "GetLongitude");

	Params::UARGeoAnchor_GetLongitude_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AugmentedReality.ARGeoAnchor.GetLatitude
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARGeoAnchor::GetLatitude(float* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARGeoAnchor", "GetLatitude");

	Params::UARGeoAnchor_GetLatitude_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AugmentedReality.ARGeoAnchor.GetAltitudeSource
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EARAltitudeSource       ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARGeoAnchor::GetAltitudeSource(enum class EARAltitudeSource* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARGeoAnchor", "GetAltitudeSource");

	Params::UARGeoAnchor_GetAltitudeSource_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AugmentedReality.ARGeoAnchor.GetAltitudeMeters
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARGeoAnchor::GetAltitudeMeters(float* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARGeoAnchor", "GetAltitudeMeters");

	Params::UARGeoAnchor_GetAltitudeMeters_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Class AugmentedReality.ARTrackableNotifyComponent
// (None)

class UClass* UARTrackableNotifyComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARTrackableNotifyComponent");

	return Clss;
}


// ARTrackableNotifyComponent AugmentedReality.Default__ARTrackableNotifyComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UARTrackableNotifyComponent* UARTrackableNotifyComponent::GetDefaultObj()
{
	static class UARTrackableNotifyComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UARTrackableNotifyComponent*>(UARTrackableNotifyComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class AugmentedReality.ARTypesDummyClass
// (None)

class UClass* UARTypesDummyClass::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARTypesDummyClass");

	return Clss;
}


// ARTypesDummyClass AugmentedReality.Default__ARTypesDummyClass
// (Public, ClassDefaultObject, ArchetypeObject)

class UARTypesDummyClass* UARTypesDummyClass::GetDefaultObj()
{
	static class UARTypesDummyClass* Default = nullptr;

	if (!Default)
		Default = static_cast<UARTypesDummyClass*>(UARTypesDummyClass::StaticClass()->DefaultObject);

	return Default;
}


// Class AugmentedReality.ARCandidateImage
// (None)

class UClass* UARCandidateImage::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARCandidateImage");

	return Clss;
}


// ARCandidateImage AugmentedReality.Default__ARCandidateImage
// (Public, ClassDefaultObject, ArchetypeObject)

class UARCandidateImage* UARCandidateImage::GetDefaultObj()
{
	static class UARCandidateImage* Default = nullptr;

	if (!Default)
		Default = static_cast<UARCandidateImage*>(UARCandidateImage::StaticClass()->DefaultObject);

	return Default;
}


// Function AugmentedReality.ARCandidateImage.GetPhysicalWidth
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARCandidateImage::GetPhysicalWidth(float* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARCandidateImage", "GetPhysicalWidth");

	Params::UARCandidateImage_GetPhysicalWidth_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AugmentedReality.ARCandidateImage.GetPhysicalHeight
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARCandidateImage::GetPhysicalHeight(float* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARCandidateImage", "GetPhysicalHeight");

	Params::UARCandidateImage_GetPhysicalHeight_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AugmentedReality.ARCandidateImage.GetOrientation
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EARCandidateImageOrientationReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARCandidateImage::GetOrientation(enum class EARCandidateImageOrientation* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARCandidateImage", "GetOrientation");

	Params::UARCandidateImage_GetOrientation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AugmentedReality.ARCandidateImage.GetFriendlyName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARCandidateImage::GetFriendlyName(class FString* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARCandidateImage", "GetFriendlyName");

	Params::UARCandidateImage_GetFriendlyName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function AugmentedReality.ARCandidateImage.GetCandidateTexture
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTexture2D*                  ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARCandidateImage::GetCandidateTexture(class UTexture2D** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARCandidateImage", "GetCandidateTexture");

	Params::UARCandidateImage_GetCandidateTexture_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Class AugmentedReality.ARCandidateObject
// (None)

class UClass* UARCandidateObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARCandidateObject");

	return Clss;
}


// ARCandidateObject AugmentedReality.Default__ARCandidateObject
// (Public, ClassDefaultObject, ArchetypeObject)

class UARCandidateObject* UARCandidateObject::GetDefaultObj()
{
	static class UARCandidateObject* Default = nullptr;

	if (!Default)
		Default = static_cast<UARCandidateObject*>(UARCandidateObject::StaticClass()->DefaultObject);

	return Default;
}


// Function AugmentedReality.ARCandidateObject.SetFriendlyName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      NewName                                                          (ExportObject, Net, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UARCandidateObject::SetFriendlyName(const class FString& NewName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARCandidateObject", "SetFriendlyName");

	Params::UARCandidateObject_SetFriendlyName_Params Parms{};

	Parms.NewName = NewName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AugmentedReality.ARCandidateObject.SetCandidateObjectData
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<uint8>                      InCandidateObject                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

void UARCandidateObject::SetCandidateObjectData(TArray<uint8>* InCandidateObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARCandidateObject", "SetCandidateObjectData");

	Params::UARCandidateObject_SetCandidateObjectData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InCandidateObject != nullptr)
		*InCandidateObject = std::move(Parms.InCandidateObject);

}


// Function AugmentedReality.ARCandidateObject.SetBoundingBox
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FBox                        InBoundingBox                                                    (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

void UARCandidateObject::SetBoundingBox(struct FBox* InBoundingBox)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARCandidateObject", "SetBoundingBox");

	Params::UARCandidateObject_SetBoundingBox_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InBoundingBox != nullptr)
		*InBoundingBox = std::move(Parms.InBoundingBox);

}


// Function AugmentedReality.ARCandidateObject.GetFriendlyName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARCandidateObject::GetFriendlyName(class FString* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARCandidateObject", "GetFriendlyName");

	Params::UARCandidateObject_GetFriendlyName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function AugmentedReality.ARCandidateObject.GetCandidateObjectData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<uint8>                      ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARCandidateObject::GetCandidateObjectData(TArray<uint8>* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARCandidateObject", "GetCandidateObjectData");

	Params::UARCandidateObject_GetCandidateObjectData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function AugmentedReality.ARCandidateObject.GetBoundingBox
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FBox                        ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UARCandidateObject::GetBoundingBox(struct FBox* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARCandidateObject", "GetBoundingBox");

	Params::UARCandidateObject_GetBoundingBox_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}

}



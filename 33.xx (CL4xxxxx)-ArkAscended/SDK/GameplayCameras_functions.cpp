#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GameplayCameras.MatineeCameraShake
// (None)

class UClass* UMatineeCameraShake::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MatineeCameraShake");

	return Clss;
}


// MatineeCameraShake GameplayCameras.Default__MatineeCameraShake
// (Public, ClassDefaultObject, ArchetypeObject)

class UMatineeCameraShake* UMatineeCameraShake::GetDefaultObj()
{
	static class UMatineeCameraShake* Default = nullptr;

	if (!Default)
		Default = static_cast<UMatineeCameraShake*>(UMatineeCameraShake::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayCameras.MatineeCameraShake.StartMatineeCameraShakeFromSource
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class APlayerCameraManager*        PlayerCameraManager                                              (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, SubobjectReference)
// class UClass*                      ShakeClass                                                       (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UCameraShakeSourceComponent* SourceComponent                                                  (Edit, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// float                              Scale                                                            (Edit, ExportObject, Parm, ZeroConstructor, Transient, Config)
// enum class ECameraShakePlaySpace   PlaySpace                                                        (Edit, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FRotator                    UserPlaySpaceRot                                                 (EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UMatineeCameraShake*         ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FRotator UMatineeCameraShake::StartMatineeCameraShakeFromSource(class UCameraShakeSourceComponent** SourceComponent, float Scale, class UMatineeCameraShake* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MatineeCameraShake", "StartMatineeCameraShakeFromSource");

	Params::UMatineeCameraShake_StartMatineeCameraShakeFromSource_Params Parms{};

	Parms.Scale = Scale;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SourceComponent != nullptr)
		*SourceComponent = Parms.SourceComponent;

	return Parms.ReturnValue;

}


// Function GameplayCameras.MatineeCameraShake.StartMatineeCameraShake
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class APlayerCameraManager*        PlayerCameraManager                                              (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, SubobjectReference)
// class UClass*                      ShakeClass                                                       (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// float                              Scale                                                            (Edit, ExportObject, Parm, ZeroConstructor, Transient, Config)
// enum class ECameraShakePlaySpace   PlaySpace                                                        (Edit, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FRotator                    UserPlaySpaceRot                                                 (EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UMatineeCameraShake*         ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FRotator UMatineeCameraShake::StartMatineeCameraShake(float Scale, class UMatineeCameraShake* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MatineeCameraShake", "StartMatineeCameraShake");

	Params::UMatineeCameraShake_StartMatineeCameraShake_Params Parms{};

	Parms.Scale = Scale;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayCameras.MatineeCameraShake.ReceiveStopShake
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bImmediately                                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMatineeCameraShake::ReceiveStopShake(bool bImmediately)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MatineeCameraShake", "ReceiveStopShake");

	Params::UMatineeCameraShake_ReceiveStopShake_Params Parms{};

	Parms.bImmediately = bImmediately;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayCameras.MatineeCameraShake.ReceivePlayShake
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              Scale                                                            (Edit, ExportObject, Parm, ZeroConstructor, Transient, Config)

void UMatineeCameraShake::ReceivePlayShake(float Scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MatineeCameraShake", "ReceivePlayShake");

	Params::UMatineeCameraShake_ReceivePlayShake_Params Parms{};

	Parms.Scale = Scale;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayCameras.MatineeCameraShake.ReceiveIsFinished
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMatineeCameraShake::ReceiveIsFinished(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MatineeCameraShake", "ReceiveIsFinished");

	Params::UMatineeCameraShake_ReceiveIsFinished_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayCameras.MatineeCameraShake.BlueprintUpdateCameraShake
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              Alpha                                                            (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FMinimalViewInfo            POV                                                              (ConstParm, ExportObject, Net, ReturnParm, EditConst)
// struct FMinimalViewInfo            ModifiedPOV                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

struct FMinimalViewInfo UMatineeCameraShake::BlueprintUpdateCameraShake(float* Alpha)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MatineeCameraShake", "BlueprintUpdateCameraShake");

	Params::UMatineeCameraShake_BlueprintUpdateCameraShake_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Alpha != nullptr)
		*Alpha = Parms.Alpha;

	return Parms.ReturnValue;

}


// Class GameplayCameras.MatineeCameraShakePattern
// (None)

class UClass* UMatineeCameraShakePattern::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MatineeCameraShakePattern");

	return Clss;
}


// MatineeCameraShakePattern GameplayCameras.Default__MatineeCameraShakePattern
// (Public, ClassDefaultObject, ArchetypeObject)

class UMatineeCameraShakePattern* UMatineeCameraShakePattern::GetDefaultObj()
{
	static class UMatineeCameraShakePattern* Default = nullptr;

	if (!Default)
		Default = static_cast<UMatineeCameraShakePattern*>(UMatineeCameraShakePattern::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayCameras.MovieSceneMatineeCameraShakeEvaluator
// (None)

class UClass* UMovieSceneMatineeCameraShakeEvaluator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneMatineeCameraShakeEvaluator");

	return Clss;
}


// MovieSceneMatineeCameraShakeEvaluator GameplayCameras.Default__MovieSceneMatineeCameraShakeEvaluator
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneMatineeCameraShakeEvaluator* UMovieSceneMatineeCameraShakeEvaluator::GetDefaultObj()
{
	static class UMovieSceneMatineeCameraShakeEvaluator* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneMatineeCameraShakeEvaluator*>(UMovieSceneMatineeCameraShakeEvaluator::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayCameras.MatineeCameraShakeFunctionLibrary
// (None)

class UClass* UMatineeCameraShakeFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MatineeCameraShakeFunctionLibrary");

	return Clss;
}


// MatineeCameraShakeFunctionLibrary GameplayCameras.Default__MatineeCameraShakeFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UMatineeCameraShakeFunctionLibrary* UMatineeCameraShakeFunctionLibrary::GetDefaultObj()
{
	static class UMatineeCameraShakeFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UMatineeCameraShakeFunctionLibrary*>(UMatineeCameraShakeFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayCameras.MatineeCameraShakeFunctionLibrary.Conv_MatineeCameraShake
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UCameraShakeBase*            CameraShake                                                      (Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, Transient, Config, EditConst, SubobjectReference)
// class UMatineeCameraShake*         ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMatineeCameraShakeFunctionLibrary::Conv_MatineeCameraShake(class UCameraShakeBase** CameraShake, class UMatineeCameraShake* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MatineeCameraShakeFunctionLibrary", "Conv_MatineeCameraShake");

	Params::UMatineeCameraShakeFunctionLibrary_Conv_MatineeCameraShake_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (CameraShake != nullptr)
		*CameraShake = Parms.CameraShake;

}


// Class GameplayCameras.CameraAnimationCameraModifier
// (None)

class UClass* UCameraAnimationCameraModifier::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraAnimationCameraModifier");

	return Clss;
}


// CameraAnimationCameraModifier GameplayCameras.Default__CameraAnimationCameraModifier
// (Public, ClassDefaultObject, ArchetypeObject)

class UCameraAnimationCameraModifier* UCameraAnimationCameraModifier::GetDefaultObj()
{
	static class UCameraAnimationCameraModifier* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraAnimationCameraModifier*>(UCameraAnimationCameraModifier::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayCameras.CameraAnimationCameraModifier.StopCameraAnimation
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FCameraAnimationHandle      Handle                                                           (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               bImmediate                                                       (Edit, Net, EditFixedSize, Parm, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)

struct FCameraAnimationHandle UCameraAnimationCameraModifier::StopCameraAnimation(bool* bImmediate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraAnimationCameraModifier", "StopCameraAnimation");

	Params::UCameraAnimationCameraModifier_StopCameraAnimation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bImmediate != nullptr)
		*bImmediate = Parms.bImmediate;

	return Parms.ReturnValue;

}


// Function GameplayCameras.CameraAnimationCameraModifier.StopAllCameraAnimationsOf
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCameraAnimationSequence*    Sequence                                                         (BlueprintVisible, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// bool                               bImmediate                                                       (Edit, Net, EditFixedSize, Parm, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)

void UCameraAnimationCameraModifier::StopAllCameraAnimationsOf(class UCameraAnimationSequence** Sequence, bool* bImmediate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraAnimationCameraModifier", "StopAllCameraAnimationsOf");

	Params::UCameraAnimationCameraModifier_StopAllCameraAnimationsOf_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Sequence != nullptr)
		*Sequence = Parms.Sequence;

	if (bImmediate != nullptr)
		*bImmediate = Parms.bImmediate;

}


// Function GameplayCameras.CameraAnimationCameraModifier.StopAllCameraAnimations
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bImmediate                                                       (Edit, Net, EditFixedSize, Parm, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)

void UCameraAnimationCameraModifier::StopAllCameraAnimations(bool* bImmediate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraAnimationCameraModifier", "StopAllCameraAnimations");

	Params::UCameraAnimationCameraModifier_StopAllCameraAnimations_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bImmediate != nullptr)
		*bImmediate = Parms.bImmediate;

}


// Function GameplayCameras.CameraAnimationCameraModifier.PlayCameraAnimation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCameraAnimationSequence*    Sequence                                                         (BlueprintVisible, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// struct FCameraAnimationParams      Params                                                           (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
// struct FCameraAnimationHandle      ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FCameraAnimationParams UCameraAnimationCameraModifier::PlayCameraAnimation(class UCameraAnimationSequence** Sequence, const struct FCameraAnimationHandle& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraAnimationCameraModifier", "PlayCameraAnimation");

	Params::UCameraAnimationCameraModifier_PlayCameraAnimation_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Sequence != nullptr)
		*Sequence = Parms.Sequence;

	return Parms.ReturnValue;

}


// Function GameplayCameras.CameraAnimationCameraModifier.IsCameraAnimationActive
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FCameraAnimationHandle      Handle                                                           (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FCameraAnimationHandle UCameraAnimationCameraModifier::IsCameraAnimationActive(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraAnimationCameraModifier", "IsCameraAnimationActive");

	Params::UCameraAnimationCameraModifier_IsCameraAnimationActive_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifierFromPlayerController
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerController*           PlayerController                                                 (BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// class UCameraAnimationCameraModifier*ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class APlayerController* UCameraAnimationCameraModifier::GetCameraAnimationCameraModifierFromPlayerController(class UCameraAnimationCameraModifier* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraAnimationCameraModifier", "GetCameraAnimationCameraModifierFromPlayerController");

	Params::UCameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromPlayerController_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifierFromID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// int32                              ControllerId                                                     (Edit, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class UCameraAnimationCameraModifier*ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UCameraAnimationCameraModifier::GetCameraAnimationCameraModifierFromID(class UObject* WorldContextObject, class UCameraAnimationCameraModifier* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraAnimationCameraModifier", "GetCameraAnimationCameraModifierFromID");

	Params::UCameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromID_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifier
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// int32                              PlayerIndex                                                      (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UCameraAnimationCameraModifier*ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UCameraAnimationCameraModifier::GetCameraAnimationCameraModifier(class UObject* WorldContextObject, int32* PlayerIndex, class UCameraAnimationCameraModifier* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraAnimationCameraModifier", "GetCameraAnimationCameraModifier");

	Params::UCameraAnimationCameraModifier_GetCameraAnimationCameraModifier_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PlayerIndex != nullptr)
		*PlayerIndex = Parms.PlayerIndex;

}


// Class GameplayCameras.CompositeCameraShakePattern
// (None)

class UClass* UCompositeCameraShakePattern::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CompositeCameraShakePattern");

	return Clss;
}


// CompositeCameraShakePattern GameplayCameras.Default__CompositeCameraShakePattern
// (Public, ClassDefaultObject, ArchetypeObject)

class UCompositeCameraShakePattern* UCompositeCameraShakePattern::GetDefaultObj()
{
	static class UCompositeCameraShakePattern* Default = nullptr;

	if (!Default)
		Default = static_cast<UCompositeCameraShakePattern*>(UCompositeCameraShakePattern::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayCameras.DefaultCameraShakeBase
// (None)

class UClass* UDefaultCameraShakeBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DefaultCameraShakeBase");

	return Clss;
}


// DefaultCameraShakeBase GameplayCameras.Default__DefaultCameraShakeBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UDefaultCameraShakeBase* UDefaultCameraShakeBase::GetDefaultObj()
{
	static class UDefaultCameraShakeBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UDefaultCameraShakeBase*>(UDefaultCameraShakeBase::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayCameras.GameplayCamerasSubsystem
// (None)

class UClass* UGameplayCamerasSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayCamerasSubsystem");

	return Clss;
}


// GameplayCamerasSubsystem GameplayCameras.Default__GameplayCamerasSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameplayCamerasSubsystem* UGameplayCamerasSubsystem::GetDefaultObj()
{
	static class UGameplayCamerasSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayCamerasSubsystem*>(UGameplayCamerasSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayCameras.GameplayCamerasSubsystem.StopCameraAnimation
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class APlayerController*           PlayerController                                                 (BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// struct FCameraAnimationHandle      Handle                                                           (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               bImmediate                                                       (Edit, Net, EditFixedSize, Parm, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)

struct FCameraAnimationHandle UGameplayCamerasSubsystem::StopCameraAnimation(bool* bImmediate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayCamerasSubsystem", "StopCameraAnimation");

	Params::UGameplayCamerasSubsystem_StopCameraAnimation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bImmediate != nullptr)
		*bImmediate = Parms.bImmediate;

	return Parms.ReturnValue;

}


// Function GameplayCameras.GameplayCamerasSubsystem.StopAllCameraAnimationsOf
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           PlayerController                                                 (BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// class UCameraAnimationSequence*    Sequence                                                         (BlueprintVisible, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// bool                               bImmediate                                                       (Edit, Net, EditFixedSize, Parm, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)

class APlayerController* UGameplayCamerasSubsystem::StopAllCameraAnimationsOf(class UCameraAnimationSequence** Sequence, bool* bImmediate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayCamerasSubsystem", "StopAllCameraAnimationsOf");

	Params::UGameplayCamerasSubsystem_StopAllCameraAnimationsOf_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Sequence != nullptr)
		*Sequence = Parms.Sequence;

	if (bImmediate != nullptr)
		*bImmediate = Parms.bImmediate;

	return Parms.ReturnValue;

}


// Function GameplayCameras.GameplayCamerasSubsystem.StopAllCameraAnimations
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           PlayerController                                                 (BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               bImmediate                                                       (Edit, Net, EditFixedSize, Parm, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)

class APlayerController* UGameplayCamerasSubsystem::StopAllCameraAnimations(bool* bImmediate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayCamerasSubsystem", "StopAllCameraAnimations");

	Params::UGameplayCamerasSubsystem_StopAllCameraAnimations_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bImmediate != nullptr)
		*bImmediate = Parms.bImmediate;

	return Parms.ReturnValue;

}


// Function GameplayCameras.GameplayCamerasSubsystem.PlayCameraAnimation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           PlayerController                                                 (BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// class UCameraAnimationSequence*    Sequence                                                         (BlueprintVisible, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// struct FCameraAnimationParams      Params                                                           (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
// struct FCameraAnimationHandle      ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FCameraAnimationParams UGameplayCamerasSubsystem::PlayCameraAnimation(class UCameraAnimationSequence** Sequence, const struct FCameraAnimationHandle& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayCamerasSubsystem", "PlayCameraAnimation");

	Params::UGameplayCamerasSubsystem_PlayCameraAnimation_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Sequence != nullptr)
		*Sequence = Parms.Sequence;

	return Parms.ReturnValue;

}


// Function GameplayCameras.GameplayCamerasSubsystem.IsCameraAnimationActive
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APlayerController*           PlayerController                                                 (BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// struct FCameraAnimationHandle      Handle                                                           (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FCameraAnimationHandle UGameplayCamerasSubsystem::IsCameraAnimationActive(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayCamerasSubsystem", "IsCameraAnimationActive");

	Params::UGameplayCamerasSubsystem_IsCameraAnimationActive_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GameplayCameras.SimpleCameraShakePattern
// (None)

class UClass* USimpleCameraShakePattern::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SimpleCameraShakePattern");

	return Clss;
}


// SimpleCameraShakePattern GameplayCameras.Default__SimpleCameraShakePattern
// (Public, ClassDefaultObject, ArchetypeObject)

class USimpleCameraShakePattern* USimpleCameraShakePattern::GetDefaultObj()
{
	static class USimpleCameraShakePattern* Default = nullptr;

	if (!Default)
		Default = static_cast<USimpleCameraShakePattern*>(USimpleCameraShakePattern::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayCameras.PerlinNoiseCameraShakePattern
// (None)

class UClass* UPerlinNoiseCameraShakePattern::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PerlinNoiseCameraShakePattern");

	return Clss;
}


// PerlinNoiseCameraShakePattern GameplayCameras.Default__PerlinNoiseCameraShakePattern
// (Public, ClassDefaultObject, ArchetypeObject)

class UPerlinNoiseCameraShakePattern* UPerlinNoiseCameraShakePattern::GetDefaultObj()
{
	static class UPerlinNoiseCameraShakePattern* Default = nullptr;

	if (!Default)
		Default = static_cast<UPerlinNoiseCameraShakePattern*>(UPerlinNoiseCameraShakePattern::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayCameras.TestCameraShake
// (None)

class UClass* UTestCameraShake::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TestCameraShake");

	return Clss;
}


// TestCameraShake GameplayCameras.Default__TestCameraShake
// (Public, ClassDefaultObject, ArchetypeObject)

class UTestCameraShake* UTestCameraShake::GetDefaultObj()
{
	static class UTestCameraShake* Default = nullptr;

	if (!Default)
		Default = static_cast<UTestCameraShake*>(UTestCameraShake::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayCameras.ConstantCameraShakePattern
// (None)

class UClass* UConstantCameraShakePattern::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConstantCameraShakePattern");

	return Clss;
}


// ConstantCameraShakePattern GameplayCameras.Default__ConstantCameraShakePattern
// (Public, ClassDefaultObject, ArchetypeObject)

class UConstantCameraShakePattern* UConstantCameraShakePattern::GetDefaultObj()
{
	static class UConstantCameraShakePattern* Default = nullptr;

	if (!Default)
		Default = static_cast<UConstantCameraShakePattern*>(UConstantCameraShakePattern::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayCameras.WaveOscillatorCameraShakePattern
// (None)

class UClass* UWaveOscillatorCameraShakePattern::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaveOscillatorCameraShakePattern");

	return Clss;
}


// WaveOscillatorCameraShakePattern GameplayCameras.Default__WaveOscillatorCameraShakePattern
// (Public, ClassDefaultObject, ArchetypeObject)

class UWaveOscillatorCameraShakePattern* UWaveOscillatorCameraShakePattern::GetDefaultObj()
{
	static class UWaveOscillatorCameraShakePattern* Default = nullptr;

	if (!Default)
		Default = static_cast<UWaveOscillatorCameraShakePattern*>(UWaveOscillatorCameraShakePattern::StaticClass()->DefaultObject);

	return Default;
}

}



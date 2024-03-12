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
// class APlayerCameraManager*        PlayerCameraManager                                              (Edit, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
// class UClass*                      ShakeClass                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UCameraShakeSourceComponent* SourceComponent                                                  (BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// float                              Scale                                                            (Edit, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config)
// enum class ECameraShakePlaySpace   PlaySpace                                                        (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FRotator                    UserPlaySpaceRot                                                 (Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UMatineeCameraShake*         ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UMatineeCameraShake* UMatineeCameraShake::StartMatineeCameraShakeFromSource()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MatineeCameraShake", "StartMatineeCameraShakeFromSource");

	Params::UMatineeCameraShake_StartMatineeCameraShakeFromSource_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayCameras.MatineeCameraShake.StartMatineeCameraShake
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class APlayerCameraManager*        PlayerCameraManager                                              (Edit, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
// class UClass*                      ShakeClass                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// float                              Scale                                                            (Edit, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config)
// enum class ECameraShakePlaySpace   PlaySpace                                                        (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FRotator                    UserPlaySpaceRot                                                 (Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UMatineeCameraShake*         ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UMatineeCameraShake* UMatineeCameraShake::StartMatineeCameraShake()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MatineeCameraShake", "StartMatineeCameraShake");

	Params::UMatineeCameraShake_StartMatineeCameraShake_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayCameras.MatineeCameraShake.ReceiveStopShake
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bImmediately                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

void UMatineeCameraShake::ReceiveStopShake(bool* bImmediately)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MatineeCameraShake", "ReceiveStopShake");

	Params::UMatineeCameraShake_ReceiveStopShake_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bImmediately != nullptr)
		*bImmediately = Parms.bImmediately;

}


// Function GameplayCameras.MatineeCameraShake.ReceivePlayShake
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              Scale                                                            (Edit, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config)

float UMatineeCameraShake::ReceivePlayShake()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MatineeCameraShake", "ReceivePlayShake");

	Params::UMatineeCameraShake_ReceivePlayShake_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameplayCameras.MatineeCameraShake.ReceiveIsFinished
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UMatineeCameraShake::ReceiveIsFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MatineeCameraShake", "ReceiveIsFinished");

	Params::UMatineeCameraShake_ReceiveIsFinished_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayCameras.MatineeCameraShake.BlueprintUpdateCameraShake
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// float                              Alpha                                                            (Edit, BlueprintVisible, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FMinimalViewInfo            POV                                                              (ConstParm, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst)
// struct FMinimalViewInfo            ModifiedPOV                                                      (ConstParm, BlueprintVisible, ExportObject, Parm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

struct FMinimalViewInfo UMatineeCameraShake::BlueprintUpdateCameraShake(float Alpha, const struct FMinimalViewInfo& ModifiedPOV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MatineeCameraShake", "BlueprintUpdateCameraShake");

	Params::UMatineeCameraShake_BlueprintUpdateCameraShake_Params Parms{};

	Parms.Alpha = Alpha;
	Parms.ModifiedPOV = ModifiedPOV;

	UObject::ProcessEvent(Func, &Parms);

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
// class UCameraShakeBase*            CameraShake                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class UMatineeCameraShake*         ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UMatineeCameraShake* UMatineeCameraShakeFunctionLibrary::Conv_MatineeCameraShake(class UCameraShakeBase* CameraShake)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MatineeCameraShakeFunctionLibrary", "Conv_MatineeCameraShake");

	Params::UMatineeCameraShakeFunctionLibrary_Conv_MatineeCameraShake_Params Parms{};

	Parms.CameraShake = CameraShake;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

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
// struct FCameraAnimationHandle      Handle                                                           (ExportObject, BlueprintReadOnly, EditFixedSize, Config, EditConst, SubobjectReference)
// bool                               bImmediate                                                       (Edit, BlueprintVisible, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

bool UCameraAnimationCameraModifier::StopCameraAnimation(const struct FCameraAnimationHandle& Handle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraAnimationCameraModifier", "StopCameraAnimation");

	Params::UCameraAnimationCameraModifier_StopCameraAnimation_Params Parms{};

	Parms.Handle = Handle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayCameras.CameraAnimationCameraModifier.StopAllCameraAnimationsOf
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCameraAnimationSequence*    Sequence                                                         (BlueprintVisible, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               bImmediate                                                       (Edit, BlueprintVisible, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

bool UCameraAnimationCameraModifier::StopAllCameraAnimationsOf(class UCameraAnimationSequence** Sequence)
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

	return Parms.ReturnValue;

}


// Function GameplayCameras.CameraAnimationCameraModifier.StopAllCameraAnimations
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bImmediate                                                       (Edit, BlueprintVisible, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

bool UCameraAnimationCameraModifier::StopAllCameraAnimations()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraAnimationCameraModifier", "StopAllCameraAnimations");

	Params::UCameraAnimationCameraModifier_StopAllCameraAnimations_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayCameras.CameraAnimationCameraModifier.PlayCameraAnimation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCameraAnimationSequence*    Sequence                                                         (BlueprintVisible, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FCameraAnimationParams      Params                                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// struct FCameraAnimationHandle      ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FCameraAnimationHandle UCameraAnimationCameraModifier::PlayCameraAnimation(class UCameraAnimationSequence** Sequence)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraAnimationCameraModifier", "PlayCameraAnimation");

	Params::UCameraAnimationCameraModifier_PlayCameraAnimation_Params Parms{};


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
// struct FCameraAnimationHandle      Handle                                                           (ExportObject, BlueprintReadOnly, EditFixedSize, Config, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UCameraAnimationCameraModifier::IsCameraAnimationActive(const struct FCameraAnimationHandle& Handle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraAnimationCameraModifier", "IsCameraAnimationActive");

	Params::UCameraAnimationCameraModifier_IsCameraAnimationActive_Params Parms{};

	Parms.Handle = Handle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifierFromPlayerController
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerController*           PlayerController                                                 (BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, GlobalConfig)
// class UCameraAnimationCameraModifier*ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UCameraAnimationCameraModifier* UCameraAnimationCameraModifier::GetCameraAnimationCameraModifierFromPlayerController()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraAnimationCameraModifier", "GetCameraAnimationCameraModifierFromPlayerController");

	Params::UCameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromPlayerController_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifierFromID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// int32                              ControllerId                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class UCameraAnimationCameraModifier*ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UCameraAnimationCameraModifier* UCameraAnimationCameraModifier::GetCameraAnimationCameraModifierFromID(class UObject** WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraAnimationCameraModifier", "GetCameraAnimationCameraModifierFromID");

	Params::UCameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromID_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContextObject != nullptr)
		*WorldContextObject = Parms.WorldContextObject;

	return Parms.ReturnValue;

}


// Function GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifier
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// int32                              PlayerIndex                                                      (BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UCameraAnimationCameraModifier*ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UCameraAnimationCameraModifier* UCameraAnimationCameraModifier::GetCameraAnimationCameraModifier(class UObject** WorldContextObject, int32 PlayerIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraAnimationCameraModifier", "GetCameraAnimationCameraModifier");

	Params::UCameraAnimationCameraModifier_GetCameraAnimationCameraModifier_Params Parms{};

	Parms.PlayerIndex = PlayerIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContextObject != nullptr)
		*WorldContextObject = Parms.WorldContextObject;

	return Parms.ReturnValue;

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
// class APlayerController*           PlayerController                                                 (BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, GlobalConfig)
// struct FCameraAnimationHandle      Handle                                                           (ExportObject, BlueprintReadOnly, EditFixedSize, Config, EditConst, SubobjectReference)
// bool                               bImmediate                                                       (Edit, BlueprintVisible, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

bool UGameplayCamerasSubsystem::StopCameraAnimation(const struct FCameraAnimationHandle& Handle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayCamerasSubsystem", "StopCameraAnimation");

	Params::UGameplayCamerasSubsystem_StopCameraAnimation_Params Parms{};

	Parms.Handle = Handle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayCameras.GameplayCamerasSubsystem.StopAllCameraAnimationsOf
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           PlayerController                                                 (BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, GlobalConfig)
// class UCameraAnimationSequence*    Sequence                                                         (BlueprintVisible, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               bImmediate                                                       (Edit, BlueprintVisible, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

bool UGameplayCamerasSubsystem::StopAllCameraAnimationsOf(class UCameraAnimationSequence** Sequence)
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

	return Parms.ReturnValue;

}


// Function GameplayCameras.GameplayCamerasSubsystem.StopAllCameraAnimations
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           PlayerController                                                 (BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, GlobalConfig)
// bool                               bImmediate                                                       (Edit, BlueprintVisible, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

bool UGameplayCamerasSubsystem::StopAllCameraAnimations()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayCamerasSubsystem", "StopAllCameraAnimations");

	Params::UGameplayCamerasSubsystem_StopAllCameraAnimations_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayCameras.GameplayCamerasSubsystem.PlayCameraAnimation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           PlayerController                                                 (BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, GlobalConfig)
// class UCameraAnimationSequence*    Sequence                                                         (BlueprintVisible, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FCameraAnimationParams      Params                                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// struct FCameraAnimationHandle      ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FCameraAnimationHandle UGameplayCamerasSubsystem::PlayCameraAnimation(class UCameraAnimationSequence** Sequence)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayCamerasSubsystem", "PlayCameraAnimation");

	Params::UGameplayCamerasSubsystem_PlayCameraAnimation_Params Parms{};


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
// class APlayerController*           PlayerController                                                 (BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, GlobalConfig)
// struct FCameraAnimationHandle      Handle                                                           (ExportObject, BlueprintReadOnly, EditFixedSize, Config, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UGameplayCamerasSubsystem::IsCameraAnimationActive(const struct FCameraAnimationHandle& Handle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayCamerasSubsystem", "IsCameraAnimationActive");

	Params::UGameplayCamerasSubsystem_IsCameraAnimationActive_Params Parms{};

	Parms.Handle = Handle;

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



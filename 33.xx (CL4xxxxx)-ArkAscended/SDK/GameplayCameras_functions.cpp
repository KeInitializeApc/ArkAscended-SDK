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
// class APlayerCameraManager*        PlayerCameraManager                                              (BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst)
// class UClass*                      ShakeClass                                                       (Edit, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class UCameraShakeSourceComponent* SourceComponent                                                  (Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// float                              Scale                                                            (Edit, ExportObject, Parm, ZeroConstructor, Transient, Config)
// enum class ECameraShakePlaySpace   PlaySpace                                                        (BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// struct FRotator                    UserPlaySpaceRot                                                 (Edit, ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class UMatineeCameraShake*         ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UMatineeCameraShake* UMatineeCameraShake::StartMatineeCameraShakeFromSource(class UClass** ShakeClass, float Scale, enum class ECameraShakePlaySpace PlaySpace, const struct FRotator& UserPlaySpaceRot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MatineeCameraShake", "StartMatineeCameraShakeFromSource");

	Params::UMatineeCameraShake_StartMatineeCameraShakeFromSource_Params Parms{};

	Parms.Scale = Scale;
	Parms.PlaySpace = PlaySpace;
	Parms.UserPlaySpaceRot = UserPlaySpaceRot;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ShakeClass != nullptr)
		*ShakeClass = Parms.ShakeClass;

	return Parms.ReturnValue;

}


// Function GameplayCameras.MatineeCameraShake.StartMatineeCameraShake
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class APlayerCameraManager*        PlayerCameraManager                                              (BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst)
// class UClass*                      ShakeClass                                                       (Edit, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// float                              Scale                                                            (Edit, ExportObject, Parm, ZeroConstructor, Transient, Config)
// enum class ECameraShakePlaySpace   PlaySpace                                                        (BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// struct FRotator                    UserPlaySpaceRot                                                 (Edit, ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class UMatineeCameraShake*         ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UMatineeCameraShake* UMatineeCameraShake::StartMatineeCameraShake(class UClass** ShakeClass, float Scale, enum class ECameraShakePlaySpace PlaySpace, const struct FRotator& UserPlaySpaceRot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MatineeCameraShake", "StartMatineeCameraShake");

	Params::UMatineeCameraShake_StartMatineeCameraShake_Params Parms{};

	Parms.Scale = Scale;
	Parms.PlaySpace = PlaySpace;
	Parms.UserPlaySpaceRot = UserPlaySpaceRot;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ShakeClass != nullptr)
		*ShakeClass = Parms.ShakeClass;

	return Parms.ReturnValue;

}


// Function GameplayCameras.MatineeCameraShake.ReceiveStopShake
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bImmediately                                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

bool UMatineeCameraShake::ReceiveStopShake()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MatineeCameraShake", "ReceiveStopShake");

	Params::UMatineeCameraShake_ReceiveStopShake_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

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
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

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
// float                              DeltaTime                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              Alpha                                                            (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FMinimalViewInfo            POV                                                              (ConstParm, ExportObject, Net, ReturnParm, EditConst)
// struct FMinimalViewInfo            ModifiedPOV                                                      (Edit, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

struct FMinimalViewInfo UMatineeCameraShake::BlueprintUpdateCameraShake(float* DeltaTime, float Alpha, struct FMinimalViewInfo* ModifiedPOV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MatineeCameraShake", "BlueprintUpdateCameraShake");

	Params::UMatineeCameraShake_BlueprintUpdateCameraShake_Params Parms{};

	Parms.Alpha = Alpha;

	UObject::ProcessEvent(Func, &Parms);

	if (DeltaTime != nullptr)
		*DeltaTime = Parms.DeltaTime;

	if (ModifiedPOV != nullptr)
		*ModifiedPOV = std::move(Parms.ModifiedPOV);

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
// class UCameraShakeBase*            CameraShake                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// class UMatineeCameraShake*         ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UMatineeCameraShake* UMatineeCameraShakeFunctionLibrary::Conv_MatineeCameraShake()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MatineeCameraShakeFunctionLibrary", "Conv_MatineeCameraShake");

	Params::UMatineeCameraShakeFunctionLibrary_Conv_MatineeCameraShake_Params Parms{};


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
// struct FCameraAnimationHandle      Handle                                                           (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               bImmediate                                                       (Edit, ConstParm, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

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
// class UCameraAnimationSequence*    Sequence                                                         (Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               bImmediate                                                       (Edit, ConstParm, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

bool UCameraAnimationCameraModifier::StopAllCameraAnimationsOf()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraAnimationCameraModifier", "StopAllCameraAnimationsOf");

	Params::UCameraAnimationCameraModifier_StopAllCameraAnimationsOf_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayCameras.CameraAnimationCameraModifier.StopAllCameraAnimations
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bImmediate                                                       (Edit, ConstParm, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

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
// class UCameraAnimationSequence*    Sequence                                                         (Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FCameraAnimationParams      Params                                                           (Edit, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
// struct FCameraAnimationHandle      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FCameraAnimationHandle UCameraAnimationCameraModifier::PlayCameraAnimation(const struct FCameraAnimationParams& Params)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraAnimationCameraModifier", "PlayCameraAnimation");

	Params::UCameraAnimationCameraModifier_PlayCameraAnimation_Params Parms{};

	Parms.Params = Params;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayCameras.CameraAnimationCameraModifier.IsCameraAnimationActive
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FCameraAnimationHandle      Handle                                                           (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

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
// class APlayerController*           PlayerController                                                 (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig)
// class UCameraAnimationCameraModifier*ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UCameraAnimationCameraModifier* UCameraAnimationCameraModifier::GetCameraAnimationCameraModifierFromPlayerController(class APlayerController** PlayerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraAnimationCameraModifier", "GetCameraAnimationCameraModifierFromPlayerController");

	Params::UCameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromPlayerController_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PlayerController != nullptr)
		*PlayerController = Parms.PlayerController;

	return Parms.ReturnValue;

}


// Function GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifierFromID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// int32                              ControllerId                                                     (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class UCameraAnimationCameraModifier*ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UCameraAnimationCameraModifier* UCameraAnimationCameraModifier::GetCameraAnimationCameraModifierFromID()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraAnimationCameraModifier", "GetCameraAnimationCameraModifierFromID");

	Params::UCameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromID_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifier
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// int32                              PlayerIndex                                                      (BlueprintVisible, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UCameraAnimationCameraModifier*ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UCameraAnimationCameraModifier* UCameraAnimationCameraModifier::GetCameraAnimationCameraModifier()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraAnimationCameraModifier", "GetCameraAnimationCameraModifier");

	Params::UCameraAnimationCameraModifier_GetCameraAnimationCameraModifier_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// class APlayerController*           PlayerController                                                 (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig)
// struct FCameraAnimationHandle      Handle                                                           (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               bImmediate                                                       (Edit, ConstParm, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

bool UGameplayCamerasSubsystem::StopCameraAnimation(class APlayerController** PlayerController, const struct FCameraAnimationHandle& Handle)
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

	if (PlayerController != nullptr)
		*PlayerController = Parms.PlayerController;

	return Parms.ReturnValue;

}


// Function GameplayCameras.GameplayCamerasSubsystem.StopAllCameraAnimationsOf
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           PlayerController                                                 (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig)
// class UCameraAnimationSequence*    Sequence                                                         (Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               bImmediate                                                       (Edit, ConstParm, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

bool UGameplayCamerasSubsystem::StopAllCameraAnimationsOf(class APlayerController** PlayerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayCamerasSubsystem", "StopAllCameraAnimationsOf");

	Params::UGameplayCamerasSubsystem_StopAllCameraAnimationsOf_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PlayerController != nullptr)
		*PlayerController = Parms.PlayerController;

	return Parms.ReturnValue;

}


// Function GameplayCameras.GameplayCamerasSubsystem.StopAllCameraAnimations
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           PlayerController                                                 (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig)
// bool                               bImmediate                                                       (Edit, ConstParm, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

bool UGameplayCamerasSubsystem::StopAllCameraAnimations(class APlayerController** PlayerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayCamerasSubsystem", "StopAllCameraAnimations");

	Params::UGameplayCamerasSubsystem_StopAllCameraAnimations_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PlayerController != nullptr)
		*PlayerController = Parms.PlayerController;

	return Parms.ReturnValue;

}


// Function GameplayCameras.GameplayCamerasSubsystem.PlayCameraAnimation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           PlayerController                                                 (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig)
// class UCameraAnimationSequence*    Sequence                                                         (Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FCameraAnimationParams      Params                                                           (Edit, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
// struct FCameraAnimationHandle      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FCameraAnimationHandle UGameplayCamerasSubsystem::PlayCameraAnimation(class APlayerController** PlayerController, const struct FCameraAnimationParams& Params)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayCamerasSubsystem", "PlayCameraAnimation");

	Params::UGameplayCamerasSubsystem_PlayCameraAnimation_Params Parms{};

	Parms.Params = Params;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PlayerController != nullptr)
		*PlayerController = Parms.PlayerController;

	return Parms.ReturnValue;

}


// Function GameplayCameras.GameplayCamerasSubsystem.IsCameraAnimationActive
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APlayerController*           PlayerController                                                 (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig)
// struct FCameraAnimationHandle      Handle                                                           (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UGameplayCamerasSubsystem::IsCameraAnimationActive(class APlayerController** PlayerController, const struct FCameraAnimationHandle& Handle)
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

	if (PlayerController != nullptr)
		*PlayerController = Parms.PlayerController;

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



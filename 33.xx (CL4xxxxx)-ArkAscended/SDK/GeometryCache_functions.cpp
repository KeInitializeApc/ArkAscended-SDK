#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GeometryCache.GeometryCache
// (None)

class UClass* UGeometryCache::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryCache");

	return Clss;
}


// GeometryCache GeometryCache.Default__GeometryCache
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryCache* UGeometryCache::GetDefaultObj()
{
	static class UGeometryCache* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryCache*>(UGeometryCache::StaticClass()->DefaultObject);

	return Default;
}


// Class GeometryCache.GeometryCacheActor
// (Actor)

class UClass* AGeometryCacheActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryCacheActor");

	return Clss;
}


// GeometryCacheActor GeometryCache.Default__GeometryCacheActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AGeometryCacheActor* AGeometryCacheActor::GetDefaultObj()
{
	static class AGeometryCacheActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AGeometryCacheActor*>(AGeometryCacheActor::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryCache.GeometryCacheActor.GetGeometryCacheComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UGeometryCacheComponent*     ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryCacheComponent* AGeometryCacheActor::GetGeometryCacheComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCacheActor", "GetGeometryCacheComponent");

	Params::AGeometryCacheActor_GetGeometryCacheComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GeometryCache.GeometryCacheCodecBase
// (None)

class UClass* UGeometryCacheCodecBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryCacheCodecBase");

	return Clss;
}


// GeometryCacheCodecBase GeometryCache.Default__GeometryCacheCodecBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryCacheCodecBase* UGeometryCacheCodecBase::GetDefaultObj()
{
	static class UGeometryCacheCodecBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryCacheCodecBase*>(UGeometryCacheCodecBase::StaticClass()->DefaultObject);

	return Default;
}


// Class GeometryCache.GeometryCacheCodecRaw
// (None)

class UClass* UGeometryCacheCodecRaw::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryCacheCodecRaw");

	return Clss;
}


// GeometryCacheCodecRaw GeometryCache.Default__GeometryCacheCodecRaw
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryCacheCodecRaw* UGeometryCacheCodecRaw::GetDefaultObj()
{
	static class UGeometryCacheCodecRaw* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryCacheCodecRaw*>(UGeometryCacheCodecRaw::StaticClass()->DefaultObject);

	return Default;
}


// Class GeometryCache.GeometryCacheCodecV1
// (None)

class UClass* UGeometryCacheCodecV1::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryCacheCodecV1");

	return Clss;
}


// GeometryCacheCodecV1 GeometryCache.Default__GeometryCacheCodecV1
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryCacheCodecV1* UGeometryCacheCodecV1::GetDefaultObj()
{
	static class UGeometryCacheCodecV1* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryCacheCodecV1*>(UGeometryCacheCodecV1::StaticClass()->DefaultObject);

	return Default;
}


// Class GeometryCache.GeometryCacheComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UGeometryCacheComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryCacheComponent");

	return Clss;
}


// GeometryCacheComponent GeometryCache.Default__GeometryCacheComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryCacheComponent* UGeometryCacheComponent::GetDefaultObj()
{
	static class UGeometryCacheComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryCacheComponent*>(UGeometryCacheComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryCache.GeometryCacheComponent.TickAtThisTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Time                                                             (Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// bool                               bInIsRunning                                                     (Edit, ConstParm, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bInBackwards                                                     (BlueprintVisible, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bInIsLooping                                                     (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

bool UGeometryCacheComponent::TickAtThisTime(float Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCacheComponent", "TickAtThisTime");

	Params::UGeometryCacheComponent_TickAtThisTime_Params Parms{};

	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryCache.GeometryCacheComponent.Stop
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UGeometryCacheComponent::Stop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCacheComponent", "Stop");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GeometryCache.GeometryCacheComponent.SetWireframeOverrideColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                Color                                                            (Edit, ConstParm, BlueprintReadOnly, Net, OutParm)

void UGeometryCacheComponent::SetWireframeOverrideColor(struct FLinearColor* Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCacheComponent", "SetWireframeOverrideColor");

	Params::UGeometryCacheComponent_SetWireframeOverrideColor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

}


// Function GeometryCache.GeometryCacheComponent.SetStartTimeOffset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewStartTimeOffset                                               (Edit, ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

float UGeometryCacheComponent::SetStartTimeOffset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCacheComponent", "SetStartTimeOffset");

	Params::UGeometryCacheComponent_SetStartTimeOffset_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryCache.GeometryCacheComponent.SetPlaybackSpeed
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewPlaybackSpeed                                                 (ConstParm, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

float UGeometryCacheComponent::SetPlaybackSpeed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCacheComponent", "SetPlaybackSpeed");

	Params::UGeometryCacheComponent_SetPlaybackSpeed_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryCache.GeometryCacheComponent.SetOverrideWireframeColor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bOverride                                                        (Edit, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

bool UGeometryCacheComponent::SetOverrideWireframeColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCacheComponent", "SetOverrideWireframeColor");

	Params::UGeometryCacheComponent_SetOverrideWireframeColor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryCache.GeometryCacheComponent.SetMotionVectorScale
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewMotionVectorScale                                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

float UGeometryCacheComponent::SetMotionVectorScale()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCacheComponent", "SetMotionVectorScale");

	Params::UGeometryCacheComponent_SetMotionVectorScale_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryCache.GeometryCacheComponent.SetLooping
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewLooping                                                      (ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

bool UGeometryCacheComponent::SetLooping()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCacheComponent", "SetLooping");

	Params::UGeometryCacheComponent_SetLooping_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryCache.GeometryCacheComponent.SetGeometryCache
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UGeometryCache*              NewGeomCache                                                     (Edit, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UGeometryCacheComponent::SetGeometryCache()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCacheComponent", "SetGeometryCache");

	Params::UGeometryCacheComponent_SetGeometryCache_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryCache.GeometryCacheComponent.SetExtrapolateFrames
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewExtrapolating                                                (Edit, ConstParm, BlueprintVisible, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

bool UGeometryCacheComponent::SetExtrapolateFrames()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCacheComponent", "SetExtrapolateFrames");

	Params::UGeometryCacheComponent_SetExtrapolateFrames_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryCache.GeometryCacheComponent.PlayReversedFromEnd
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UGeometryCacheComponent::PlayReversedFromEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCacheComponent", "PlayReversedFromEnd");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GeometryCache.GeometryCacheComponent.PlayReversed
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UGeometryCacheComponent::PlayReversed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCacheComponent", "PlayReversed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GeometryCache.GeometryCacheComponent.PlayFromStart
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UGeometryCacheComponent::PlayFromStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCacheComponent", "PlayFromStart");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GeometryCache.GeometryCacheComponent.Play
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UGeometryCacheComponent::Play()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCacheComponent", "Play");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GeometryCache.GeometryCacheComponent.Pause
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UGeometryCacheComponent::Pause()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCacheComponent", "Pause");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GeometryCache.GeometryCacheComponent.IsPlayingReversed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UGeometryCacheComponent::IsPlayingReversed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCacheComponent", "IsPlayingReversed");

	Params::UGeometryCacheComponent_IsPlayingReversed_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryCache.GeometryCacheComponent.IsPlaying
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UGeometryCacheComponent::IsPlaying()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCacheComponent", "IsPlaying");

	Params::UGeometryCacheComponent_IsPlaying_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryCache.GeometryCacheComponent.IsLooping
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UGeometryCacheComponent::IsLooping()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCacheComponent", "IsLooping");

	Params::UGeometryCacheComponent_IsLooping_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryCache.GeometryCacheComponent.IsExtrapolatingFrames
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UGeometryCacheComponent::IsExtrapolatingFrames()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCacheComponent", "IsExtrapolatingFrames");

	Params::UGeometryCacheComponent_IsExtrapolatingFrames_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryCache.GeometryCacheComponent.GetWireframeOverrideColor
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FLinearColor UGeometryCacheComponent::GetWireframeOverrideColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCacheComponent", "GetWireframeOverrideColor");

	Params::UGeometryCacheComponent_GetWireframeOverrideColor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryCache.GeometryCacheComponent.GetStartTimeOffset
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UGeometryCacheComponent::GetStartTimeOffset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCacheComponent", "GetStartTimeOffset");

	Params::UGeometryCacheComponent_GetStartTimeOffset_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryCache.GeometryCacheComponent.GetPlaybackSpeed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UGeometryCacheComponent::GetPlaybackSpeed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCacheComponent", "GetPlaybackSpeed");

	Params::UGeometryCacheComponent_GetPlaybackSpeed_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryCache.GeometryCacheComponent.GetPlaybackDirection
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UGeometryCacheComponent::GetPlaybackDirection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCacheComponent", "GetPlaybackDirection");

	Params::UGeometryCacheComponent_GetPlaybackDirection_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryCache.GeometryCacheComponent.GetOverrideWireframeColor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UGeometryCacheComponent::GetOverrideWireframeColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCacheComponent", "GetOverrideWireframeColor");

	Params::UGeometryCacheComponent_GetOverrideWireframeColor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryCache.GeometryCacheComponent.GetNumberOfFrames
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UGeometryCacheComponent::GetNumberOfFrames()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCacheComponent", "GetNumberOfFrames");

	Params::UGeometryCacheComponent_GetNumberOfFrames_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryCache.GeometryCacheComponent.GetMotionVectorScale
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UGeometryCacheComponent::GetMotionVectorScale()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCacheComponent", "GetMotionVectorScale");

	Params::UGeometryCacheComponent_GetMotionVectorScale_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryCache.GeometryCacheComponent.GetDuration
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UGeometryCacheComponent::GetDuration()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCacheComponent", "GetDuration");

	Params::UGeometryCacheComponent_GetDuration_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryCache.GeometryCacheComponent.GetAnimationTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UGeometryCacheComponent::GetAnimationTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCacheComponent", "GetAnimationTime");

	Params::UGeometryCacheComponent_GetAnimationTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GeometryCache.GeometryCacheTrack
// (None)

class UClass* UGeometryCacheTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryCacheTrack");

	return Clss;
}


// GeometryCacheTrack GeometryCache.Default__GeometryCacheTrack
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryCacheTrack* UGeometryCacheTrack::GetDefaultObj()
{
	static class UGeometryCacheTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryCacheTrack*>(UGeometryCacheTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class GeometryCache.GeometryCacheTrack_FlipbookAnimation
// (None)

class UClass* UGeometryCacheTrack_FlipbookAnimation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryCacheTrack_FlipbookAnimation");

	return Clss;
}


// GeometryCacheTrack_FlipbookAnimation GeometryCache.Default__GeometryCacheTrack_FlipbookAnimation
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryCacheTrack_FlipbookAnimation* UGeometryCacheTrack_FlipbookAnimation::GetDefaultObj()
{
	static class UGeometryCacheTrack_FlipbookAnimation* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryCacheTrack_FlipbookAnimation*>(UGeometryCacheTrack_FlipbookAnimation::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryCache.GeometryCacheTrack_FlipbookAnimation.AddMeshSample
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FGeometryCacheMeshData      MeshData                                                         (Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              SampleTime                                                       (ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

float UGeometryCacheTrack_FlipbookAnimation::AddMeshSample()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCacheTrack_FlipbookAnimation", "AddMeshSample");

	Params::UGeometryCacheTrack_FlipbookAnimation_AddMeshSample_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GeometryCache.GeometryCacheTrackStreamable
// (None)

class UClass* UGeometryCacheTrackStreamable::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryCacheTrackStreamable");

	return Clss;
}


// GeometryCacheTrackStreamable GeometryCache.Default__GeometryCacheTrackStreamable
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryCacheTrackStreamable* UGeometryCacheTrackStreamable::GetDefaultObj()
{
	static class UGeometryCacheTrackStreamable* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryCacheTrackStreamable*>(UGeometryCacheTrackStreamable::StaticClass()->DefaultObject);

	return Default;
}


// Class GeometryCache.GeometryCacheTrack_TransformAnimation
// (None)

class UClass* UGeometryCacheTrack_TransformAnimation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryCacheTrack_TransformAnimation");

	return Clss;
}


// GeometryCacheTrack_TransformAnimation GeometryCache.Default__GeometryCacheTrack_TransformAnimation
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryCacheTrack_TransformAnimation* UGeometryCacheTrack_TransformAnimation::GetDefaultObj()
{
	static class UGeometryCacheTrack_TransformAnimation* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryCacheTrack_TransformAnimation*>(UGeometryCacheTrack_TransformAnimation::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryCache.GeometryCacheTrack_TransformAnimation.SetMesh
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FGeometryCacheMeshData      NewMeshData                                                      (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

struct FGeometryCacheMeshData UGeometryCacheTrack_TransformAnimation::SetMesh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCacheTrack_TransformAnimation", "SetMesh");

	Params::UGeometryCacheTrack_TransformAnimation_SetMesh_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GeometryCache.GeometryCacheTrack_TransformGroupAnimation
// (None)

class UClass* UGeometryCacheTrack_TransformGroupAnimation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryCacheTrack_TransformGroupAnimation");

	return Clss;
}


// GeometryCacheTrack_TransformGroupAnimation GeometryCache.Default__GeometryCacheTrack_TransformGroupAnimation
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryCacheTrack_TransformGroupAnimation* UGeometryCacheTrack_TransformGroupAnimation::GetDefaultObj()
{
	static class UGeometryCacheTrack_TransformGroupAnimation* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryCacheTrack_TransformGroupAnimation*>(UGeometryCacheTrack_TransformGroupAnimation::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryCache.GeometryCacheTrack_TransformGroupAnimation.SetMesh
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FGeometryCacheMeshData      NewMeshData                                                      (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

struct FGeometryCacheMeshData UGeometryCacheTrack_TransformGroupAnimation::SetMesh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCacheTrack_TransformGroupAnimation", "SetMesh");

	Params::UGeometryCacheTrack_TransformGroupAnimation_SetMesh_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GeometryCache.NiagaraGeometryCacheRendererProperties
// (None)

class UClass* UNiagaraGeometryCacheRendererProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraGeometryCacheRendererProperties");

	return Clss;
}


// NiagaraGeometryCacheRendererProperties GeometryCache.Default__NiagaraGeometryCacheRendererProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraGeometryCacheRendererProperties* UNiagaraGeometryCacheRendererProperties::GetDefaultObj()
{
	static class UNiagaraGeometryCacheRendererProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraGeometryCacheRendererProperties*>(UNiagaraGeometryCacheRendererProperties::StaticClass()->DefaultObject);

	return Default;
}

}



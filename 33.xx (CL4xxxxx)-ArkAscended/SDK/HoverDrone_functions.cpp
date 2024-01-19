#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class HoverDrone.HoverDroneMovementComponent
// (None)

class UClass* UHoverDroneMovementComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoverDroneMovementComponent");

	return Clss;
}


// HoverDroneMovementComponent HoverDrone.Default__HoverDroneMovementComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoverDroneMovementComponent* UHoverDroneMovementComponent::GetDefaultObj()
{
	static class UHoverDroneMovementComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoverDroneMovementComponent*>(UHoverDroneMovementComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function HoverDrone.HoverDroneMovementComponent.StopForceFacing
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UHoverDroneMovementComponent::StopForceFacing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoverDroneMovementComponent", "StopForceFacing");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function HoverDrone.HoverDroneMovementComponent.SetCurrentFOV
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewFOV                                                           (ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

float UHoverDroneMovementComponent::SetCurrentFOV()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoverDroneMovementComponent", "SetCurrentFOV");

	Params::UHoverDroneMovementComponent_SetCurrentFOV_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HoverDrone.HoverDroneMovementComponent.ForceFacing
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Location                                                         (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)

void UHoverDroneMovementComponent::ForceFacing(struct FVector* Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoverDroneMovementComponent", "ForceFacing");

	Params::UHoverDroneMovementComponent_ForceFacing_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

}


// Function HoverDrone.HoverDroneMovementComponent.AddVelocity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     VelocityImpulse                                                  (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

struct FVector UHoverDroneMovementComponent::AddVelocity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoverDroneMovementComponent", "AddVelocity");

	Params::UHoverDroneMovementComponent_AddVelocity_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HoverDrone.HoverDroneMovementComponent.AddRotationalVelocity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                    RotationalVel                                                    (Edit, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

struct FRotator UHoverDroneMovementComponent::AddRotationalVelocity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoverDroneMovementComponent", "AddRotationalVelocity");

	Params::UHoverDroneMovementComponent_AddRotationalVelocity_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class HoverDrone.HoverDronePawnBase
// (Actor, Pawn)

class UClass* AHoverDronePawnBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoverDronePawnBase");

	return Clss;
}


// HoverDronePawnBase HoverDrone.Default__HoverDronePawnBase
// (Public, ClassDefaultObject, ArchetypeObject)

class AHoverDronePawnBase* AHoverDronePawnBase::GetDefaultObj()
{
	static class AHoverDronePawnBase* Default = nullptr;

	if (!Default)
		Default = static_cast<AHoverDronePawnBase*>(AHoverDronePawnBase::StaticClass()->DefaultObject);

	return Default;
}


// Class HoverDrone.HoverDronePawn
// (Actor, Pawn)

class UClass* AHoverDronePawn::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoverDronePawn");

	return Clss;
}


// HoverDronePawn HoverDrone.Default__HoverDronePawn
// (Public, ClassDefaultObject, ArchetypeObject)

class AHoverDronePawn* AHoverDronePawn::GetDefaultObj()
{
	static class AHoverDronePawn* Default = nullptr;

	if (!Default)
		Default = static_cast<AHoverDronePawn*>(AHoverDronePawn::StaticClass()->DefaultObject);

	return Default;
}


// Function HoverDrone.HoverDronePawn.TurnAccel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Val                                                              (ConstParm, ExportObject, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

void AHoverDronePawn::TurnAccel(float* Val)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoverDronePawn", "TurnAccel");

	Params::AHoverDronePawn_TurnAccel_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Val != nullptr)
		*Val = Parms.Val;

}


// Function HoverDrone.HoverDronePawn.SetToDefaultDroneSpeedIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AHoverDronePawn::SetToDefaultDroneSpeedIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoverDronePawn", "SetToDefaultDroneSpeedIndex");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function HoverDrone.HoverDronePawn.SetDroneSpeedIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              SpeedIndex                                                       (BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

void AHoverDronePawn::SetDroneSpeedIndex(int32 SpeedIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoverDronePawn", "SetDroneSpeedIndex");

	Params::AHoverDronePawn_SetDroneSpeedIndex_Params Parms{};

	Parms.SpeedIndex = SpeedIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HoverDrone.HoverDronePawn.SetAllowSpeedChange
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                               bOnOff                                                           (EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

void AHoverDronePawn::SetAllowSpeedChange(bool bOnOff)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoverDronePawn", "SetAllowSpeedChange");

	Params::AHoverDronePawn_SetAllowSpeedChange_Params Parms{};

	Parms.bOnOff = bOnOff;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HoverDrone.HoverDronePawn.MoveUp
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Val                                                              (ConstParm, ExportObject, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

void AHoverDronePawn::MoveUp(float* Val)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoverDronePawn", "MoveUp");

	Params::AHoverDronePawn_MoveUp_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Val != nullptr)
		*Val = Parms.Val;

}


// Function HoverDrone.HoverDronePawn.LookUpAccel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Val                                                              (ConstParm, ExportObject, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

void AHoverDronePawn::LookUpAccel(float* Val)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoverDronePawn", "LookUpAccel");

	Params::AHoverDronePawn_LookUpAccel_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Val != nullptr)
		*Val = Parms.Val;

}


// Function HoverDrone.HoverDronePawn.IsMaintainingConstantAltitude
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void AHoverDronePawn::IsMaintainingConstantAltitude(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoverDronePawn", "IsMaintainingConstantAltitude");

	Params::AHoverDronePawn_IsMaintainingConstantAltitude_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HoverDrone.HoverDronePawn.GetTiltedDroneRotation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// float                              DeltaTime                                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FRotator                    ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float AHoverDronePawn::GetTiltedDroneRotation(const struct FRotator& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoverDronePawn", "GetTiltedDroneRotation");

	Params::AHoverDronePawn_GetTiltedDroneRotation_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HoverDrone.HoverDronePawn.GetDroneSpeedIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void AHoverDronePawn::GetDroneSpeedIndex(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoverDronePawn", "GetDroneSpeedIndex");

	Params::AHoverDronePawn_GetDroneSpeedIndex_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HoverDrone.HoverDronePawn.GetAltitude
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void AHoverDronePawn::GetAltitude(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoverDronePawn", "GetAltitude");

	Params::AHoverDronePawn_GetAltitude_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HoverDrone.HoverDronePawn.EndLookat
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void AHoverDronePawn::EndLookat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoverDronePawn", "EndLookat");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function HoverDrone.HoverDronePawn.BeginLookat
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void AHoverDronePawn::BeginLookat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoverDronePawn", "BeginLookat");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class HoverDrone.HoverDroneSpeedLimitBox
// (Actor)

class UClass* AHoverDroneSpeedLimitBox::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoverDroneSpeedLimitBox");

	return Clss;
}


// HoverDroneSpeedLimitBox HoverDrone.Default__HoverDroneSpeedLimitBox
// (Public, ClassDefaultObject, ArchetypeObject)

class AHoverDroneSpeedLimitBox* AHoverDroneSpeedLimitBox::GetDefaultObj()
{
	static class AHoverDroneSpeedLimitBox* Default = nullptr;

	if (!Default)
		Default = static_cast<AHoverDroneSpeedLimitBox*>(AHoverDroneSpeedLimitBox::StaticClass()->DefaultObject);

	return Default;
}


// Class HoverDrone.HoverDroneVolumeManager
// (None)

class UClass* UHoverDroneVolumeManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoverDroneVolumeManager");

	return Clss;
}


// HoverDroneVolumeManager HoverDrone.Default__HoverDroneVolumeManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoverDroneVolumeManager* UHoverDroneVolumeManager::GetDefaultObj()
{
	static class UHoverDroneVolumeManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoverDroneVolumeManager*>(UHoverDroneVolumeManager::StaticClass()->DefaultObject);

	return Default;
}

}



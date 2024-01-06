#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class IKRig.IKGoalCreatorInterface
// (None)

class UClass* IIKGoalCreatorInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IKGoalCreatorInterface");

	return Clss;
}


// IKGoalCreatorInterface IKRig.Default__IKGoalCreatorInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IIKGoalCreatorInterface* IIKGoalCreatorInterface::GetDefaultObj()
{
	static class IIKGoalCreatorInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IIKGoalCreatorInterface*>(IIKGoalCreatorInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function IKRig.IKGoalCreatorInterface.AddIKGoals
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class FName, struct FIKRigGoal>OutGoals                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)

void IIKGoalCreatorInterface::AddIKGoals(TMap<class FName, struct FIKRigGoal> OutGoals)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IKGoalCreatorInterface", "AddIKGoals");

	Params::IIKGoalCreatorInterface_AddIKGoals_Params Parms{};

	Parms.OutGoals = OutGoals;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class IKRig.IKRigComponent
// (None)

class UClass* UIKRigComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IKRigComponent");

	return Clss;
}


// IKRigComponent IKRig.Default__IKRigComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UIKRigComponent* UIKRigComponent::GetDefaultObj()
{
	static class UIKRigComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UIKRigComponent*>(UIKRigComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function IKRig.IKRigComponent.SetIKRigGoalTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        GoalName                                                         (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// float                              PositionAlpha                                                    (ConstParm, BlueprintVisible, ExportObject, Transient, Config, InstancedReference, SubobjectReference)
// float                              RotationAlpha                                                    (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

float UIKRigComponent::SetIKRigGoalTransform(class FName GoalName, struct FTransform* Transform, float PositionAlpha)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IKRigComponent", "SetIKRigGoalTransform");

	Params::UIKRigComponent_SetIKRigGoalTransform_Params Parms{};

	Parms.GoalName = GoalName;
	Parms.PositionAlpha = PositionAlpha;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	return Parms.ReturnValue;

}


// Function IKRig.IKRigComponent.SetIKRigGoalPositionAndRotation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        GoalName                                                         (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     Position                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config)
// struct FQuat                       Rotation                                                         (BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
// float                              PositionAlpha                                                    (ConstParm, BlueprintVisible, ExportObject, Transient, Config, InstancedReference, SubobjectReference)
// float                              RotationAlpha                                                    (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

float UIKRigComponent::SetIKRigGoalPositionAndRotation(class FName GoalName, const struct FVector& Position, struct FQuat* Rotation, float PositionAlpha)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IKRigComponent", "SetIKRigGoalPositionAndRotation");

	Params::UIKRigComponent_SetIKRigGoalPositionAndRotation_Params Parms{};

	Parms.GoalName = GoalName;
	Parms.Position = Position;
	Parms.PositionAlpha = PositionAlpha;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Rotation != nullptr)
		*Rotation = std::move(Parms.Rotation);

	return Parms.ReturnValue;

}


// Function IKRig.IKRigComponent.SetIKRigGoal
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FIKRigGoal                  Goal                                                             (Edit, ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)

void UIKRigComponent::SetIKRigGoal(const struct FIKRigGoal& Goal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IKRigComponent", "SetIKRigGoal");

	Params::UIKRigComponent_SetIKRigGoal_Params Parms{};

	Parms.Goal = Goal;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function IKRig.IKRigComponent.ClearAllGoals
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UIKRigComponent::ClearAllGoals()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IKRigComponent", "ClearAllGoals");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class IKRig.IKRigEffectorGoal
// (None)

class UClass* UIKRigEffectorGoal::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IKRigEffectorGoal");

	return Clss;
}


// IKRigEffectorGoal IKRig.Default__IKRigEffectorGoal
// (Public, ClassDefaultObject, ArchetypeObject)

class UIKRigEffectorGoal* UIKRigEffectorGoal::GetDefaultObj()
{
	static class UIKRigEffectorGoal* Default = nullptr;

	if (!Default)
		Default = static_cast<UIKRigEffectorGoal*>(UIKRigEffectorGoal::StaticClass()->DefaultObject);

	return Default;
}


// Class IKRig.IKRigDefinition
// (None)

class UClass* UIKRigDefinition::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IKRigDefinition");

	return Clss;
}


// IKRigDefinition IKRig.Default__IKRigDefinition
// (Public, ClassDefaultObject, ArchetypeObject)

class UIKRigDefinition* UIKRigDefinition::GetDefaultObj()
{
	static class UIKRigDefinition* Default = nullptr;

	if (!Default)
		Default = static_cast<UIKRigDefinition*>(UIKRigDefinition::StaticClass()->DefaultObject);

	return Default;
}


// Class IKRig.IKRigProcessor
// (None)

class UClass* UIKRigProcessor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IKRigProcessor");

	return Clss;
}


// IKRigProcessor IKRig.Default__IKRigProcessor
// (Public, ClassDefaultObject, ArchetypeObject)

class UIKRigProcessor* UIKRigProcessor::GetDefaultObj()
{
	static class UIKRigProcessor* Default = nullptr;

	if (!Default)
		Default = static_cast<UIKRigProcessor*>(UIKRigProcessor::StaticClass()->DefaultObject);

	return Default;
}


// Class IKRig.IKRigSolver
// (None)

class UClass* UIKRigSolver::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IKRigSolver");

	return Clss;
}


// IKRigSolver IKRig.Default__IKRigSolver
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UIKRigSolver* UIKRigSolver::GetDefaultObj()
{
	static class UIKRigSolver* Default = nullptr;

	if (!Default)
		Default = static_cast<UIKRigSolver*>(UIKRigSolver::StaticClass()->DefaultObject);

	return Default;
}


// Class IKRig.RetargetChainSettings
// (None)

class UClass* URetargetChainSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RetargetChainSettings");

	return Clss;
}


// RetargetChainSettings IKRig.Default__RetargetChainSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class URetargetChainSettings* URetargetChainSettings::GetDefaultObj()
{
	static class URetargetChainSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<URetargetChainSettings*>(URetargetChainSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class IKRig.RetargetRootSettings
// (None)

class UClass* URetargetRootSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RetargetRootSettings");

	return Clss;
}


// RetargetRootSettings IKRig.Default__RetargetRootSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class URetargetRootSettings* URetargetRootSettings::GetDefaultObj()
{
	static class URetargetRootSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<URetargetRootSettings*>(URetargetRootSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class IKRig.IKRetargetGlobalSettings
// (None)

class UClass* UIKRetargetGlobalSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IKRetargetGlobalSettings");

	return Clss;
}


// IKRetargetGlobalSettings IKRig.Default__IKRetargetGlobalSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UIKRetargetGlobalSettings* UIKRetargetGlobalSettings::GetDefaultObj()
{
	static class UIKRetargetGlobalSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UIKRetargetGlobalSettings*>(UIKRetargetGlobalSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class IKRig.IKRetargeter
// (None)

class UClass* UIKRetargeter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IKRetargeter");

	return Clss;
}


// IKRetargeter IKRig.Default__IKRetargeter
// (Public, ClassDefaultObject, ArchetypeObject)

class UIKRetargeter* UIKRetargeter::GetDefaultObj()
{
	static class UIKRetargeter* Default = nullptr;

	if (!Default)
		Default = static_cast<UIKRetargeter*>(UIKRetargeter::StaticClass()->DefaultObject);

	return Default;
}


// Function IKRig.IKRetargeter.SetRootSettingsInRetargetProfile
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FRetargetProfile            RetargetProfile                                                  (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config)
// struct FTargetRootSettings         RootSettings                                                     (OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

struct FTargetRootSettings UIKRetargeter::SetRootSettingsInRetargetProfile(struct FRetargetProfile* RetargetProfile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IKRetargeter", "SetRootSettingsInRetargetProfile");

	Params::UIKRetargeter_SetRootSettingsInRetargetProfile_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (RetargetProfile != nullptr)
		*RetargetProfile = std::move(Parms.RetargetProfile);

	return Parms.ReturnValue;

}


// Function IKRig.IKRetargeter.SetGlobalSettingsInRetargetProfile
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FRetargetProfile            RetargetProfile                                                  (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config)
// struct FRetargetGlobalSettings     GlobalSettings                                                   (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

struct FRetargetGlobalSettings UIKRetargeter::SetGlobalSettingsInRetargetProfile(struct FRetargetProfile* RetargetProfile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IKRetargeter", "SetGlobalSettingsInRetargetProfile");

	Params::UIKRetargeter_SetGlobalSettingsInRetargetProfile_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (RetargetProfile != nullptr)
		*RetargetProfile = std::move(Parms.RetargetProfile);

	return Parms.ReturnValue;

}


// Function IKRig.IKRetargeter.SetChainSpeedPlantSettingsInRetargetProfile
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FRetargetProfile            RetargetProfile                                                  (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config)
// struct FTargetChainSpeedPlantSettingsSpeedPlantSettings                                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// class FName                        TargetChainName                                                  (Edit, ConstParm, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)

void UIKRetargeter::SetChainSpeedPlantSettingsInRetargetProfile(struct FRetargetProfile* RetargetProfile, const struct FTargetChainSpeedPlantSettings& SpeedPlantSettings, class FName TargetChainName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IKRetargeter", "SetChainSpeedPlantSettingsInRetargetProfile");

	Params::UIKRetargeter_SetChainSpeedPlantSettingsInRetargetProfile_Params Parms{};

	Parms.SpeedPlantSettings = SpeedPlantSettings;
	Parms.TargetChainName = TargetChainName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (RetargetProfile != nullptr)
		*RetargetProfile = std::move(Parms.RetargetProfile);

}


// Function IKRig.IKRetargeter.SetChainSettingsInRetargetProfile
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FRetargetProfile            RetargetProfile                                                  (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config)
// struct FTargetChainSettings        ChainSettings                                                    (Edit, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class FName                        TargetChainName                                                  (Edit, ConstParm, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)

struct FTargetChainSettings UIKRetargeter::SetChainSettingsInRetargetProfile(struct FRetargetProfile* RetargetProfile, class FName TargetChainName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IKRetargeter", "SetChainSettingsInRetargetProfile");

	Params::UIKRetargeter_SetChainSettingsInRetargetProfile_Params Parms{};

	Parms.TargetChainName = TargetChainName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (RetargetProfile != nullptr)
		*RetargetProfile = std::move(Parms.RetargetProfile);

	return Parms.ReturnValue;

}


// Function IKRig.IKRetargeter.SetChainIKSettingsInRetargetProfile
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FRetargetProfile            RetargetProfile                                                  (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config)
// struct FTargetChainIKSettings      IKSettings                                                       (Edit, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// class FName                        TargetChainName                                                  (Edit, ConstParm, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)

void UIKRetargeter::SetChainIKSettingsInRetargetProfile(struct FRetargetProfile* RetargetProfile, const struct FTargetChainIKSettings& IKSettings, class FName TargetChainName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IKRetargeter", "SetChainIKSettingsInRetargetProfile");

	Params::UIKRetargeter_SetChainIKSettingsInRetargetProfile_Params Parms{};

	Parms.IKSettings = IKSettings;
	Parms.TargetChainName = TargetChainName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (RetargetProfile != nullptr)
		*RetargetProfile = std::move(Parms.RetargetProfile);

}


// Function IKRig.IKRetargeter.SetChainFKSettingsInRetargetProfile
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FRetargetProfile            RetargetProfile                                                  (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config)
// struct FTargetChainFKSettings      FKSettings                                                       (Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// class FName                        TargetChainName                                                  (Edit, ConstParm, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)

void UIKRetargeter::SetChainFKSettingsInRetargetProfile(struct FRetargetProfile* RetargetProfile, const struct FTargetChainFKSettings& FKSettings, class FName TargetChainName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IKRetargeter", "SetChainFKSettingsInRetargetProfile");

	Params::UIKRetargeter_SetChainFKSettingsInRetargetProfile_Params Parms{};

	Parms.FKSettings = FKSettings;
	Parms.TargetChainName = TargetChainName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (RetargetProfile != nullptr)
		*RetargetProfile = std::move(Parms.RetargetProfile);

}


// Function IKRig.IKRetargeter.GetRootSettingsFromRetargetProfile
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRetargetProfile            RetargetProfile                                                  (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config)
// struct FTargetRootSettings         ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UIKRetargeter::GetRootSettingsFromRetargetProfile(struct FRetargetProfile* RetargetProfile, struct FTargetRootSettings* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IKRetargeter", "GetRootSettingsFromRetargetProfile");

	Params::UIKRetargeter_GetRootSettingsFromRetargetProfile_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (RetargetProfile != nullptr)
		*RetargetProfile = std::move(Parms.RetargetProfile);

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function IKRig.IKRetargeter.GetRootSettingsFromRetargetAsset
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UIKRetargeter*               RetargetAsset                                                    (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        OptionalProfileName                                              (ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// struct FTargetRootSettings         OutSettings                                                      (BlueprintVisible, ExportObject, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)

class UIKRetargeter* UIKRetargeter::GetRootSettingsFromRetargetAsset(class FName OptionalProfileName, const struct FTargetRootSettings& OutSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IKRetargeter", "GetRootSettingsFromRetargetAsset");

	Params::UIKRetargeter_GetRootSettingsFromRetargetAsset_Params Parms{};

	Parms.OptionalProfileName = OptionalProfileName;
	Parms.OutSettings = OutSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function IKRig.IKRetargeter.GetGlobalSettingsFromRetargetProfile
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRetargetProfile            RetargetProfile                                                  (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config)
// struct FRetargetGlobalSettings     ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UIKRetargeter::GetGlobalSettingsFromRetargetProfile(struct FRetargetProfile* RetargetProfile, struct FRetargetGlobalSettings* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IKRetargeter", "GetGlobalSettingsFromRetargetProfile");

	Params::UIKRetargeter_GetGlobalSettingsFromRetargetProfile_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (RetargetProfile != nullptr)
		*RetargetProfile = std::move(Parms.RetargetProfile);

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function IKRig.IKRetargeter.GetGlobalSettingsFromRetargetAsset
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UIKRetargeter*               RetargetAsset                                                    (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        OptionalProfileName                                              (ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// struct FRetargetGlobalSettings     OutSettings                                                      (BlueprintVisible, ExportObject, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)

class UIKRetargeter* UIKRetargeter::GetGlobalSettingsFromRetargetAsset(class FName OptionalProfileName, const struct FRetargetGlobalSettings& OutSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IKRetargeter", "GetGlobalSettingsFromRetargetAsset");

	Params::UIKRetargeter_GetGlobalSettingsFromRetargetAsset_Params Parms{};

	Parms.OptionalProfileName = OptionalProfileName;
	Parms.OutSettings = OutSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function IKRig.IKRetargeter.GetChainUsingGoalFromRetargetAsset
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UIKRetargeter*               RetargetAsset                                                    (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        IKGoalName                                                       (ExportObject, Net, EditFixedSize, Transient, Config, InstancedReference, SubobjectReference)
// struct FTargetChainSettings        ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UIKRetargeter* UIKRetargeter::GetChainUsingGoalFromRetargetAsset(class FName IKGoalName, struct FTargetChainSettings* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IKRetargeter", "GetChainUsingGoalFromRetargetAsset");

	Params::UIKRetargeter_GetChainUsingGoalFromRetargetAsset_Params Parms{};

	Parms.IKGoalName = IKGoalName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

	return Parms.ReturnValue;

}


// Function IKRig.IKRetargeter.GetChainSettingsFromRetargetProfile
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRetargetProfile            RetargetProfile                                                  (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config)
// class FName                        TargetChainName                                                  (Edit, ConstParm, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// struct FTargetChainSettings        ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UIKRetargeter::GetChainSettingsFromRetargetProfile(struct FRetargetProfile* RetargetProfile, class FName TargetChainName, struct FTargetChainSettings* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IKRetargeter", "GetChainSettingsFromRetargetProfile");

	Params::UIKRetargeter_GetChainSettingsFromRetargetProfile_Params Parms{};

	Parms.TargetChainName = TargetChainName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (RetargetProfile != nullptr)
		*RetargetProfile = std::move(Parms.RetargetProfile);

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function IKRig.IKRetargeter.GetChainSettingsFromRetargetAsset
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UIKRetargeter*               RetargetAsset                                                    (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        TargetChainName                                                  (Edit, ConstParm, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// class FName                        OptionalProfileName                                              (ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// struct FTargetChainSettings        ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UIKRetargeter* UIKRetargeter::GetChainSettingsFromRetargetAsset(class FName TargetChainName, class FName OptionalProfileName, struct FTargetChainSettings* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IKRetargeter", "GetChainSettingsFromRetargetAsset");

	Params::UIKRetargeter_GetChainSettingsFromRetargetAsset_Params Parms{};

	Parms.TargetChainName = TargetChainName;
	Parms.OptionalProfileName = OptionalProfileName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

	return Parms.ReturnValue;

}


// Class IKRig.IKRetargetProcessor
// (None)

class UClass* UIKRetargetProcessor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IKRetargetProcessor");

	return Clss;
}


// IKRetargetProcessor IKRig.Default__IKRetargetProcessor
// (Public, ClassDefaultObject, ArchetypeObject)

class UIKRetargetProcessor* UIKRetargetProcessor::GetDefaultObj()
{
	static class UIKRetargetProcessor* Default = nullptr;

	if (!Default)
		Default = static_cast<UIKRetargetProcessor*>(UIKRetargetProcessor::StaticClass()->DefaultObject);

	return Default;
}


// Class IKRig.IKRig_BodyMoverEffector
// (None)

class UClass* UIKRig_BodyMoverEffector::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IKRig_BodyMoverEffector");

	return Clss;
}


// IKRig_BodyMoverEffector IKRig.Default__IKRig_BodyMoverEffector
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UIKRig_BodyMoverEffector* UIKRig_BodyMoverEffector::GetDefaultObj()
{
	static class UIKRig_BodyMoverEffector* Default = nullptr;

	if (!Default)
		Default = static_cast<UIKRig_BodyMoverEffector*>(UIKRig_BodyMoverEffector::StaticClass()->DefaultObject);

	return Default;
}


// Class IKRig.IKRig_BodyMover
// (None)

class UClass* UIKRig_BodyMover::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IKRig_BodyMover");

	return Clss;
}


// IKRig_BodyMover IKRig.Default__IKRig_BodyMover
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UIKRig_BodyMover* UIKRig_BodyMover::GetDefaultObj()
{
	static class UIKRig_BodyMover* Default = nullptr;

	if (!Default)
		Default = static_cast<UIKRig_BodyMover*>(UIKRig_BodyMover::StaticClass()->DefaultObject);

	return Default;
}


// Class IKRig.IKRig_LimbEffector
// (None)

class UClass* UIKRig_LimbEffector::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IKRig_LimbEffector");

	return Clss;
}


// IKRig_LimbEffector IKRig.Default__IKRig_LimbEffector
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UIKRig_LimbEffector* UIKRig_LimbEffector::GetDefaultObj()
{
	static class UIKRig_LimbEffector* Default = nullptr;

	if (!Default)
		Default = static_cast<UIKRig_LimbEffector*>(UIKRig_LimbEffector::StaticClass()->DefaultObject);

	return Default;
}


// Class IKRig.IKRig_LimbSolver
// (None)

class UClass* UIKRig_LimbSolver::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IKRig_LimbSolver");

	return Clss;
}


// IKRig_LimbSolver IKRig.Default__IKRig_LimbSolver
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UIKRig_LimbSolver* UIKRig_LimbSolver::GetDefaultObj()
{
	static class UIKRig_LimbSolver* Default = nullptr;

	if (!Default)
		Default = static_cast<UIKRig_LimbSolver*>(UIKRig_LimbSolver::StaticClass()->DefaultObject);

	return Default;
}


// Class IKRig.IKRig_FBIKEffector
// (None)

class UClass* UIKRig_FBIKEffector::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IKRig_FBIKEffector");

	return Clss;
}


// IKRig_FBIKEffector IKRig.Default__IKRig_FBIKEffector
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UIKRig_FBIKEffector* UIKRig_FBIKEffector::GetDefaultObj()
{
	static class UIKRig_FBIKEffector* Default = nullptr;

	if (!Default)
		Default = static_cast<UIKRig_FBIKEffector*>(UIKRig_FBIKEffector::StaticClass()->DefaultObject);

	return Default;
}


// Class IKRig.IKRig_FBIKBoneSettings
// (None)

class UClass* UIKRig_FBIKBoneSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IKRig_FBIKBoneSettings");

	return Clss;
}


// IKRig_FBIKBoneSettings IKRig.Default__IKRig_FBIKBoneSettings
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UIKRig_FBIKBoneSettings* UIKRig_FBIKBoneSettings::GetDefaultObj()
{
	static class UIKRig_FBIKBoneSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UIKRig_FBIKBoneSettings*>(UIKRig_FBIKBoneSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class IKRig.IKRigFBIKSolver
// (None)

class UClass* UIKRigFBIKSolver::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IKRigFBIKSolver");

	return Clss;
}


// IKRigFBIKSolver IKRig.Default__IKRigFBIKSolver
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UIKRigFBIKSolver* UIKRigFBIKSolver::GetDefaultObj()
{
	static class UIKRigFBIKSolver* Default = nullptr;

	if (!Default)
		Default = static_cast<UIKRigFBIKSolver*>(UIKRigFBIKSolver::StaticClass()->DefaultObject);

	return Default;
}


// Class IKRig.IKRig_PoleSolverEffector
// (None)

class UClass* UIKRig_PoleSolverEffector::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IKRig_PoleSolverEffector");

	return Clss;
}


// IKRig_PoleSolverEffector IKRig.Default__IKRig_PoleSolverEffector
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UIKRig_PoleSolverEffector* UIKRig_PoleSolverEffector::GetDefaultObj()
{
	static class UIKRig_PoleSolverEffector* Default = nullptr;

	if (!Default)
		Default = static_cast<UIKRig_PoleSolverEffector*>(UIKRig_PoleSolverEffector::StaticClass()->DefaultObject);

	return Default;
}


// Class IKRig.IKRig_PoleSolver
// (None)

class UClass* UIKRig_PoleSolver::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IKRig_PoleSolver");

	return Clss;
}


// IKRig_PoleSolver IKRig.Default__IKRig_PoleSolver
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UIKRig_PoleSolver* UIKRig_PoleSolver::GetDefaultObj()
{
	static class UIKRig_PoleSolver* Default = nullptr;

	if (!Default)
		Default = static_cast<UIKRig_PoleSolver*>(UIKRig_PoleSolver::StaticClass()->DefaultObject);

	return Default;
}


// Class IKRig.IKRig_SetTransformEffector
// (None)

class UClass* UIKRig_SetTransformEffector::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IKRig_SetTransformEffector");

	return Clss;
}


// IKRig_SetTransformEffector IKRig.Default__IKRig_SetTransformEffector
// (Public, ClassDefaultObject, ArchetypeObject)

class UIKRig_SetTransformEffector* UIKRig_SetTransformEffector::GetDefaultObj()
{
	static class UIKRig_SetTransformEffector* Default = nullptr;

	if (!Default)
		Default = static_cast<UIKRig_SetTransformEffector*>(UIKRig_SetTransformEffector::StaticClass()->DefaultObject);

	return Default;
}


// Class IKRig.IKRig_SetTransform
// (None)

class UClass* UIKRig_SetTransform::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IKRig_SetTransform");

	return Clss;
}


// IKRig_SetTransform IKRig.Default__IKRig_SetTransform
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UIKRig_SetTransform* UIKRig_SetTransform::GetDefaultObj()
{
	static class UIKRig_SetTransform* Default = nullptr;

	if (!Default)
		Default = static_cast<UIKRig_SetTransform*>(UIKRig_SetTransform::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AIModule.BTNode
// (None)

class UClass* UBTNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTNode");

	return Clss;
}


// BTNode AIModule.Default__BTNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTNode* UBTNode::GetDefaultObj()
{
	static class UBTNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTNode*>(UBTNode::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.BTAuxiliaryNode
// (None)

class UClass* UBTAuxiliaryNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTAuxiliaryNode");

	return Clss;
}


// BTAuxiliaryNode AIModule.Default__BTAuxiliaryNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTAuxiliaryNode* UBTAuxiliaryNode::GetDefaultObj()
{
	static class UBTAuxiliaryNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTAuxiliaryNode*>(UBTAuxiliaryNode::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.BTService
// (None)

class UClass* UBTService::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTService");

	return Clss;
}


// BTService AIModule.Default__BTService
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTService* UBTService::GetDefaultObj()
{
	static class UBTService* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTService*>(UBTService::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.BTService_BlackboardBase
// (None)

class UClass* UBTService_BlackboardBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTService_BlackboardBase");

	return Clss;
}


// BTService_BlackboardBase AIModule.Default__BTService_BlackboardBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTService_BlackboardBase* UBTService_BlackboardBase::GetDefaultObj()
{
	static class UBTService_BlackboardBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTService_BlackboardBase*>(UBTService_BlackboardBase::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.BTTaskNode
// (None)

class UClass* UBTTaskNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTTaskNode");

	return Clss;
}


// BTTaskNode AIModule.Default__BTTaskNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTTaskNode* UBTTaskNode::GetDefaultObj()
{
	static class UBTTaskNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTTaskNode*>(UBTTaskNode::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.BTTask_BlackboardBase
// (None)

class UClass* UBTTask_BlackboardBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTTask_BlackboardBase");

	return Clss;
}


// BTTask_BlackboardBase AIModule.Default__BTTask_BlackboardBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTTask_BlackboardBase* UBTTask_BlackboardBase::GetDefaultObj()
{
	static class UBTTask_BlackboardBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTTask_BlackboardBase*>(UBTTask_BlackboardBase::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.BTTask_RotateToFaceBBEntry
// (None)

class UClass* UBTTask_RotateToFaceBBEntry::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTTask_RotateToFaceBBEntry");

	return Clss;
}


// BTTask_RotateToFaceBBEntry AIModule.Default__BTTask_RotateToFaceBBEntry
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTTask_RotateToFaceBBEntry* UBTTask_RotateToFaceBBEntry::GetDefaultObj()
{
	static class UBTTask_RotateToFaceBBEntry* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTTask_RotateToFaceBBEntry*>(UBTTask_RotateToFaceBBEntry::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.AIController
// (Actor)

class UClass* AAIController::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIController");

	return Clss;
}


// AIController AIModule.Default__AIController
// (Public, ClassDefaultObject, ArchetypeObject)

class AAIController* AAIController::GetDefaultObj()
{
	static class AAIController* Default = nullptr;

	if (!Default)
		Default = static_cast<AAIController*>(AAIController::StaticClass()->DefaultObject);

	return Default;
}


// Function AIModule.AIController.UseBlackboard
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UBlackboardData*             BlackboardAsset                                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UBlackboardComponent*        BlackboardComponent                                              (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void AAIController::UseBlackboard(class UBlackboardData* BlackboardAsset, class UBlackboardComponent** BlackboardComponent, bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIController", "UseBlackboard");

	Params::AAIController_UseBlackboard_Params Parms{};

	Parms.BlackboardAsset = BlackboardAsset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (BlackboardComponent != nullptr)
		*BlackboardComponent = Parms.BlackboardComponent;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AIModule.AIController.UnclaimTaskResource
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                      ResourceClass                                                    (ConstParm, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void AAIController::UnclaimTaskResource(class UClass* ResourceClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIController", "UnclaimTaskResource");

	Params::AAIController_UnclaimTaskResource_Params Parms{};

	Parms.ResourceClass = ResourceClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AIModule.AIController.SetPathFollowingComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPathFollowingComponent*     NewPFComponent                                                   (Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void AAIController::SetPathFollowingComponent(class UPathFollowingComponent** NewPFComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIController", "SetPathFollowingComponent");

	Params::AAIController_SetPathFollowingComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NewPFComponent != nullptr)
		*NewPFComponent = Parms.NewPFComponent;

}


// Function AIModule.AIController.SetMoveBlockDetection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnable                                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)

bool AAIController::SetMoveBlockDetection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIController", "SetMoveBlockDetection");

	Params::AAIController_SetMoveBlockDetection_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AIModule.AIController.RunBehaviorTree
// (Native, Public, BlueprintCallable)
// Parameters:
// class UBehaviorTree*               BTAsset                                                          (ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void AAIController::RunBehaviorTree(class UBehaviorTree** BTAsset, bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIController", "RunBehaviorTree");

	Params::AAIController_RunBehaviorTree_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (BTAsset != nullptr)
		*BTAsset = Parms.BTAsset;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AIModule.AIController.OnUsingBlackBoard
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UBlackboardComponent*        BlackboardComp                                                   (ConstParm, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UBlackboardData*             BlackboardAsset                                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void AAIController::OnUsingBlackBoard(class UBlackboardComponent** BlackboardComp, class UBlackboardData* BlackboardAsset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIController", "OnUsingBlackBoard");

	Params::AAIController_OnUsingBlackBoard_Params Parms{};

	Parms.BlackboardAsset = BlackboardAsset;

	UObject::ProcessEvent(Func, &Parms);

	if (BlackboardComp != nullptr)
		*BlackboardComp = Parms.BlackboardComp;

}


// Function AIModule.AIController.OnGameplayTaskResourcesClaimed
// (Native, Public)
// Parameters:
// struct FGameplayResourceSet        NewlyClaimed                                                     (BlueprintReadOnly, EditFixedSize, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FGameplayResourceSet        FreshlyReleased                                                  (Edit, ConstParm, BlueprintVisible, EditFixedSize, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

void AAIController::OnGameplayTaskResourcesClaimed(const struct FGameplayResourceSet& NewlyClaimed, const struct FGameplayResourceSet& FreshlyReleased)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIController", "OnGameplayTaskResourcesClaimed");

	Params::AAIController_OnGameplayTaskResourcesClaimed_Params Parms{};

	Parms.NewlyClaimed = NewlyClaimed;
	Parms.FreshlyReleased = FreshlyReleased;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AIModule.AIController.MoveToLocation
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Dest                                                             (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              AcceptanceRadius                                                 (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               bStopOnOverlap                                                   (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               bUsePathfinding                                                  (Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               bProjectDestinationToNavigation                                  (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               bCanStrafe                                                       (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UClass*                      FilterClass                                                      (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               bAllowPartialPath                                                (Edit, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               WasPlayerCommand                                                 (Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// enum class EPathFollowingRequestResultReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector AAIController::MoveToLocation(float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, class UClass** FilterClass, bool bAllowPartialPath, bool WasPlayerCommand, enum class EPathFollowingRequestResult* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIController", "MoveToLocation");

	Params::AAIController_MoveToLocation_Params Parms{};

	Parms.AcceptanceRadius = AcceptanceRadius;
	Parms.bStopOnOverlap = bStopOnOverlap;
	Parms.bUsePathfinding = bUsePathfinding;
	Parms.bProjectDestinationToNavigation = bProjectDestinationToNavigation;
	Parms.bCanStrafe = bCanStrafe;
	Parms.bAllowPartialPath = bAllowPartialPath;
	Parms.WasPlayerCommand = WasPlayerCommand;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (FilterClass != nullptr)
		*FilterClass = Parms.FilterClass;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function AIModule.AIController.MoveToActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Goal                                                             (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// float                              AcceptanceRadius                                                 (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               bStopOnOverlap                                                   (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               bUsePathfinding                                                  (Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               bCanStrafe                                                       (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UClass*                      FilterClass                                                      (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               bAllowPartialPath                                                (Edit, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// enum class EPathFollowingRequestResultReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void AAIController::MoveToActor(class AActor* Goal, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bCanStrafe, class UClass** FilterClass, bool bAllowPartialPath, enum class EPathFollowingRequestResult* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIController", "MoveToActor");

	Params::AAIController_MoveToActor_Params Parms{};

	Parms.Goal = Goal;
	Parms.AcceptanceRadius = AcceptanceRadius;
	Parms.bStopOnOverlap = bStopOnOverlap;
	Parms.bUsePathfinding = bUsePathfinding;
	Parms.bCanStrafe = bCanStrafe;
	Parms.bAllowPartialPath = bAllowPartialPath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (FilterClass != nullptr)
		*FilterClass = Parms.FilterClass;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AIModule.AIController.K2_SetFocus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      NewFocus                                                         (BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void AAIController::K2_SetFocus(class AActor* NewFocus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIController", "K2_SetFocus");

	Params::AAIController_K2_SetFocus_Params Parms{};

	Parms.NewFocus = NewFocus;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AIModule.AIController.K2_SetFocalPoint
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     FP                                                               (ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void AAIController::K2_SetFocalPoint(const struct FVector& FP)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIController", "K2_SetFocalPoint");

	Params::AAIController_K2_SetFocalPoint_Params Parms{};

	Parms.FP = FP;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AIModule.AIController.K2_ClearFocus
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AAIController::K2_ClearFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIController", "K2_ClearFocus");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AIModule.AIController.HasPartialPath
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void AAIController::HasPartialPath(bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIController", "HasPartialPath");

	Params::AAIController_HasPartialPath_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AIModule.AIController.GetPathFollowingComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPathFollowingComponent*     ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void AAIController::GetPathFollowingComponent(class UPathFollowingComponent** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIController", "GetPathFollowingComponent");

	Params::AAIController_GetPathFollowingComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AIModule.AIController.GetMoveStatus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EPathFollowingStatus    ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void AAIController::GetMoveStatus(enum class EPathFollowingStatus* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIController", "GetMoveStatus");

	Params::AAIController_GetMoveStatus_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AIModule.AIController.GetImmediateMoveDestination
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void AAIController::GetImmediateMoveDestination(struct FVector* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIController", "GetImmediateMoveDestination");

	Params::AAIController_GetImmediateMoveDestination_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function AIModule.AIController.GetFocusActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                      ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void AAIController::GetFocusActor(class AActor** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIController", "GetFocusActor");

	Params::AAIController_GetFocusActor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AIModule.AIController.GetFocalPointOnActor
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                      Actor                                                            (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
// struct FVector                     ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void AAIController::GetFocalPointOnActor(class AActor** Actor, struct FVector* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIController", "GetFocalPointOnActor");

	Params::AAIController_GetFocalPointOnActor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Actor != nullptr)
		*Actor = Parms.Actor;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function AIModule.AIController.GetFocalPoint
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void AAIController::GetFocalPoint(struct FVector* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIController", "GetFocalPoint");

	Params::AAIController_GetFocalPoint_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function AIModule.AIController.GetDeprecatedActionsComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPawnActionsComponent*       ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void AAIController::GetDeprecatedActionsComponent(class UPawnActionsComponent** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIController", "GetDeprecatedActionsComponent");

	Params::AAIController_GetDeprecatedActionsComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AIModule.AIController.GetAIPerceptionComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAIPerceptionComponent*      ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void AAIController::GetAIPerceptionComponent(class UAIPerceptionComponent** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIController", "GetAIPerceptionComponent");

	Params::AAIController_GetAIPerceptionComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AIModule.AIController.ClaimTaskResource
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                      ResourceClass                                                    (ConstParm, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void AAIController::ClaimTaskResource(class UClass* ResourceClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIController", "ClaimTaskResource");

	Params::AAIController_ClaimTaskResource_Params Parms{};

	Parms.ResourceClass = ResourceClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AIModule.PathFollowingComponent
// (None)

class UClass* UPathFollowingComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PathFollowingComponent");

	return Clss;
}


// PathFollowingComponent AIModule.Default__PathFollowingComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UPathFollowingComponent* UPathFollowingComponent::GetDefaultObj()
{
	static class UPathFollowingComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UPathFollowingComponent*>(UPathFollowingComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function AIModule.PathFollowingComponent.OnNavDataRegistered
// (Final, Native, Public)
// Parameters:
// class ANavigationData*             NavData                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

class ANavigationData* UPathFollowingComponent::OnNavDataRegistered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PathFollowingComponent", "OnNavDataRegistered");

	Params::UPathFollowingComponent_OnNavDataRegistered_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AIModule.PathFollowingComponent.OnActorBump
// (Native, Public, HasOutParams, HasDefaults)
// Parameters:
// class AActor*                      SelfActor                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate)
// class AActor*                      OtherActor                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FVector                     NormalImpulse                                                    (Edit, BlueprintVisible, Net, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FHitResult                  Hit                                                              (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UPathFollowingComponent::OnActorBump(class AActor** SelfActor, class AActor* OtherActor, struct FVector* NormalImpulse, const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PathFollowingComponent", "OnActorBump");

	Params::UPathFollowingComponent_OnActorBump_Params Parms{};

	Parms.OtherActor = OtherActor;
	Parms.Hit = Hit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SelfActor != nullptr)
		*SelfActor = Parms.SelfActor;

	if (NormalImpulse != nullptr)
		*NormalImpulse = std::move(Parms.NormalImpulse);

}


// Function AIModule.PathFollowingComponent.GetPathDestination
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UPathFollowingComponent::GetPathDestination(struct FVector* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PathFollowingComponent", "GetPathDestination");

	Params::UPathFollowingComponent_GetPathDestination_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function AIModule.PathFollowingComponent.GetPathActionType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EPathFollowingAction    ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UPathFollowingComponent::GetPathActionType(enum class EPathFollowingAction* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PathFollowingComponent", "GetPathActionType");

	Params::UPathFollowingComponent_GetPathActionType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Class AIModule.AIAsyncTaskBlueprintProxy
// (None)

class UClass* UAIAsyncTaskBlueprintProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAsyncTaskBlueprintProxy");

	return Clss;
}


// AIAsyncTaskBlueprintProxy AIModule.Default__AIAsyncTaskBlueprintProxy
// (Public, ClassDefaultObject, ArchetypeObject)

class UAIAsyncTaskBlueprintProxy* UAIAsyncTaskBlueprintProxy::GetDefaultObj()
{
	static class UAIAsyncTaskBlueprintProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAsyncTaskBlueprintProxy*>(UAIAsyncTaskBlueprintProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function AIModule.AIAsyncTaskBlueprintProxy.OnMoveCompleted
// (Final, Native, Public)
// Parameters:
// struct FAIRequestID                RequestID                                                        (ConstParm, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// enum class EPathFollowingResult    MovementResult                                                   (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

void UAIAsyncTaskBlueprintProxy::OnMoveCompleted(struct FAIRequestID* RequestID, enum class EPathFollowingResult* MovementResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAsyncTaskBlueprintProxy", "OnMoveCompleted");

	Params::UAIAsyncTaskBlueprintProxy_OnMoveCompleted_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (RequestID != nullptr)
		*RequestID = std::move(Parms.RequestID);

	if (MovementResult != nullptr)
		*MovementResult = Parms.MovementResult;

}


// Class AIModule.AIResourceInterface
// (None)

class UClass* IAIResourceInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIResourceInterface");

	return Clss;
}


// AIResourceInterface AIModule.Default__AIResourceInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IAIResourceInterface* IAIResourceInterface::GetDefaultObj()
{
	static class IAIResourceInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IAIResourceInterface*>(IAIResourceInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.AISenseBlueprintListener
// (Field, Struct, ScriptStruct)

class UClass* UAISenseBlueprintListener::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AISenseBlueprintListener");

	return Clss;
}


// AISenseBlueprintListener AIModule.Default__AISenseBlueprintListener
// (Public, ClassDefaultObject, ArchetypeObject)

class UAISenseBlueprintListener* UAISenseBlueprintListener::GetDefaultObj()
{
	static class UAISenseBlueprintListener* Default = nullptr;

	if (!Default)
		Default = static_cast<UAISenseBlueprintListener*>(UAISenseBlueprintListener::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.AISenseConfig
// (None)

class UClass* UAISenseConfig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AISenseConfig");

	return Clss;
}


// AISenseConfig AIModule.Default__AISenseConfig
// (Public, ClassDefaultObject, ArchetypeObject)

class UAISenseConfig* UAISenseConfig::GetDefaultObj()
{
	static class UAISenseConfig* Default = nullptr;

	if (!Default)
		Default = static_cast<UAISenseConfig*>(UAISenseConfig::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.AISenseConfig_Blueprint
// (None)

class UClass* UAISenseConfig_Blueprint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AISenseConfig_Blueprint");

	return Clss;
}


// AISenseConfig_Blueprint AIModule.Default__AISenseConfig_Blueprint
// (Public, ClassDefaultObject, ArchetypeObject)

class UAISenseConfig_Blueprint* UAISenseConfig_Blueprint::GetDefaultObj()
{
	static class UAISenseConfig_Blueprint* Default = nullptr;

	if (!Default)
		Default = static_cast<UAISenseConfig_Blueprint*>(UAISenseConfig_Blueprint::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.AISenseConfig_Hearing
// (None)

class UClass* UAISenseConfig_Hearing::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AISenseConfig_Hearing");

	return Clss;
}


// AISenseConfig_Hearing AIModule.Default__AISenseConfig_Hearing
// (Public, ClassDefaultObject, ArchetypeObject)

class UAISenseConfig_Hearing* UAISenseConfig_Hearing::GetDefaultObj()
{
	static class UAISenseConfig_Hearing* Default = nullptr;

	if (!Default)
		Default = static_cast<UAISenseConfig_Hearing*>(UAISenseConfig_Hearing::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.AISenseConfig_Prediction
// (None)

class UClass* UAISenseConfig_Prediction::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AISenseConfig_Prediction");

	return Clss;
}


// AISenseConfig_Prediction AIModule.Default__AISenseConfig_Prediction
// (Public, ClassDefaultObject, ArchetypeObject)

class UAISenseConfig_Prediction* UAISenseConfig_Prediction::GetDefaultObj()
{
	static class UAISenseConfig_Prediction* Default = nullptr;

	if (!Default)
		Default = static_cast<UAISenseConfig_Prediction*>(UAISenseConfig_Prediction::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.AISenseConfig_Sight
// (None)

class UClass* UAISenseConfig_Sight::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AISenseConfig_Sight");

	return Clss;
}


// AISenseConfig_Sight AIModule.Default__AISenseConfig_Sight
// (Public, ClassDefaultObject, ArchetypeObject)

class UAISenseConfig_Sight* UAISenseConfig_Sight::GetDefaultObj()
{
	static class UAISenseConfig_Sight* Default = nullptr;

	if (!Default)
		Default = static_cast<UAISenseConfig_Sight*>(UAISenseConfig_Sight::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.AISenseConfig_Team
// (None)

class UClass* UAISenseConfig_Team::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AISenseConfig_Team");

	return Clss;
}


// AISenseConfig_Team AIModule.Default__AISenseConfig_Team
// (Public, ClassDefaultObject, ArchetypeObject)

class UAISenseConfig_Team* UAISenseConfig_Team::GetDefaultObj()
{
	static class UAISenseConfig_Team* Default = nullptr;

	if (!Default)
		Default = static_cast<UAISenseConfig_Team*>(UAISenseConfig_Team::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.AISenseConfig_Touch
// (None)

class UClass* UAISenseConfig_Touch::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AISenseConfig_Touch");

	return Clss;
}


// AISenseConfig_Touch AIModule.Default__AISenseConfig_Touch
// (Public, ClassDefaultObject, ArchetypeObject)

class UAISenseConfig_Touch* UAISenseConfig_Touch::GetDefaultObj()
{
	static class UAISenseConfig_Touch* Default = nullptr;

	if (!Default)
		Default = static_cast<UAISenseConfig_Touch*>(UAISenseConfig_Touch::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.AISenseEvent
// (None)

class UClass* UAISenseEvent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AISenseEvent");

	return Clss;
}


// AISenseEvent AIModule.Default__AISenseEvent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAISenseEvent* UAISenseEvent::GetDefaultObj()
{
	static class UAISenseEvent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAISenseEvent*>(UAISenseEvent::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.AISenseEvent_Damage
// (None)

class UClass* UAISenseEvent_Damage::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AISenseEvent_Damage");

	return Clss;
}


// AISenseEvent_Damage AIModule.Default__AISenseEvent_Damage
// (Public, ClassDefaultObject, ArchetypeObject)

class UAISenseEvent_Damage* UAISenseEvent_Damage::GetDefaultObj()
{
	static class UAISenseEvent_Damage* Default = nullptr;

	if (!Default)
		Default = static_cast<UAISenseEvent_Damage*>(UAISenseEvent_Damage::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.AISenseEvent_Hearing
// (None)

class UClass* UAISenseEvent_Hearing::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AISenseEvent_Hearing");

	return Clss;
}


// AISenseEvent_Hearing AIModule.Default__AISenseEvent_Hearing
// (Public, ClassDefaultObject, ArchetypeObject)

class UAISenseEvent_Hearing* UAISenseEvent_Hearing::GetDefaultObj()
{
	static class UAISenseEvent_Hearing* Default = nullptr;

	if (!Default)
		Default = static_cast<UAISenseEvent_Hearing*>(UAISenseEvent_Hearing::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.CrowdAgentInterface
// (None)

class UClass* ICrowdAgentInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrowdAgentInterface");

	return Clss;
}


// CrowdAgentInterface AIModule.Default__CrowdAgentInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class ICrowdAgentInterface* ICrowdAgentInterface::GetDefaultObj()
{
	static class ICrowdAgentInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<ICrowdAgentInterface*>(ICrowdAgentInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.EnvQueryTypes
// (None)

class UClass* UEnvQueryTypes::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryTypes");

	return Clss;
}


// EnvQueryTypes AIModule.Default__EnvQueryTypes
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryTypes* UEnvQueryTypes::GetDefaultObj()
{
	static class UEnvQueryTypes* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryTypes*>(UEnvQueryTypes::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.EQSQueryResultSourceInterface
// (None)

class UClass* IEQSQueryResultSourceInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EQSQueryResultSourceInterface");

	return Clss;
}


// EQSQueryResultSourceInterface AIModule.Default__EQSQueryResultSourceInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IEQSQueryResultSourceInterface* IEQSQueryResultSourceInterface::GetDefaultObj()
{
	static class IEQSQueryResultSourceInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IEQSQueryResultSourceInterface*>(IEQSQueryResultSourceInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.GenericTeamAgentInterface
// (None)

class UClass* IGenericTeamAgentInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GenericTeamAgentInterface");

	return Clss;
}


// GenericTeamAgentInterface AIModule.Default__GenericTeamAgentInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IGenericTeamAgentInterface* IGenericTeamAgentInterface::GetDefaultObj()
{
	static class IGenericTeamAgentInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IGenericTeamAgentInterface*>(IGenericTeamAgentInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.PawnAction
// (None)

class UClass* UPawnAction::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PawnAction");

	return Clss;
}


// PawnAction AIModule.Default__PawnAction
// (Public, ClassDefaultObject, ArchetypeObject)

class UPawnAction* UPawnAction::GetDefaultObj()
{
	static class UPawnAction* Default = nullptr;

	if (!Default)
		Default = static_cast<UPawnAction*>(UPawnAction::StaticClass()->DefaultObject);

	return Default;
}


// Function AIModule.PawnAction.GetActionPriority
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EAIRequestPriority      ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UPawnAction::GetActionPriority(enum class EAIRequestPriority* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PawnAction", "GetActionPriority");

	Params::UPawnAction_GetActionPriority_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AIModule.PawnAction.Finish
// (Native, Protected, BlueprintCallable)
// Parameters:
// enum class EPawnActionResult       WithResult                                                       (Edit, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

enum class EPawnActionResult UPawnAction::Finish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PawnAction", "Finish");

	Params::UPawnAction_Finish_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AIModule.PawnAction.CreateActionInstance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// class UClass*                      ActionClass                                                      (ConstParm, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class UPawnAction*                 ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UClass* UPawnAction::CreateActionInstance(class UPawnAction** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PawnAction", "CreateActionInstance");

	Params::UPawnAction_CreateActionInstance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Class AIModule.PawnActionsComponent
// (None)

class UClass* UPawnActionsComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PawnActionsComponent");

	return Clss;
}


// PawnActionsComponent AIModule.Default__PawnActionsComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UPawnActionsComponent* UPawnActionsComponent::GetDefaultObj()
{
	static class UPawnActionsComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UPawnActionsComponent*>(UPawnActionsComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function AIModule.PawnActionsComponent.K2_PushAction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPawnAction*                 NewAction                                                        (ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// enum class EAIRequestPriority      Priority                                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class UObject*                     Instigator                                                       (Edit, BlueprintVisible, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UObject* UPawnActionsComponent::K2_PushAction(bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PawnActionsComponent", "K2_PushAction");

	Params::UPawnActionsComponent_K2_PushAction_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function AIModule.PawnActionsComponent.K2_PerformAction
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APawn*                       Pawn                                                             (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor)
// class UPawnAction*                 Action                                                           (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// enum class EAIRequestPriority      Priority                                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

enum class EAIRequestPriority UPawnActionsComponent::K2_PerformAction(class APawn* Pawn, class UPawnAction** Action, bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PawnActionsComponent", "K2_PerformAction");

	Params::UPawnActionsComponent_K2_PerformAction_Params Parms{};

	Parms.Pawn = Pawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Action != nullptr)
		*Action = Parms.Action;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function AIModule.PawnActionsComponent.K2_ForceAbortAction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPawnAction*                 ActionToAbort                                                    (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// enum class EPawnActionAbortState   ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UPawnAction* UPawnActionsComponent::K2_ForceAbortAction(enum class EPawnActionAbortState* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PawnActionsComponent", "K2_ForceAbortAction");

	Params::UPawnActionsComponent_K2_ForceAbortAction_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function AIModule.PawnActionsComponent.K2_AbortAction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPawnAction*                 ActionToAbort                                                    (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// enum class EPawnActionAbortState   ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UPawnAction* UPawnActionsComponent::K2_AbortAction(enum class EPawnActionAbortState* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PawnActionsComponent", "K2_AbortAction");

	Params::UPawnActionsComponent_K2_AbortAction_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Class AIModule.PawnAction_BlueprintBase
// (None)

class UClass* UPawnAction_BlueprintBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PawnAction_BlueprintBase");

	return Clss;
}


// PawnAction_BlueprintBase AIModule.Default__PawnAction_BlueprintBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UPawnAction_BlueprintBase* UPawnAction_BlueprintBase::GetDefaultObj()
{
	static class UPawnAction_BlueprintBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UPawnAction_BlueprintBase*>(UPawnAction_BlueprintBase::StaticClass()->DefaultObject);

	return Default;
}


// Function AIModule.PawnAction_BlueprintBase.ActionTick
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// float                              DeltaSeconds                                                     (Edit, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UPawnAction_BlueprintBase::ActionTick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PawnAction_BlueprintBase", "ActionTick");

	Params::UPawnAction_BlueprintBase_ActionTick_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIModule.PawnAction_BlueprintBase.ActionStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

class APawn* UPawnAction_BlueprintBase::ActionStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PawnAction_BlueprintBase", "ActionStart");

	Params::UPawnAction_BlueprintBase_ActionStart_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIModule.PawnAction_BlueprintBase.ActionResume
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

class APawn* UPawnAction_BlueprintBase::ActionResume()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PawnAction_BlueprintBase", "ActionResume");

	Params::UPawnAction_BlueprintBase_ActionResume_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIModule.PawnAction_BlueprintBase.ActionPause
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

class APawn* UPawnAction_BlueprintBase::ActionPause()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PawnAction_BlueprintBase", "ActionPause");

	Params::UPawnAction_BlueprintBase_ActionPause_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIModule.PawnAction_BlueprintBase.ActionFinished
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// enum class EPawnActionResult       WithResult                                                       (Edit, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

enum class EPawnActionResult UPawnAction_BlueprintBase::ActionFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PawnAction_BlueprintBase", "ActionFinished");

	Params::UPawnAction_BlueprintBase_ActionFinished_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Class AIModule.PawnAction_Move
// (None)

class UClass* UPawnAction_Move::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PawnAction_Move");

	return Clss;
}


// PawnAction_Move AIModule.Default__PawnAction_Move
// (Public, ClassDefaultObject, ArchetypeObject)

class UPawnAction_Move* UPawnAction_Move::GetDefaultObj()
{
	static class UPawnAction_Move* Default = nullptr;

	if (!Default)
		Default = static_cast<UPawnAction_Move*>(UPawnAction_Move::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.PawnAction_Repeat
// (None)

class UClass* UPawnAction_Repeat::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PawnAction_Repeat");

	return Clss;
}


// PawnAction_Repeat AIModule.Default__PawnAction_Repeat
// (Public, ClassDefaultObject, ArchetypeObject)

class UPawnAction_Repeat* UPawnAction_Repeat::GetDefaultObj()
{
	static class UPawnAction_Repeat* Default = nullptr;

	if (!Default)
		Default = static_cast<UPawnAction_Repeat*>(UPawnAction_Repeat::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.PawnAction_Sequence
// (None)

class UClass* UPawnAction_Sequence::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PawnAction_Sequence");

	return Clss;
}


// PawnAction_Sequence AIModule.Default__PawnAction_Sequence
// (Public, ClassDefaultObject, ArchetypeObject)

class UPawnAction_Sequence* UPawnAction_Sequence::GetDefaultObj()
{
	static class UPawnAction_Sequence* Default = nullptr;

	if (!Default)
		Default = static_cast<UPawnAction_Sequence*>(UPawnAction_Sequence::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.PawnAction_Wait
// (None)

class UClass* UPawnAction_Wait::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PawnAction_Wait");

	return Clss;
}


// PawnAction_Wait AIModule.Default__PawnAction_Wait
// (Public, ClassDefaultObject, ArchetypeObject)

class UPawnAction_Wait* UPawnAction_Wait::GetDefaultObj()
{
	static class UPawnAction_Wait* Default = nullptr;

	if (!Default)
		Default = static_cast<UPawnAction_Wait*>(UPawnAction_Wait::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.AIResource_Movement
// (None)

class UClass* UAIResource_Movement::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIResource_Movement");

	return Clss;
}


// AIResource_Movement AIModule.Default__AIResource_Movement
// (Public, ClassDefaultObject, ArchetypeObject)

class UAIResource_Movement* UAIResource_Movement::GetDefaultObj()
{
	static class UAIResource_Movement* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIResource_Movement*>(UAIResource_Movement::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.AIResource_Logic
// (None)

class UClass* UAIResource_Logic::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIResource_Logic");

	return Clss;
}


// AIResource_Logic AIModule.Default__AIResource_Logic
// (Public, ClassDefaultObject, ArchetypeObject)

class UAIResource_Logic* UAIResource_Logic::GetDefaultObj()
{
	static class UAIResource_Logic* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIResource_Logic*>(UAIResource_Logic::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.AISubsystem
// (None)

class UClass* UAISubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AISubsystem");

	return Clss;
}


// AISubsystem AIModule.Default__AISubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UAISubsystem* UAISubsystem::GetDefaultObj()
{
	static class UAISubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UAISubsystem*>(UAISubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.AISystem
// (None)

class UClass* UAISystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AISystem");

	return Clss;
}


// AISystem AIModule.Default__AISystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UAISystem* UAISystem::GetDefaultObj()
{
	static class UAISystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UAISystem*>(UAISystem::StaticClass()->DefaultObject);

	return Default;
}


// Function AIModule.AISystem.AILoggingVerbose
// (Exec, Native, Public)
// Parameters:

void UAISystem::AILoggingVerbose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AISystem", "AILoggingVerbose");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AIModule.AISystem.AIIgnorePlayers
// (Exec, Native, Public)
// Parameters:

void UAISystem::AIIgnorePlayers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AISystem", "AIIgnorePlayers");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class AIModule.BehaviorTree
// (None)

class UClass* UBehaviorTree::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BehaviorTree");

	return Clss;
}


// BehaviorTree AIModule.Default__BehaviorTree
// (Public, ClassDefaultObject, ArchetypeObject)

class UBehaviorTree* UBehaviorTree::GetDefaultObj()
{
	static class UBehaviorTree* Default = nullptr;

	if (!Default)
		Default = static_cast<UBehaviorTree*>(UBehaviorTree::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.BrainComponent
// (None)

class UClass* UBrainComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BrainComponent");

	return Clss;
}


// BrainComponent AIModule.Default__BrainComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UBrainComponent* UBrainComponent::GetDefaultObj()
{
	static class UBrainComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UBrainComponent*>(UBrainComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function AIModule.BrainComponent.StopLogic
// (Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Reason                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)

class FString UBrainComponent::StopLogic()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BrainComponent", "StopLogic");

	Params::UBrainComponent_StopLogic_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AIModule.BrainComponent.StartLogic
// (Native, Public, BlueprintCallable)
// Parameters:

void UBrainComponent::StartLogic()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BrainComponent", "StartLogic");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AIModule.BrainComponent.RestartLogic
// (Native, Public, BlueprintCallable)
// Parameters:

void UBrainComponent::RestartLogic()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BrainComponent", "RestartLogic");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AIModule.BrainComponent.IsRunning
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UBrainComponent::IsRunning(bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BrainComponent", "IsRunning");

	Params::UBrainComponent_IsRunning_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AIModule.BrainComponent.IsPaused
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UBrainComponent::IsPaused(bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BrainComponent", "IsPaused");

	Params::UBrainComponent_IsPaused_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Class AIModule.BehaviorTreeComponent
// (None)

class UClass* UBehaviorTreeComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BehaviorTreeComponent");

	return Clss;
}


// BehaviorTreeComponent AIModule.Default__BehaviorTreeComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UBehaviorTreeComponent* UBehaviorTreeComponent::GetDefaultObj()
{
	static class UBehaviorTreeComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UBehaviorTreeComponent*>(UBehaviorTreeComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function AIModule.BehaviorTreeComponent.SetDynamicSubtree
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag                InjectTag                                                        (BlueprintReadOnly, Net, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class UBehaviorTree*               BehaviorAsset                                                    (ExportObject, Net, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void UBehaviorTreeComponent::SetDynamicSubtree(const struct FGameplayTag& InjectTag, class UBehaviorTree* BehaviorAsset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BehaviorTreeComponent", "SetDynamicSubtree");

	Params::UBehaviorTreeComponent_SetDynamicSubtree_Params Parms{};

	Parms.InjectTag = InjectTag;
	Parms.BehaviorAsset = BehaviorAsset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AIModule.BehaviorTreeComponent.GetTagCooldownEndTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                CooldownTag                                                      (Edit, Net, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// double                             ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UBehaviorTreeComponent::GetTagCooldownEndTime(const struct FGameplayTag& CooldownTag, double* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BehaviorTreeComponent", "GetTagCooldownEndTime");

	Params::UBehaviorTreeComponent_GetTagCooldownEndTime_Params Parms{};

	Parms.CooldownTag = CooldownTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AIModule.BehaviorTreeComponent.FindService
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      Name                                                             (ConstParm, Net, OutParm)
// class UBTNode*                     ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UBehaviorTreeComponent::FindService(class FString* Name, class UBTNode** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BehaviorTreeComponent", "FindService");

	Params::UBehaviorTreeComponent_FindService_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Name != nullptr)
		*Name = std::move(Parms.Name);

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AIModule.BehaviorTreeComponent.AddCooldownTagDuration
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag                CooldownTag                                                      (Edit, Net, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// float                              CooldownDuration                                                 (Edit, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bAddToExistingDuration                                           (Edit, BlueprintVisible, BlueprintReadOnly, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

float UBehaviorTreeComponent::AddCooldownTagDuration(const struct FGameplayTag& CooldownTag, bool bAddToExistingDuration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BehaviorTreeComponent", "AddCooldownTagDuration");

	Params::UBehaviorTreeComponent_AddCooldownTagDuration_Params Parms{};

	Parms.CooldownTag = CooldownTag;
	Parms.bAddToExistingDuration = bAddToExistingDuration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class AIModule.BehaviorTreeManager
// (None)

class UClass* UBehaviorTreeManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BehaviorTreeManager");

	return Clss;
}


// BehaviorTreeManager AIModule.Default__BehaviorTreeManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UBehaviorTreeManager* UBehaviorTreeManager::GetDefaultObj()
{
	static class UBehaviorTreeManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UBehaviorTreeManager*>(UBehaviorTreeManager::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.BehaviorTreeTypes
// (None)

class UClass* UBehaviorTreeTypes::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BehaviorTreeTypes");

	return Clss;
}


// BehaviorTreeTypes AIModule.Default__BehaviorTreeTypes
// (Public, ClassDefaultObject, ArchetypeObject)

class UBehaviorTreeTypes* UBehaviorTreeTypes::GetDefaultObj()
{
	static class UBehaviorTreeTypes* Default = nullptr;

	if (!Default)
		Default = static_cast<UBehaviorTreeTypes*>(UBehaviorTreeTypes::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.BlackboardAssetProvider
// (None)

class UClass* IBlackboardAssetProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BlackboardAssetProvider");

	return Clss;
}


// BlackboardAssetProvider AIModule.Default__BlackboardAssetProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class IBlackboardAssetProvider* IBlackboardAssetProvider::GetDefaultObj()
{
	static class IBlackboardAssetProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<IBlackboardAssetProvider*>(IBlackboardAssetProvider::StaticClass()->DefaultObject);

	return Default;
}


// Function AIModule.BlackboardAssetProvider.GetBlackboardAsset
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UBlackboardData*             ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void IBlackboardAssetProvider::GetBlackboardAsset(class UBlackboardData** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlackboardAssetProvider", "GetBlackboardAsset");

	Params::IBlackboardAssetProvider_GetBlackboardAsset_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Class AIModule.BlackboardComponent
// (None)

class UClass* UBlackboardComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BlackboardComponent");

	return Clss;
}


// BlackboardComponent AIModule.Default__BlackboardComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UBlackboardComponent* UBlackboardComponent::GetDefaultObj()
{
	static class UBlackboardComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UBlackboardComponent*>(UBlackboardComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function AIModule.BlackboardComponent.SetValueAsVector
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        KeyName                                                          (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     VectorValue                                                      (BlueprintVisible, Parm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

struct FVector UBlackboardComponent::SetValueAsVector()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlackboardComponent", "SetValueAsVector");

	Params::UBlackboardComponent_SetValueAsVector_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AIModule.BlackboardComponent.SetValueAsString
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        KeyName                                                          (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class FString                      StringValue                                                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance)

class FString UBlackboardComponent::SetValueAsString()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlackboardComponent", "SetValueAsString");

	Params::UBlackboardComponent_SetValueAsString_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AIModule.BlackboardComponent.SetValueAsRotator
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        KeyName                                                          (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FRotator                    VectorValue                                                      (BlueprintVisible, Parm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

struct FRotator UBlackboardComponent::SetValueAsRotator()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlackboardComponent", "SetValueAsRotator");

	Params::UBlackboardComponent_SetValueAsRotator_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AIModule.BlackboardComponent.SetValueAsObject
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        KeyName                                                          (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class UObject*                     ObjectValue                                                      (Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UObject* UBlackboardComponent::SetValueAsObject()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlackboardComponent", "SetValueAsObject");

	Params::UBlackboardComponent_SetValueAsObject_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AIModule.BlackboardComponent.SetValueAsName
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        KeyName                                                          (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class FName                        NameValue                                                        (ConstParm, Net, EditFixedSize, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

class FName UBlackboardComponent::SetValueAsName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlackboardComponent", "SetValueAsName");

	Params::UBlackboardComponent_SetValueAsName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AIModule.BlackboardComponent.SetValueAsInt
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        KeyName                                                          (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// int32                              IntValue                                                         (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UBlackboardComponent::SetValueAsInt()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlackboardComponent", "SetValueAsInt");

	Params::UBlackboardComponent_SetValueAsInt_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AIModule.BlackboardComponent.SetValueAsFloat
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        KeyName                                                          (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              FloatValue                                                       (Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UBlackboardComponent::SetValueAsFloat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlackboardComponent", "SetValueAsFloat");

	Params::UBlackboardComponent_SetValueAsFloat_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AIModule.BlackboardComponent.SetValueAsEnum
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        KeyName                                                          (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// uint8                              EnumValue                                                        (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

class FName UBlackboardComponent::SetValueAsEnum(uint8 EnumValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlackboardComponent", "SetValueAsEnum");

	Params::UBlackboardComponent_SetValueAsEnum_Params Parms{};

	Parms.EnumValue = EnumValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AIModule.BlackboardComponent.SetValueAsClass
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        KeyName                                                          (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class UClass*                      ClassValue                                                       (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

class FName UBlackboardComponent::SetValueAsClass(class UClass* ClassValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlackboardComponent", "SetValueAsClass");

	Params::UBlackboardComponent_SetValueAsClass_Params Parms{};

	Parms.ClassValue = ClassValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AIModule.BlackboardComponent.SetValueAsBool
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        KeyName                                                          (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               BoolValue                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Transient, InstancedReference, SubobjectReference)

class FName UBlackboardComponent::SetValueAsBool(bool BoolValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlackboardComponent", "SetValueAsBool");

	Params::UBlackboardComponent_SetValueAsBool_Params Parms{};

	Parms.BoolValue = BoolValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AIModule.BlackboardComponent.IsVectorValueSet
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        KeyName                                                          (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class FName UBlackboardComponent::IsVectorValueSet(bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlackboardComponent", "IsVectorValueSet");

	Params::UBlackboardComponent_IsVectorValueSet_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function AIModule.BlackboardComponent.GetValueAsVector
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        KeyName                                                          (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class FName UBlackboardComponent::GetValueAsVector(struct FVector* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlackboardComponent", "GetValueAsVector");

	Params::UBlackboardComponent_GetValueAsVector_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

	return Parms.ReturnValue;

}


// Function AIModule.BlackboardComponent.GetValueAsString
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        KeyName                                                          (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class FString                      ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class FName UBlackboardComponent::GetValueAsString(class FString* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlackboardComponent", "GetValueAsString");

	Params::UBlackboardComponent_GetValueAsString_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

	return Parms.ReturnValue;

}


// Function AIModule.BlackboardComponent.GetValueAsRotator
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        KeyName                                                          (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FRotator                    ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class FName UBlackboardComponent::GetValueAsRotator(struct FRotator* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlackboardComponent", "GetValueAsRotator");

	Params::UBlackboardComponent_GetValueAsRotator_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

	return Parms.ReturnValue;

}


// Function AIModule.BlackboardComponent.GetValueAsObject
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        KeyName                                                          (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class UObject*                     ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class FName UBlackboardComponent::GetValueAsObject(class UObject** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlackboardComponent", "GetValueAsObject");

	Params::UBlackboardComponent_GetValueAsObject_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function AIModule.BlackboardComponent.GetValueAsName
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        KeyName                                                          (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class FName                        ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class FName UBlackboardComponent::GetValueAsName(class FName* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlackboardComponent", "GetValueAsName");

	Params::UBlackboardComponent_GetValueAsName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function AIModule.BlackboardComponent.GetValueAsInt
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        KeyName                                                          (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class FName UBlackboardComponent::GetValueAsInt(int32* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlackboardComponent", "GetValueAsInt");

	Params::UBlackboardComponent_GetValueAsInt_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function AIModule.BlackboardComponent.GetValueAsFloat
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        KeyName                                                          (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class FName UBlackboardComponent::GetValueAsFloat(float* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlackboardComponent", "GetValueAsFloat");

	Params::UBlackboardComponent_GetValueAsFloat_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function AIModule.BlackboardComponent.GetValueAsEnum
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        KeyName                                                          (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// uint8                              ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class FName UBlackboardComponent::GetValueAsEnum(uint8* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlackboardComponent", "GetValueAsEnum");

	Params::UBlackboardComponent_GetValueAsEnum_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function AIModule.BlackboardComponent.GetValueAsClass
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        KeyName                                                          (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class UClass*                      ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class FName UBlackboardComponent::GetValueAsClass(class UClass** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlackboardComponent", "GetValueAsClass");

	Params::UBlackboardComponent_GetValueAsClass_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function AIModule.BlackboardComponent.GetValueAsBool
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        KeyName                                                          (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class FName UBlackboardComponent::GetValueAsBool(bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlackboardComponent", "GetValueAsBool");

	Params::UBlackboardComponent_GetValueAsBool_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function AIModule.BlackboardComponent.GetRotationFromEntry
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        KeyName                                                          (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FRotator                    ResultRotation                                                   (Edit, BlueprintVisible, Net, EditFixedSize, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class FName UBlackboardComponent::GetRotationFromEntry(const struct FRotator& ResultRotation, bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlackboardComponent", "GetRotationFromEntry");

	Params::UBlackboardComponent_GetRotationFromEntry_Params Parms{};

	Parms.ResultRotation = ResultRotation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function AIModule.BlackboardComponent.GetLocationFromEntry
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        KeyName                                                          (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     ResultLocation                                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class FName UBlackboardComponent::GetLocationFromEntry(const struct FVector& ResultLocation, bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlackboardComponent", "GetLocationFromEntry");

	Params::UBlackboardComponent_GetLocationFromEntry_Params Parms{};

	Parms.ResultLocation = ResultLocation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function AIModule.BlackboardComponent.ClearValueAsVector
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        KeyName                                                          (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class FName UBlackboardComponent::ClearValueAsVector()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlackboardComponent", "ClearValueAsVector");

	Params::UBlackboardComponent_ClearValueAsVector_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AIModule.BlackboardComponent.ClearValueAsRotator
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        KeyName                                                          (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class FName UBlackboardComponent::ClearValueAsRotator()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlackboardComponent", "ClearValueAsRotator");

	Params::UBlackboardComponent_ClearValueAsRotator_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AIModule.BlackboardComponent.ClearValue
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        KeyName                                                          (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class FName UBlackboardComponent::ClearValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlackboardComponent", "ClearValue");

	Params::UBlackboardComponent_ClearValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class AIModule.BlackboardData
// (None)

class UClass* UBlackboardData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BlackboardData");

	return Clss;
}


// BlackboardData AIModule.Default__BlackboardData
// (Public, ClassDefaultObject, ArchetypeObject)

class UBlackboardData* UBlackboardData::GetDefaultObj()
{
	static class UBlackboardData* Default = nullptr;

	if (!Default)
		Default = static_cast<UBlackboardData*>(UBlackboardData::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.BlackboardKeyType
// (None)

class UClass* UBlackboardKeyType::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BlackboardKeyType");

	return Clss;
}


// BlackboardKeyType AIModule.Default__BlackboardKeyType
// (Public, ClassDefaultObject, ArchetypeObject)

class UBlackboardKeyType* UBlackboardKeyType::GetDefaultObj()
{
	static class UBlackboardKeyType* Default = nullptr;

	if (!Default)
		Default = static_cast<UBlackboardKeyType*>(UBlackboardKeyType::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.BlackboardKeyType_Bool
// (None)

class UClass* UBlackboardKeyType_Bool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BlackboardKeyType_Bool");

	return Clss;
}


// BlackboardKeyType_Bool AIModule.Default__BlackboardKeyType_Bool
// (Public, ClassDefaultObject, ArchetypeObject)

class UBlackboardKeyType_Bool* UBlackboardKeyType_Bool::GetDefaultObj()
{
	static class UBlackboardKeyType_Bool* Default = nullptr;

	if (!Default)
		Default = static_cast<UBlackboardKeyType_Bool*>(UBlackboardKeyType_Bool::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.BlackboardKeyType_Class
// (None)

class UClass* UBlackboardKeyType_Class::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BlackboardKeyType_Class");

	return Clss;
}


// BlackboardKeyType_Class AIModule.Default__BlackboardKeyType_Class
// (Public, ClassDefaultObject, ArchetypeObject)

class UBlackboardKeyType_Class* UBlackboardKeyType_Class::GetDefaultObj()
{
	static class UBlackboardKeyType_Class* Default = nullptr;

	if (!Default)
		Default = static_cast<UBlackboardKeyType_Class*>(UBlackboardKeyType_Class::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.BlackboardKeyType_Enum
// (None)

class UClass* UBlackboardKeyType_Enum::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BlackboardKeyType_Enum");

	return Clss;
}


// BlackboardKeyType_Enum AIModule.Default__BlackboardKeyType_Enum
// (Public, ClassDefaultObject, ArchetypeObject)

class UBlackboardKeyType_Enum* UBlackboardKeyType_Enum::GetDefaultObj()
{
	static class UBlackboardKeyType_Enum* Default = nullptr;

	if (!Default)
		Default = static_cast<UBlackboardKeyType_Enum*>(UBlackboardKeyType_Enum::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.BlackboardKeyType_Float
// (None)

class UClass* UBlackboardKeyType_Float::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BlackboardKeyType_Float");

	return Clss;
}


// BlackboardKeyType_Float AIModule.Default__BlackboardKeyType_Float
// (Public, ClassDefaultObject, ArchetypeObject)

class UBlackboardKeyType_Float* UBlackboardKeyType_Float::GetDefaultObj()
{
	static class UBlackboardKeyType_Float* Default = nullptr;

	if (!Default)
		Default = static_cast<UBlackboardKeyType_Float*>(UBlackboardKeyType_Float::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.BlackboardKeyType_Int
// (None)

class UClass* UBlackboardKeyType_Int::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BlackboardKeyType_Int");

	return Clss;
}


// BlackboardKeyType_Int AIModule.Default__BlackboardKeyType_Int
// (Public, ClassDefaultObject, ArchetypeObject)

class UBlackboardKeyType_Int* UBlackboardKeyType_Int::GetDefaultObj()
{
	static class UBlackboardKeyType_Int* Default = nullptr;

	if (!Default)
		Default = static_cast<UBlackboardKeyType_Int*>(UBlackboardKeyType_Int::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.BlackboardKeyType_Name
// (None)

class UClass* UBlackboardKeyType_Name::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BlackboardKeyType_Name");

	return Clss;
}


// BlackboardKeyType_Name AIModule.Default__BlackboardKeyType_Name
// (Public, ClassDefaultObject, ArchetypeObject)

class UBlackboardKeyType_Name* UBlackboardKeyType_Name::GetDefaultObj()
{
	static class UBlackboardKeyType_Name* Default = nullptr;

	if (!Default)
		Default = static_cast<UBlackboardKeyType_Name*>(UBlackboardKeyType_Name::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.BlackboardKeyType_NativeEnum
// (None)

class UClass* UBlackboardKeyType_NativeEnum::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BlackboardKeyType_NativeEnum");

	return Clss;
}


// BlackboardKeyType_NativeEnum AIModule.Default__BlackboardKeyType_NativeEnum
// (Public, ClassDefaultObject, ArchetypeObject)

class UBlackboardKeyType_NativeEnum* UBlackboardKeyType_NativeEnum::GetDefaultObj()
{
	static class UBlackboardKeyType_NativeEnum* Default = nullptr;

	if (!Default)
		Default = static_cast<UBlackboardKeyType_NativeEnum*>(UBlackboardKeyType_NativeEnum::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.BlackboardKeyType_Object
// (None)

class UClass* UBlackboardKeyType_Object::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BlackboardKeyType_Object");

	return Clss;
}


// BlackboardKeyType_Object AIModule.Default__BlackboardKeyType_Object
// (Public, ClassDefaultObject, ArchetypeObject)

class UBlackboardKeyType_Object* UBlackboardKeyType_Object::GetDefaultObj()
{
	static class UBlackboardKeyType_Object* Default = nullptr;

	if (!Default)
		Default = static_cast<UBlackboardKeyType_Object*>(UBlackboardKeyType_Object::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.BlackboardKeyType_Rotator
// (None)

class UClass* UBlackboardKeyType_Rotator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BlackboardKeyType_Rotator");

	return Clss;
}


// BlackboardKeyType_Rotator AIModule.Default__BlackboardKeyType_Rotator
// (Public, ClassDefaultObject, ArchetypeObject)

class UBlackboardKeyType_Rotator* UBlackboardKeyType_Rotator::GetDefaultObj()
{
	static class UBlackboardKeyType_Rotator* Default = nullptr;

	if (!Default)
		Default = static_cast<UBlackboardKeyType_Rotator*>(UBlackboardKeyType_Rotator::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.BlackboardKeyType_String
// (None)

class UClass* UBlackboardKeyType_String::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BlackboardKeyType_String");

	return Clss;
}


// BlackboardKeyType_String AIModule.Default__BlackboardKeyType_String
// (Public, ClassDefaultObject, ArchetypeObject)

class UBlackboardKeyType_String* UBlackboardKeyType_String::GetDefaultObj()
{
	static class UBlackboardKeyType_String* Default = nullptr;

	if (!Default)
		Default = static_cast<UBlackboardKeyType_String*>(UBlackboardKeyType_String::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.BlackboardKeyType_Vector
// (None)

class UClass* UBlackboardKeyType_Vector::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BlackboardKeyType_Vector");

	return Clss;
}


// BlackboardKeyType_Vector AIModule.Default__BlackboardKeyType_Vector
// (Public, ClassDefaultObject, ArchetypeObject)

class UBlackboardKeyType_Vector* UBlackboardKeyType_Vector::GetDefaultObj()
{
	static class UBlackboardKeyType_Vector* Default = nullptr;

	if (!Default)
		Default = static_cast<UBlackboardKeyType_Vector*>(UBlackboardKeyType_Vector::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.BTCompositeNode
// (None)

class UClass* UBTCompositeNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTCompositeNode");

	return Clss;
}


// BTCompositeNode AIModule.Default__BTCompositeNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTCompositeNode* UBTCompositeNode::GetDefaultObj()
{
	static class UBTCompositeNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTCompositeNode*>(UBTCompositeNode::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.BTDecorator
// (None)

class UClass* UBTDecorator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTDecorator");

	return Clss;
}


// BTDecorator AIModule.Default__BTDecorator
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTDecorator* UBTDecorator::GetDefaultObj()
{
	static class UBTDecorator* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTDecorator*>(UBTDecorator::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.BTFunctionLibrary
// (None)

class UClass* UBTFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTFunctionLibrary");

	return Clss;
}


// BTFunctionLibrary AIModule.Default__BTFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTFunctionLibrary* UBTFunctionLibrary::GetDefaultObj()
{
	static class UBTFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTFunctionLibrary*>(UBTFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function AIModule.BTFunctionLibrary.StopUsingExternalEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UBTFunctionLibrary::StopUsingExternalEvent(class UBTNode* NodeOwner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTFunctionLibrary", "StopUsingExternalEvent");

	Params::UBTFunctionLibrary_StopUsingExternalEvent_Params Parms{};

	Parms.NodeOwner = NodeOwner;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AIModule.BTFunctionLibrary.StartUsingExternalEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class AActor*                      OwningActor                                                      (Edit, ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

class AActor* UBTFunctionLibrary::StartUsingExternalEvent(class UBTNode* NodeOwner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTFunctionLibrary", "StartUsingExternalEvent");

	Params::UBTFunctionLibrary_StartUsingExternalEvent_Params Parms{};

	Parms.NodeOwner = NodeOwner;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsVector
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FBlackboardKeySelector      Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
// struct FVector                     Value                                                            (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)

void UBTFunctionLibrary::SetBlackboardValueAsVector(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FVector& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTFunctionLibrary", "SetBlackboardValueAsVector");

	Params::UBTFunctionLibrary_SetBlackboardValueAsVector_Params Parms{};

	Parms.NodeOwner = NodeOwner;
	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FBlackboardKeySelector      Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
// class FString                      Value                                                            (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)

void UBTFunctionLibrary::SetBlackboardValueAsString(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTFunctionLibrary", "SetBlackboardValueAsString");

	Params::UBTFunctionLibrary_SetBlackboardValueAsString_Params Parms{};

	Parms.NodeOwner = NodeOwner;
	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsRotator
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FBlackboardKeySelector      Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
// struct FRotator                    Value                                                            (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)

void UBTFunctionLibrary::SetBlackboardValueAsRotator(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FRotator& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTFunctionLibrary", "SetBlackboardValueAsRotator");

	Params::UBTFunctionLibrary_SetBlackboardValueAsRotator_Params Parms{};

	Parms.NodeOwner = NodeOwner;
	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsObject
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FBlackboardKeySelector      Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
// class UObject*                     Value                                                            (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)

void UBTFunctionLibrary::SetBlackboardValueAsObject(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, class UObject* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTFunctionLibrary", "SetBlackboardValueAsObject");

	Params::UBTFunctionLibrary_SetBlackboardValueAsObject_Params Parms{};

	Parms.NodeOwner = NodeOwner;
	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FBlackboardKeySelector      Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
// class FName                        Value                                                            (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)

void UBTFunctionLibrary::SetBlackboardValueAsName(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, class FName Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTFunctionLibrary", "SetBlackboardValueAsName");

	Params::UBTFunctionLibrary_SetBlackboardValueAsName_Params Parms{};

	Parms.NodeOwner = NodeOwner;
	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsInt
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FBlackboardKeySelector      Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
// int32                              Value                                                            (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)

void UBTFunctionLibrary::SetBlackboardValueAsInt(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTFunctionLibrary", "SetBlackboardValueAsInt");

	Params::UBTFunctionLibrary_SetBlackboardValueAsInt_Params Parms{};

	Parms.NodeOwner = NodeOwner;
	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsFloat
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FBlackboardKeySelector      Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
// float                              Value                                                            (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)

void UBTFunctionLibrary::SetBlackboardValueAsFloat(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTFunctionLibrary", "SetBlackboardValueAsFloat");

	Params::UBTFunctionLibrary_SetBlackboardValueAsFloat_Params Parms{};

	Parms.NodeOwner = NodeOwner;
	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsEnum
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FBlackboardKeySelector      Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
// uint8                              Value                                                            (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)

void UBTFunctionLibrary::SetBlackboardValueAsEnum(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, uint8 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTFunctionLibrary", "SetBlackboardValueAsEnum");

	Params::UBTFunctionLibrary_SetBlackboardValueAsEnum_Params Parms{};

	Parms.NodeOwner = NodeOwner;
	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsClass
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FBlackboardKeySelector      Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
// class UClass*                      Value                                                            (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)

void UBTFunctionLibrary::SetBlackboardValueAsClass(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, class UClass* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTFunctionLibrary", "SetBlackboardValueAsClass");

	Params::UBTFunctionLibrary_SetBlackboardValueAsClass_Params Parms{};

	Parms.NodeOwner = NodeOwner;
	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsBool
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FBlackboardKeySelector      Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
// bool                               Value                                                            (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)

void UBTFunctionLibrary::SetBlackboardValueAsBool(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTFunctionLibrary", "SetBlackboardValueAsBool");

	Params::UBTFunctionLibrary_SetBlackboardValueAsBool_Params Parms{};

	Parms.NodeOwner = NodeOwner;
	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AIModule.BTFunctionLibrary.GetOwnersBlackboard
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UBlackboardComponent*        ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UBTFunctionLibrary::GetOwnersBlackboard(class UBTNode* NodeOwner, class UBlackboardComponent** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTFunctionLibrary", "GetOwnersBlackboard");

	Params::UBTFunctionLibrary_GetOwnersBlackboard_Params Parms{};

	Parms.NodeOwner = NodeOwner;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AIModule.BTFunctionLibrary.GetOwnerComponent
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UBehaviorTreeComponent*      ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UBTFunctionLibrary::GetOwnerComponent(class UBTNode* NodeOwner, class UBehaviorTreeComponent** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTFunctionLibrary", "GetOwnerComponent");

	Params::UBTFunctionLibrary_GetOwnerComponent_Params Parms{};

	Parms.NodeOwner = NodeOwner;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsVector
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FBlackboardKeySelector      Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
// struct FVector                     ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UBTFunctionLibrary::GetBlackboardValueAsVector(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, struct FVector* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTFunctionLibrary", "GetBlackboardValueAsVector");

	Params::UBTFunctionLibrary_GetBlackboardValueAsVector_Params Parms{};

	Parms.NodeOwner = NodeOwner;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FBlackboardKeySelector      Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
// class FString                      ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UBTFunctionLibrary::GetBlackboardValueAsString(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, class FString* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTFunctionLibrary", "GetBlackboardValueAsString");

	Params::UBTFunctionLibrary_GetBlackboardValueAsString_Params Parms{};

	Parms.NodeOwner = NodeOwner;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsRotator
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FBlackboardKeySelector      Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
// struct FRotator                    ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UBTFunctionLibrary::GetBlackboardValueAsRotator(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, struct FRotator* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTFunctionLibrary", "GetBlackboardValueAsRotator");

	Params::UBTFunctionLibrary_GetBlackboardValueAsRotator_Params Parms{};

	Parms.NodeOwner = NodeOwner;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsObject
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FBlackboardKeySelector      Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
// class UObject*                     ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UBTFunctionLibrary::GetBlackboardValueAsObject(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, class UObject** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTFunctionLibrary", "GetBlackboardValueAsObject");

	Params::UBTFunctionLibrary_GetBlackboardValueAsObject_Params Parms{};

	Parms.NodeOwner = NodeOwner;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FBlackboardKeySelector      Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
// class FName                        ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UBTFunctionLibrary::GetBlackboardValueAsName(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, class FName* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTFunctionLibrary", "GetBlackboardValueAsName");

	Params::UBTFunctionLibrary_GetBlackboardValueAsName_Params Parms{};

	Parms.NodeOwner = NodeOwner;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsInt
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FBlackboardKeySelector      Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UBTFunctionLibrary::GetBlackboardValueAsInt(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, int32* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTFunctionLibrary", "GetBlackboardValueAsInt");

	Params::UBTFunctionLibrary_GetBlackboardValueAsInt_Params Parms{};

	Parms.NodeOwner = NodeOwner;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsFloat
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FBlackboardKeySelector      Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UBTFunctionLibrary::GetBlackboardValueAsFloat(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, float* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTFunctionLibrary", "GetBlackboardValueAsFloat");

	Params::UBTFunctionLibrary_GetBlackboardValueAsFloat_Params Parms{};

	Parms.NodeOwner = NodeOwner;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsEnum
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FBlackboardKeySelector      Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
// uint8                              ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UBTFunctionLibrary::GetBlackboardValueAsEnum(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, uint8* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTFunctionLibrary", "GetBlackboardValueAsEnum");

	Params::UBTFunctionLibrary_GetBlackboardValueAsEnum_Params Parms{};

	Parms.NodeOwner = NodeOwner;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsClass
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FBlackboardKeySelector      Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
// class UClass*                      ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UBTFunctionLibrary::GetBlackboardValueAsClass(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, class UClass** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTFunctionLibrary", "GetBlackboardValueAsClass");

	Params::UBTFunctionLibrary_GetBlackboardValueAsClass_Params Parms{};

	Parms.NodeOwner = NodeOwner;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsBool
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FBlackboardKeySelector      Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UBTFunctionLibrary::GetBlackboardValueAsBool(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTFunctionLibrary", "GetBlackboardValueAsBool");

	Params::UBTFunctionLibrary_GetBlackboardValueAsBool_Params Parms{};

	Parms.NodeOwner = NodeOwner;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsActor
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FBlackboardKeySelector      Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
// class AActor*                      ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UBTFunctionLibrary::GetBlackboardValueAsActor(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, class AActor** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTFunctionLibrary", "GetBlackboardValueAsActor");

	Params::UBTFunctionLibrary_GetBlackboardValueAsActor_Params Parms{};

	Parms.NodeOwner = NodeOwner;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AIModule.BTFunctionLibrary.ClearBlackboardValueAsVector
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FBlackboardKeySelector      Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)

void UBTFunctionLibrary::ClearBlackboardValueAsVector(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTFunctionLibrary", "ClearBlackboardValueAsVector");

	Params::UBTFunctionLibrary_ClearBlackboardValueAsVector_Params Parms{};

	Parms.NodeOwner = NodeOwner;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AIModule.BTFunctionLibrary.ClearBlackboardValue
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FBlackboardKeySelector      Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)

void UBTFunctionLibrary::ClearBlackboardValue(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTFunctionLibrary", "ClearBlackboardValue");

	Params::UBTFunctionLibrary_ClearBlackboardValue_Params Parms{};

	Parms.NodeOwner = NodeOwner;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AIModule.BTComposite_Selector
// (None)

class UClass* UBTComposite_Selector::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTComposite_Selector");

	return Clss;
}


// BTComposite_Selector AIModule.Default__BTComposite_Selector
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTComposite_Selector* UBTComposite_Selector::GetDefaultObj()
{
	static class UBTComposite_Selector* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTComposite_Selector*>(UBTComposite_Selector::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.BTComposite_Sequence
// (None)

class UClass* UBTComposite_Sequence::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTComposite_Sequence");

	return Clss;
}


// BTComposite_Sequence AIModule.Default__BTComposite_Sequence
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTComposite_Sequence* UBTComposite_Sequence::GetDefaultObj()
{
	static class UBTComposite_Sequence* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTComposite_Sequence*>(UBTComposite_Sequence::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.BTComposite_SimpleParallel
// (None)

class UClass* UBTComposite_SimpleParallel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTComposite_SimpleParallel");

	return Clss;
}


// BTComposite_SimpleParallel AIModule.Default__BTComposite_SimpleParallel
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTComposite_SimpleParallel* UBTComposite_SimpleParallel::GetDefaultObj()
{
	static class UBTComposite_SimpleParallel* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTComposite_SimpleParallel*>(UBTComposite_SimpleParallel::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.BTDecorator_BlackboardBase
// (None)

class UClass* UBTDecorator_BlackboardBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTDecorator_BlackboardBase");

	return Clss;
}


// BTDecorator_BlackboardBase AIModule.Default__BTDecorator_BlackboardBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTDecorator_BlackboardBase* UBTDecorator_BlackboardBase::GetDefaultObj()
{
	static class UBTDecorator_BlackboardBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTDecorator_BlackboardBase*>(UBTDecorator_BlackboardBase::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.BTDecorator_Blackboard
// (None)

class UClass* UBTDecorator_Blackboard::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTDecorator_Blackboard");

	return Clss;
}


// BTDecorator_Blackboard AIModule.Default__BTDecorator_Blackboard
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTDecorator_Blackboard* UBTDecorator_Blackboard::GetDefaultObj()
{
	static class UBTDecorator_Blackboard* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTDecorator_Blackboard*>(UBTDecorator_Blackboard::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.BTDecorator_BlueprintBase
// (None)

class UClass* UBTDecorator_BlueprintBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTDecorator_BlueprintBase");

	return Clss;
}


// BTDecorator_BlueprintBase AIModule.Default__BTDecorator_BlueprintBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTDecorator_BlueprintBase* UBTDecorator_BlueprintBase::GetDefaultObj()
{
	static class UBTDecorator_BlueprintBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTDecorator_BlueprintBase*>(UBTDecorator_BlueprintBase::StaticClass()->DefaultObject);

	return Default;
}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveTickAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class APawn*                       ControlledPawn                                                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// float                              DeltaSeconds                                                     (Edit, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UBTDecorator_BlueprintBase::ReceiveTickAI(class AAIController* OwnerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTDecorator_BlueprintBase", "ReceiveTickAI");

	Params::UBTDecorator_BlueprintBase_ReceiveTickAI_Params Parms{};

	Parms.OwnerController = OwnerController;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
// float                              DeltaSeconds                                                     (Edit, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UBTDecorator_BlueprintBase::ReceiveTick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTDecorator_BlueprintBase", "ReceiveTick");

	Params::UBTDecorator_BlueprintBase_ReceiveTick_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivatedAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class APawn*                       ControlledPawn                                                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

class APawn* UBTDecorator_BlueprintBase::ReceiveObserverDeactivatedAI(class AAIController* OwnerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTDecorator_BlueprintBase", "ReceiveObserverDeactivatedAI");

	Params::UBTDecorator_BlueprintBase_ReceiveObserverDeactivatedAI_Params Parms{};

	Parms.OwnerController = OwnerController;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)

class AActor* UBTDecorator_BlueprintBase::ReceiveObserverDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTDecorator_BlueprintBase", "ReceiveObserverDeactivated");

	Params::UBTDecorator_BlueprintBase_ReceiveObserverDeactivated_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivatedAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class APawn*                       ControlledPawn                                                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

class APawn* UBTDecorator_BlueprintBase::ReceiveObserverActivatedAI(class AAIController* OwnerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTDecorator_BlueprintBase", "ReceiveObserverActivatedAI");

	Params::UBTDecorator_BlueprintBase_ReceiveObserverActivatedAI_Params Parms{};

	Parms.OwnerController = OwnerController;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivated
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)

class AActor* UBTDecorator_BlueprintBase::ReceiveObserverActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTDecorator_BlueprintBase", "ReceiveObserverActivated");

	Params::UBTDecorator_BlueprintBase_ReceiveObserverActivated_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStartAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class APawn*                       ControlledPawn                                                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

class APawn* UBTDecorator_BlueprintBase::ReceiveExecutionStartAI(class AAIController* OwnerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTDecorator_BlueprintBase", "ReceiveExecutionStartAI");

	Params::UBTDecorator_BlueprintBase_ReceiveExecutionStartAI_Params Parms{};

	Parms.OwnerController = OwnerController;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStart
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)

class AActor* UBTDecorator_BlueprintBase::ReceiveExecutionStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTDecorator_BlueprintBase", "ReceiveExecutionStart");

	Params::UBTDecorator_BlueprintBase_ReceiveExecutionStart_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinishAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class APawn*                       ControlledPawn                                                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// enum class EBTNodeResult           NodeResult                                                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

class APawn* UBTDecorator_BlueprintBase::ReceiveExecutionFinishAI(class AAIController* OwnerController, enum class EBTNodeResult NodeResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTDecorator_BlueprintBase", "ReceiveExecutionFinishAI");

	Params::UBTDecorator_BlueprintBase_ReceiveExecutionFinishAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.NodeResult = NodeResult;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinish
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
// enum class EBTNodeResult           NodeResult                                                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

class AActor* UBTDecorator_BlueprintBase::ReceiveExecutionFinish(enum class EBTNodeResult NodeResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTDecorator_BlueprintBase", "ReceiveExecutionFinish");

	Params::UBTDecorator_BlueprintBase_ReceiveExecutionFinish_Params Parms{};

	Parms.NodeResult = NodeResult;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveConditionCheck
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)

class AActor* UBTDecorator_BlueprintBase::ReceiveConditionCheck()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTDecorator_BlueprintBase", "ReceiveConditionCheck");

	Params::UBTDecorator_BlueprintBase_ReceiveConditionCheck_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheckAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class APawn*                       ControlledPawn                                                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class APawn* UBTDecorator_BlueprintBase::PerformConditionCheckAI(class AAIController* OwnerController, bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTDecorator_BlueprintBase", "PerformConditionCheckAI");

	Params::UBTDecorator_BlueprintBase_PerformConditionCheckAI_Params Parms{};

	Parms.OwnerController = OwnerController;

	UObject::ProcessEvent(Func, &Parms);

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheck
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class AActor* UBTDecorator_BlueprintBase::PerformConditionCheck(bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTDecorator_BlueprintBase", "PerformConditionCheck");

	Params::UBTDecorator_BlueprintBase_PerformConditionCheck_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function AIModule.BTDecorator_BlueprintBase.IsDecoratorObserverActive
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UBTDecorator_BlueprintBase::IsDecoratorObserverActive(bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTDecorator_BlueprintBase", "IsDecoratorObserverActive");

	Params::UBTDecorator_BlueprintBase_IsDecoratorObserverActive_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AIModule.BTDecorator_BlueprintBase.IsDecoratorExecutionActive
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UBTDecorator_BlueprintBase::IsDecoratorExecutionActive(bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTDecorator_BlueprintBase", "IsDecoratorExecutionActive");

	Params::UBTDecorator_BlueprintBase_IsDecoratorExecutionActive_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AIModule.BTDecorator_BlueprintBase.FinishConditionCheck
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                               bAllowExecution                                                  (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void UBTDecorator_BlueprintBase::FinishConditionCheck(bool bAllowExecution)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTDecorator_BlueprintBase", "FinishConditionCheck");

	Params::UBTDecorator_BlueprintBase_FinishConditionCheck_Params Parms{};

	Parms.bAllowExecution = bAllowExecution;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AIModule.BTDecorator_CheckGameplayTagsOnActor
// (None)

class UClass* UBTDecorator_CheckGameplayTagsOnActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTDecorator_CheckGameplayTagsOnActor");

	return Clss;
}


// BTDecorator_CheckGameplayTagsOnActor AIModule.Default__BTDecorator_CheckGameplayTagsOnActor
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTDecorator_CheckGameplayTagsOnActor* UBTDecorator_CheckGameplayTagsOnActor::GetDefaultObj()
{
	static class UBTDecorator_CheckGameplayTagsOnActor* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTDecorator_CheckGameplayTagsOnActor*>(UBTDecorator_CheckGameplayTagsOnActor::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.BTDecorator_CompareBBEntries
// (None)

class UClass* UBTDecorator_CompareBBEntries::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTDecorator_CompareBBEntries");

	return Clss;
}


// BTDecorator_CompareBBEntries AIModule.Default__BTDecorator_CompareBBEntries
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTDecorator_CompareBBEntries* UBTDecorator_CompareBBEntries::GetDefaultObj()
{
	static class UBTDecorator_CompareBBEntries* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTDecorator_CompareBBEntries*>(UBTDecorator_CompareBBEntries::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.BTDecorator_ConditionalLoop
// (None)

class UClass* UBTDecorator_ConditionalLoop::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTDecorator_ConditionalLoop");

	return Clss;
}


// BTDecorator_ConditionalLoop AIModule.Default__BTDecorator_ConditionalLoop
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTDecorator_ConditionalLoop* UBTDecorator_ConditionalLoop::GetDefaultObj()
{
	static class UBTDecorator_ConditionalLoop* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTDecorator_ConditionalLoop*>(UBTDecorator_ConditionalLoop::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.BTDecorator_ConeCheck
// (None)

class UClass* UBTDecorator_ConeCheck::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTDecorator_ConeCheck");

	return Clss;
}


// BTDecorator_ConeCheck AIModule.Default__BTDecorator_ConeCheck
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTDecorator_ConeCheck* UBTDecorator_ConeCheck::GetDefaultObj()
{
	static class UBTDecorator_ConeCheck* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTDecorator_ConeCheck*>(UBTDecorator_ConeCheck::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.BTDecorator_Cooldown
// (None)

class UClass* UBTDecorator_Cooldown::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTDecorator_Cooldown");

	return Clss;
}


// BTDecorator_Cooldown AIModule.Default__BTDecorator_Cooldown
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTDecorator_Cooldown* UBTDecorator_Cooldown::GetDefaultObj()
{
	static class UBTDecorator_Cooldown* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTDecorator_Cooldown*>(UBTDecorator_Cooldown::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.BTDecorator_DoesPathExist
// (None)

class UClass* UBTDecorator_DoesPathExist::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTDecorator_DoesPathExist");

	return Clss;
}


// BTDecorator_DoesPathExist AIModule.Default__BTDecorator_DoesPathExist
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTDecorator_DoesPathExist* UBTDecorator_DoesPathExist::GetDefaultObj()
{
	static class UBTDecorator_DoesPathExist* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTDecorator_DoesPathExist*>(UBTDecorator_DoesPathExist::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.BTDecorator_ForceSuccess
// (None)

class UClass* UBTDecorator_ForceSuccess::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTDecorator_ForceSuccess");

	return Clss;
}


// BTDecorator_ForceSuccess AIModule.Default__BTDecorator_ForceSuccess
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTDecorator_ForceSuccess* UBTDecorator_ForceSuccess::GetDefaultObj()
{
	static class UBTDecorator_ForceSuccess* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTDecorator_ForceSuccess*>(UBTDecorator_ForceSuccess::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.BTDecorator_IsAtLocation
// (None)

class UClass* UBTDecorator_IsAtLocation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTDecorator_IsAtLocation");

	return Clss;
}


// BTDecorator_IsAtLocation AIModule.Default__BTDecorator_IsAtLocation
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTDecorator_IsAtLocation* UBTDecorator_IsAtLocation::GetDefaultObj()
{
	static class UBTDecorator_IsAtLocation* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTDecorator_IsAtLocation*>(UBTDecorator_IsAtLocation::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.BTDecorator_IsBBEntryOfClass
// (None)

class UClass* UBTDecorator_IsBBEntryOfClass::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTDecorator_IsBBEntryOfClass");

	return Clss;
}


// BTDecorator_IsBBEntryOfClass AIModule.Default__BTDecorator_IsBBEntryOfClass
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTDecorator_IsBBEntryOfClass* UBTDecorator_IsBBEntryOfClass::GetDefaultObj()
{
	static class UBTDecorator_IsBBEntryOfClass* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTDecorator_IsBBEntryOfClass*>(UBTDecorator_IsBBEntryOfClass::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.BTDecorator_KeepInCone
// (None)

class UClass* UBTDecorator_KeepInCone::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTDecorator_KeepInCone");

	return Clss;
}


// BTDecorator_KeepInCone AIModule.Default__BTDecorator_KeepInCone
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTDecorator_KeepInCone* UBTDecorator_KeepInCone::GetDefaultObj()
{
	static class UBTDecorator_KeepInCone* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTDecorator_KeepInCone*>(UBTDecorator_KeepInCone::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.BTDecorator_Loop
// (None)

class UClass* UBTDecorator_Loop::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTDecorator_Loop");

	return Clss;
}


// BTDecorator_Loop AIModule.Default__BTDecorator_Loop
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTDecorator_Loop* UBTDecorator_Loop::GetDefaultObj()
{
	static class UBTDecorator_Loop* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTDecorator_Loop*>(UBTDecorator_Loop::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.BTDecorator_ReachedMoveGoal
// (None)

class UClass* UBTDecorator_ReachedMoveGoal::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTDecorator_ReachedMoveGoal");

	return Clss;
}


// BTDecorator_ReachedMoveGoal AIModule.Default__BTDecorator_ReachedMoveGoal
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTDecorator_ReachedMoveGoal* UBTDecorator_ReachedMoveGoal::GetDefaultObj()
{
	static class UBTDecorator_ReachedMoveGoal* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTDecorator_ReachedMoveGoal*>(UBTDecorator_ReachedMoveGoal::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.BTDecorator_SetTagCooldown
// (None)

class UClass* UBTDecorator_SetTagCooldown::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTDecorator_SetTagCooldown");

	return Clss;
}


// BTDecorator_SetTagCooldown AIModule.Default__BTDecorator_SetTagCooldown
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTDecorator_SetTagCooldown* UBTDecorator_SetTagCooldown::GetDefaultObj()
{
	static class UBTDecorator_SetTagCooldown* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTDecorator_SetTagCooldown*>(UBTDecorator_SetTagCooldown::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.BTDecorator_TagCooldown
// (None)

class UClass* UBTDecorator_TagCooldown::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTDecorator_TagCooldown");

	return Clss;
}


// BTDecorator_TagCooldown AIModule.Default__BTDecorator_TagCooldown
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTDecorator_TagCooldown* UBTDecorator_TagCooldown::GetDefaultObj()
{
	static class UBTDecorator_TagCooldown* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTDecorator_TagCooldown*>(UBTDecorator_TagCooldown::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.BTDecorator_TimeLimit
// (None)

class UClass* UBTDecorator_TimeLimit::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTDecorator_TimeLimit");

	return Clss;
}


// BTDecorator_TimeLimit AIModule.Default__BTDecorator_TimeLimit
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTDecorator_TimeLimit* UBTDecorator_TimeLimit::GetDefaultObj()
{
	static class UBTDecorator_TimeLimit* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTDecorator_TimeLimit*>(UBTDecorator_TimeLimit::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.BTService_BlueprintBase
// (None)

class UClass* UBTService_BlueprintBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTService_BlueprintBase");

	return Clss;
}


// BTService_BlueprintBase AIModule.Default__BTService_BlueprintBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTService_BlueprintBase* UBTService_BlueprintBase::GetDefaultObj()
{
	static class UBTService_BlueprintBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTService_BlueprintBase*>(UBTService_BlueprintBase::StaticClass()->DefaultObject);

	return Default;
}


// Function AIModule.BTService_BlueprintBase.ResetInterval
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UBehaviorTreeComponent*      OwnerComp                                                        (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void UBTService_BlueprintBase::ResetInterval(class UBehaviorTreeComponent** OwnerComp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTService_BlueprintBase", "ResetInterval");

	Params::UBTService_BlueprintBase_ResetInterval_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OwnerComp != nullptr)
		*OwnerComp = Parms.OwnerComp;

}


// Function AIModule.BTService_BlueprintBase.ReceiveTickAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class APawn*                       ControlledPawn                                                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// float                              DeltaSeconds                                                     (Edit, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UBTService_BlueprintBase::ReceiveTickAI(class AAIController* OwnerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTService_BlueprintBase", "ReceiveTickAI");

	Params::UBTService_BlueprintBase_ReceiveTickAI_Params Parms{};

	Parms.OwnerController = OwnerController;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIModule.BTService_BlueprintBase.ReceiveTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
// float                              DeltaSeconds                                                     (Edit, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UBTService_BlueprintBase::ReceiveTick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTService_BlueprintBase", "ReceiveTick");

	Params::UBTService_BlueprintBase_ReceiveTick_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIModule.BTService_BlueprintBase.ReceiveSearchStartAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class APawn*                       ControlledPawn                                                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

class APawn* UBTService_BlueprintBase::ReceiveSearchStartAI(class AAIController* OwnerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTService_BlueprintBase", "ReceiveSearchStartAI");

	Params::UBTService_BlueprintBase_ReceiveSearchStartAI_Params Parms{};

	Parms.OwnerController = OwnerController;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIModule.BTService_BlueprintBase.ReceiveSearchStart
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)

class AActor* UBTService_BlueprintBase::ReceiveSearchStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTService_BlueprintBase", "ReceiveSearchStart");

	Params::UBTService_BlueprintBase_ReceiveSearchStart_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIModule.BTService_BlueprintBase.ReceiveDeactivationAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class APawn*                       ControlledPawn                                                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

class APawn* UBTService_BlueprintBase::ReceiveDeactivationAI(class AAIController* OwnerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTService_BlueprintBase", "ReceiveDeactivationAI");

	Params::UBTService_BlueprintBase_ReceiveDeactivationAI_Params Parms{};

	Parms.OwnerController = OwnerController;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIModule.BTService_BlueprintBase.ReceiveDeactivation
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)

class AActor* UBTService_BlueprintBase::ReceiveDeactivation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTService_BlueprintBase", "ReceiveDeactivation");

	Params::UBTService_BlueprintBase_ReceiveDeactivation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIModule.BTService_BlueprintBase.ReceiveActivationAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class APawn*                       ControlledPawn                                                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

class APawn* UBTService_BlueprintBase::ReceiveActivationAI(class AAIController* OwnerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTService_BlueprintBase", "ReceiveActivationAI");

	Params::UBTService_BlueprintBase_ReceiveActivationAI_Params Parms{};

	Parms.OwnerController = OwnerController;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIModule.BTService_BlueprintBase.ReceiveActivation
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)

class AActor* UBTService_BlueprintBase::ReceiveActivation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTService_BlueprintBase", "ReceiveActivation");

	Params::UBTService_BlueprintBase_ReceiveActivation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIModule.BTService_BlueprintBase.IsServiceActive
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UBTService_BlueprintBase::IsServiceActive(bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTService_BlueprintBase", "IsServiceActive");

	Params::UBTService_BlueprintBase_IsServiceActive_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Class AIModule.BTService_DefaultFocus
// (None)

class UClass* UBTService_DefaultFocus::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTService_DefaultFocus");

	return Clss;
}


// BTService_DefaultFocus AIModule.Default__BTService_DefaultFocus
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTService_DefaultFocus* UBTService_DefaultFocus::GetDefaultObj()
{
	static class UBTService_DefaultFocus* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTService_DefaultFocus*>(UBTService_DefaultFocus::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.BTService_RunEQS
// (None)

class UClass* UBTService_RunEQS::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTService_RunEQS");

	return Clss;
}


// BTService_RunEQS AIModule.Default__BTService_RunEQS
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTService_RunEQS* UBTService_RunEQS::GetDefaultObj()
{
	static class UBTService_RunEQS* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTService_RunEQS*>(UBTService_RunEQS::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.BTTask_BlueprintBase
// (None)

class UClass* UBTTask_BlueprintBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTTask_BlueprintBase");

	return Clss;
}


// BTTask_BlueprintBase AIModule.Default__BTTask_BlueprintBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTTask_BlueprintBase* UBTTask_BlueprintBase::GetDefaultObj()
{
	static class UBTTask_BlueprintBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTTask_BlueprintBase*>(UBTTask_BlueprintBase::StaticClass()->DefaultObject);

	return Default;
}


// Function AIModule.BTTask_BlueprintBase.SetFinishOnMessageWithId
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class FName                        MessageName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// int32                              RequestID                                                        (ConstParm, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

class FName UBTTask_BlueprintBase::SetFinishOnMessageWithId(int32* RequestID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_BlueprintBase", "SetFinishOnMessageWithId");

	Params::UBTTask_BlueprintBase_SetFinishOnMessageWithId_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (RequestID != nullptr)
		*RequestID = Parms.RequestID;

	return Parms.ReturnValue;

}


// Function AIModule.BTTask_BlueprintBase.SetFinishOnMessage
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class FName                        MessageName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)

class FName UBTTask_BlueprintBase::SetFinishOnMessage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_BlueprintBase", "SetFinishOnMessage");

	Params::UBTTask_BlueprintBase_SetFinishOnMessage_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AIModule.BTTask_BlueprintBase.ReceiveTickAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class APawn*                       ControlledPawn                                                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// float                              DeltaSeconds                                                     (Edit, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UBTTask_BlueprintBase::ReceiveTickAI(class AAIController* OwnerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_BlueprintBase", "ReceiveTickAI");

	Params::UBTTask_BlueprintBase_ReceiveTickAI_Params Parms{};

	Parms.OwnerController = OwnerController;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIModule.BTTask_BlueprintBase.ReceiveTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
// float                              DeltaSeconds                                                     (Edit, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UBTTask_BlueprintBase::ReceiveTick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_BlueprintBase", "ReceiveTick");

	Params::UBTTask_BlueprintBase_ReceiveTick_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIModule.BTTask_BlueprintBase.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class APawn*                       ControlledPawn                                                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

class APawn* UBTTask_BlueprintBase::ReceiveExecuteAI(class AAIController* OwnerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_BlueprintBase", "ReceiveExecuteAI");

	Params::UBTTask_BlueprintBase_ReceiveExecuteAI_Params Parms{};

	Parms.OwnerController = OwnerController;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIModule.BTTask_BlueprintBase.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)

class AActor* UBTTask_BlueprintBase::ReceiveExecute()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_BlueprintBase", "ReceiveExecute");

	Params::UBTTask_BlueprintBase_ReceiveExecute_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIModule.BTTask_BlueprintBase.ReceiveAbortAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class APawn*                       ControlledPawn                                                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

class APawn* UBTTask_BlueprintBase::ReceiveAbortAI(class AAIController* OwnerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_BlueprintBase", "ReceiveAbortAI");

	Params::UBTTask_BlueprintBase_ReceiveAbortAI_Params Parms{};

	Parms.OwnerController = OwnerController;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIModule.BTTask_BlueprintBase.ReceiveAbort
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)

class AActor* UBTTask_BlueprintBase::ReceiveAbort()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_BlueprintBase", "ReceiveAbort");

	Params::UBTTask_BlueprintBase_ReceiveAbort_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIModule.BTTask_BlueprintBase.IsTaskExecuting
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UBTTask_BlueprintBase::IsTaskExecuting(bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_BlueprintBase", "IsTaskExecuting");

	Params::UBTTask_BlueprintBase_IsTaskExecuting_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AIModule.BTTask_BlueprintBase.IsTaskAborting
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UBTTask_BlueprintBase::IsTaskAborting(bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_BlueprintBase", "IsTaskAborting");

	Params::UBTTask_BlueprintBase_IsTaskAborting_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AIModule.BTTask_BlueprintBase.FinishExecute
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                               bSuccess                                                         (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UBTTask_BlueprintBase::FinishExecute(bool* bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_BlueprintBase", "FinishExecute");

	Params::UBTTask_BlueprintBase_FinishExecute_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

}


// Function AIModule.BTTask_BlueprintBase.FinishAbort
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UBTTask_BlueprintBase::FinishAbort()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_BlueprintBase", "FinishAbort");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class AIModule.BTTask_FinishWithResult
// (None)

class UClass* UBTTask_FinishWithResult::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTTask_FinishWithResult");

	return Clss;
}


// BTTask_FinishWithResult AIModule.Default__BTTask_FinishWithResult
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTTask_FinishWithResult* UBTTask_FinishWithResult::GetDefaultObj()
{
	static class UBTTask_FinishWithResult* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTTask_FinishWithResult*>(UBTTask_FinishWithResult::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.BTTask_GameplayTaskBase
// (None)

class UClass* UBTTask_GameplayTaskBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTTask_GameplayTaskBase");

	return Clss;
}


// BTTask_GameplayTaskBase AIModule.Default__BTTask_GameplayTaskBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTTask_GameplayTaskBase* UBTTask_GameplayTaskBase::GetDefaultObj()
{
	static class UBTTask_GameplayTaskBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTTask_GameplayTaskBase*>(UBTTask_GameplayTaskBase::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.BTTask_MakeNoise
// (None)

class UClass* UBTTask_MakeNoise::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTTask_MakeNoise");

	return Clss;
}


// BTTask_MakeNoise AIModule.Default__BTTask_MakeNoise
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTTask_MakeNoise* UBTTask_MakeNoise::GetDefaultObj()
{
	static class UBTTask_MakeNoise* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTTask_MakeNoise*>(UBTTask_MakeNoise::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.BTTask_MoveTo
// (None)

class UClass* UBTTask_MoveTo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTTask_MoveTo");

	return Clss;
}


// BTTask_MoveTo AIModule.Default__BTTask_MoveTo
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTTask_MoveTo* UBTTask_MoveTo::GetDefaultObj()
{
	static class UBTTask_MoveTo* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTTask_MoveTo*>(UBTTask_MoveTo::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.BTTask_MoveDirectlyToward
// (None)

class UClass* UBTTask_MoveDirectlyToward::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTTask_MoveDirectlyToward");

	return Clss;
}


// BTTask_MoveDirectlyToward AIModule.Default__BTTask_MoveDirectlyToward
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTTask_MoveDirectlyToward* UBTTask_MoveDirectlyToward::GetDefaultObj()
{
	static class UBTTask_MoveDirectlyToward* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTTask_MoveDirectlyToward*>(UBTTask_MoveDirectlyToward::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.BTTask_PawnActionBase
// (None)

class UClass* UBTTask_PawnActionBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTTask_PawnActionBase");

	return Clss;
}


// BTTask_PawnActionBase AIModule.Default__BTTask_PawnActionBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTTask_PawnActionBase* UBTTask_PawnActionBase::GetDefaultObj()
{
	static class UBTTask_PawnActionBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTTask_PawnActionBase*>(UBTTask_PawnActionBase::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.BTTask_PlayAnimation
// (None)

class UClass* UBTTask_PlayAnimation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTTask_PlayAnimation");

	return Clss;
}


// BTTask_PlayAnimation AIModule.Default__BTTask_PlayAnimation
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTTask_PlayAnimation* UBTTask_PlayAnimation::GetDefaultObj()
{
	static class UBTTask_PlayAnimation* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTTask_PlayAnimation*>(UBTTask_PlayAnimation::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.BTTask_PlaySound
// (None)

class UClass* UBTTask_PlaySound::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTTask_PlaySound");

	return Clss;
}


// BTTask_PlaySound AIModule.Default__BTTask_PlaySound
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTTask_PlaySound* UBTTask_PlaySound::GetDefaultObj()
{
	static class UBTTask_PlaySound* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTTask_PlaySound*>(UBTTask_PlaySound::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.BTTask_PushPawnAction
// (None)

class UClass* UBTTask_PushPawnAction::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTTask_PushPawnAction");

	return Clss;
}


// BTTask_PushPawnAction AIModule.Default__BTTask_PushPawnAction
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTTask_PushPawnAction* UBTTask_PushPawnAction::GetDefaultObj()
{
	static class UBTTask_PushPawnAction* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTTask_PushPawnAction*>(UBTTask_PushPawnAction::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.BTTask_RunBehavior
// (None)

class UClass* UBTTask_RunBehavior::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTTask_RunBehavior");

	return Clss;
}


// BTTask_RunBehavior AIModule.Default__BTTask_RunBehavior
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTTask_RunBehavior* UBTTask_RunBehavior::GetDefaultObj()
{
	static class UBTTask_RunBehavior* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTTask_RunBehavior*>(UBTTask_RunBehavior::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.BTTask_RunBehaviorDynamic
// (None)

class UClass* UBTTask_RunBehaviorDynamic::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTTask_RunBehaviorDynamic");

	return Clss;
}


// BTTask_RunBehaviorDynamic AIModule.Default__BTTask_RunBehaviorDynamic
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTTask_RunBehaviorDynamic* UBTTask_RunBehaviorDynamic::GetDefaultObj()
{
	static class UBTTask_RunBehaviorDynamic* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTTask_RunBehaviorDynamic*>(UBTTask_RunBehaviorDynamic::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.BTTask_RunEQSQuery
// (None)

class UClass* UBTTask_RunEQSQuery::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTTask_RunEQSQuery");

	return Clss;
}


// BTTask_RunEQSQuery AIModule.Default__BTTask_RunEQSQuery
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTTask_RunEQSQuery* UBTTask_RunEQSQuery::GetDefaultObj()
{
	static class UBTTask_RunEQSQuery* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTTask_RunEQSQuery*>(UBTTask_RunEQSQuery::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.BTTask_SetTagCooldown
// (None)

class UClass* UBTTask_SetTagCooldown::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTTask_SetTagCooldown");

	return Clss;
}


// BTTask_SetTagCooldown AIModule.Default__BTTask_SetTagCooldown
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTTask_SetTagCooldown* UBTTask_SetTagCooldown::GetDefaultObj()
{
	static class UBTTask_SetTagCooldown* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTTask_SetTagCooldown*>(UBTTask_SetTagCooldown::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.BTTask_Wait
// (None)

class UClass* UBTTask_Wait::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTTask_Wait");

	return Clss;
}


// BTTask_Wait AIModule.Default__BTTask_Wait
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTTask_Wait* UBTTask_Wait::GetDefaultObj()
{
	static class UBTTask_Wait* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTTask_Wait*>(UBTTask_Wait::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.BTTask_WaitBlackboardTime
// (None)

class UClass* UBTTask_WaitBlackboardTime::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTTask_WaitBlackboardTime");

	return Clss;
}


// BTTask_WaitBlackboardTime AIModule.Default__BTTask_WaitBlackboardTime
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTTask_WaitBlackboardTime* UBTTask_WaitBlackboardTime::GetDefaultObj()
{
	static class UBTTask_WaitBlackboardTime* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTTask_WaitBlackboardTime*>(UBTTask_WaitBlackboardTime::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.AIBlueprintHelperLibrary
// (None)

class UClass* UAIBlueprintHelperLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIBlueprintHelperLibrary");

	return Clss;
}


// AIBlueprintHelperLibrary AIModule.Default__AIBlueprintHelperLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UAIBlueprintHelperLibrary* UAIBlueprintHelperLibrary::GetDefaultObj()
{
	static class UAIBlueprintHelperLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIBlueprintHelperLibrary*>(UAIBlueprintHelperLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function AIModule.AIBlueprintHelperLibrary.UnlockAIResourcesWithAnimation
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAnimInstance*               AnimInstance                                                     (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst)
// bool                               bUnlockMovement                                                  (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, EditConst, InstancedReference, SubobjectReference)
// bool                               UnlockAILogic                                                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, EditConst, InstancedReference, SubobjectReference)

void UAIBlueprintHelperLibrary::UnlockAIResourcesWithAnimation(class UAnimInstance** AnimInstance, bool* bUnlockMovement, bool* UnlockAILogic)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIBlueprintHelperLibrary", "UnlockAIResourcesWithAnimation");

	Params::UAIBlueprintHelperLibrary_UnlockAIResourcesWithAnimation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AnimInstance != nullptr)
		*AnimInstance = Parms.AnimInstance;

	if (bUnlockMovement != nullptr)
		*bUnlockMovement = Parms.bUnlockMovement;

	if (UnlockAILogic != nullptr)
		*UnlockAILogic = Parms.UnlockAILogic;

}


// Function AIModule.AIBlueprintHelperLibrary.SpawnAIFromClass
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// class UClass*                      PawnClass                                                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UBehaviorTree*               BehaviorTree                                                     (Edit, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig)
// struct FVector                     Location                                                         (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
// struct FRotator                    Rotation                                                         (BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
// bool                               bNoCollisionFail                                                 (Edit, BlueprintVisible, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// class AActor*                      Owner                                                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor)
// class APawn*                       ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool UAIBlueprintHelperLibrary::SpawnAIFromClass(class UClass** PawnClass, class UBehaviorTree** BehaviorTree, struct FVector* Location, struct FRotator* Rotation, class AActor** Owner, class APawn** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIBlueprintHelperLibrary", "SpawnAIFromClass");

	Params::UAIBlueprintHelperLibrary_SpawnAIFromClass_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PawnClass != nullptr)
		*PawnClass = Parms.PawnClass;

	if (BehaviorTree != nullptr)
		*BehaviorTree = Parms.BehaviorTree;

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

	if (Rotation != nullptr)
		*Rotation = std::move(Parms.Rotation);

	if (Owner != nullptr)
		*Owner = Parms.Owner;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function AIModule.AIBlueprintHelperLibrary.SimpleMoveToLocation
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class AController*                 Controller                                                       (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig)
// struct FVector                     Goal                                                             (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)

void UAIBlueprintHelperLibrary::SimpleMoveToLocation(class AController** Controller, const struct FVector& Goal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIBlueprintHelperLibrary", "SimpleMoveToLocation");

	Params::UAIBlueprintHelperLibrary_SimpleMoveToLocation_Params Parms{};

	Parms.Goal = Goal;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Controller != nullptr)
		*Controller = Parms.Controller;

}


// Function AIModule.AIBlueprintHelperLibrary.SimpleMoveToActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AController*                 Controller                                                       (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig)
// class AActor*                      Goal                                                             (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)

void UAIBlueprintHelperLibrary::SimpleMoveToActor(class AController** Controller, class AActor* Goal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIBlueprintHelperLibrary", "SimpleMoveToActor");

	Params::UAIBlueprintHelperLibrary_SimpleMoveToActor_Params Parms{};

	Parms.Goal = Goal;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Controller != nullptr)
		*Controller = Parms.Controller;

}


// Function AIModule.AIBlueprintHelperLibrary.SendAIMessage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APawn*                       Target                                                           (Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, Config)
// class FName                        Message                                                          (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// class UObject*                     MessageSource                                                    (Edit, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bSuccess                                                         (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UAIBlueprintHelperLibrary::SendAIMessage(class APawn* Target, class FName Message, class UObject** MessageSource, bool* bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIBlueprintHelperLibrary", "SendAIMessage");

	Params::UAIBlueprintHelperLibrary_SendAIMessage_Params Parms{};

	Parms.Target = Target;
	Parms.Message = Message;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MessageSource != nullptr)
		*MessageSource = Parms.MessageSource;

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

}


// Function AIModule.AIBlueprintHelperLibrary.LockAIResourcesWithAnimation
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAnimInstance*               AnimInstance                                                     (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst)
// bool                               bLockMovement                                                    (ConstParm, ExportObject, Net, EditFixedSize, Parm, EditConst, InstancedReference, SubobjectReference)
// bool                               LockAILogic                                                      (Edit, ConstParm, Net, EditFixedSize, Parm, EditConst, InstancedReference, SubobjectReference)

void UAIBlueprintHelperLibrary::LockAIResourcesWithAnimation(class UAnimInstance** AnimInstance, bool bLockMovement, bool LockAILogic)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIBlueprintHelperLibrary", "LockAIResourcesWithAnimation");

	Params::UAIBlueprintHelperLibrary_LockAIResourcesWithAnimation_Params Parms{};

	Parms.bLockMovement = bLockMovement;
	Parms.LockAILogic = LockAILogic;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AnimInstance != nullptr)
		*AnimInstance = Parms.AnimInstance;

}


// Function AIModule.AIBlueprintHelperLibrary.IsValidAIRotation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRotator                    Rotation                                                         (BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UAIBlueprintHelperLibrary::IsValidAIRotation(struct FRotator* Rotation, bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIBlueprintHelperLibrary", "IsValidAIRotation");

	Params::UAIBlueprintHelperLibrary_IsValidAIRotation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Rotation != nullptr)
		*Rotation = std::move(Parms.Rotation);

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AIModule.AIBlueprintHelperLibrary.IsValidAILocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     Location                                                         (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UAIBlueprintHelperLibrary::IsValidAILocation(struct FVector* Location, bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIBlueprintHelperLibrary", "IsValidAILocation");

	Params::UAIBlueprintHelperLibrary_IsValidAILocation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AIModule.AIBlueprintHelperLibrary.IsValidAIDirection
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     DirectionVector                                                  (ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UAIBlueprintHelperLibrary::IsValidAIDirection(struct FVector* DirectionVector, bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIBlueprintHelperLibrary", "IsValidAIDirection");

	Params::UAIBlueprintHelperLibrary_IsValidAIDirection_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (DirectionVector != nullptr)
		*DirectionVector = std::move(Parms.DirectionVector);

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AIModule.AIBlueprintHelperLibrary.GetNextNavLinkIndex
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AController*                 Controller                                                       (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig)
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UAIBlueprintHelperLibrary::GetNextNavLinkIndex(class AController** Controller, int32* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIBlueprintHelperLibrary", "GetNextNavLinkIndex");

	Params::UAIBlueprintHelperLibrary_GetNextNavLinkIndex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Controller != nullptr)
		*Controller = Parms.Controller;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AIModule.AIBlueprintHelperLibrary.GetCurrentPathPoints
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AController*                 Controller                                                       (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig)
// TArray<struct FVector>             ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UAIBlueprintHelperLibrary::GetCurrentPathPoints(class AController** Controller, TArray<struct FVector>* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIBlueprintHelperLibrary", "GetCurrentPathPoints");

	Params::UAIBlueprintHelperLibrary_GetCurrentPathPoints_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Controller != nullptr)
		*Controller = Parms.Controller;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function AIModule.AIBlueprintHelperLibrary.GetCurrentPathIndex
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AController*                 Controller                                                       (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig)
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UAIBlueprintHelperLibrary::GetCurrentPathIndex(class AController** Controller, int32* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIBlueprintHelperLibrary", "GetCurrentPathIndex");

	Params::UAIBlueprintHelperLibrary_GetCurrentPathIndex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Controller != nullptr)
		*Controller = Parms.Controller;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AIModule.AIBlueprintHelperLibrary.GetCurrentPath
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AController*                 Controller                                                       (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig)
// class UNavigationPath*             ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UAIBlueprintHelperLibrary::GetCurrentPath(class AController** Controller, class UNavigationPath** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIBlueprintHelperLibrary", "GetCurrentPath");

	Params::UAIBlueprintHelperLibrary_GetCurrentPath_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Controller != nullptr)
		*Controller = Parms.Controller;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AIModule.AIBlueprintHelperLibrary.GetBlackboard
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                      Target                                                           (Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, Config)
// class UBlackboardComponent*        ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UAIBlueprintHelperLibrary::GetBlackboard(class AActor* Target, class UBlackboardComponent** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIBlueprintHelperLibrary", "GetBlackboard");

	Params::UAIBlueprintHelperLibrary_GetBlackboard_Params Parms{};

	Parms.Target = Target;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AIModule.AIBlueprintHelperLibrary.GetAIController
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                      ControlledActor                                                  (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class AAIController*               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UAIBlueprintHelperLibrary::GetAIController(class AActor** ControlledActor, class AAIController** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIBlueprintHelperLibrary", "GetAIController");

	Params::UAIBlueprintHelperLibrary_GetAIController_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ControlledActor != nullptr)
		*ControlledActor = Parms.ControlledActor;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AIModule.AIBlueprintHelperLibrary.CreateMoveToProxyObject
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// class APawn*                       Pawn                                                             (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor)
// struct FVector                     Destination                                                      (ConstParm, BlueprintReadOnly, OutParm, InstancedReference, SubobjectReference)
// class AActor*                      TargetActor                                                      (ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// float                              AcceptanceRadius                                                 (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               bStopOnOverlap                                                   (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UAIAsyncTaskBlueprintProxy*  ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class AActor* UAIBlueprintHelperLibrary::CreateMoveToProxyObject(class APawn* Pawn, struct FVector* Destination, float AcceptanceRadius, bool bStopOnOverlap, class UAIAsyncTaskBlueprintProxy** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIBlueprintHelperLibrary", "CreateMoveToProxyObject");

	Params::UAIBlueprintHelperLibrary_CreateMoveToProxyObject_Params Parms{};

	Parms.Pawn = Pawn;
	Parms.AcceptanceRadius = AcceptanceRadius;
	Parms.bStopOnOverlap = bStopOnOverlap;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Destination != nullptr)
		*Destination = std::move(Parms.Destination);

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Class AIModule.AIDataProvider
// (None)

class UClass* UAIDataProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIDataProvider");

	return Clss;
}


// AIDataProvider AIModule.Default__AIDataProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class UAIDataProvider* UAIDataProvider::GetDefaultObj()
{
	static class UAIDataProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIDataProvider*>(UAIDataProvider::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.AIDataProvider_QueryParams
// (None)

class UClass* UAIDataProvider_QueryParams::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIDataProvider_QueryParams");

	return Clss;
}


// AIDataProvider_QueryParams AIModule.Default__AIDataProvider_QueryParams
// (Public, ClassDefaultObject, ArchetypeObject)

class UAIDataProvider_QueryParams* UAIDataProvider_QueryParams::GetDefaultObj()
{
	static class UAIDataProvider_QueryParams* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIDataProvider_QueryParams*>(UAIDataProvider_QueryParams::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.AIDataProvider_Random
// (None)

class UClass* UAIDataProvider_Random::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIDataProvider_Random");

	return Clss;
}


// AIDataProvider_Random AIModule.Default__AIDataProvider_Random
// (Public, ClassDefaultObject, ArchetypeObject)

class UAIDataProvider_Random* UAIDataProvider_Random::GetDefaultObj()
{
	static class UAIDataProvider_Random* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIDataProvider_Random*>(UAIDataProvider_Random::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.DetourCrowdAIController
// (Actor)

class UClass* ADetourCrowdAIController::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DetourCrowdAIController");

	return Clss;
}


// DetourCrowdAIController AIModule.Default__DetourCrowdAIController
// (Public, ClassDefaultObject, ArchetypeObject)

class ADetourCrowdAIController* ADetourCrowdAIController::GetDefaultObj()
{
	static class ADetourCrowdAIController* Default = nullptr;

	if (!Default)
		Default = static_cast<ADetourCrowdAIController*>(ADetourCrowdAIController::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.EnvQueryContext
// (None)

class UClass* UEnvQueryContext::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryContext");

	return Clss;
}


// EnvQueryContext AIModule.Default__EnvQueryContext
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryContext* UEnvQueryContext::GetDefaultObj()
{
	static class UEnvQueryContext* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryContext*>(UEnvQueryContext::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.EnvQueryContext_BlueprintBase
// (None)

class UClass* UEnvQueryContext_BlueprintBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryContext_BlueprintBase");

	return Clss;
}


// EnvQueryContext_BlueprintBase AIModule.Default__EnvQueryContext_BlueprintBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryContext_BlueprintBase* UEnvQueryContext_BlueprintBase::GetDefaultObj()
{
	static class UEnvQueryContext_BlueprintBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryContext_BlueprintBase*>(UEnvQueryContext_BlueprintBase::StaticClass()->DefaultObject);

	return Default;
}


// Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleLocation
// (Event, Public, HasOutParams, HasDefaults, BlueprintEvent, Const)
// Parameters:
// class UObject*                     QuerierObject                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class AActor*                      QuerierActor                                                     (ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     ResultingLocation                                                (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void UEnvQueryContext_BlueprintBase::ProvideSingleLocation(class UObject** QuerierObject, class AActor** QuerierActor, struct FVector* ResultingLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnvQueryContext_BlueprintBase", "ProvideSingleLocation");

	Params::UEnvQueryContext_BlueprintBase_ProvideSingleLocation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (QuerierObject != nullptr)
		*QuerierObject = Parms.QuerierObject;

	if (QuerierActor != nullptr)
		*QuerierActor = Parms.QuerierActor;

	if (ResultingLocation != nullptr)
		*ResultingLocation = std::move(Parms.ResultingLocation);

}


// Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleActor
// (Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// class UObject*                     QuerierObject                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class AActor*                      QuerierActor                                                     (ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class AActor*                      ResultingActor                                                   (ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void UEnvQueryContext_BlueprintBase::ProvideSingleActor(class UObject** QuerierObject, class AActor** QuerierActor, class AActor** ResultingActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnvQueryContext_BlueprintBase", "ProvideSingleActor");

	Params::UEnvQueryContext_BlueprintBase_ProvideSingleActor_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (QuerierObject != nullptr)
		*QuerierObject = Parms.QuerierObject;

	if (QuerierActor != nullptr)
		*QuerierActor = Parms.QuerierActor;

	if (ResultingActor != nullptr)
		*ResultingActor = Parms.ResultingActor;

}


// Function AIModule.EnvQueryContext_BlueprintBase.ProvideLocationsSet
// (Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// class UObject*                     QuerierObject                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class AActor*                      QuerierActor                                                     (ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<struct FVector>             ResultingLocationSet                                             (Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void UEnvQueryContext_BlueprintBase::ProvideLocationsSet(class UObject** QuerierObject, class AActor** QuerierActor, TArray<struct FVector>* ResultingLocationSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnvQueryContext_BlueprintBase", "ProvideLocationsSet");

	Params::UEnvQueryContext_BlueprintBase_ProvideLocationsSet_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (QuerierObject != nullptr)
		*QuerierObject = Parms.QuerierObject;

	if (QuerierActor != nullptr)
		*QuerierActor = Parms.QuerierActor;

	if (ResultingLocationSet != nullptr)
		*ResultingLocationSet = std::move(Parms.ResultingLocationSet);

}


// Function AIModule.EnvQueryContext_BlueprintBase.ProvideActorsSet
// (Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// class UObject*                     QuerierObject                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class AActor*                      QuerierActor                                                     (ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<class AActor*>              ResultingActorsSet                                               (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void UEnvQueryContext_BlueprintBase::ProvideActorsSet(class UObject** QuerierObject, class AActor** QuerierActor, TArray<class AActor*>* ResultingActorsSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnvQueryContext_BlueprintBase", "ProvideActorsSet");

	Params::UEnvQueryContext_BlueprintBase_ProvideActorsSet_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (QuerierObject != nullptr)
		*QuerierObject = Parms.QuerierObject;

	if (QuerierActor != nullptr)
		*QuerierActor = Parms.QuerierActor;

	if (ResultingActorsSet != nullptr)
		*ResultingActorsSet = std::move(Parms.ResultingActorsSet);

}


// Class AIModule.EnvQueryContext_Item
// (None)

class UClass* UEnvQueryContext_Item::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryContext_Item");

	return Clss;
}


// EnvQueryContext_Item AIModule.Default__EnvQueryContext_Item
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryContext_Item* UEnvQueryContext_Item::GetDefaultObj()
{
	static class UEnvQueryContext_Item* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryContext_Item*>(UEnvQueryContext_Item::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.EnvQueryContext_Querier
// (None)

class UClass* UEnvQueryContext_Querier::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryContext_Querier");

	return Clss;
}


// EnvQueryContext_Querier AIModule.Default__EnvQueryContext_Querier
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryContext_Querier* UEnvQueryContext_Querier::GetDefaultObj()
{
	static class UEnvQueryContext_Querier* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryContext_Querier*>(UEnvQueryContext_Querier::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.EnvQuery
// (None)

class UClass* UEnvQuery::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQuery");

	return Clss;
}


// EnvQuery AIModule.Default__EnvQuery
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQuery* UEnvQuery::GetDefaultObj()
{
	static class UEnvQuery* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQuery*>(UEnvQuery::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.EnvQueryDebugHelpers
// (None)

class UClass* UEnvQueryDebugHelpers::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryDebugHelpers");

	return Clss;
}


// EnvQueryDebugHelpers AIModule.Default__EnvQueryDebugHelpers
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryDebugHelpers* UEnvQueryDebugHelpers::GetDefaultObj()
{
	static class UEnvQueryDebugHelpers* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryDebugHelpers*>(UEnvQueryDebugHelpers::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.EnvQueryNode
// (None)

class UClass* UEnvQueryNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryNode");

	return Clss;
}


// EnvQueryNode AIModule.Default__EnvQueryNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryNode* UEnvQueryNode::GetDefaultObj()
{
	static class UEnvQueryNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryNode*>(UEnvQueryNode::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.EnvQueryGenerator
// (None)

class UClass* UEnvQueryGenerator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryGenerator");

	return Clss;
}


// EnvQueryGenerator AIModule.Default__EnvQueryGenerator
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryGenerator* UEnvQueryGenerator::GetDefaultObj()
{
	static class UEnvQueryGenerator* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryGenerator*>(UEnvQueryGenerator::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.EnvQueryInstanceBlueprintWrapper
// (None)

class UClass* UEnvQueryInstanceBlueprintWrapper::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryInstanceBlueprintWrapper");

	return Clss;
}


// EnvQueryInstanceBlueprintWrapper AIModule.Default__EnvQueryInstanceBlueprintWrapper
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryInstanceBlueprintWrapper* UEnvQueryInstanceBlueprintWrapper::GetDefaultObj()
{
	static class UEnvQueryInstanceBlueprintWrapper* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryInstanceBlueprintWrapper*>(UEnvQueryInstanceBlueprintWrapper::StaticClass()->DefaultObject);

	return Default;
}


// Function AIModule.EnvQueryInstanceBlueprintWrapper.SetNamedParam
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ParamName                                                        (BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// float                              Value                                                            (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)

class FName UEnvQueryInstanceBlueprintWrapper::SetNamedParam(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnvQueryInstanceBlueprintWrapper", "SetNamedParam");

	Params::UEnvQueryInstanceBlueprintWrapper_SetNamedParam_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsLocations
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FVector>             ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UEnvQueryInstanceBlueprintWrapper::GetResultsAsLocations(TArray<struct FVector>* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnvQueryInstanceBlueprintWrapper", "GetResultsAsLocations");

	Params::UEnvQueryInstanceBlueprintWrapper_GetResultsAsLocations_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsActors
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class AActor*>              ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UEnvQueryInstanceBlueprintWrapper::GetResultsAsActors(TArray<class AActor*>* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnvQueryInstanceBlueprintWrapper", "GetResultsAsActors");

	Params::UEnvQueryInstanceBlueprintWrapper_GetResultsAsActors_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsLocations
// (Final, Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// TArray<struct FVector>             ResultLocations                                                  (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<struct FVector> UEnvQueryInstanceBlueprintWrapper::GetQueryResultsAsLocations(bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnvQueryInstanceBlueprintWrapper", "GetQueryResultsAsLocations");

	Params::UEnvQueryInstanceBlueprintWrapper_GetQueryResultsAsLocations_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsActors
// (Final, Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// TArray<class AActor*>              ResultActors                                                     (EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<class AActor*> UEnvQueryInstanceBlueprintWrapper::GetQueryResultsAsActors(bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnvQueryInstanceBlueprintWrapper", "GetQueryResultsAsActors");

	Params::UEnvQueryInstanceBlueprintWrapper_GetQueryResultsAsActors_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetItemScore
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ItemIndex                                                        (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UEnvQueryInstanceBlueprintWrapper::GetItemScore(float* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnvQueryInstanceBlueprintWrapper", "GetItemScore");

	Params::UEnvQueryInstanceBlueprintWrapper_GetItemScore_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// DelegateFunction AIModule.EnvQueryInstanceBlueprintWrapper.EQSQueryDoneSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UEnvQueryInstanceBlueprintWrapper*QueryInstance                                                    (ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// enum class EEnvQueryStatus         QueryStatus                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

enum class EEnvQueryStatus UEnvQueryInstanceBlueprintWrapper::EQSQueryDoneSignature__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnvQueryInstanceBlueprintWrapper", "EQSQueryDoneSignature__DelegateSignature");

	Params::UEnvQueryInstanceBlueprintWrapper_EQSQueryDoneSignature__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Class AIModule.EnvQueryManager
// (None)

class UClass* UEnvQueryManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryManager");

	return Clss;
}


// EnvQueryManager AIModule.Default__EnvQueryManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryManager* UEnvQueryManager::GetDefaultObj()
{
	static class UEnvQueryManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryManager*>(UEnvQueryManager::StaticClass()->DefaultObject);

	return Default;
}


// Function AIModule.EnvQueryManager.RunEQSQuery
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// class UEnvQuery*                   QueryTemplate                                                    (ConstParm, ExportObject, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UObject*                     Querier                                                          (EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// enum class EEnvQueryRunMode        RunMode                                                          (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UClass*                      WrapperClass                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class UEnvQueryInstanceBlueprintWrapper*ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UObject* UEnvQueryManager::RunEQSQuery(class UEnvQuery* QueryTemplate, class UObject** Querier, enum class EEnvQueryRunMode RunMode, class UClass** WrapperClass, class UEnvQueryInstanceBlueprintWrapper** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnvQueryManager", "RunEQSQuery");

	Params::UEnvQueryManager_RunEQSQuery_Params Parms{};

	Parms.QueryTemplate = QueryTemplate;
	Parms.RunMode = RunMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Querier != nullptr)
		*Querier = Parms.Querier;

	if (WrapperClass != nullptr)
		*WrapperClass = Parms.WrapperClass;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Class AIModule.EnvQueryOption
// (None)

class UClass* UEnvQueryOption::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryOption");

	return Clss;
}


// EnvQueryOption AIModule.Default__EnvQueryOption
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryOption* UEnvQueryOption::GetDefaultObj()
{
	static class UEnvQueryOption* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryOption*>(UEnvQueryOption::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.EnvQueryTest
// (None)

class UClass* UEnvQueryTest::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryTest");

	return Clss;
}


// EnvQueryTest AIModule.Default__EnvQueryTest
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryTest* UEnvQueryTest::GetDefaultObj()
{
	static class UEnvQueryTest* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryTest*>(UEnvQueryTest::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.EQSRenderingComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UEQSRenderingComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EQSRenderingComponent");

	return Clss;
}


// EQSRenderingComponent AIModule.Default__EQSRenderingComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UEQSRenderingComponent* UEQSRenderingComponent::GetDefaultObj()
{
	static class UEQSRenderingComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UEQSRenderingComponent*>(UEQSRenderingComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.EQSTestingPawn
// (Actor, Pawn)

class UClass* AEQSTestingPawn::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EQSTestingPawn");

	return Clss;
}


// EQSTestingPawn AIModule.Default__EQSTestingPawn
// (Public, ClassDefaultObject, ArchetypeObject)

class AEQSTestingPawn* AEQSTestingPawn::GetDefaultObj()
{
	static class AEQSTestingPawn* Default = nullptr;

	if (!Default)
		Default = static_cast<AEQSTestingPawn*>(AEQSTestingPawn::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.EnvQueryGenerator_ActorsOfClass
// (None)

class UClass* UEnvQueryGenerator_ActorsOfClass::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryGenerator_ActorsOfClass");

	return Clss;
}


// EnvQueryGenerator_ActorsOfClass AIModule.Default__EnvQueryGenerator_ActorsOfClass
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryGenerator_ActorsOfClass* UEnvQueryGenerator_ActorsOfClass::GetDefaultObj()
{
	static class UEnvQueryGenerator_ActorsOfClass* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryGenerator_ActorsOfClass*>(UEnvQueryGenerator_ActorsOfClass::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.EnvQueryGenerator_BlueprintBase
// (None)

class UClass* UEnvQueryGenerator_BlueprintBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryGenerator_BlueprintBase");

	return Clss;
}


// EnvQueryGenerator_BlueprintBase AIModule.Default__EnvQueryGenerator_BlueprintBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryGenerator_BlueprintBase* UEnvQueryGenerator_BlueprintBase::GetDefaultObj()
{
	static class UEnvQueryGenerator_BlueprintBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryGenerator_BlueprintBase*>(UEnvQueryGenerator_BlueprintBase::StaticClass()->DefaultObject);

	return Default;
}


// Function AIModule.EnvQueryGenerator_BlueprintBase.GetQuerier
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                     ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UEnvQueryGenerator_BlueprintBase::GetQuerier(class UObject** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnvQueryGenerator_BlueprintBase", "GetQuerier");

	Params::UEnvQueryGenerator_BlueprintBase_GetQuerier_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AIModule.EnvQueryGenerator_BlueprintBase.DoItemGenerationFromActors
// (Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// TArray<class AActor*>              ContextActors                                                    (Edit, BlueprintVisible, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

TArray<class AActor*> UEnvQueryGenerator_BlueprintBase::DoItemGenerationFromActors()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnvQueryGenerator_BlueprintBase", "DoItemGenerationFromActors");

	Params::UEnvQueryGenerator_BlueprintBase_DoItemGenerationFromActors_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIModule.EnvQueryGenerator_BlueprintBase.DoItemGeneration
// (Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// TArray<struct FVector>             ContextLocations                                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

TArray<struct FVector> UEnvQueryGenerator_BlueprintBase::DoItemGeneration()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnvQueryGenerator_BlueprintBase", "DoItemGeneration");

	Params::UEnvQueryGenerator_BlueprintBase_DoItemGeneration_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedVector
// (Final, Native, Public, HasDefaults, BlueprintCallable, Const)
// Parameters:
// struct FVector                     GeneratedVector                                                  (Edit, ConstParm, BlueprintReadOnly, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

struct FVector UEnvQueryGenerator_BlueprintBase::AddGeneratedVector()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnvQueryGenerator_BlueprintBase", "AddGeneratedVector");

	Params::UEnvQueryGenerator_BlueprintBase_AddGeneratedVector_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedActor
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class AActor*                      GeneratedActor                                                   (Edit, ConstParm, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

class AActor* UEnvQueryGenerator_BlueprintBase::AddGeneratedActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnvQueryGenerator_BlueprintBase", "AddGeneratedActor");

	Params::UEnvQueryGenerator_BlueprintBase_AddGeneratedActor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class AIModule.EnvQueryGenerator_Composite
// (None)

class UClass* UEnvQueryGenerator_Composite::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryGenerator_Composite");

	return Clss;
}


// EnvQueryGenerator_Composite AIModule.Default__EnvQueryGenerator_Composite
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryGenerator_Composite* UEnvQueryGenerator_Composite::GetDefaultObj()
{
	static class UEnvQueryGenerator_Composite* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryGenerator_Composite*>(UEnvQueryGenerator_Composite::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.EnvQueryGenerator_ProjectedPoints
// (None)

class UClass* UEnvQueryGenerator_ProjectedPoints::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryGenerator_ProjectedPoints");

	return Clss;
}


// EnvQueryGenerator_ProjectedPoints AIModule.Default__EnvQueryGenerator_ProjectedPoints
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryGenerator_ProjectedPoints* UEnvQueryGenerator_ProjectedPoints::GetDefaultObj()
{
	static class UEnvQueryGenerator_ProjectedPoints* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryGenerator_ProjectedPoints*>(UEnvQueryGenerator_ProjectedPoints::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.EnvQueryGenerator_Cone
// (None)

class UClass* UEnvQueryGenerator_Cone::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryGenerator_Cone");

	return Clss;
}


// EnvQueryGenerator_Cone AIModule.Default__EnvQueryGenerator_Cone
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryGenerator_Cone* UEnvQueryGenerator_Cone::GetDefaultObj()
{
	static class UEnvQueryGenerator_Cone* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryGenerator_Cone*>(UEnvQueryGenerator_Cone::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.EnvQueryGenerator_CurrentLocation
// (None)

class UClass* UEnvQueryGenerator_CurrentLocation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryGenerator_CurrentLocation");

	return Clss;
}


// EnvQueryGenerator_CurrentLocation AIModule.Default__EnvQueryGenerator_CurrentLocation
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryGenerator_CurrentLocation* UEnvQueryGenerator_CurrentLocation::GetDefaultObj()
{
	static class UEnvQueryGenerator_CurrentLocation* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryGenerator_CurrentLocation*>(UEnvQueryGenerator_CurrentLocation::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.EnvQueryGenerator_Donut
// (None)

class UClass* UEnvQueryGenerator_Donut::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryGenerator_Donut");

	return Clss;
}


// EnvQueryGenerator_Donut AIModule.Default__EnvQueryGenerator_Donut
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryGenerator_Donut* UEnvQueryGenerator_Donut::GetDefaultObj()
{
	static class UEnvQueryGenerator_Donut* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryGenerator_Donut*>(UEnvQueryGenerator_Donut::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.EnvQueryGenerator_OnCircle
// (None)

class UClass* UEnvQueryGenerator_OnCircle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryGenerator_OnCircle");

	return Clss;
}


// EnvQueryGenerator_OnCircle AIModule.Default__EnvQueryGenerator_OnCircle
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryGenerator_OnCircle* UEnvQueryGenerator_OnCircle::GetDefaultObj()
{
	static class UEnvQueryGenerator_OnCircle* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryGenerator_OnCircle*>(UEnvQueryGenerator_OnCircle::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.EnvQueryGenerator_SimpleGrid
// (None)

class UClass* UEnvQueryGenerator_SimpleGrid::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryGenerator_SimpleGrid");

	return Clss;
}


// EnvQueryGenerator_SimpleGrid AIModule.Default__EnvQueryGenerator_SimpleGrid
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryGenerator_SimpleGrid* UEnvQueryGenerator_SimpleGrid::GetDefaultObj()
{
	static class UEnvQueryGenerator_SimpleGrid* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryGenerator_SimpleGrid*>(UEnvQueryGenerator_SimpleGrid::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.EnvQueryGenerator_PathingGrid
// (None)

class UClass* UEnvQueryGenerator_PathingGrid::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryGenerator_PathingGrid");

	return Clss;
}


// EnvQueryGenerator_PathingGrid AIModule.Default__EnvQueryGenerator_PathingGrid
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryGenerator_PathingGrid* UEnvQueryGenerator_PathingGrid::GetDefaultObj()
{
	static class UEnvQueryGenerator_PathingGrid* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryGenerator_PathingGrid*>(UEnvQueryGenerator_PathingGrid::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.EnvQueryGenerator_PerceivedActors
// (None)

class UClass* UEnvQueryGenerator_PerceivedActors::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryGenerator_PerceivedActors");

	return Clss;
}


// EnvQueryGenerator_PerceivedActors AIModule.Default__EnvQueryGenerator_PerceivedActors
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryGenerator_PerceivedActors* UEnvQueryGenerator_PerceivedActors::GetDefaultObj()
{
	static class UEnvQueryGenerator_PerceivedActors* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryGenerator_PerceivedActors*>(UEnvQueryGenerator_PerceivedActors::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.EnvQueryItemType
// (None)

class UClass* UEnvQueryItemType::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryItemType");

	return Clss;
}


// EnvQueryItemType AIModule.Default__EnvQueryItemType
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryItemType* UEnvQueryItemType::GetDefaultObj()
{
	static class UEnvQueryItemType* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryItemType*>(UEnvQueryItemType::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.EnvQueryItemType_VectorBase
// (None)

class UClass* UEnvQueryItemType_VectorBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryItemType_VectorBase");

	return Clss;
}


// EnvQueryItemType_VectorBase AIModule.Default__EnvQueryItemType_VectorBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryItemType_VectorBase* UEnvQueryItemType_VectorBase::GetDefaultObj()
{
	static class UEnvQueryItemType_VectorBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryItemType_VectorBase*>(UEnvQueryItemType_VectorBase::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.EnvQueryItemType_ActorBase
// (None)

class UClass* UEnvQueryItemType_ActorBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryItemType_ActorBase");

	return Clss;
}


// EnvQueryItemType_ActorBase AIModule.Default__EnvQueryItemType_ActorBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryItemType_ActorBase* UEnvQueryItemType_ActorBase::GetDefaultObj()
{
	static class UEnvQueryItemType_ActorBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryItemType_ActorBase*>(UEnvQueryItemType_ActorBase::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.EnvQueryItemType_Actor
// (None)

class UClass* UEnvQueryItemType_Actor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryItemType_Actor");

	return Clss;
}


// EnvQueryItemType_Actor AIModule.Default__EnvQueryItemType_Actor
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryItemType_Actor* UEnvQueryItemType_Actor::GetDefaultObj()
{
	static class UEnvQueryItemType_Actor* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryItemType_Actor*>(UEnvQueryItemType_Actor::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.EnvQueryItemType_Direction
// (None)

class UClass* UEnvQueryItemType_Direction::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryItemType_Direction");

	return Clss;
}


// EnvQueryItemType_Direction AIModule.Default__EnvQueryItemType_Direction
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryItemType_Direction* UEnvQueryItemType_Direction::GetDefaultObj()
{
	static class UEnvQueryItemType_Direction* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryItemType_Direction*>(UEnvQueryItemType_Direction::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.EnvQueryItemType_Point
// (None)

class UClass* UEnvQueryItemType_Point::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryItemType_Point");

	return Clss;
}


// EnvQueryItemType_Point AIModule.Default__EnvQueryItemType_Point
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryItemType_Point* UEnvQueryItemType_Point::GetDefaultObj()
{
	static class UEnvQueryItemType_Point* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryItemType_Point*>(UEnvQueryItemType_Point::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.EnvQueryTest_Distance
// (None)

class UClass* UEnvQueryTest_Distance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryTest_Distance");

	return Clss;
}


// EnvQueryTest_Distance AIModule.Default__EnvQueryTest_Distance
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryTest_Distance* UEnvQueryTest_Distance::GetDefaultObj()
{
	static class UEnvQueryTest_Distance* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryTest_Distance*>(UEnvQueryTest_Distance::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.EnvQueryTest_Dot
// (None)

class UClass* UEnvQueryTest_Dot::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryTest_Dot");

	return Clss;
}


// EnvQueryTest_Dot AIModule.Default__EnvQueryTest_Dot
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryTest_Dot* UEnvQueryTest_Dot::GetDefaultObj()
{
	static class UEnvQueryTest_Dot* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryTest_Dot*>(UEnvQueryTest_Dot::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.EnvQueryTest_GameplayTags
// (None)

class UClass* UEnvQueryTest_GameplayTags::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryTest_GameplayTags");

	return Clss;
}


// EnvQueryTest_GameplayTags AIModule.Default__EnvQueryTest_GameplayTags
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryTest_GameplayTags* UEnvQueryTest_GameplayTags::GetDefaultObj()
{
	static class UEnvQueryTest_GameplayTags* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryTest_GameplayTags*>(UEnvQueryTest_GameplayTags::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.EnvQueryTest_Overlap
// (None)

class UClass* UEnvQueryTest_Overlap::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryTest_Overlap");

	return Clss;
}


// EnvQueryTest_Overlap AIModule.Default__EnvQueryTest_Overlap
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryTest_Overlap* UEnvQueryTest_Overlap::GetDefaultObj()
{
	static class UEnvQueryTest_Overlap* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryTest_Overlap*>(UEnvQueryTest_Overlap::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.EnvQueryTest_Pathfinding
// (None)

class UClass* UEnvQueryTest_Pathfinding::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryTest_Pathfinding");

	return Clss;
}


// EnvQueryTest_Pathfinding AIModule.Default__EnvQueryTest_Pathfinding
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryTest_Pathfinding* UEnvQueryTest_Pathfinding::GetDefaultObj()
{
	static class UEnvQueryTest_Pathfinding* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryTest_Pathfinding*>(UEnvQueryTest_Pathfinding::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.EnvQueryTest_PathfindingBatch
// (None)

class UClass* UEnvQueryTest_PathfindingBatch::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryTest_PathfindingBatch");

	return Clss;
}


// EnvQueryTest_PathfindingBatch AIModule.Default__EnvQueryTest_PathfindingBatch
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryTest_PathfindingBatch* UEnvQueryTest_PathfindingBatch::GetDefaultObj()
{
	static class UEnvQueryTest_PathfindingBatch* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryTest_PathfindingBatch*>(UEnvQueryTest_PathfindingBatch::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.EnvQueryTest_Project
// (None)

class UClass* UEnvQueryTest_Project::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryTest_Project");

	return Clss;
}


// EnvQueryTest_Project AIModule.Default__EnvQueryTest_Project
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryTest_Project* UEnvQueryTest_Project::GetDefaultObj()
{
	static class UEnvQueryTest_Project* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryTest_Project*>(UEnvQueryTest_Project::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.EnvQueryTest_Random
// (None)

class UClass* UEnvQueryTest_Random::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryTest_Random");

	return Clss;
}


// EnvQueryTest_Random AIModule.Default__EnvQueryTest_Random
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryTest_Random* UEnvQueryTest_Random::GetDefaultObj()
{
	static class UEnvQueryTest_Random* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryTest_Random*>(UEnvQueryTest_Random::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.EnvQueryTest_Trace
// (None)

class UClass* UEnvQueryTest_Trace::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryTest_Trace");

	return Clss;
}


// EnvQueryTest_Trace AIModule.Default__EnvQueryTest_Trace
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryTest_Trace* UEnvQueryTest_Trace::GetDefaultObj()
{
	static class UEnvQueryTest_Trace* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryTest_Trace*>(UEnvQueryTest_Trace::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.EnvQueryTest_Volume
// (None)

class UClass* UEnvQueryTest_Volume::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryTest_Volume");

	return Clss;
}


// EnvQueryTest_Volume AIModule.Default__EnvQueryTest_Volume
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryTest_Volume* UEnvQueryTest_Volume::GetDefaultObj()
{
	static class UEnvQueryTest_Volume* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryTest_Volume*>(UEnvQueryTest_Volume::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.GridPathAIController
// (Actor)

class UClass* AGridPathAIController::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GridPathAIController");

	return Clss;
}


// GridPathAIController AIModule.Default__GridPathAIController
// (Public, ClassDefaultObject, ArchetypeObject)

class AGridPathAIController* AGridPathAIController::GetDefaultObj()
{
	static class AGridPathAIController* Default = nullptr;

	if (!Default)
		Default = static_cast<AGridPathAIController*>(AGridPathAIController::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.AIHotSpotManager
// (None)

class UClass* UAIHotSpotManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIHotSpotManager");

	return Clss;
}


// AIHotSpotManager AIModule.Default__AIHotSpotManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UAIHotSpotManager* UAIHotSpotManager::GetDefaultObj()
{
	static class UAIHotSpotManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIHotSpotManager*>(UAIHotSpotManager::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.CrowdFollowingComponent
// (None)

class UClass* UCrowdFollowingComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrowdFollowingComponent");

	return Clss;
}


// CrowdFollowingComponent AIModule.Default__CrowdFollowingComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrowdFollowingComponent* UCrowdFollowingComponent::GetDefaultObj()
{
	static class UCrowdFollowingComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrowdFollowingComponent*>(UCrowdFollowingComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function AIModule.CrowdFollowingComponent.SuspendCrowdSteering
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bSuspend                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

bool UCrowdFollowingComponent::SuspendCrowdSteering()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrowdFollowingComponent", "SuspendCrowdSteering");

	Params::UCrowdFollowingComponent_SuspendCrowdSteering_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class AIModule.CrowdManager
// (None)

class UClass* UCrowdManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrowdManager");

	return Clss;
}


// CrowdManager AIModule.Default__CrowdManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrowdManager* UCrowdManager::GetDefaultObj()
{
	static class UCrowdManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrowdManager*>(UCrowdManager::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.GridPathFollowingComponent
// (None)

class UClass* UGridPathFollowingComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GridPathFollowingComponent");

	return Clss;
}


// GridPathFollowingComponent AIModule.Default__GridPathFollowingComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UGridPathFollowingComponent* UGridPathFollowingComponent::GetDefaultObj()
{
	static class UGridPathFollowingComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UGridPathFollowingComponent*>(UGridPathFollowingComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.NavFilter_AIControllerDefault
// (None)

class UClass* UNavFilter_AIControllerDefault::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavFilter_AIControllerDefault");

	return Clss;
}


// NavFilter_AIControllerDefault AIModule.Default__NavFilter_AIControllerDefault
// (Public, ClassDefaultObject, ArchetypeObject)

class UNavFilter_AIControllerDefault* UNavFilter_AIControllerDefault::GetDefaultObj()
{
	static class UNavFilter_AIControllerDefault* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavFilter_AIControllerDefault*>(UNavFilter_AIControllerDefault::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.NavLinkProxy
// (Actor)

class UClass* ANavLinkProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavLinkProxy");

	return Clss;
}


// NavLinkProxy AIModule.Default__NavLinkProxy
// (Public, ClassDefaultObject, ArchetypeObject)

class ANavLinkProxy* ANavLinkProxy::GetDefaultObj()
{
	static class ANavLinkProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<ANavLinkProxy*>(ANavLinkProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function AIModule.NavLinkProxy.SetSmartLinkEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnabled                                                         (Edit, BlueprintVisible, ExportObject, Net, OutParm, Transient, EditConst, GlobalConfig)

void ANavLinkProxy::SetSmartLinkEnabled(bool* bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavLinkProxy", "SetSmartLinkEnabled");

	Params::ANavLinkProxy_SetSmartLinkEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bEnabled != nullptr)
		*bEnabled = Parms.bEnabled;

}


// Function AIModule.NavLinkProxy.ResumePathFollowing
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Agent                                                            (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

class AActor* ANavLinkProxy::ResumePathFollowing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavLinkProxy", "ResumePathFollowing");

	Params::ANavLinkProxy_ResumePathFollowing_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AIModule.NavLinkProxy.ReceiveSmartLinkReached
// (Event, Public, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// class AActor*                      Agent                                                            (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     Destination                                                      (ConstParm, BlueprintReadOnly, OutParm, InstancedReference, SubobjectReference)

class AActor* ANavLinkProxy::ReceiveSmartLinkReached(struct FVector* Destination)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavLinkProxy", "ReceiveSmartLinkReached");

	Params::ANavLinkProxy_ReceiveSmartLinkReached_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Destination != nullptr)
		*Destination = std::move(Parms.Destination);

	return Parms.ReturnValue;

}


// Function AIModule.NavLinkProxy.IsSmartLinkEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void ANavLinkProxy::IsSmartLinkEnabled(bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavLinkProxy", "IsSmartLinkEnabled");

	Params::ANavLinkProxy_IsSmartLinkEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AIModule.NavLinkProxy.HasMovingAgents
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void ANavLinkProxy::HasMovingAgents(bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavLinkProxy", "HasMovingAgents");

	Params::ANavLinkProxy_HasMovingAgents_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Class AIModule.NavLocalGridManager
// (None)

class UClass* UNavLocalGridManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavLocalGridManager");

	return Clss;
}


// NavLocalGridManager AIModule.Default__NavLocalGridManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UNavLocalGridManager* UNavLocalGridManager::GetDefaultObj()
{
	static class UNavLocalGridManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavLocalGridManager*>(UNavLocalGridManager::StaticClass()->DefaultObject);

	return Default;
}


// Function AIModule.NavLocalGridManager.SetLocalNavigationGridDensity
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              CellSize                                                         (Edit, ConstParm, Net, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UObject* UNavLocalGridManager::SetLocalNavigationGridDensity(float* CellSize, bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavLocalGridManager", "SetLocalNavigationGridDensity");

	Params::UNavLocalGridManager_SetLocalNavigationGridDensity_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (CellSize != nullptr)
		*CellSize = Parms.CellSize;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function AIModule.NavLocalGridManager.RemoveLocalNavigationGrid
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// int32                              GridId                                                           (ConstParm, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bRebuildGrids                                                    (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

bool UNavLocalGridManager::RemoveLocalNavigationGrid()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavLocalGridManager", "RemoveLocalNavigationGrid");

	Params::UNavLocalGridManager_RemoveLocalNavigationGrid_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AIModule.NavLocalGridManager.FindLocalNavigationGridPath
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     Start                                                            (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
// struct FVector                     End                                                              (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance)
// TArray<struct FVector>             PathPoints                                                       (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UObject* UNavLocalGridManager::FindLocalNavigationGridPath(struct FVector* Start, const struct FVector& End, TArray<struct FVector>* PathPoints, bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavLocalGridManager", "FindLocalNavigationGridPath");

	Params::UNavLocalGridManager_FindLocalNavigationGridPath_Params Parms{};

	Parms.End = End;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Start != nullptr)
		*Start = std::move(Parms.Start);

	if (PathPoints != nullptr)
		*PathPoints = std::move(Parms.PathPoints);

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function AIModule.NavLocalGridManager.AddLocalNavigationGridForPoints
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// TArray<struct FVector>             Locations                                                        (Edit, ConstParm, Net, EditFixedSize, OutParm, Transient, Config, InstancedReference, SubobjectReference)
// int32                              Radius2D                                                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// float                              Height                                                           (BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Config, EditConst)
// bool                               bRebuildGrids                                                    (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool UNavLocalGridManager::AddLocalNavigationGridForPoints(TArray<struct FVector>* Locations, float Height, int32* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavLocalGridManager", "AddLocalNavigationGridForPoints");

	Params::UNavLocalGridManager_AddLocalNavigationGridForPoints_Params Parms{};

	Parms.Height = Height;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Locations != nullptr)
		*Locations = std::move(Parms.Locations);

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function AIModule.NavLocalGridManager.AddLocalNavigationGridForPoint
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     Location                                                         (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
// int32                              Radius2D                                                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// float                              Height                                                           (BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Config, EditConst)
// bool                               bRebuildGrids                                                    (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool UNavLocalGridManager::AddLocalNavigationGridForPoint(struct FVector* Location, float Height, int32* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavLocalGridManager", "AddLocalNavigationGridForPoint");

	Params::UNavLocalGridManager_AddLocalNavigationGridForPoint_Params Parms{};

	Parms.Height = Height;

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


// Function AIModule.NavLocalGridManager.AddLocalNavigationGridForCapsule
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     Location                                                         (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
// float                              CapsuleRadius                                                    (ConstParm, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// float                              CapsuleHalfHeight                                                (ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// int32                              Radius2D                                                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// float                              Height                                                           (BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Config, EditConst)
// bool                               bRebuildGrids                                                    (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool UNavLocalGridManager::AddLocalNavigationGridForCapsule(struct FVector* Location, float CapsuleRadius, float Height, int32* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavLocalGridManager", "AddLocalNavigationGridForCapsule");

	Params::UNavLocalGridManager_AddLocalNavigationGridForCapsule_Params Parms{};

	Parms.CapsuleRadius = CapsuleRadius;
	Parms.Height = Height;

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


// Function AIModule.NavLocalGridManager.AddLocalNavigationGridForBox
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     Location                                                         (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
// struct FVector                     Extent                                                           (Edit, ExportObject, Net, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FRotator                    Rotation                                                         (BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
// int32                              Radius2D                                                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// float                              Height                                                           (BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Config, EditConst)
// bool                               bRebuildGrids                                                    (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool UNavLocalGridManager::AddLocalNavigationGridForBox(struct FVector* Location, struct FRotator* Rotation, float Height, int32* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavLocalGridManager", "AddLocalNavigationGridForBox");

	Params::UNavLocalGridManager_AddLocalNavigationGridForBox_Params Parms{};

	Parms.Height = Height;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

	if (Rotation != nullptr)
		*Rotation = std::move(Parms.Rotation);

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Class AIModule.PathFollowingManager
// (None)

class UClass* UPathFollowingManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PathFollowingManager");

	return Clss;
}


// PathFollowingManager AIModule.Default__PathFollowingManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UPathFollowingManager* UPathFollowingManager::GetDefaultObj()
{
	static class UPathFollowingManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UPathFollowingManager*>(UPathFollowingManager::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.AIPerceptionComponent
// (None)

class UClass* UAIPerceptionComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIPerceptionComponent");

	return Clss;
}


// AIPerceptionComponent AIModule.Default__AIPerceptionComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAIPerceptionComponent* UAIPerceptionComponent::GetDefaultObj()
{
	static class UAIPerceptionComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIPerceptionComponent*>(UAIPerceptionComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function AIModule.AIPerceptionComponent.SetSenseEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                      SenseClass                                                       (ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bEnable                                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)

bool UAIPerceptionComponent::SetSenseEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIPerceptionComponent", "SetSenseEnabled");

	Params::UAIPerceptionComponent_SetSenseEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AIModule.AIPerceptionComponent.RequestStimuliListenerUpdate
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAIPerceptionComponent::RequestStimuliListenerUpdate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIPerceptionComponent", "RequestStimuliListenerUpdate");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AIModule.AIPerceptionComponent.OnOwnerEndPlay
// (Final, Native, Public)
// Parameters:
// class AActor*                      Actor                                                            (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
// enum class EEndPlayReason          EndPlayReason                                                    (ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

enum class EEndPlayReason UAIPerceptionComponent::OnOwnerEndPlay(class AActor** Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIPerceptionComponent", "OnOwnerEndPlay");

	Params::UAIPerceptionComponent_OnOwnerEndPlay_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Actor != nullptr)
		*Actor = Parms.Actor;

	return Parms.ReturnValue;

}


// Function AIModule.AIPerceptionComponent.GetPerceivedHostileActorsBySense
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                      SenseToUse                                                       (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<class AActor*>              OutActors                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, SubobjectReference)

class UClass* UAIPerceptionComponent::GetPerceivedHostileActorsBySense(const TArray<class AActor*>& OutActors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIPerceptionComponent", "GetPerceivedHostileActorsBySense");

	Params::UAIPerceptionComponent_GetPerceivedHostileActorsBySense_Params Parms{};

	Parms.OutActors = OutActors;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AIModule.AIPerceptionComponent.GetPerceivedHostileActors
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class AActor*>              OutActors                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, SubobjectReference)

void UAIPerceptionComponent::GetPerceivedHostileActors(const TArray<class AActor*>& OutActors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIPerceptionComponent", "GetPerceivedHostileActors");

	Params::UAIPerceptionComponent_GetPerceivedHostileActors_Params Parms{};

	Parms.OutActors = OutActors;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AIModule.AIPerceptionComponent.GetPerceivedActors
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                      SenseToUse                                                       (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<class AActor*>              OutActors                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, SubobjectReference)

class UClass* UAIPerceptionComponent::GetPerceivedActors(const TArray<class AActor*>& OutActors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIPerceptionComponent", "GetPerceivedActors");

	Params::UAIPerceptionComponent_GetPerceivedActors_Params Parms{};

	Parms.OutActors = OutActors;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AIModule.AIPerceptionComponent.GetKnownPerceivedActors
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                      SenseToUse                                                       (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<class AActor*>              OutActors                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, SubobjectReference)

class UClass* UAIPerceptionComponent::GetKnownPerceivedActors(const TArray<class AActor*>& OutActors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIPerceptionComponent", "GetKnownPerceivedActors");

	Params::UAIPerceptionComponent_GetKnownPerceivedActors_Params Parms{};

	Parms.OutActors = OutActors;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AIModule.AIPerceptionComponent.GetCurrentlyPerceivedActors
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                      SenseToUse                                                       (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<class AActor*>              OutActors                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, SubobjectReference)

class UClass* UAIPerceptionComponent::GetCurrentlyPerceivedActors(const TArray<class AActor*>& OutActors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIPerceptionComponent", "GetCurrentlyPerceivedActors");

	Params::UAIPerceptionComponent_GetCurrentlyPerceivedActors_Params Parms{};

	Parms.OutActors = OutActors;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AIModule.AIPerceptionComponent.GetActorsPerception
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
// struct FActorPerceptionBlueprintInfoInfo                                                             (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FActorPerceptionBlueprintInfo UAIPerceptionComponent::GetActorsPerception(class AActor** Actor, bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIPerceptionComponent", "GetActorsPerception");

	Params::UAIPerceptionComponent_GetActorsPerception_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Actor != nullptr)
		*Actor = Parms.Actor;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function AIModule.AIPerceptionComponent.ForgetAll
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAIPerceptionComponent::ForgetAll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIPerceptionComponent", "ForgetAll");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class AIModule.AIPerceptionListenerInterface
// (None)

class UClass* IAIPerceptionListenerInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIPerceptionListenerInterface");

	return Clss;
}


// AIPerceptionListenerInterface AIModule.Default__AIPerceptionListenerInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IAIPerceptionListenerInterface* IAIPerceptionListenerInterface::GetDefaultObj()
{
	static class IAIPerceptionListenerInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IAIPerceptionListenerInterface*>(IAIPerceptionListenerInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.AIPerceptionStimuliSourceComponent
// (None)

class UClass* UAIPerceptionStimuliSourceComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIPerceptionStimuliSourceComponent");

	return Clss;
}


// AIPerceptionStimuliSourceComponent AIModule.Default__AIPerceptionStimuliSourceComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAIPerceptionStimuliSourceComponent* UAIPerceptionStimuliSourceComponent::GetDefaultObj()
{
	static class UAIPerceptionStimuliSourceComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIPerceptionStimuliSourceComponent*>(UAIPerceptionStimuliSourceComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromSense
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                      SenseClass                                                       (ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

class UClass* UAIPerceptionStimuliSourceComponent::UnregisterFromSense()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIPerceptionStimuliSourceComponent", "UnregisterFromSense");

	Params::UAIPerceptionStimuliSourceComponent_UnregisterFromSense_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromPerceptionSystem
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAIPerceptionStimuliSourceComponent::UnregisterFromPerceptionSystem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIPerceptionStimuliSourceComponent", "UnregisterFromPerceptionSystem");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AIModule.AIPerceptionStimuliSourceComponent.RegisterWithPerceptionSystem
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAIPerceptionStimuliSourceComponent::RegisterWithPerceptionSystem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIPerceptionStimuliSourceComponent", "RegisterWithPerceptionSystem");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AIModule.AIPerceptionStimuliSourceComponent.RegisterForSense
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                      SenseClass                                                       (ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

class UClass* UAIPerceptionStimuliSourceComponent::RegisterForSense()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIPerceptionStimuliSourceComponent", "RegisterForSense");

	Params::UAIPerceptionStimuliSourceComponent_RegisterForSense_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class AIModule.AIPerceptionSystem
// (None)

class UClass* UAIPerceptionSystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIPerceptionSystem");

	return Clss;
}


// AIPerceptionSystem AIModule.Default__AIPerceptionSystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UAIPerceptionSystem* UAIPerceptionSystem::GetDefaultObj()
{
	static class UAIPerceptionSystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIPerceptionSystem*>(UAIPerceptionSystem::StaticClass()->DefaultObject);

	return Default;
}


// Function AIModule.AIPerceptionSystem.ReportPerceptionEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// class UAISenseEvent*               PerceptionEvent                                                  (Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

class UAISenseEvent* UAIPerceptionSystem::ReportPerceptionEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIPerceptionSystem", "ReportPerceptionEvent");

	Params::UAIPerceptionSystem_ReportPerceptionEvent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AIModule.AIPerceptionSystem.ReportEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAISenseEvent*               PerceptionEvent                                                  (Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

class UAISenseEvent* UAIPerceptionSystem::ReportEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIPerceptionSystem", "ReportEvent");

	Params::UAIPerceptionSystem_ReportEvent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AIModule.AIPerceptionSystem.RegisterPerceptionStimuliSource
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// class UClass*                      Sense                                                            (Edit, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class AActor*                      Target                                                           (Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, Config)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UClass* UAIPerceptionSystem::RegisterPerceptionStimuliSource(class AActor* Target, bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIPerceptionSystem", "RegisterPerceptionStimuliSource");

	Params::UAIPerceptionSystem_RegisterPerceptionStimuliSource_Params Parms{};

	Parms.Target = Target;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function AIModule.AIPerceptionSystem.OnPerceptionStimuliSourceEndPlay
// (Final, Native, Protected)
// Parameters:
// class AActor*                      Actor                                                            (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
// enum class EEndPlayReason          EndPlayReason                                                    (ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

enum class EEndPlayReason UAIPerceptionSystem::OnPerceptionStimuliSourceEndPlay(class AActor** Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIPerceptionSystem", "OnPerceptionStimuliSourceEndPlay");

	Params::UAIPerceptionSystem_OnPerceptionStimuliSourceEndPlay_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Actor != nullptr)
		*Actor = Parms.Actor;

	return Parms.ReturnValue;

}


// Function AIModule.AIPerceptionSystem.GetSenseClassForStimulus
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FAIStimulus                 Stimulus                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UClass*                      ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UObject* UAIPerceptionSystem::GetSenseClassForStimulus(const struct FAIStimulus& Stimulus, class UClass** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIPerceptionSystem", "GetSenseClassForStimulus");

	Params::UAIPerceptionSystem_GetSenseClassForStimulus_Params Parms{};

	Parms.Stimulus = Stimulus;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Class AIModule.AISense
// (None)

class UClass* UAISense::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AISense");

	return Clss;
}


// AISense AIModule.Default__AISense
// (Public, ClassDefaultObject, ArchetypeObject)

class UAISense* UAISense::GetDefaultObj()
{
	static class UAISense* Default = nullptr;

	if (!Default)
		Default = static_cast<UAISense*>(UAISense::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.AISenseConfig_Damage
// (None)

class UClass* UAISenseConfig_Damage::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AISenseConfig_Damage");

	return Clss;
}


// AISenseConfig_Damage AIModule.Default__AISenseConfig_Damage
// (Public, ClassDefaultObject, ArchetypeObject)

class UAISenseConfig_Damage* UAISenseConfig_Damage::GetDefaultObj()
{
	static class UAISenseConfig_Damage* Default = nullptr;

	if (!Default)
		Default = static_cast<UAISenseConfig_Damage*>(UAISenseConfig_Damage::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.AISense_Blueprint
// (None)

class UClass* UAISense_Blueprint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AISense_Blueprint");

	return Clss;
}


// AISense_Blueprint AIModule.Default__AISense_Blueprint
// (Public, ClassDefaultObject, ArchetypeObject)

class UAISense_Blueprint* UAISense_Blueprint::GetDefaultObj()
{
	static class UAISense_Blueprint* Default = nullptr;

	if (!Default)
		Default = static_cast<UAISense_Blueprint*>(UAISense_Blueprint::StaticClass()->DefaultObject);

	return Default;
}


// Function AIModule.AISense_Blueprint.OnUpdate
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<class UAISenseEvent*>       EventsToProcess                                                  (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<class UAISenseEvent*> UAISense_Blueprint::OnUpdate(float* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AISense_Blueprint", "OnUpdate");

	Params::UAISense_Blueprint_OnUpdate_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function AIModule.AISense_Blueprint.OnListenerUpdated
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      ActorListener                                                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class UAIPerceptionComponent*      PerceptionComponent                                              (Edit, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

class AActor* UAISense_Blueprint::OnListenerUpdated(class UAIPerceptionComponent** PerceptionComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AISense_Blueprint", "OnListenerUpdated");

	Params::UAISense_Blueprint_OnListenerUpdated_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (PerceptionComponent != nullptr)
		*PerceptionComponent = Parms.PerceptionComponent;

	return Parms.ReturnValue;

}


// Function AIModule.AISense_Blueprint.OnListenerUnregistered
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      ActorListener                                                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class UAIPerceptionComponent*      PerceptionComponent                                              (Edit, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

class AActor* UAISense_Blueprint::OnListenerUnregistered(class UAIPerceptionComponent** PerceptionComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AISense_Blueprint", "OnListenerUnregistered");

	Params::UAISense_Blueprint_OnListenerUnregistered_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (PerceptionComponent != nullptr)
		*PerceptionComponent = Parms.PerceptionComponent;

	return Parms.ReturnValue;

}


// Function AIModule.AISense_Blueprint.OnListenerRegistered
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      ActorListener                                                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class UAIPerceptionComponent*      PerceptionComponent                                              (Edit, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

class AActor* UAISense_Blueprint::OnListenerRegistered(class UAIPerceptionComponent** PerceptionComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AISense_Blueprint", "OnListenerRegistered");

	Params::UAISense_Blueprint_OnListenerRegistered_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (PerceptionComponent != nullptr)
		*PerceptionComponent = Parms.PerceptionComponent;

	return Parms.ReturnValue;

}


// Function AIModule.AISense_Blueprint.K2_OnNewPawn
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       NewPawn                                                          (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class APawn* UAISense_Blueprint::K2_OnNewPawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AISense_Blueprint", "K2_OnNewPawn");

	Params::UAISense_Blueprint_K2_OnNewPawn_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIModule.AISense_Blueprint.GetAllListenerComponents
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UAIPerceptionComponent*>ListenerComponents                                               (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

TArray<class UAIPerceptionComponent*> UAISense_Blueprint::GetAllListenerComponents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AISense_Blueprint", "GetAllListenerComponents");

	Params::UAISense_Blueprint_GetAllListenerComponents_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AIModule.AISense_Blueprint.GetAllListenerActors
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class AActor*>              ListenerActors                                                   (Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

TArray<class AActor*> UAISense_Blueprint::GetAllListenerActors()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AISense_Blueprint", "GetAllListenerActors");

	Params::UAISense_Blueprint_GetAllListenerActors_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class AIModule.AISense_Damage
// (None)

class UClass* UAISense_Damage::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AISense_Damage");

	return Clss;
}


// AISense_Damage AIModule.Default__AISense_Damage
// (Public, ClassDefaultObject, ArchetypeObject)

class UAISense_Damage* UAISense_Damage::GetDefaultObj()
{
	static class UAISense_Damage* Default = nullptr;

	if (!Default)
		Default = static_cast<UAISense_Damage*>(UAISense_Damage::StaticClass()->DefaultObject);

	return Default;
}


// Function AIModule.AISense_Damage.ReportDamageEvent
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// class AActor*                      DamagedActor                                                     (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class AActor*                      Instigator                                                       (Edit, BlueprintVisible, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// float                              DamageAmount                                                     (Edit, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FVector                     EventLocation                                                    (Edit, BlueprintVisible, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     HitLocation                                                      (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// class FName                        Tag                                                              (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class FName UAISense_Damage::ReportDamageEvent(class AActor** DamagedActor, const struct FVector& EventLocation, struct FVector* HitLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AISense_Damage", "ReportDamageEvent");

	Params::UAISense_Damage_ReportDamageEvent_Params Parms{};

	Parms.EventLocation = EventLocation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (DamagedActor != nullptr)
		*DamagedActor = Parms.DamagedActor;

	if (HitLocation != nullptr)
		*HitLocation = std::move(Parms.HitLocation);

	return Parms.ReturnValue;

}


// Class AIModule.AISense_Hearing
// (None)

class UClass* UAISense_Hearing::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AISense_Hearing");

	return Clss;
}


// AISense_Hearing AIModule.Default__AISense_Hearing
// (Public, ClassDefaultObject, ArchetypeObject)

class UAISense_Hearing* UAISense_Hearing::GetDefaultObj()
{
	static class UAISense_Hearing* Default = nullptr;

	if (!Default)
		Default = static_cast<UAISense_Hearing*>(UAISense_Hearing::StaticClass()->DefaultObject);

	return Default;
}


// Function AIModule.AISense_Hearing.ReportNoiseEvent
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     NoiseLocation                                                    (BlueprintVisible, ExportObject, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              Loudness                                                         (BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class AActor*                      Instigator                                                       (Edit, BlueprintVisible, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// float                              MaxRange                                                         (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class FName                        Tag                                                              (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class FName UAISense_Hearing::ReportNoiseEvent(float* Loudness, float* MaxRange)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AISense_Hearing", "ReportNoiseEvent");

	Params::UAISense_Hearing_ReportNoiseEvent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Loudness != nullptr)
		*Loudness = Parms.Loudness;

	if (MaxRange != nullptr)
		*MaxRange = Parms.MaxRange;

	return Parms.ReturnValue;

}


// Class AIModule.AISense_Prediction
// (None)

class UClass* UAISense_Prediction::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AISense_Prediction");

	return Clss;
}


// AISense_Prediction AIModule.Default__AISense_Prediction
// (Public, ClassDefaultObject, ArchetypeObject)

class UAISense_Prediction* UAISense_Prediction::GetDefaultObj()
{
	static class UAISense_Prediction* Default = nullptr;

	if (!Default)
		Default = static_cast<UAISense_Prediction*>(UAISense_Prediction::StaticClass()->DefaultObject);

	return Default;
}


// Function AIModule.AISense_Prediction.RequestPawnPredictionEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APawn*                       Requestor                                                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class AActor*                      PredictedActor                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              PredictionTime                                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void UAISense_Prediction::RequestPawnPredictionEvent(class APawn** Requestor, class AActor** PredictedActor, float PredictionTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AISense_Prediction", "RequestPawnPredictionEvent");

	Params::UAISense_Prediction_RequestPawnPredictionEvent_Params Parms{};

	Parms.PredictionTime = PredictionTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Requestor != nullptr)
		*Requestor = Parms.Requestor;

	if (PredictedActor != nullptr)
		*PredictedActor = Parms.PredictedActor;

}


// Function AIModule.AISense_Prediction.RequestControllerPredictionEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AAIController*               Requestor                                                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class AActor*                      PredictedActor                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              PredictionTime                                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void UAISense_Prediction::RequestControllerPredictionEvent(class AAIController** Requestor, class AActor** PredictedActor, float PredictionTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AISense_Prediction", "RequestControllerPredictionEvent");

	Params::UAISense_Prediction_RequestControllerPredictionEvent_Params Parms{};

	Parms.PredictionTime = PredictionTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Requestor != nullptr)
		*Requestor = Parms.Requestor;

	if (PredictedActor != nullptr)
		*PredictedActor = Parms.PredictedActor;

}


// Class AIModule.AISense_Sight
// (None)

class UClass* UAISense_Sight::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AISense_Sight");

	return Clss;
}


// AISense_Sight AIModule.Default__AISense_Sight
// (Public, ClassDefaultObject, ArchetypeObject)

class UAISense_Sight* UAISense_Sight::GetDefaultObj()
{
	static class UAISense_Sight* Default = nullptr;

	if (!Default)
		Default = static_cast<UAISense_Sight*>(UAISense_Sight::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.AISense_Team
// (None)

class UClass* UAISense_Team::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AISense_Team");

	return Clss;
}


// AISense_Team AIModule.Default__AISense_Team
// (Public, ClassDefaultObject, ArchetypeObject)

class UAISense_Team* UAISense_Team::GetDefaultObj()
{
	static class UAISense_Team* Default = nullptr;

	if (!Default)
		Default = static_cast<UAISense_Team*>(UAISense_Team::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.AISense_Touch
// (None)

class UClass* UAISense_Touch::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AISense_Touch");

	return Clss;
}


// AISense_Touch AIModule.Default__AISense_Touch
// (Public, ClassDefaultObject, ArchetypeObject)

class UAISense_Touch* UAISense_Touch::GetDefaultObj()
{
	static class UAISense_Touch* Default = nullptr;

	if (!Default)
		Default = static_cast<UAISense_Touch*>(UAISense_Touch::StaticClass()->DefaultObject);

	return Default;
}


// Function AIModule.AISense_Touch.ReportTouchEvent
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// class AActor*                      TouchReceiver                                                    (ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class AActor*                      OtherActor                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FVector                     Location                                                         (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)

class UObject* UAISense_Touch::ReportTouchEvent(class AActor* TouchReceiver, class AActor* OtherActor, struct FVector* Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AISense_Touch", "ReportTouchEvent");

	Params::UAISense_Touch_ReportTouchEvent_Params Parms{};

	Parms.TouchReceiver = TouchReceiver;
	Parms.OtherActor = OtherActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

	return Parms.ReturnValue;

}


// Class AIModule.AISightTargetInterface
// (None)

class UClass* IAISightTargetInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AISightTargetInterface");

	return Clss;
}


// AISightTargetInterface AIModule.Default__AISightTargetInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IAISightTargetInterface* IAISightTargetInterface::GetDefaultObj()
{
	static class IAISightTargetInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IAISightTargetInterface*>(IAISightTargetInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.PawnSensingComponent
// (None)

class UClass* UPawnSensingComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PawnSensingComponent");

	return Clss;
}


// PawnSensingComponent AIModule.Default__PawnSensingComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UPawnSensingComponent* UPawnSensingComponent::GetDefaultObj()
{
	static class UPawnSensingComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UPawnSensingComponent*>(UPawnSensingComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function AIModule.PawnSensingComponent.SetSensingUpdatesEnabled
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnabled                                                         (Edit, BlueprintVisible, ExportObject, Net, OutParm, Transient, EditConst, GlobalConfig)

void UPawnSensingComponent::SetSensingUpdatesEnabled(bool* bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PawnSensingComponent", "SetSensingUpdatesEnabled");

	Params::UPawnSensingComponent_SetSensingUpdatesEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bEnabled != nullptr)
		*bEnabled = Parms.bEnabled;

}


// Function AIModule.PawnSensingComponent.SetSensingInterval
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewSensingInterval                                               (ConstParm, ExportObject, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

float UPawnSensingComponent::SetSensingInterval()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PawnSensingComponent", "SetSensingInterval");

	Params::UPawnSensingComponent_SetSensingInterval_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AIModule.PawnSensingComponent.SetPeripheralVisionAngle
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewPeripheralVisionAngle                                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

float UPawnSensingComponent::SetPeripheralVisionAngle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PawnSensingComponent", "SetPeripheralVisionAngle");

	Params::UPawnSensingComponent_SetPeripheralVisionAngle_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// DelegateFunction AIModule.PawnSensingComponent.SeePawnDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class APawn*                       Pawn                                                             (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor)

void UPawnSensingComponent::SeePawnDelegate__DelegateSignature(class APawn* Pawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PawnSensingComponent", "SeePawnDelegate__DelegateSignature");

	Params::UPawnSensingComponent_SeePawnDelegate__DelegateSignature_Params Parms{};

	Parms.Pawn = Pawn;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction AIModule.PawnSensingComponent.HearNoiseDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams, HasDefaults)
// Parameters:
// class APawn*                       Instigator                                                       (Edit, BlueprintVisible, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FVector                     Location                                                         (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
// float                              Volume                                                           (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config)

class APawn* UPawnSensingComponent::HearNoiseDelegate__DelegateSignature(struct FVector* Location, float* Volume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PawnSensingComponent", "HearNoiseDelegate__DelegateSignature");

	Params::UPawnSensingComponent_HearNoiseDelegate__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

	if (Volume != nullptr)
		*Volume = Parms.Volume;

	return Parms.ReturnValue;

}


// Function AIModule.PawnSensingComponent.GetPeripheralVisionCosine
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UPawnSensingComponent::GetPeripheralVisionCosine(float* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PawnSensingComponent", "GetPeripheralVisionCosine");

	Params::UPawnSensingComponent_GetPeripheralVisionCosine_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AIModule.PawnSensingComponent.GetPeripheralVisionAngle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UPawnSensingComponent::GetPeripheralVisionAngle(float* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PawnSensingComponent", "GetPeripheralVisionAngle");

	Params::UPawnSensingComponent_GetPeripheralVisionAngle_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Class AIModule.AITask
// (None)

class UClass* UAITask::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AITask");

	return Clss;
}


// AITask AIModule.Default__AITask
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UAITask* UAITask::GetDefaultObj()
{
	static class UAITask* Default = nullptr;

	if (!Default)
		Default = static_cast<UAITask*>(UAITask::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.AITask_LockLogic
// (None)

class UClass* UAITask_LockLogic::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AITask_LockLogic");

	return Clss;
}


// AITask_LockLogic AIModule.Default__AITask_LockLogic
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UAITask_LockLogic* UAITask_LockLogic::GetDefaultObj()
{
	static class UAITask_LockLogic* Default = nullptr;

	if (!Default)
		Default = static_cast<UAITask_LockLogic*>(UAITask_LockLogic::StaticClass()->DefaultObject);

	return Default;
}


// Class AIModule.AITask_MoveTo
// (None)

class UClass* UAITask_MoveTo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AITask_MoveTo");

	return Clss;
}


// AITask_MoveTo AIModule.Default__AITask_MoveTo
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UAITask_MoveTo* UAITask_MoveTo::GetDefaultObj()
{
	static class UAITask_MoveTo* Default = nullptr;

	if (!Default)
		Default = static_cast<UAITask_MoveTo*>(UAITask_MoveTo::StaticClass()->DefaultObject);

	return Default;
}


// Function AIModule.AITask_MoveTo.AIMoveTo
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class AAIController*               Controller                                                       (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig)
// struct FVector                     GoalLocation                                                     (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class AActor*                      GoalActor                                                        (Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              AcceptanceRadius                                                 (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// enum class EAIOptionFlag           StopOnOverlap                                                    (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// enum class EAIOptionFlag           AcceptPartialPath                                                (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bUsePathfinding                                                  (Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               bLockAILogic                                                     (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bUseContinuousGoalTracking                                       (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class EAIOptionFlag           ProjectGoalOnNavigation                                          (ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class UAITask_MoveTo*              ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool UAITask_MoveTo::AIMoveTo(class AAIController** Controller, float AcceptanceRadius, enum class EAIOptionFlag StopOnOverlap, enum class EAIOptionFlag AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic, enum class EAIOptionFlag ProjectGoalOnNavigation, class UAITask_MoveTo** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AITask_MoveTo", "AIMoveTo");

	Params::UAITask_MoveTo_AIMoveTo_Params Parms{};

	Parms.AcceptanceRadius = AcceptanceRadius;
	Parms.StopOnOverlap = StopOnOverlap;
	Parms.AcceptPartialPath = AcceptPartialPath;
	Parms.bUsePathfinding = bUsePathfinding;
	Parms.bLockAILogic = bLockAILogic;
	Parms.ProjectGoalOnNavigation = ProjectGoalOnNavigation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Controller != nullptr)
		*Controller = Parms.Controller;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Class AIModule.AITask_RunEQS
// (None)

class UClass* UAITask_RunEQS::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AITask_RunEQS");

	return Clss;
}


// AITask_RunEQS AIModule.Default__AITask_RunEQS
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UAITask_RunEQS* UAITask_RunEQS::GetDefaultObj()
{
	static class UAITask_RunEQS* Default = nullptr;

	if (!Default)
		Default = static_cast<UAITask_RunEQS*>(UAITask_RunEQS::StaticClass()->DefaultObject);

	return Default;
}


// Function AIModule.AITask_RunEQS.RunEQS
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AAIController*               Controller                                                       (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig)
// class UEnvQuery*                   QueryTemplate                                                    (ConstParm, ExportObject, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UAITask_RunEQS*              ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UAITask_RunEQS::RunEQS(class AAIController** Controller, class UEnvQuery* QueryTemplate, class UAITask_RunEQS** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AITask_RunEQS", "RunEQS");

	Params::UAITask_RunEQS_RunEQS_Params Parms{};

	Parms.QueryTemplate = QueryTemplate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Controller != nullptr)
		*Controller = Parms.Controller;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Class AIModule.VisualLoggerExtension
// (None)

class UClass* UVisualLoggerExtension::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VisualLoggerExtension");

	return Clss;
}


// VisualLoggerExtension AIModule.Default__VisualLoggerExtension
// (Public, ClassDefaultObject, ArchetypeObject)

class UVisualLoggerExtension* UVisualLoggerExtension::GetDefaultObj()
{
	static class UVisualLoggerExtension* Default = nullptr;

	if (!Default)
		Default = static_cast<UVisualLoggerExtension*>(UVisualLoggerExtension::StaticClass()->DefaultObject);

	return Default;
}

}



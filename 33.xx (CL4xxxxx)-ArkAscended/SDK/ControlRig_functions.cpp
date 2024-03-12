#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ControlRig.RigHierarchy
// (None)

class UClass* URigHierarchy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RigHierarchy");

	return Clss;
}


// RigHierarchy ControlRig.Default__RigHierarchy
// (Public, ClassDefaultObject, ArchetypeObject)

class URigHierarchy* URigHierarchy::GetDefaultObj()
{
	static class URigHierarchy* Default = nullptr;

	if (!Default)
		Default = static_cast<URigHierarchy*>(URigHierarchy::StaticClass()->DefaultObject);

	return Default;
}


// Function ControlRig.RigHierarchy.UnsetCurveValueByIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InElementIndex                                                   (Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bSetupUndo                                                       (Edit, ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

void URigHierarchy::UnsetCurveValueByIndex(int32 InElementIndex, bool bSetupUndo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "UnsetCurveValueByIndex");

	Params::URigHierarchy_UnsetCurveValueByIndex_Params Parms{};

	Parms.InElementIndex = InElementIndex;
	Parms.bSetupUndo = bSetupUndo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.UnsetCurveValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InKey                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bSetupUndo                                                       (Edit, ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

void URigHierarchy::UnsetCurveValue(struct FRigElementKey* InKey, bool bSetupUndo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "UnsetCurveValue");

	Params::URigHierarchy_UnsetCurveValue_Params Parms{};

	Parms.bSetupUndo = bSetupUndo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InKey != nullptr)
		*InKey = std::move(Parms.InKey);

}


// Function ControlRig.RigHierarchy.SwitchToWorldSpace
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InChild                                                          (Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bInitial                                                         (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               bAffectChildren                                                  (Edit, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchy::SwitchToWorldSpace(const struct FRigElementKey& InChild, bool* bInitial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SwitchToWorldSpace");

	Params::URigHierarchy_SwitchToWorldSpace_Params Parms{};

	Parms.InChild = InChild;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bInitial != nullptr)
		*bInitial = Parms.bInitial;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SwitchToParent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InChild                                                          (Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FRigElementKey              InParent                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               bInitial                                                         (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               bAffectChildren                                                  (Edit, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchy::SwitchToParent(const struct FRigElementKey& InChild, struct FRigElementKey* InParent, bool* bInitial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SwitchToParent");

	Params::URigHierarchy_SwitchToParent_Params Parms{};

	Parms.InChild = InChild;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InParent != nullptr)
		*InParent = std::move(Parms.InParent);

	if (bInitial != nullptr)
		*bInitial = Parms.bInitial;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SwitchToDefaultParent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InChild                                                          (Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bInitial                                                         (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               bAffectChildren                                                  (Edit, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchy::SwitchToDefaultParent(const struct FRigElementKey& InChild, bool* bInitial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SwitchToDefaultParent");

	Params::URigHierarchy_SwitchToDefaultParent_Params Parms{};

	Parms.InChild = InChild;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bInitial != nullptr)
		*bInitial = Parms.bInitial;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SortKeys
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FRigElementKey>      InKeys                                                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// TArray<struct FRigElementKey>      ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<struct FRigElementKey> URigHierarchy::SortKeys(TArray<struct FRigElementKey>* InKeys)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SortKeys");

	Params::URigHierarchy_SortKeys_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InKeys != nullptr)
		*InKeys = std::move(Parms.InKeys);

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetVectorMetadata
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchy::SetVectorMetadata(const struct FRigElementKey& InItem, class FName InMetadataName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetVectorMetadata");

	Params::URigHierarchy_SetVectorMetadata_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetVectorArrayMetadata
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FVector>             InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchy::SetVectorArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetVectorArrayMetadata");

	Params::URigHierarchy_SetVectorArrayMetadata_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetTransformMetadata
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchy::SetTransformMetadata(const struct FRigElementKey& InItem, class FName InMetadataName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetTransformMetadata");

	Params::URigHierarchy_SetTransformMetadata_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetTransformArrayMetadata
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FTransform>          InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchy::SetTransformArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetTransformArrayMetadata");

	Params::URigHierarchy_SetTransformArrayMetadata_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        InTag                                                            (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchy::SetTag(const struct FRigElementKey& InItem, class FName InTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetTag");

	Params::URigHierarchy_SetTag_Params Parms{};

	Parms.InItem = InItem;
	Parms.InTag = InTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetRotatorMetadata
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FRotator                    InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchy::SetRotatorMetadata(const struct FRigElementKey& InItem, class FName InMetadataName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetRotatorMetadata");

	Params::URigHierarchy_SetRotatorMetadata_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetRotatorArrayMetadata
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FRotator>            InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchy::SetRotatorArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetRotatorArrayMetadata");

	Params::URigHierarchy_SetRotatorArrayMetadata_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetRigElementKeyMetadata
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FRigElementKey              InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchy::SetRigElementKeyMetadata(const struct FRigElementKey& InItem, class FName InMetadataName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetRigElementKeyMetadata");

	Params::URigHierarchy_SetRigElementKeyMetadata_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetRigElementKeyArrayMetadata
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FRigElementKey>      InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchy::SetRigElementKeyArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetRigElementKeyArrayMetadata");

	Params::URigHierarchy_SetRigElementKeyArrayMetadata_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetQuatMetadata
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FQuat                       InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchy::SetQuatMetadata(const struct FRigElementKey& InItem, class FName InMetadataName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetQuatMetadata");

	Params::URigHierarchy_SetQuatMetadata_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetQuatArrayMetadata
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FQuat>               InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchy::SetQuatArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetQuatArrayMetadata");

	Params::URigHierarchy_SetQuatArrayMetadata_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetPose_ForBlueprint
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigPose                    InPose                                                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst)

void URigHierarchy::SetPose_ForBlueprint(struct FRigPose* InPose)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetPose_ForBlueprint");

	Params::URigHierarchy_SetPose_ForBlueprint_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InPose != nullptr)
		*InPose = std::move(Parms.InPose);

}


// Function ControlRig.RigHierarchy.SetParentWeightArray
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InChild                                                          (Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FRigElementWeight>   InWeights                                                        (ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bInitial                                                         (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               bAffectChildren                                                  (Edit, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchy::SetParentWeightArray(const struct FRigElementKey& InChild, const TArray<struct FRigElementWeight>& InWeights, bool* bInitial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetParentWeightArray");

	Params::URigHierarchy_SetParentWeightArray_Params Parms{};

	Parms.InChild = InChild;
	Parms.InWeights = InWeights;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bInitial != nullptr)
		*bInitial = Parms.bInitial;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetParentWeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InChild                                                          (Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FRigElementKey              InParent                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FRigElementWeight           InWeight                                                         (Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bInitial                                                         (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               bAffectChildren                                                  (Edit, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchy::SetParentWeight(const struct FRigElementKey& InChild, struct FRigElementKey* InParent, const struct FRigElementWeight& InWeight, bool* bInitial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetParentWeight");

	Params::URigHierarchy_SetParentWeight_Params Parms{};

	Parms.InChild = InChild;
	Parms.InWeight = InWeight;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InParent != nullptr)
		*InParent = std::move(Parms.InParent);

	if (bInitial != nullptr)
		*bInitial = Parms.bInitial;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetNameMetadata
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchy::SetNameMetadata(const struct FRigElementKey& InItem, class FName InMetadataName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetNameMetadata");

	Params::URigHierarchy_SetNameMetadata_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetNameArrayMetadata
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<class FName>                InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchy::SetNameArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetNameArrayMetadata");

	Params::URigHierarchy_SetNameArrayMetadata_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetLocalTransformByIndex
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// int32                              InElementIndex                                                   (Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  InTransform                                                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// bool                               bInitial                                                         (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               bAffectChildren                                                  (Edit, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               bSetupUndo                                                       (Edit, ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bPrintPythonCommands                                             (ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

bool URigHierarchy::SetLocalTransformByIndex(int32 InElementIndex, bool* bInitial, bool bSetupUndo, bool bPrintPythonCommands)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetLocalTransformByIndex");

	Params::URigHierarchy_SetLocalTransformByIndex_Params Parms{};

	Parms.InElementIndex = InElementIndex;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommands = bPrintPythonCommands;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bInitial != nullptr)
		*bInitial = Parms.bInitial;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetLocalTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InKey                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  InTransform                                                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// bool                               bInitial                                                         (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               bAffectChildren                                                  (Edit, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               bSetupUndo                                                       (Edit, ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bPrintPythonCommands                                             (ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

bool URigHierarchy::SetLocalTransform(struct FRigElementKey* InKey, bool* bInitial, bool bSetupUndo, bool bPrintPythonCommands)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetLocalTransform");

	Params::URigHierarchy_SetLocalTransform_Params Parms{};

	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommands = bPrintPythonCommands;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InKey != nullptr)
		*InKey = std::move(Parms.InKey);

	if (bInitial != nullptr)
		*bInitial = Parms.bInitial;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetLinearColorMetadata
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FLinearColor                InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchy::SetLinearColorMetadata(const struct FRigElementKey& InItem, class FName InMetadataName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetLinearColorMetadata");

	Params::URigHierarchy_SetLinearColorMetadata_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetLinearColorArrayMetadata
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FLinearColor>        InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchy::SetLinearColorArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetLinearColorArrayMetadata");

	Params::URigHierarchy_SetLinearColorArrayMetadata_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetInt32Metadata
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchy::SetInt32Metadata(const struct FRigElementKey& InItem, class FName InMetadataName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetInt32Metadata");

	Params::URigHierarchy_SetInt32Metadata_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetInt32ArrayMetadata
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<int32>                      InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchy::SetInt32ArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetInt32ArrayMetadata");

	Params::URigHierarchy_SetInt32ArrayMetadata_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetGlobalTransformByIndex
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// int32                              InElementIndex                                                   (Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  InTransform                                                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// bool                               bInitial                                                         (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               bAffectChildren                                                  (Edit, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               bSetupUndo                                                       (Edit, ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bPrintPythonCommand                                              (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

bool URigHierarchy::SetGlobalTransformByIndex(int32 InElementIndex, bool* bInitial, bool bSetupUndo, bool bPrintPythonCommand)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetGlobalTransformByIndex");

	Params::URigHierarchy_SetGlobalTransformByIndex_Params Parms{};

	Parms.InElementIndex = InElementIndex;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommand = bPrintPythonCommand;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bInitial != nullptr)
		*bInitial = Parms.bInitial;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetGlobalTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InKey                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  InTransform                                                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// bool                               bInitial                                                         (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               bAffectChildren                                                  (Edit, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               bSetupUndo                                                       (Edit, ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bPrintPythonCommand                                              (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

bool URigHierarchy::SetGlobalTransform(struct FRigElementKey* InKey, bool* bInitial, bool bSetupUndo, bool bPrintPythonCommand)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetGlobalTransform");

	Params::URigHierarchy_SetGlobalTransform_Params Parms{};

	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommand = bPrintPythonCommand;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InKey != nullptr)
		*InKey = std::move(Parms.InKey);

	if (bInitial != nullptr)
		*bInitial = Parms.bInitial;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetFloatMetadata
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchy::SetFloatMetadata(const struct FRigElementKey& InItem, class FName InMetadataName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetFloatMetadata");

	Params::URigHierarchy_SetFloatMetadata_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetFloatArrayMetadata
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<float>                      InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchy::SetFloatArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetFloatArrayMetadata");

	Params::URigHierarchy_SetFloatArrayMetadata_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetCurveValueByIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InElementIndex                                                   (Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               bSetupUndo                                                       (Edit, ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

float URigHierarchy::SetCurveValueByIndex(int32 InElementIndex, bool bSetupUndo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetCurveValueByIndex");

	Params::URigHierarchy_SetCurveValueByIndex_Params Parms{};

	Parms.InElementIndex = InElementIndex;
	Parms.bSetupUndo = bSetupUndo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetCurveValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InKey                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               bSetupUndo                                                       (Edit, ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

float URigHierarchy::SetCurveValue(struct FRigElementKey* InKey, bool bSetupUndo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetCurveValue");

	Params::URigHierarchy_SetCurveValue_Params Parms{};

	Parms.bSetupUndo = bSetupUndo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InKey != nullptr)
		*InKey = std::move(Parms.InKey);

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetControlVisibilityByIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InElementIndex                                                   (Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bVisibility                                                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

void URigHierarchy::SetControlVisibilityByIndex(int32 InElementIndex, bool bVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetControlVisibilityByIndex");

	Params::URigHierarchy_SetControlVisibilityByIndex_Params Parms{};

	Parms.InElementIndex = InElementIndex;
	Parms.bVisibility = bVisibility;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.SetControlVisibility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InKey                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bVisibility                                                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

void URigHierarchy::SetControlVisibility(struct FRigElementKey* InKey, bool bVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetControlVisibility");

	Params::URigHierarchy_SetControlVisibility_Params Parms{};

	Parms.bVisibility = bVisibility;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InKey != nullptr)
		*InKey = std::move(Parms.InKey);

}


// Function ControlRig.RigHierarchy.SetControlValueByIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InElementIndex                                                   (Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FRigControlValue            InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class ERigControlValueType    InValueType                                                      (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bSetupUndo                                                       (Edit, ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bPrintPythonCommands                                             (ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

struct FRigControlValue URigHierarchy::SetControlValueByIndex(int32 InElementIndex, enum class ERigControlValueType InValueType, bool bSetupUndo, bool bPrintPythonCommands)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetControlValueByIndex");

	Params::URigHierarchy_SetControlValueByIndex_Params Parms{};

	Parms.InElementIndex = InElementIndex;
	Parms.InValueType = InValueType;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommands = bPrintPythonCommands;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetControlValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InKey                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FRigControlValue            InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class ERigControlValueType    InValueType                                                      (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bSetupUndo                                                       (Edit, ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bPrintPythonCommands                                             (ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

struct FRigControlValue URigHierarchy::SetControlValue(struct FRigElementKey* InKey, enum class ERigControlValueType InValueType, bool bSetupUndo, bool bPrintPythonCommands)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetControlValue");

	Params::URigHierarchy_SetControlValue_Params Parms{};

	Parms.InValueType = InValueType;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommands = bPrintPythonCommands;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InKey != nullptr)
		*InKey = std::move(Parms.InKey);

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetControlShapeTransformByIndex
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// int32                              InElementIndex                                                   (Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  InTransform                                                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// bool                               bInitial                                                         (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               bSetupUndo                                                       (Edit, ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

struct FTransform URigHierarchy::SetControlShapeTransformByIndex(int32 InElementIndex, bool* bInitial, bool bSetupUndo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetControlShapeTransformByIndex");

	Params::URigHierarchy_SetControlShapeTransformByIndex_Params Parms{};

	Parms.InElementIndex = InElementIndex;
	Parms.bSetupUndo = bSetupUndo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bInitial != nullptr)
		*bInitial = Parms.bInitial;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetControlShapeTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InKey                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  InTransform                                                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// bool                               bInitial                                                         (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               bSetupUndo                                                       (Edit, ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

struct FTransform URigHierarchy::SetControlShapeTransform(struct FRigElementKey* InKey, bool* bInitial, bool bSetupUndo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetControlShapeTransform");

	Params::URigHierarchy_SetControlShapeTransform_Params Parms{};

	Parms.bSetupUndo = bSetupUndo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InKey != nullptr)
		*InKey = std::move(Parms.InKey);

	if (bInitial != nullptr)
		*bInitial = Parms.bInitial;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetControlSettingsByIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InElementIndex                                                   (Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FRigControlSettings         InSettings                                                       (Edit, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bSetupUndo                                                       (Edit, ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bForce                                                           (Edit, EditFixedSize, Parm, ReturnParm, GlobalConfig, SubobjectReference)
// bool                               bPrintPythonCommands                                             (ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

bool URigHierarchy::SetControlSettingsByIndex(int32 InElementIndex, const struct FRigControlSettings& InSettings, bool bSetupUndo, bool bPrintPythonCommands)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetControlSettingsByIndex");

	Params::URigHierarchy_SetControlSettingsByIndex_Params Parms{};

	Parms.InElementIndex = InElementIndex;
	Parms.InSettings = InSettings;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommands = bPrintPythonCommands;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetControlSettings
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InKey                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FRigControlSettings         InSettings                                                       (Edit, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bSetupUndo                                                       (Edit, ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bForce                                                           (Edit, EditFixedSize, Parm, ReturnParm, GlobalConfig, SubobjectReference)
// bool                               bPrintPythonCommands                                             (ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

bool URigHierarchy::SetControlSettings(struct FRigElementKey* InKey, const struct FRigControlSettings& InSettings, bool bSetupUndo, bool bPrintPythonCommands)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetControlSettings");

	Params::URigHierarchy_SetControlSettings_Params Parms{};

	Parms.InSettings = InSettings;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommands = bPrintPythonCommands;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InKey != nullptr)
		*InKey = std::move(Parms.InKey);

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetControlPreferredRotatorByIndex
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// int32                              InElementIndex                                                   (Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FRotator                    InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               bInitial                                                         (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               bFixEulerFlips                                                   (Edit, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

struct FRotator URigHierarchy::SetControlPreferredRotatorByIndex(int32 InElementIndex, bool* bInitial, bool bFixEulerFlips)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetControlPreferredRotatorByIndex");

	Params::URigHierarchy_SetControlPreferredRotatorByIndex_Params Parms{};

	Parms.InElementIndex = InElementIndex;
	Parms.bFixEulerFlips = bFixEulerFlips;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bInitial != nullptr)
		*bInitial = Parms.bInitial;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetControlPreferredRotator
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InKey                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FRotator                    InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               bInitial                                                         (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               bFixEulerFlips                                                   (Edit, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

struct FRotator URigHierarchy::SetControlPreferredRotator(struct FRigElementKey* InKey, bool* bInitial, bool bFixEulerFlips)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetControlPreferredRotator");

	Params::URigHierarchy_SetControlPreferredRotator_Params Parms{};

	Parms.bFixEulerFlips = bFixEulerFlips;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InKey != nullptr)
		*InKey = std::move(Parms.InKey);

	if (bInitial != nullptr)
		*bInitial = Parms.bInitial;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetControlOffsetTransformByIndex
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// int32                              InElementIndex                                                   (Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  InTransform                                                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// bool                               bInitial                                                         (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               bAffectChildren                                                  (Edit, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               bSetupUndo                                                       (Edit, ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bPrintPythonCommands                                             (ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

bool URigHierarchy::SetControlOffsetTransformByIndex(int32 InElementIndex, bool* bInitial, bool bSetupUndo, bool bPrintPythonCommands)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetControlOffsetTransformByIndex");

	Params::URigHierarchy_SetControlOffsetTransformByIndex_Params Parms{};

	Parms.InElementIndex = InElementIndex;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommands = bPrintPythonCommands;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bInitial != nullptr)
		*bInitial = Parms.bInitial;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetControlOffsetTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InKey                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  InTransform                                                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// bool                               bInitial                                                         (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               bAffectChildren                                                  (Edit, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               bSetupUndo                                                       (Edit, ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bPrintPythonCommands                                             (ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

bool URigHierarchy::SetControlOffsetTransform(struct FRigElementKey* InKey, bool* bInitial, bool bSetupUndo, bool bPrintPythonCommands)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetControlOffsetTransform");

	Params::URigHierarchy_SetControlOffsetTransform_Params Parms{};

	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommands = bPrintPythonCommands;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InKey != nullptr)
		*InKey = std::move(Parms.InKey);

	if (bInitial != nullptr)
		*bInitial = Parms.bInitial;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetBoolMetadata
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchy::SetBoolMetadata(const struct FRigElementKey& InItem, class FName InMetadataName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetBoolMetadata");

	Params::URigHierarchy_SetBoolMetadata_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetBoolArrayMetadata
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<bool>                       InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchy::SetBoolArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetBoolArrayMetadata");

	Params::URigHierarchy_SetBoolArrayMetadata_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SendAutoKeyEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InElement                                                        (ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              InOffsetInSeconds                                                (ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bAsynchronous                                                    (Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

void URigHierarchy::SendAutoKeyEvent(const struct FRigElementKey& InElement, float InOffsetInSeconds, bool bAsynchronous)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SendAutoKeyEvent");

	Params::URigHierarchy_SendAutoKeyEvent_Params Parms{};

	Parms.InElement = InElement;
	Parms.InOffsetInSeconds = InOffsetInSeconds;
	Parms.bAsynchronous = bAsynchronous;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.ResetToDefault
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void URigHierarchy::ResetToDefault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "ResetToDefault");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.ResetPoseToInitial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ERigElementType         InTypeFilter                                                     (BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

void URigHierarchy::ResetPoseToInitial(enum class ERigElementType InTypeFilter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "ResetPoseToInitial");

	Params::URigHierarchy_ResetPoseToInitial_Params Parms{};

	Parms.InTypeFilter = InTypeFilter;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.ResetCurveValues
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void URigHierarchy::ResetCurveValues()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "ResetCurveValues");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.Reset
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void URigHierarchy::Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "Reset");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.RemoveMetadata
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchy::RemoveMetadata(const struct FRigElementKey& InItem, class FName InMetadataName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "RemoveMetadata");

	Params::URigHierarchy_RemoveMetadata_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.RemoveAllMetadata
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchy::RemoveAllMetadata(const struct FRigElementKey& InItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "RemoveAllMetadata");

	Params::URigHierarchy_RemoveAllMetadata_Params Parms{};

	Parms.InItem = InItem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.Num
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

int32 URigHierarchy::Num()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "Num");

	Params::URigHierarchy_Num_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.MakeControlValueFromVector2D
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FRigControlValue            ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FRigControlValue URigHierarchy::MakeControlValueFromVector2D()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "MakeControlValueFromVector2D");

	Params::URigHierarchy_MakeControlValueFromVector2D_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.MakeControlValueFromVector
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FRigControlValue            ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FRigControlValue URigHierarchy::MakeControlValueFromVector()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "MakeControlValueFromVector");

	Params::URigHierarchy_MakeControlValueFromVector_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.MakeControlValueFromTransformNoScale
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FTransformNoScale           InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FRigControlValue            ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FRigControlValue URigHierarchy::MakeControlValueFromTransformNoScale()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "MakeControlValueFromTransformNoScale");

	Params::URigHierarchy_MakeControlValueFromTransformNoScale_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.MakeControlValueFromTransform
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform                  InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FRigControlValue            ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FRigControlValue URigHierarchy::MakeControlValueFromTransform()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "MakeControlValueFromTransform");

	Params::URigHierarchy_MakeControlValueFromTransform_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.MakeControlValueFromRotator
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                    InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FRigControlValue            ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FRigControlValue URigHierarchy::MakeControlValueFromRotator()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "MakeControlValueFromRotator");

	Params::URigHierarchy_MakeControlValueFromRotator_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.MakeControlValueFromInt
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FRigControlValue            ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FRigControlValue URigHierarchy::MakeControlValueFromInt()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "MakeControlValueFromInt");

	Params::URigHierarchy_MakeControlValueFromInt_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.MakeControlValueFromFloat
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FRigControlValue            ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FRigControlValue URigHierarchy::MakeControlValueFromFloat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "MakeControlValueFromFloat");

	Params::URigHierarchy_MakeControlValueFromFloat_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.MakeControlValueFromEulerTransform
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FEulerTransform             InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FRigControlValue            ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FRigControlValue URigHierarchy::MakeControlValueFromEulerTransform()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "MakeControlValueFromEulerTransform");

	Params::URigHierarchy_MakeControlValueFromEulerTransform_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.MakeControlValueFromBool
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FRigControlValue            ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FRigControlValue URigHierarchy::MakeControlValueFromBool()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "MakeControlValueFromBool");

	Params::URigHierarchy_MakeControlValueFromBool_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.IsValidIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              InElementIndex                                                   (Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchy::IsValidIndex(int32 InElementIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "IsValidIndex");

	Params::URigHierarchy_IsValidIndex_Params Parms{};

	Parms.InElementIndex = InElementIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.IsSelectedByIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              InIndex                                                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchy::IsSelectedByIndex(int32 InIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "IsSelectedByIndex");

	Params::URigHierarchy_IsSelectedByIndex_Params Parms{};

	Parms.InIndex = InIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.IsSelected
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchy::IsSelected(struct FRigElementKey* InKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "IsSelected");

	Params::URigHierarchy_IsSelected_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InKey != nullptr)
		*InKey = std::move(Parms.InKey);

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.IsProcedural
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchy::IsProcedural(struct FRigElementKey* InKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "IsProcedural");

	Params::URigHierarchy_IsProcedural_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InKey != nullptr)
		*InKey = std::move(Parms.InKey);

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.IsParentedTo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InChild                                                          (Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FRigElementKey              InParent                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchy::IsParentedTo(const struct FRigElementKey& InChild, struct FRigElementKey* InParent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "IsParentedTo");

	Params::URigHierarchy_IsParentedTo_Params Parms{};

	Parms.InChild = InChild;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InParent != nullptr)
		*InParent = std::move(Parms.InParent);

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.IsCurveValueSetByIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              InElementIndex                                                   (Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchy::IsCurveValueSetByIndex(int32 InElementIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "IsCurveValueSetByIndex");

	Params::URigHierarchy_IsCurveValueSetByIndex_Params Parms{};

	Parms.InElementIndex = InElementIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.IsCurveValueSet
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchy::IsCurveValueSet(struct FRigElementKey* InKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "IsCurveValueSet");

	Params::URigHierarchy_IsCurveValueSet_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InKey != nullptr)
		*InKey = std::move(Parms.InKey);

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.IsControllerAvailable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchy::IsControllerAvailable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "IsControllerAvailable");

	Params::URigHierarchy_IsControllerAvailable_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.HasTag
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        InTag                                                            (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchy::HasTag(const struct FRigElementKey& InItem, class FName InTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "HasTag");

	Params::URigHierarchy_HasTag_Params Parms{};

	Parms.InItem = InItem;
	Parms.InTag = InTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetVectorMetadata
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     DefaultValue                                                     (BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FVector                     ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FVector URigHierarchy::GetVectorMetadata(const struct FRigElementKey& InItem, class FName InMetadataName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetVectorMetadata");

	Params::URigHierarchy_GetVectorMetadata_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetVectorFromControlValue
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRigControlValue            InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FVector URigHierarchy::GetVectorFromControlValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetVectorFromControlValue");

	Params::URigHierarchy_GetVectorFromControlValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetVectorArrayMetadata
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FVector>             ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<struct FVector> URigHierarchy::GetVectorArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetVectorArrayMetadata");

	Params::URigHierarchy_GetVectorArrayMetadata_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetVector2DFromControlValue
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRigControlValue            InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector2D                   ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FVector2D URigHierarchy::GetVector2DFromControlValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetVector2DFromControlValue");

	Params::URigHierarchy_GetVector2DFromControlValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetTransformNoScaleFromControlValue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FRigControlValue            InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FTransformNoScale           ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FTransformNoScale URigHierarchy::GetTransformNoScaleFromControlValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetTransformNoScaleFromControlValue");

	Params::URigHierarchy_GetTransformNoScaleFromControlValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetTransformMetadata
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  DefaultValue                                                     (BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FTransform                  ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FTransform URigHierarchy::GetTransformMetadata(const struct FRigElementKey& InItem, class FName InMetadataName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetTransformMetadata");

	Params::URigHierarchy_GetTransformMetadata_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetTransformFromControlValue
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRigControlValue            InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FTransform                  ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FTransform URigHierarchy::GetTransformFromControlValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetTransformFromControlValue");

	Params::URigHierarchy_GetTransformFromControlValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetTransformArrayMetadata
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FTransform>          ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<struct FTransform> URigHierarchy::GetTransformArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetTransformArrayMetadata");

	Params::URigHierarchy_GetTransformArrayMetadata_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetTags
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<class FName>                ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<class FName> URigHierarchy::GetTags(const struct FRigElementKey& InItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetTags");

	Params::URigHierarchy_GetTags_Params Parms{};

	Parms.InItem = InItem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetSelectedKeys
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ERigElementType         InTypeFilter                                                     (BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FRigElementKey>      ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<struct FRigElementKey> URigHierarchy::GetSelectedKeys(enum class ERigElementType InTypeFilter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetSelectedKeys");

	Params::URigHierarchy_GetSelectedKeys_Params Parms{};

	Parms.InTypeFilter = InTypeFilter;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetRotatorMetadata
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FRotator                    DefaultValue                                                     (BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FRotator                    ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FRotator URigHierarchy::GetRotatorMetadata(const struct FRigElementKey& InItem, class FName InMetadataName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetRotatorMetadata");

	Params::URigHierarchy_GetRotatorMetadata_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetRotatorFromControlValue
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRigControlValue            InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FRotator                    ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FRotator URigHierarchy::GetRotatorFromControlValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetRotatorFromControlValue");

	Params::URigHierarchy_GetRotatorFromControlValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetRotatorArrayMetadata
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FRotator>            ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<struct FRotator> URigHierarchy::GetRotatorArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetRotatorArrayMetadata");

	Params::URigHierarchy_GetRotatorArrayMetadata_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetRootElementKeys
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FRigElementKey>      ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<struct FRigElementKey> URigHierarchy::GetRootElementKeys()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetRootElementKeys");

	Params::URigHierarchy_GetRootElementKeys_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetRigidBodyKeys
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               bTraverse                                                        (Edit, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FRigElementKey>      ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<struct FRigElementKey> URigHierarchy::GetRigidBodyKeys(bool bTraverse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetRigidBodyKeys");

	Params::URigHierarchy_GetRigidBodyKeys_Params Parms{};

	Parms.bTraverse = bTraverse;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetRigElementKeyMetadata
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FRigElementKey              DefaultValue                                                     (BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FRigElementKey              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FRigElementKey URigHierarchy::GetRigElementKeyMetadata(const struct FRigElementKey& InItem, class FName InMetadataName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetRigElementKeyMetadata");

	Params::URigHierarchy_GetRigElementKeyMetadata_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetRigElementKeyArrayMetadata
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FRigElementKey>      ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<struct FRigElementKey> URigHierarchy::GetRigElementKeyArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetRigElementKeyArrayMetadata");

	Params::URigHierarchy_GetRigElementKeyArrayMetadata_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetReferenceKeys
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               bTraverse                                                        (Edit, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FRigElementKey>      ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<struct FRigElementKey> URigHierarchy::GetReferenceKeys(bool bTraverse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetReferenceKeys");

	Params::URigHierarchy_GetReferenceKeys_Params Parms{};

	Parms.bTraverse = bTraverse;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetQuatMetadata
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FQuat                       DefaultValue                                                     (BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FQuat                       ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FQuat URigHierarchy::GetQuatMetadata(const struct FRigElementKey& InItem, class FName InMetadataName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetQuatMetadata");

	Params::URigHierarchy_GetQuatMetadata_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetQuatArrayMetadata
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FQuat>               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<struct FQuat> URigHierarchy::GetQuatArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetQuatArrayMetadata");

	Params::URigHierarchy_GetQuatArrayMetadata_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetPreviousParent
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FRigElementKey              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FRigElementKey URigHierarchy::GetPreviousParent(struct FRigElementKey* InKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetPreviousParent");

	Params::URigHierarchy_GetPreviousParent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InKey != nullptr)
		*InKey = std::move(Parms.InKey);

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetPreviousName
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class FName URigHierarchy::GetPreviousName(struct FRigElementKey* InKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetPreviousName");

	Params::URigHierarchy_GetPreviousName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InKey != nullptr)
		*InKey = std::move(Parms.InKey);

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetPose
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               bInitial                                                         (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FRigPose                    ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FRigPose URigHierarchy::GetPose(bool* bInitial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetPose");

	Params::URigHierarchy_GetPose_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bInitial != nullptr)
		*bInitial = Parms.bInitial;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetParentWeightArray
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InChild                                                          (Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bInitial                                                         (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FRigElementWeight>   ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<struct FRigElementWeight> URigHierarchy::GetParentWeightArray(const struct FRigElementKey& InChild, bool* bInitial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetParentWeightArray");

	Params::URigHierarchy_GetParentWeightArray_Params Parms{};

	Parms.InChild = InChild;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bInitial != nullptr)
		*bInitial = Parms.bInitial;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetParentWeight
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InChild                                                          (Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FRigElementKey              InParent                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               bInitial                                                         (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FRigElementWeight           ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FRigElementWeight URigHierarchy::GetParentWeight(const struct FRigElementKey& InChild, struct FRigElementKey* InParent, bool* bInitial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetParentWeight");

	Params::URigHierarchy_GetParentWeight_Params Parms{};

	Parms.InChild = InChild;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InParent != nullptr)
		*InParent = std::move(Parms.InParent);

	if (bInitial != nullptr)
		*bInitial = Parms.bInitial;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetParentTransformByIndex
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              InElementIndex                                                   (Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bInitial                                                         (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FTransform                  ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FTransform URigHierarchy::GetParentTransformByIndex(int32 InElementIndex, bool* bInitial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetParentTransformByIndex");

	Params::URigHierarchy_GetParentTransformByIndex_Params Parms{};

	Parms.InElementIndex = InElementIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bInitial != nullptr)
		*bInitial = Parms.bInitial;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetParentTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bInitial                                                         (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FTransform                  ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FTransform URigHierarchy::GetParentTransform(struct FRigElementKey* InKey, bool* bInitial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetParentTransform");

	Params::URigHierarchy_GetParentTransform_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InKey != nullptr)
		*InKey = std::move(Parms.InKey);

	if (bInitial != nullptr)
		*bInitial = Parms.bInitial;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetParents
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bRecursive                                                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FRigElementKey>      ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<struct FRigElementKey> URigHierarchy::GetParents(struct FRigElementKey* InKey, bool bRecursive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetParents");

	Params::URigHierarchy_GetParents_Params Parms{};

	Parms.bRecursive = bRecursive;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InKey != nullptr)
		*InKey = std::move(Parms.InKey);

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetNumberOfParents
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

int32 URigHierarchy::GetNumberOfParents(struct FRigElementKey* InKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetNumberOfParents");

	Params::URigHierarchy_GetNumberOfParents_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InKey != nullptr)
		*InKey = std::move(Parms.InKey);

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetNullKeys
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               bTraverse                                                        (Edit, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FRigElementKey>      ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<struct FRigElementKey> URigHierarchy::GetNullKeys(bool bTraverse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetNullKeys");

	Params::URigHierarchy_GetNullKeys_Params Parms{};

	Parms.bTraverse = bTraverse;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetNameMetadata
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        DefaultValue                                                     (BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class FName                        ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class FName URigHierarchy::GetNameMetadata(const struct FRigElementKey& InItem, class FName InMetadataName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetNameMetadata");

	Params::URigHierarchy_GetNameMetadata_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetNameArrayMetadata
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<class FName>                ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<class FName> URigHierarchy::GetNameArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetNameArrayMetadata");

	Params::URigHierarchy_GetNameArrayMetadata_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetMetadataType
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class ERigMetadataType        ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

enum class ERigMetadataType URigHierarchy::GetMetadataType(const struct FRigElementKey& InItem, class FName InMetadataName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetMetadataType");

	Params::URigHierarchy_GetMetadataType_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetMetadataNames
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<class FName>                ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<class FName> URigHierarchy::GetMetadataNames(const struct FRigElementKey& InItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetMetadataNames");

	Params::URigHierarchy_GetMetadataNames_Params Parms{};

	Parms.InItem = InItem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetLocalTransformByIndex
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              InElementIndex                                                   (Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bInitial                                                         (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FTransform                  ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FTransform URigHierarchy::GetLocalTransformByIndex(int32 InElementIndex, bool* bInitial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetLocalTransformByIndex");

	Params::URigHierarchy_GetLocalTransformByIndex_Params Parms{};

	Parms.InElementIndex = InElementIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bInitial != nullptr)
		*bInitial = Parms.bInitial;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetLocalTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bInitial                                                         (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FTransform                  ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FTransform URigHierarchy::GetLocalTransform(struct FRigElementKey* InKey, bool* bInitial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetLocalTransform");

	Params::URigHierarchy_GetLocalTransform_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InKey != nullptr)
		*InKey = std::move(Parms.InKey);

	if (bInitial != nullptr)
		*bInitial = Parms.bInitial;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetLocalIndex_ForBlueprint
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

int32 URigHierarchy::GetLocalIndex_ForBlueprint(struct FRigElementKey* InKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetLocalIndex_ForBlueprint");

	Params::URigHierarchy_GetLocalIndex_ForBlueprint_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InKey != nullptr)
		*InKey = std::move(Parms.InKey);

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetLocalControlShapeTransformByIndex
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              InElementIndex                                                   (Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bInitial                                                         (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FTransform                  ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FTransform URigHierarchy::GetLocalControlShapeTransformByIndex(int32 InElementIndex, bool* bInitial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetLocalControlShapeTransformByIndex");

	Params::URigHierarchy_GetLocalControlShapeTransformByIndex_Params Parms{};

	Parms.InElementIndex = InElementIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bInitial != nullptr)
		*bInitial = Parms.bInitial;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetLocalControlShapeTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bInitial                                                         (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FTransform                  ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FTransform URigHierarchy::GetLocalControlShapeTransform(struct FRigElementKey* InKey, bool* bInitial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetLocalControlShapeTransform");

	Params::URigHierarchy_GetLocalControlShapeTransform_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InKey != nullptr)
		*InKey = std::move(Parms.InKey);

	if (bInitial != nullptr)
		*bInitial = Parms.bInitial;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetLinearColorMetadata
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FLinearColor                DefaultValue                                                     (BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FLinearColor                ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FLinearColor URigHierarchy::GetLinearColorMetadata(const struct FRigElementKey& InItem, class FName InMetadataName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetLinearColorMetadata");

	Params::URigHierarchy_GetLinearColorMetadata_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetLinearColorArrayMetadata
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FLinearColor>        ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<struct FLinearColor> URigHierarchy::GetLinearColorArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetLinearColorArrayMetadata");

	Params::URigHierarchy_GetLinearColorArrayMetadata_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetKeys
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<int32>                      InElementIndices                                                 (ConstParm, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FRigElementKey>      ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<struct FRigElementKey> URigHierarchy::GetKeys(const TArray<int32>& InElementIndices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetKeys");

	Params::URigHierarchy_GetKeys_Params Parms{};

	Parms.InElementIndices = InElementIndices;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetKey
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              InElementIndex                                                   (Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FRigElementKey              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FRigElementKey URigHierarchy::GetKey(int32 InElementIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetKey");

	Params::URigHierarchy_GetKey_Params Parms{};

	Parms.InElementIndex = InElementIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetIntFromControlValue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FRigControlValue            InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

int32 URigHierarchy::GetIntFromControlValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetIntFromControlValue");

	Params::URigHierarchy_GetIntFromControlValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetInt32Metadata
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              DefaultValue                                                     (BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

int32 URigHierarchy::GetInt32Metadata(const struct FRigElementKey& InItem, class FName InMetadataName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetInt32Metadata");

	Params::URigHierarchy_GetInt32Metadata_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetInt32ArrayMetadata
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<int32>                      ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<int32> URigHierarchy::GetInt32ArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetInt32ArrayMetadata");

	Params::URigHierarchy_GetInt32ArrayMetadata_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetIndex_ForBlueprint
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

int32 URigHierarchy::GetIndex_ForBlueprint(struct FRigElementKey* InKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetIndex_ForBlueprint");

	Params::URigHierarchy_GetIndex_ForBlueprint_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InKey != nullptr)
		*InKey = std::move(Parms.InKey);

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetGlobalTransformByIndex
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              InElementIndex                                                   (Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bInitial                                                         (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FTransform                  ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FTransform URigHierarchy::GetGlobalTransformByIndex(int32 InElementIndex, bool* bInitial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetGlobalTransformByIndex");

	Params::URigHierarchy_GetGlobalTransformByIndex_Params Parms{};

	Parms.InElementIndex = InElementIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bInitial != nullptr)
		*bInitial = Parms.bInitial;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetGlobalTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bInitial                                                         (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FTransform                  ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FTransform URigHierarchy::GetGlobalTransform(struct FRigElementKey* InKey, bool* bInitial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetGlobalTransform");

	Params::URigHierarchy_GetGlobalTransform_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InKey != nullptr)
		*InKey = std::move(Parms.InKey);

	if (bInitial != nullptr)
		*bInitial = Parms.bInitial;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetGlobalControlShapeTransformByIndex
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              InElementIndex                                                   (Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bInitial                                                         (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FTransform                  ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FTransform URigHierarchy::GetGlobalControlShapeTransformByIndex(int32 InElementIndex, bool* bInitial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetGlobalControlShapeTransformByIndex");

	Params::URigHierarchy_GetGlobalControlShapeTransformByIndex_Params Parms{};

	Parms.InElementIndex = InElementIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bInitial != nullptr)
		*bInitial = Parms.bInitial;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetGlobalControlShapeTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bInitial                                                         (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FTransform                  ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FTransform URigHierarchy::GetGlobalControlShapeTransform(struct FRigElementKey* InKey, bool* bInitial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetGlobalControlShapeTransform");

	Params::URigHierarchy_GetGlobalControlShapeTransform_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InKey != nullptr)
		*InKey = std::move(Parms.InKey);

	if (bInitial != nullptr)
		*bInitial = Parms.bInitial;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetGlobalControlOffsetTransformByIndex
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              InElementIndex                                                   (Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bInitial                                                         (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FTransform                  ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FTransform URigHierarchy::GetGlobalControlOffsetTransformByIndex(int32 InElementIndex, bool* bInitial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetGlobalControlOffsetTransformByIndex");

	Params::URigHierarchy_GetGlobalControlOffsetTransformByIndex_Params Parms{};

	Parms.InElementIndex = InElementIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bInitial != nullptr)
		*bInitial = Parms.bInitial;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetGlobalControlOffsetTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bInitial                                                         (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FTransform                  ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FTransform URigHierarchy::GetGlobalControlOffsetTransform(struct FRigElementKey* InKey, bool* bInitial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetGlobalControlOffsetTransform");

	Params::URigHierarchy_GetGlobalControlOffsetTransform_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InKey != nullptr)
		*InKey = std::move(Parms.InKey);

	if (bInitial != nullptr)
		*bInitial = Parms.bInitial;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetFloatMetadata
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              DefaultValue                                                     (BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float URigHierarchy::GetFloatMetadata(const struct FRigElementKey& InItem, class FName InMetadataName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetFloatMetadata");

	Params::URigHierarchy_GetFloatMetadata_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetFloatFromControlValue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FRigControlValue            InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float URigHierarchy::GetFloatFromControlValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetFloatFromControlValue");

	Params::URigHierarchy_GetFloatFromControlValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetFloatArrayMetadata
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<float>                      ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<float> URigHierarchy::GetFloatArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetFloatArrayMetadata");

	Params::URigHierarchy_GetFloatArrayMetadata_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetFirstParent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FRigElementKey              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FRigElementKey URigHierarchy::GetFirstParent(struct FRigElementKey* InKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetFirstParent");

	Params::URigHierarchy_GetFirstParent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InKey != nullptr)
		*InKey = std::move(Parms.InKey);

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetEulerTransformFromControlValue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FRigControlValue            InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FEulerTransform             ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FEulerTransform URigHierarchy::GetEulerTransformFromControlValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetEulerTransformFromControlValue");

	Params::URigHierarchy_GetEulerTransformFromControlValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetDefaultParent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FRigElementKey              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FRigElementKey URigHierarchy::GetDefaultParent(struct FRigElementKey* InKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetDefaultParent");

	Params::URigHierarchy_GetDefaultParent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InKey != nullptr)
		*InKey = std::move(Parms.InKey);

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetCurveValueByIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              InElementIndex                                                   (Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float URigHierarchy::GetCurveValueByIndex(int32 InElementIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetCurveValueByIndex");

	Params::URigHierarchy_GetCurveValueByIndex_Params Parms{};

	Parms.InElementIndex = InElementIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetCurveValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float URigHierarchy::GetCurveValue(struct FRigElementKey* InKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetCurveValue");

	Params::URigHierarchy_GetCurveValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InKey != nullptr)
		*InKey = std::move(Parms.InKey);

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetCurveKeys
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FRigElementKey>      ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<struct FRigElementKey> URigHierarchy::GetCurveKeys()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetCurveKeys");

	Params::URigHierarchy_GetCurveKeys_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetControlValueByIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              InElementIndex                                                   (Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class ERigControlValueType    InValueType                                                      (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FRigControlValue            ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FRigControlValue URigHierarchy::GetControlValueByIndex(int32 InElementIndex, enum class ERigControlValueType InValueType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetControlValueByIndex");

	Params::URigHierarchy_GetControlValueByIndex_Params Parms{};

	Parms.InElementIndex = InElementIndex;
	Parms.InValueType = InValueType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetControlValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class ERigControlValueType    InValueType                                                      (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FRigControlValue            ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FRigControlValue URigHierarchy::GetControlValue(struct FRigElementKey* InKey, enum class ERigControlValueType InValueType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetControlValue");

	Params::URigHierarchy_GetControlValue_Params Parms{};

	Parms.InValueType = InValueType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InKey != nullptr)
		*InKey = std::move(Parms.InKey);

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetControlPreferredRotatorByIndex
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              InElementIndex                                                   (Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bInitial                                                         (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FRotator                    ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FRotator URigHierarchy::GetControlPreferredRotatorByIndex(int32 InElementIndex, bool* bInitial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetControlPreferredRotatorByIndex");

	Params::URigHierarchy_GetControlPreferredRotatorByIndex_Params Parms{};

	Parms.InElementIndex = InElementIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bInitial != nullptr)
		*bInitial = Parms.bInitial;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetControlPreferredRotator
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bInitial                                                         (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FRotator                    ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FRotator URigHierarchy::GetControlPreferredRotator(struct FRigElementKey* InKey, bool* bInitial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetControlPreferredRotator");

	Params::URigHierarchy_GetControlPreferredRotator_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InKey != nullptr)
		*InKey = std::move(Parms.InKey);

	if (bInitial != nullptr)
		*bInitial = Parms.bInitial;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetController
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bCreateIfNeeded                                                  (Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class URigHierarchyController*     ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class URigHierarchyController* URigHierarchy::GetController()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetController");

	Params::URigHierarchy_GetController_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetControlKeys
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               bTraverse                                                        (Edit, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FRigElementKey>      ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<struct FRigElementKey> URigHierarchy::GetControlKeys(bool bTraverse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetControlKeys");

	Params::URigHierarchy_GetControlKeys_Params Parms{};

	Parms.bTraverse = bTraverse;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetChildren
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bRecursive                                                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FRigElementKey>      ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<struct FRigElementKey> URigHierarchy::GetChildren(struct FRigElementKey* InKey, bool bRecursive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetChildren");

	Params::URigHierarchy_GetChildren_Params Parms{};

	Parms.bRecursive = bRecursive;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InKey != nullptr)
		*InKey = std::move(Parms.InKey);

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetBoolMetadata
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               DefaultValue                                                     (BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchy::GetBoolMetadata(const struct FRigElementKey& InItem, class FName InMetadataName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetBoolMetadata");

	Params::URigHierarchy_GetBoolMetadata_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetBoolArrayMetadata
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<bool>                       ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<bool> URigHierarchy::GetBoolArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetBoolArrayMetadata");

	Params::URigHierarchy_GetBoolArrayMetadata_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetBoneKeys
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               bTraverse                                                        (Edit, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FRigElementKey>      ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<struct FRigElementKey> URigHierarchy::GetBoneKeys(bool bTraverse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetBoneKeys");

	Params::URigHierarchy_GetBoneKeys_Params Parms{};

	Parms.bTraverse = bTraverse;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetAllKeys_ForBlueprint
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               bTraverse                                                        (Edit, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FRigElementKey>      ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<struct FRigElementKey> URigHierarchy::GetAllKeys_ForBlueprint(bool bTraverse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetAllKeys_ForBlueprint");

	Params::URigHierarchy_GetAllKeys_ForBlueprint_Params Parms{};

	Parms.bTraverse = bTraverse;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.FindNull_ForBlueprintOnly
// (Final, Native, Private, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FRigNullElement             ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FRigNullElement URigHierarchy::FindNull_ForBlueprintOnly(struct FRigElementKey* InKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "FindNull_ForBlueprintOnly");

	Params::URigHierarchy_FindNull_ForBlueprintOnly_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InKey != nullptr)
		*InKey = std::move(Parms.InKey);

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.FindControl_ForBlueprintOnly
// (Final, Native, Private, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FRigControlElement          ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FRigControlElement URigHierarchy::FindControl_ForBlueprintOnly(struct FRigElementKey* InKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "FindControl_ForBlueprintOnly");

	Params::URigHierarchy_FindControl_ForBlueprintOnly_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InKey != nullptr)
		*InKey = std::move(Parms.InKey);

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.FindBone_ForBlueprintOnly
// (Final, Native, Private, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FRigBoneElement             ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FRigBoneElement URigHierarchy::FindBone_ForBlueprintOnly(struct FRigElementKey* InKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "FindBone_ForBlueprintOnly");

	Params::URigHierarchy_FindBone_ForBlueprintOnly_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InKey != nullptr)
		*InKey = std::move(Parms.InKey);

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.CopyPose
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class URigHierarchy*               InHierarchy                                                      (ConstParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bCurrent                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bInitial                                                         (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               bWeights                                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bMatchPoseInGlobalIfNeeded                                       (Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

void URigHierarchy::CopyPose(class URigHierarchy* InHierarchy, bool bCurrent, bool* bInitial, bool bWeights, bool bMatchPoseInGlobalIfNeeded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "CopyPose");

	Params::URigHierarchy_CopyPose_Params Parms{};

	Parms.InHierarchy = InHierarchy;
	Parms.bCurrent = bCurrent;
	Parms.bWeights = bWeights;
	Parms.bMatchPoseInGlobalIfNeeded = bMatchPoseInGlobalIfNeeded;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bInitial != nullptr)
		*bInitial = Parms.bInitial;

}


// Function ControlRig.RigHierarchy.CopyHierarchy
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class URigHierarchy*               InHierarchy                                                      (ConstParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

void URigHierarchy::CopyHierarchy(class URigHierarchy* InHierarchy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "CopyHierarchy");

	Params::URigHierarchy_CopyHierarchy_Params Parms{};

	Parms.InHierarchy = InHierarchy;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.Contains_ForBlueprint
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchy::Contains_ForBlueprint(struct FRigElementKey* InKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "Contains_ForBlueprint");

	Params::URigHierarchy_Contains_ForBlueprint_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InKey != nullptr)
		*InKey = std::move(Parms.InKey);

	return Parms.ReturnValue;

}


// Class ControlRig.TransformableControlHandle
// (None)

class UClass* UTransformableControlHandle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TransformableControlHandle");

	return Clss;
}


// TransformableControlHandle ControlRig.Default__TransformableControlHandle
// (Public, ClassDefaultObject, ArchetypeObject)

class UTransformableControlHandle* UTransformableControlHandle::GetDefaultObj()
{
	static class UTransformableControlHandle* Default = nullptr;

	if (!Default)
		Default = static_cast<UTransformableControlHandle*>(UTransformableControlHandle::StaticClass()->DefaultObject);

	return Default;
}


// Class ControlRig.ControlRig
// (None)

class UClass* UControlRig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ControlRig");

	return Clss;
}


// ControlRig ControlRig.Default__ControlRig
// (Public, ClassDefaultObject, ArchetypeObject)

class UControlRig* UControlRig::GetDefaultObj()
{
	static class UControlRig* Default = nullptr;

	if (!Default)
		Default = static_cast<UControlRig*>(UControlRig::StaticClass()->DefaultObject);

	return Default;
}


// Function ControlRig.ControlRig.SetInteractionRigClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                      InInteractionRigClass                                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UClass* UControlRig::SetInteractionRigClass()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRig", "SetInteractionRigClass");

	Params::UControlRig_SetInteractionRigClass_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRig.SetInteractionRig
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UControlRig*                 InInteractionRig                                                 (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UControlRig* UControlRig::SetInteractionRig()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRig", "SetInteractionRig");

	Params::UControlRig_SetInteractionRig_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRig.SelectControl
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InControlName                                                    (Edit, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               bSelect                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool UControlRig::SelectControl()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRig", "SelectControl");

	Params::UControlRig_SelectControl_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRig.RequestConstruction
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UControlRig::RequestConstruction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRig", "RequestConstruction");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// SparseDelegateFunction ControlRig.ControlRig.OnControlSelectedBP__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// class UControlRig*                 Rig                                                              (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig)
// struct FRigControlElement          Control                                                          (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor)
// bool                               bSelected                                                        (BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool UControlRig::OnControlSelectedBP__DelegateSignature(class UControlRig* Rig, struct FRigControlElement* Control)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRig", "OnControlSelectedBP__DelegateSignature");

	Params::UControlRig_OnControlSelectedBP__DelegateSignature_Params Parms{};

	Parms.Rig = Rig;

	UObject::ProcessEvent(Func, &Parms);

	if (Control != nullptr)
		*Control = std::move(Parms.Control);

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRig.IsControlSelected
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        InControlName                                                    (Edit, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UControlRig::IsControlSelected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRig", "IsControlSelected");

	Params::UControlRig_IsControlSelected_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRig.GetInteractionRigClass
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                      ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UClass* UControlRig::GetInteractionRigClass()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRig", "GetInteractionRigClass");

	Params::UControlRig_GetInteractionRigClass_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRig.GetInteractionRig
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UControlRig*                 ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UControlRig* UControlRig::GetInteractionRig()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRig", "GetInteractionRig");

	Params::UControlRig_GetInteractionRig_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRig.GetHostingActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                      ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class AActor* UControlRig::GetHostingActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRig", "GetHostingActor");

	Params::UControlRig_GetHostingActor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRig.GetHierarchy
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class URigHierarchy*               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class URigHierarchy* UControlRig::GetHierarchy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRig", "GetHierarchy");

	Params::UControlRig_GetHierarchy_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRig.FindControlRigs
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Outer                                                            (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor)
// class UClass*                      OptionalClass                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// TArray<class UControlRig*>         ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<class UControlRig*> UControlRig::FindControlRigs(class UObject* Outer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRig", "FindControlRigs");

	Params::UControlRig_FindControlRigs_Params Parms{};

	Parms.Outer = Outer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRig.CurrentControlSelection
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FName>                ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<class FName> UControlRig::CurrentControlSelection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRig", "CurrentControlSelection");

	Params::UControlRig_CurrentControlSelection_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRig.CreateTransformableControlHandle
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                     Outer                                                            (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor)
// class FName                        ControlName                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class UTransformableControlHandle* ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UTransformableControlHandle* UControlRig::CreateTransformableControlHandle(class UObject* Outer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRig", "CreateTransformableControlHandle");

	Params::UControlRig_CreateTransformableControlHandle_Params Parms{};

	Parms.Outer = Outer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRig.ClearControlSelection
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UControlRig::ClearControlSelection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRig", "ClearControlSelection");

	Params::UControlRig_ClearControlSelection_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ControlRig.ControlRigAnimInstance
// (None)

class UClass* UControlRigAnimInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ControlRigAnimInstance");

	return Clss;
}


// ControlRigAnimInstance ControlRig.Default__ControlRigAnimInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UControlRigAnimInstance* UControlRigAnimInstance::GetDefaultObj()
{
	static class UControlRigAnimInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UControlRigAnimInstance*>(UControlRigAnimInstance::StaticClass()->DefaultObject);

	return Default;
}


// Class ControlRig.ControlRigBlueprintGeneratedClass
// (Field, Struct, Class)

class UClass* UControlRigBlueprintGeneratedClass::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ControlRigBlueprintGeneratedClass");

	return Clss;
}


// ControlRigBlueprintGeneratedClass ControlRig.Default__ControlRigBlueprintGeneratedClass
// (Public, ClassDefaultObject, ArchetypeObject)

class UControlRigBlueprintGeneratedClass* UControlRigBlueprintGeneratedClass::GetDefaultObj()
{
	static class UControlRigBlueprintGeneratedClass* Default = nullptr;

	if (!Default)
		Default = static_cast<UControlRigBlueprintGeneratedClass*>(UControlRigBlueprintGeneratedClass::StaticClass()->DefaultObject);

	return Default;
}


// Class ControlRig.ControlRigComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UControlRigComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ControlRigComponent");

	return Clss;
}


// ControlRigComponent ControlRig.Default__ControlRigComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UControlRigComponent* UControlRigComponent::GetDefaultObj()
{
	static class UControlRigComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UControlRigComponent*>(UControlRigComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function ControlRig.ControlRigComponent.Update
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              DeltaTime                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float UControlRigComponent::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "Update");

	Params::UControlRigComponent_Update_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigComponent.SetObjectBinding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     InObjectToBind                                                   (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

class UObject* UControlRigComponent::SetObjectBinding()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "SetObjectBinding");

	Params::UControlRigComponent_SetObjectBinding_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigComponent.SetMappedElements
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FControlRigComponentMappedElement>NewMappedElements                                                (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

TArray<struct FControlRigComponentMappedElement> UControlRigComponent::SetMappedElements()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "SetMappedElements");

	Params::UControlRigComponent_SetMappedElements_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigComponent.SetInitialSpaceTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        SpaceName                                                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FTransform                  InitialTransform                                                 (Edit, ExportObject, Net, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// enum class EControlRigComponentSpaceSpace                                                            (BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

void UControlRigComponent::SetInitialSpaceTransform(class FName* SpaceName, struct FTransform* InitialTransform, enum class EControlRigComponentSpace Space)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "SetInitialSpaceTransform");

	Params::UControlRigComponent_SetInitialSpaceTransform_Params Parms{};

	Parms.Space = Space;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SpaceName != nullptr)
		*SpaceName = Parms.SpaceName;

	if (InitialTransform != nullptr)
		*InitialTransform = std::move(Parms.InitialTransform);

}


// Function ControlRig.ControlRigComponent.SetInitialBoneTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        BoneName                                                         (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
// struct FTransform                  InitialTransform                                                 (Edit, ExportObject, Net, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// enum class EControlRigComponentSpaceSpace                                                            (BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               bPropagateToChildren                                             (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UControlRigComponent::SetInitialBoneTransform(class FName* BoneName, struct FTransform* InitialTransform, enum class EControlRigComponentSpace Space, bool bPropagateToChildren)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "SetInitialBoneTransform");

	Params::UControlRigComponent_SetInitialBoneTransform_Params Parms{};

	Parms.Space = Space;
	Parms.bPropagateToChildren = bPropagateToChildren;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (BoneName != nullptr)
		*BoneName = Parms.BoneName;

	if (InitialTransform != nullptr)
		*InitialTransform = std::move(Parms.InitialTransform);

}


// Function ControlRig.ControlRigComponent.SetControlVector2D
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        ControlName                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector2D                   Value                                                            (ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)

class FName UControlRigComponent::SetControlVector2D(struct FVector2D* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "SetControlVector2D");

	Params::UControlRigComponent_SetControlVector2D_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Value != nullptr)
		*Value = std::move(Parms.Value);

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigComponent.SetControlTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        ControlName                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FTransform                  Value                                                            (ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
// enum class EControlRigComponentSpaceSpace                                                            (BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

class FName UControlRigComponent::SetControlTransform(struct FTransform* Value, enum class EControlRigComponentSpace Space)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "SetControlTransform");

	Params::UControlRigComponent_SetControlTransform_Params Parms{};

	Parms.Space = Space;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Value != nullptr)
		*Value = std::move(Parms.Value);

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigComponent.SetControlScale
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        ControlName                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     Value                                                            (ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
// enum class EControlRigComponentSpaceSpace                                                            (BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

class FName UControlRigComponent::SetControlScale(struct FVector* Value, enum class EControlRigComponentSpace Space)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "SetControlScale");

	Params::UControlRigComponent_SetControlScale_Params Parms{};

	Parms.Space = Space;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Value != nullptr)
		*Value = std::move(Parms.Value);

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigComponent.SetControlRotator
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        ControlName                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FRotator                    Value                                                            (ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
// enum class EControlRigComponentSpaceSpace                                                            (BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

class FName UControlRigComponent::SetControlRotator(struct FRotator* Value, enum class EControlRigComponentSpace Space)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "SetControlRotator");

	Params::UControlRigComponent_SetControlRotator_Params Parms{};

	Parms.Space = Space;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Value != nullptr)
		*Value = std::move(Parms.Value);

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigComponent.SetControlRigClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                      InControlRigClass                                                (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

class UClass* UControlRigComponent::SetControlRigClass()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "SetControlRigClass");

	Params::UControlRigComponent_SetControlRigClass_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigComponent.SetControlPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        ControlName                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     Value                                                            (ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
// enum class EControlRigComponentSpaceSpace                                                            (BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

class FName UControlRigComponent::SetControlPosition(struct FVector* Value, enum class EControlRigComponentSpace Space)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "SetControlPosition");

	Params::UControlRigComponent_SetControlPosition_Params Parms{};

	Parms.Space = Space;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Value != nullptr)
		*Value = std::move(Parms.Value);

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigComponent.SetControlOffset
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        ControlName                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FTransform                  OffsetTransform                                                  (ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// enum class EControlRigComponentSpaceSpace                                                            (BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

class FName UControlRigComponent::SetControlOffset(struct FTransform* OffsetTransform, enum class EControlRigComponentSpace Space)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "SetControlOffset");

	Params::UControlRigComponent_SetControlOffset_Params Parms{};

	Parms.Space = Space;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OffsetTransform != nullptr)
		*OffsetTransform = std::move(Parms.OffsetTransform);

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigComponent.SetControlInt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ControlName                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// int32                              Value                                                            (ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)

class FName UControlRigComponent::SetControlInt(int32* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "SetControlInt");

	Params::UControlRigComponent_SetControlInt_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Value != nullptr)
		*Value = Parms.Value;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigComponent.SetControlFloat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ControlName                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              Value                                                            (ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)

class FName UControlRigComponent::SetControlFloat(float* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "SetControlFloat");

	Params::UControlRigComponent_SetControlFloat_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Value != nullptr)
		*Value = Parms.Value;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigComponent.SetControlBool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ControlName                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               Value                                                            (ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)

class FName UControlRigComponent::SetControlBool(bool* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "SetControlBool");

	Params::UControlRigComponent_SetControlBool_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Value != nullptr)
		*Value = Parms.Value;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigComponent.SetBoneTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        BoneName                                                         (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// enum class EControlRigComponentSpaceSpace                                                            (BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// float                              Weight                                                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst)
// bool                               bPropagateToChildren                                             (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

float UControlRigComponent::SetBoneTransform(class FName* BoneName, struct FTransform* Transform, enum class EControlRigComponentSpace Space, bool bPropagateToChildren)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "SetBoneTransform");

	Params::UControlRigComponent_SetBoneTransform_Params Parms{};

	Parms.Space = Space;
	Parms.bPropagateToChildren = bPropagateToChildren;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (BoneName != nullptr)
		*BoneName = Parms.BoneName;

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigComponent.SetBoneInitialTransformsFromSkeletalMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USkeletalMesh*               InSkeletalMesh                                                   (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

class USkeletalMesh* UControlRigComponent::SetBoneInitialTransformsFromSkeletalMesh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "SetBoneInitialTransformsFromSkeletalMesh");

	Params::UControlRigComponent_SetBoneInitialTransformsFromSkeletalMesh_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigComponent.OnPreInitialize
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UControlRigComponent*        Component                                                        (ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UControlRigComponent* UControlRigComponent::OnPreInitialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "OnPreInitialize");

	Params::UControlRigComponent_OnPreInitialize_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigComponent.OnPreForwardsSolve
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UControlRigComponent*        Component                                                        (ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UControlRigComponent* UControlRigComponent::OnPreForwardsSolve()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "OnPreForwardsSolve");

	Params::UControlRigComponent_OnPreForwardsSolve_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigComponent.OnPreConstruction
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UControlRigComponent*        Component                                                        (ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UControlRigComponent* UControlRigComponent::OnPreConstruction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "OnPreConstruction");

	Params::UControlRigComponent_OnPreConstruction_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigComponent.OnPostInitialize
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UControlRigComponent*        Component                                                        (ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UControlRigComponent* UControlRigComponent::OnPostInitialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "OnPostInitialize");

	Params::UControlRigComponent_OnPostInitialize_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigComponent.OnPostForwardsSolve
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UControlRigComponent*        Component                                                        (ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UControlRigComponent* UControlRigComponent::OnPostForwardsSolve()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "OnPostForwardsSolve");

	Params::UControlRigComponent_OnPostForwardsSolve_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigComponent.OnPostConstruction
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UControlRigComponent*        Component                                                        (ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UControlRigComponent* UControlRigComponent::OnPostConstruction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "OnPostConstruction");

	Params::UControlRigComponent_OnPostConstruction_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigComponent.Initialize
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UControlRigComponent::Initialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "Initialize");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigComponent.GetSpaceTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        SpaceName                                                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// enum class EControlRigComponentSpaceSpace                                                            (BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FTransform                  ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FTransform UControlRigComponent::GetSpaceTransform(class FName* SpaceName, enum class EControlRigComponentSpace Space)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "GetSpaceTransform");

	Params::UControlRigComponent_GetSpaceTransform_Params Parms{};

	Parms.Space = Space;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SpaceName != nullptr)
		*SpaceName = Parms.SpaceName;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigComponent.GetInitialSpaceTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        SpaceName                                                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// enum class EControlRigComponentSpaceSpace                                                            (BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FTransform                  ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FTransform UControlRigComponent::GetInitialSpaceTransform(class FName* SpaceName, enum class EControlRigComponentSpace Space)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "GetInitialSpaceTransform");

	Params::UControlRigComponent_GetInitialSpaceTransform_Params Parms{};

	Parms.Space = Space;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SpaceName != nullptr)
		*SpaceName = Parms.SpaceName;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigComponent.GetInitialBoneTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        BoneName                                                         (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
// enum class EControlRigComponentSpaceSpace                                                            (BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FTransform                  ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FTransform UControlRigComponent::GetInitialBoneTransform(class FName* BoneName, enum class EControlRigComponentSpace Space)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "GetInitialBoneTransform");

	Params::UControlRigComponent_GetInitialBoneTransform_Params Parms{};

	Parms.Space = Space;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (BoneName != nullptr)
		*BoneName = Parms.BoneName;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigComponent.GetElementNames
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class ERigElementType         ElementType                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<class FName>                ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<class FName> UControlRigComponent::GetElementNames(enum class ERigElementType ElementType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "GetElementNames");

	Params::UControlRigComponent_GetElementNames_Params Parms{};

	Parms.ElementType = ElementType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigComponent.GetControlVector2D
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        ControlName                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector2D                   ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FVector2D UControlRigComponent::GetControlVector2D()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "GetControlVector2D");

	Params::UControlRigComponent_GetControlVector2D_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigComponent.GetControlTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        ControlName                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class EControlRigComponentSpaceSpace                                                            (BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FTransform                  ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FTransform UControlRigComponent::GetControlTransform(enum class EControlRigComponentSpace Space)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "GetControlTransform");

	Params::UControlRigComponent_GetControlTransform_Params Parms{};

	Parms.Space = Space;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigComponent.GetControlScale
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        ControlName                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class EControlRigComponentSpaceSpace                                                            (BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FVector                     ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FVector UControlRigComponent::GetControlScale(enum class EControlRigComponentSpace Space)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "GetControlScale");

	Params::UControlRigComponent_GetControlScale_Params Parms{};

	Parms.Space = Space;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigComponent.GetControlRotator
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        ControlName                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class EControlRigComponentSpaceSpace                                                            (BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FRotator                    ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FRotator UControlRigComponent::GetControlRotator(enum class EControlRigComponentSpace Space)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "GetControlRotator");

	Params::UControlRigComponent_GetControlRotator_Params Parms{};

	Parms.Space = Space;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigComponent.GetControlRig
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UControlRig*                 ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UControlRig* UControlRigComponent::GetControlRig()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "GetControlRig");

	Params::UControlRigComponent_GetControlRig_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigComponent.GetControlPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        ControlName                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class EControlRigComponentSpaceSpace                                                            (BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FVector                     ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FVector UControlRigComponent::GetControlPosition(enum class EControlRigComponentSpace Space)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "GetControlPosition");

	Params::UControlRigComponent_GetControlPosition_Params Parms{};

	Parms.Space = Space;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigComponent.GetControlOffset
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        ControlName                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class EControlRigComponentSpaceSpace                                                            (BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FTransform                  ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FTransform UControlRigComponent::GetControlOffset(enum class EControlRigComponentSpace Space)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "GetControlOffset");

	Params::UControlRigComponent_GetControlOffset_Params Parms{};

	Parms.Space = Space;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigComponent.GetControlInt
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        ControlName                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

int32 UControlRigComponent::GetControlInt()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "GetControlInt");

	Params::UControlRigComponent_GetControlInt_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigComponent.GetControlFloat
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        ControlName                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float UControlRigComponent::GetControlFloat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "GetControlFloat");

	Params::UControlRigComponent_GetControlFloat_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigComponent.GetControlBool
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        ControlName                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UControlRigComponent::GetControlBool()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "GetControlBool");

	Params::UControlRigComponent_GetControlBool_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigComponent.GetBoneTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        BoneName                                                         (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
// enum class EControlRigComponentSpaceSpace                                                            (BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FTransform                  ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FTransform UControlRigComponent::GetBoneTransform(class FName* BoneName, enum class EControlRigComponentSpace Space)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "GetBoneTransform");

	Params::UControlRigComponent_GetBoneTransform_Params Parms{};

	Parms.Space = Space;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (BoneName != nullptr)
		*BoneName = Parms.BoneName;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigComponent.GetAbsoluteTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float UControlRigComponent::GetAbsoluteTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "GetAbsoluteTime");

	Params::UControlRigComponent_GetAbsoluteTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigComponent.DoesElementExist
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        Name                                                             (ConstParm, Net, OutParm)
// enum class ERigElementType         ElementType                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UControlRigComponent::DoesElementExist(class FName* Name, enum class ERigElementType ElementType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "DoesElementExist");

	Params::UControlRigComponent_DoesElementExist_Params Parms{};

	Parms.ElementType = ElementType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Name != nullptr)
		*Name = Parms.Name;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigComponent.ClearMappedElements
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UControlRigComponent::ClearMappedElements()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "ClearMappedElements");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigComponent.CanExecute
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UControlRigComponent::CanExecute()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "CanExecute");

	Params::UControlRigComponent_CanExecute_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigComponent.AddMappedSkeletalMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      SkeletalMeshComponent                                            (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst)
// TArray<struct FControlRigComponentMappedBone>Bones                                                            (Edit, ConstParm, BlueprintVisible, Parm, DisableEditOnTemplate, Config, EditConst)
// TArray<struct FControlRigComponentMappedCurve>Curves                                                           (Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst)

TArray<struct FControlRigComponentMappedCurve> UControlRigComponent::AddMappedSkeletalMesh(class USkeletalMeshComponent** SkeletalMeshComponent, const TArray<struct FControlRigComponentMappedBone>& Bones)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "AddMappedSkeletalMesh");

	Params::UControlRigComponent_AddMappedSkeletalMesh_Params Parms{};

	Parms.Bones = Bones;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SkeletalMeshComponent != nullptr)
		*SkeletalMeshComponent = Parms.SkeletalMeshComponent;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigComponent.AddMappedElements
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FControlRigComponentMappedElement>NewMappedElements                                                (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

TArray<struct FControlRigComponentMappedElement> UControlRigComponent::AddMappedElements()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "AddMappedElements");

	Params::UControlRigComponent_AddMappedElements_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigComponent.AddMappedComponents
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FControlRigComponentMappedComponent>Components                                                       (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor)

void UControlRigComponent::AddMappedComponents(const TArray<struct FControlRigComponentMappedComponent>& Components)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "AddMappedComponents");

	Params::UControlRigComponent_AddMappedComponents_Params Parms{};

	Parms.Components = Components;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigComponent.AddMappedCompleteSkeletalMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      SkeletalMeshComponent                                            (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst)

void UControlRigComponent::AddMappedCompleteSkeletalMesh(class USkeletalMeshComponent** SkeletalMeshComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "AddMappedCompleteSkeletalMesh");

	Params::UControlRigComponent_AddMappedCompleteSkeletalMesh_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SkeletalMeshComponent != nullptr)
		*SkeletalMeshComponent = Parms.SkeletalMeshComponent;

}


// Class ControlRig.ControlRigControlActor
// (Actor)

class UClass* AControlRigControlActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ControlRigControlActor");

	return Clss;
}


// ControlRigControlActor ControlRig.Default__ControlRigControlActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AControlRigControlActor* AControlRigControlActor::GetDefaultObj()
{
	static class AControlRigControlActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AControlRigControlActor*>(AControlRigControlActor::StaticClass()->DefaultObject);

	return Default;
}


// Function ControlRig.ControlRigControlActor.ResetControlActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AControlRigControlActor::ResetControlActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigControlActor", "ResetControlActor");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigControlActor.Refresh
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AControlRigControlActor::Refresh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigControlActor", "Refresh");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigControlActor.Clear
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AControlRigControlActor::Clear()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigControlActor", "Clear");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class ControlRig.ControlRigShapeActor
// (Actor)

class UClass* AControlRigShapeActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ControlRigShapeActor");

	return Clss;
}


// ControlRigShapeActor ControlRig.Default__ControlRigShapeActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AControlRigShapeActor* AControlRigShapeActor::GetDefaultObj()
{
	static class AControlRigShapeActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AControlRigShapeActor*>(AControlRigShapeActor::StaticClass()->DefaultObject);

	return Default;
}


// Function ControlRig.ControlRigShapeActor.SetSelected
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInSelected                                                      (ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

bool AControlRigShapeActor::SetSelected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigShapeActor", "SetSelected");

	Params::AControlRigShapeActor_SetSelected_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigShapeActor.SetSelectable
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInSelectable                                                    (OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

bool AControlRigShapeActor::SetSelectable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigShapeActor", "SetSelectable");

	Params::AControlRigShapeActor_SetSelectable_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigShapeActor.SetHovered
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInHovered                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

bool AControlRigShapeActor::SetHovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigShapeActor", "SetHovered");

	Params::AControlRigShapeActor_SetHovered_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigShapeActor.SetGlobalTransform
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform                  InTransform                                                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

struct FTransform AControlRigShapeActor::SetGlobalTransform()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigShapeActor", "SetGlobalTransform");

	Params::AControlRigShapeActor_SetGlobalTransform_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigShapeActor.SetEnabled
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInEnabled                                                       (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

bool AControlRigShapeActor::SetEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigShapeActor", "SetEnabled");

	Params::AControlRigShapeActor_SetEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigShapeActor.OnTransformChanged
// (Event, Public, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// struct FTransform                  NewTransform                                                     (Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void AControlRigShapeActor::OnTransformChanged(struct FTransform* NewTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigShapeActor", "OnTransformChanged");

	Params::AControlRigShapeActor_OnTransformChanged_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (NewTransform != nullptr)
		*NewTransform = std::move(Parms.NewTransform);

}


// Function ControlRig.ControlRigShapeActor.OnSelectionChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (Edit, ConstParm, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

bool AControlRigShapeActor::OnSelectionChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigShapeActor", "OnSelectionChanged");

	Params::AControlRigShapeActor_OnSelectionChanged_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigShapeActor.OnManipulatingChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsManipulating                                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

bool AControlRigShapeActor::OnManipulatingChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigShapeActor", "OnManipulatingChanged");

	Params::AControlRigShapeActor_OnManipulatingChanged_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigShapeActor.OnHoveredChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (Edit, ConstParm, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

bool AControlRigShapeActor::OnHoveredChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigShapeActor", "OnHoveredChanged");

	Params::AControlRigShapeActor_OnHoveredChanged_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigShapeActor.OnEnabledChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsEnabled                                                       (BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)

bool AControlRigShapeActor::OnEnabledChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigShapeActor", "OnEnabledChanged");

	Params::AControlRigShapeActor_OnEnabledChanged_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigShapeActor.IsSelectedInEditor
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool AControlRigShapeActor::IsSelectedInEditor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigShapeActor", "IsSelectedInEditor");

	Params::AControlRigShapeActor_IsSelectedInEditor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigShapeActor.IsHovered
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool AControlRigShapeActor::IsHovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigShapeActor", "IsHovered");

	Params::AControlRigShapeActor_IsHovered_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigShapeActor.IsEnabled
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool AControlRigShapeActor::IsEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigShapeActor", "IsEnabled");

	Params::AControlRigShapeActor_IsEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigShapeActor.GetGlobalTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform                  ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FTransform AControlRigShapeActor::GetGlobalTransform()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigShapeActor", "GetGlobalTransform");

	Params::AControlRigShapeActor_GetGlobalTransform_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ControlRig.ControlRigShapeLibrary
// (None)

class UClass* UControlRigShapeLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ControlRigShapeLibrary");

	return Clss;
}


// ControlRigShapeLibrary ControlRig.Default__ControlRigShapeLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UControlRigShapeLibrary* UControlRigShapeLibrary::GetDefaultObj()
{
	static class UControlRigShapeLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UControlRigShapeLibrary*>(UControlRigShapeLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Class ControlRig.ControlRigTestData
// (None)

class UClass* UControlRigTestData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ControlRigTestData");

	return Clss;
}


// ControlRigTestData ControlRig.Default__ControlRigTestData
// (Public, ClassDefaultObject, ArchetypeObject)

class UControlRigTestData* UControlRigTestData::GetDefaultObj()
{
	static class UControlRigTestData* Default = nullptr;

	if (!Default)
		Default = static_cast<UControlRigTestData*>(UControlRigTestData::StaticClass()->DefaultObject);

	return Default;
}


// Function ControlRig.ControlRigTestData.SetupReplay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UControlRig*                 InControlRig                                                     (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bGroundTruth                                                     (ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UControlRigTestData::SetupReplay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigTestData", "SetupReplay");

	Params::UControlRigTestData_SetupReplay_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigTestData.ReleaseReplay
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UControlRigTestData::ReleaseReplay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigTestData", "ReleaseReplay");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigTestData.Record
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UControlRig*                 InControlRig                                                     (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             InRecordingDuration                                              (BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UControlRigTestData::Record()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigTestData", "Record");

	Params::UControlRigTestData_Record_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigTestData.IsReplaying
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UControlRigTestData::IsReplaying()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigTestData", "IsReplaying");

	Params::UControlRigTestData_IsReplaying_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigTestData.IsRecording
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UControlRigTestData::IsRecording()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigTestData", "IsRecording");

	Params::UControlRigTestData_IsRecording_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigTestData.GetTimeRange
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               bInput                                                           (ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector2D                   ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FVector2D UControlRigTestData::GetTimeRange()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigTestData", "GetTimeRange");

	Params::UControlRigTestData_GetTimeRange_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigTestData.GetPlaybackMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EControlRigTestDataPlaybackModeReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

enum class EControlRigTestDataPlaybackMode UControlRigTestData::GetPlaybackMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigTestData", "GetPlaybackMode");

	Params::UControlRigTestData_GetPlaybackMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigTestData.GetFrameIndexForTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// double                             InSeconds                                                        (ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bInput                                                           (ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

int32 UControlRigTestData::GetFrameIndexForTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigTestData", "GetFrameIndexForTime");

	Params::UControlRigTestData_GetFrameIndexForTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigTestData.CreateNewAsset
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      InDesiredPackagePath                                             (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FString                      InBlueprintPathName                                              (BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UControlRigTestData*         ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UControlRigTestData* UControlRigTestData::CreateNewAsset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigTestData", "CreateNewAsset");

	Params::UControlRigTestData_CreateNewAsset_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ControlRig.ControlRigValidator
// (None)

class UClass* UControlRigValidator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ControlRigValidator");

	return Clss;
}


// ControlRigValidator ControlRig.Default__ControlRigValidator
// (Public, ClassDefaultObject, ArchetypeObject)

class UControlRigValidator* UControlRigValidator::GetDefaultObj()
{
	static class UControlRigValidator* Default = nullptr;

	if (!Default)
		Default = static_cast<UControlRigValidator*>(UControlRigValidator::StaticClass()->DefaultObject);

	return Default;
}


// Class ControlRig.ControlRigValidationPass
// (None)

class UClass* UControlRigValidationPass::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ControlRigValidationPass");

	return Clss;
}


// ControlRigValidationPass ControlRig.Default__ControlRigValidationPass
// (Public, ClassDefaultObject, ArchetypeObject)

class UControlRigValidationPass* UControlRigValidationPass::GetDefaultObj()
{
	static class UControlRigValidationPass* Default = nullptr;

	if (!Default)
		Default = static_cast<UControlRigValidationPass*>(UControlRigValidationPass::StaticClass()->DefaultObject);

	return Default;
}


// Class ControlRig.AdditiveControlRig
// (None)

class UClass* UAdditiveControlRig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AdditiveControlRig");

	return Clss;
}


// AdditiveControlRig ControlRig.Default__AdditiveControlRig
// (Public, ClassDefaultObject, ArchetypeObject)

class UAdditiveControlRig* UAdditiveControlRig::GetDefaultObj()
{
	static class UAdditiveControlRig* Default = nullptr;

	if (!Default)
		Default = static_cast<UAdditiveControlRig*>(UAdditiveControlRig::StaticClass()->DefaultObject);

	return Default;
}


// Class ControlRig.FKControlRig
// (None)

class UClass* UFKControlRig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FKControlRig");

	return Clss;
}


// FKControlRig ControlRig.Default__FKControlRig
// (Public, ClassDefaultObject, ArchetypeObject)

class UFKControlRig* UFKControlRig::GetDefaultObj()
{
	static class UFKControlRig* Default = nullptr;

	if (!Default)
		Default = static_cast<UFKControlRig*>(UFKControlRig::StaticClass()->DefaultObject);

	return Default;
}


// Class ControlRig.RigHierarchyController
// (None)

class UClass* URigHierarchyController::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RigHierarchyController");

	return Clss;
}


// RigHierarchyController ControlRig.Default__RigHierarchyController
// (Public, ClassDefaultObject, ArchetypeObject)

class URigHierarchyController* URigHierarchyController::GetDefaultObj()
{
	static class URigHierarchyController* Default = nullptr;

	if (!Default)
		Default = static_cast<URigHierarchyController*>(URigHierarchyController::StaticClass()->DefaultObject);

	return Default;
}


// Function ControlRig.RigHierarchyController.SetSelection
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FRigElementKey>      InKeys                                                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// bool                               bPrintPythonCommand                                              (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchyController::SetSelection(TArray<struct FRigElementKey>* InKeys, bool bPrintPythonCommand)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "SetSelection");

	Params::URigHierarchyController_SetSelection_Params Parms{};

	Parms.bPrintPythonCommand = bPrintPythonCommand;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InKeys != nullptr)
		*InKeys = std::move(Parms.InKeys);

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchyController.SetParent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InChild                                                          (Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FRigElementKey              InParent                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               bMaintainGlobalTransform                                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bSetupUndo                                                       (Edit, ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bPrintPythonCommand                                              (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchyController::SetParent(const struct FRigElementKey& InChild, struct FRigElementKey* InParent, bool bSetupUndo, bool bPrintPythonCommand)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "SetParent");

	Params::URigHierarchyController_SetParent_Params Parms{};

	Parms.InChild = InChild;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommand = bPrintPythonCommand;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InParent != nullptr)
		*InParent = std::move(Parms.InParent);

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchyController.SetHierarchy
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class URigHierarchy*               InHierarchy                                                      (ConstParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

void URigHierarchyController::SetHierarchy(class URigHierarchy* InHierarchy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "SetHierarchy");

	Params::URigHierarchyController_SetHierarchy_Params Parms{};

	Parms.InHierarchy = InHierarchy;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchyController.SetDisplayName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InControl                                                        (ConstParm, BlueprintVisible, Net, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        InDisplayName                                                    (BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// bool                               bRenameElement                                                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bSetupUndo                                                       (Edit, ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bPrintPythonCommand                                              (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class FName URigHierarchyController::SetDisplayName(const struct FRigElementKey& InControl, class FName* InDisplayName, bool bRenameElement, bool bSetupUndo, bool bPrintPythonCommand)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "SetDisplayName");

	Params::URigHierarchyController_SetDisplayName_Params Parms{};

	Parms.InControl = InControl;
	Parms.bRenameElement = bRenameElement;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommand = bPrintPythonCommand;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InDisplayName != nullptr)
		*InDisplayName = Parms.InDisplayName;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchyController.SetControlSettings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FRigControlSettings         InSettings                                                       (Edit, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bSetupUndo                                                       (Edit, ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchyController::SetControlSettings(struct FRigElementKey* InKey, const struct FRigControlSettings& InSettings, bool bSetupUndo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "SetControlSettings");

	Params::URigHierarchyController_SetControlSettings_Params Parms{};

	Parms.InSettings = InSettings;
	Parms.bSetupUndo = bSetupUndo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InKey != nullptr)
		*InKey = std::move(Parms.InKey);

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchyController.SelectElement
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InKey                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bSelect                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               bClearSelection                                                  (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchyController::SelectElement(struct FRigElementKey* InKey, bool bClearSelection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "SelectElement");

	Params::URigHierarchyController_SelectElement_Params Parms{};

	Parms.bClearSelection = bClearSelection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InKey != nullptr)
		*InKey = std::move(Parms.InKey);

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchyController.ReorderElement
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InElement                                                        (ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              InIndex                                                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bSetupUndo                                                       (Edit, ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bPrintPythonCommand                                              (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchyController::ReorderElement(const struct FRigElementKey& InElement, int32 InIndex, bool bSetupUndo, bool bPrintPythonCommand)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "ReorderElement");

	Params::URigHierarchyController_ReorderElement_Params Parms{};

	Parms.InElement = InElement;
	Parms.InIndex = InIndex;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommand = bPrintPythonCommand;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchyController.RenameElement
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InElement                                                        (ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        InName                                                           (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// bool                               bSetupUndo                                                       (Edit, ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bPrintPythonCommand                                              (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bClearSelection                                                  (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FRigElementKey              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FRigElementKey URigHierarchyController::RenameElement(const struct FRigElementKey& InElement, class FName* InName, bool bSetupUndo, bool bPrintPythonCommand, bool bClearSelection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "RenameElement");

	Params::URigHierarchyController_RenameElement_Params Parms{};

	Parms.InElement = InElement;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommand = bPrintPythonCommand;
	Parms.bClearSelection = bClearSelection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InName != nullptr)
		*InName = Parms.InName;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchyController.RemoveParent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InChild                                                          (Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FRigElementKey              InParent                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               bMaintainGlobalTransform                                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bSetupUndo                                                       (Edit, ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bPrintPythonCommand                                              (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchyController::RemoveParent(const struct FRigElementKey& InChild, struct FRigElementKey* InParent, bool bSetupUndo, bool bPrintPythonCommand)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "RemoveParent");

	Params::URigHierarchyController_RemoveParent_Params Parms{};

	Parms.InChild = InChild;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommand = bPrintPythonCommand;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InParent != nullptr)
		*InParent = std::move(Parms.InParent);

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchyController.RemoveElement
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InElement                                                        (ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bSetupUndo                                                       (Edit, ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bPrintPythonCommand                                              (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchyController::RemoveElement(const struct FRigElementKey& InElement, bool bSetupUndo, bool bPrintPythonCommand)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "RemoveElement");

	Params::URigHierarchyController_RemoveElement_Params Parms{};

	Parms.InElement = InElement;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommand = bPrintPythonCommand;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchyController.RemoveAllParents
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InChild                                                          (Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bMaintainGlobalTransform                                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bSetupUndo                                                       (Edit, ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bPrintPythonCommand                                              (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchyController::RemoveAllParents(const struct FRigElementKey& InChild, bool bSetupUndo, bool bPrintPythonCommand)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "RemoveAllParents");

	Params::URigHierarchyController_RemoveAllParents_Params Parms{};

	Parms.InChild = InChild;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommand = bPrintPythonCommand;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchyController.MirrorElements
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FRigElementKey>      InKeys                                                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// struct FRigVMMirrorSettings        InSettings                                                       (Edit, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bSelectNewElements                                               (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bSetupUndo                                                       (Edit, ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bPrintPythonCommands                                             (ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FRigElementKey>      ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<struct FRigElementKey> URigHierarchyController::MirrorElements(TArray<struct FRigElementKey>* InKeys, const struct FRigVMMirrorSettings& InSettings, bool bSetupUndo, bool bPrintPythonCommands)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "MirrorElements");

	Params::URigHierarchyController_MirrorElements_Params Parms{};

	Parms.InSettings = InSettings;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommands = bPrintPythonCommands;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InKeys != nullptr)
		*InKeys = std::move(Parms.InKeys);

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchyController.ImportFromText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InContent                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bReplaceExistingElements                                         (ConstParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bSelectNewElements                                               (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bSetupUndo                                                       (Edit, ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bPrintPythonCommands                                             (ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FRigElementKey>      ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<struct FRigElementKey> URigHierarchyController::ImportFromText(const class FString& InContent, bool bReplaceExistingElements, bool bSetupUndo, bool bPrintPythonCommands)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "ImportFromText");

	Params::URigHierarchyController_ImportFromText_Params Parms{};

	Parms.InContent = InContent;
	Parms.bReplaceExistingElements = bReplaceExistingElements;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommands = bPrintPythonCommands;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchyController.ImportCurves
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USkeleton*                   InSkeleton                                                       (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        InNameSpace                                                      (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bSelectCurves                                                    (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bSetupUndo                                                       (Edit, ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bPrintPythonCommand                                              (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FRigElementKey>      ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<struct FRigElementKey> URigHierarchyController::ImportCurves(bool bSetupUndo, bool bPrintPythonCommand)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "ImportCurves");

	Params::URigHierarchyController_ImportCurves_Params Parms{};

	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommand = bPrintPythonCommand;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchyController.ImportBones
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USkeleton*                   InSkeleton                                                       (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        InNameSpace                                                      (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bReplaceExistingBones                                            (Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bRemoveObsoleteBones                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bSelectBones                                                     (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bSetupUndo                                                       (Edit, ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bPrintPythonCommand                                              (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FRigElementKey>      ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<struct FRigElementKey> URigHierarchyController::ImportBones(bool bSetupUndo, bool bPrintPythonCommand)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "ImportBones");

	Params::URigHierarchyController_ImportBones_Params Parms{};

	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommand = bPrintPythonCommand;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchyController.GetHierarchy
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class URigHierarchy*               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class URigHierarchy* URigHierarchyController::GetHierarchy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "GetHierarchy");

	Params::URigHierarchyController_GetHierarchy_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchyController.GetControlSettings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FRigControlSettings         ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FRigControlSettings URigHierarchyController::GetControlSettings(struct FRigElementKey* InKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "GetControlSettings");

	Params::URigHierarchyController_GetControlSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InKey != nullptr)
		*InKey = std::move(Parms.InKey);

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchyController.ExportToText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FRigElementKey>      InKeys                                                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// class FString                      ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class FString URigHierarchyController::ExportToText(TArray<struct FRigElementKey>* InKeys)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "ExportToText");

	Params::URigHierarchyController_ExportToText_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InKeys != nullptr)
		*InKeys = std::move(Parms.InKeys);

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchyController.ExportSelectionToText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class FString URigHierarchyController::ExportSelectionToText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "ExportSelectionToText");

	Params::URigHierarchyController_ExportSelectionToText_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchyController.DuplicateElements
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FRigElementKey>      InKeys                                                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// bool                               bSelectNewElements                                               (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bSetupUndo                                                       (Edit, ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bPrintPythonCommands                                             (ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FRigElementKey>      ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<struct FRigElementKey> URigHierarchyController::DuplicateElements(TArray<struct FRigElementKey>* InKeys, bool bSetupUndo, bool bPrintPythonCommands)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "DuplicateElements");

	Params::URigHierarchyController_DuplicateElements_Params Parms{};

	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommands = bPrintPythonCommands;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InKeys != nullptr)
		*InKeys = std::move(Parms.InKeys);

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchyController.DeselectElement
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InKey                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchyController::DeselectElement(struct FRigElementKey* InKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "DeselectElement");

	Params::URigHierarchyController_DeselectElement_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InKey != nullptr)
		*InKey = std::move(Parms.InKey);

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchyController.ClearSelection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchyController::ClearSelection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "ClearSelection");

	Params::URigHierarchyController_ClearSelection_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchyController.AddRigidBody
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        InName                                                           (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FRigElementKey              InParent                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FRigRigidBodySettings       InSettings                                                       (Edit, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  InLocalTransform                                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bSetupUndo                                                       (Edit, ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bPrintPythonCommand                                              (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FRigElementKey              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FRigElementKey URigHierarchyController::AddRigidBody(class FName* InName, struct FRigElementKey* InParent, const struct FRigRigidBodySettings& InSettings, bool bSetupUndo, bool bPrintPythonCommand)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "AddRigidBody");

	Params::URigHierarchyController_AddRigidBody_Params Parms{};

	Parms.InSettings = InSettings;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommand = bPrintPythonCommand;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InName != nullptr)
		*InName = Parms.InName;

	if (InParent != nullptr)
		*InParent = std::move(Parms.InParent);

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchyController.AddParent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InChild                                                          (Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FRigElementKey              InParent                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              InWeight                                                         (Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bMaintainGlobalTransform                                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bSetupUndo                                                       (Edit, ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchyController::AddParent(const struct FRigElementKey& InChild, struct FRigElementKey* InParent, float InWeight, bool bSetupUndo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "AddParent");

	Params::URigHierarchyController_AddParent_Params Parms{};

	Parms.InChild = InChild;
	Parms.InWeight = InWeight;
	Parms.bSetupUndo = bSetupUndo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InParent != nullptr)
		*InParent = std::move(Parms.InParent);

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchyController.AddNull
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        InName                                                           (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FRigElementKey              InParent                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FTransform                  InTransform                                                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// bool                               bTransformInGlobal                                               (Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bSetupUndo                                                       (Edit, ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bPrintPythonCommand                                              (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FRigElementKey              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FRigElementKey URigHierarchyController::AddNull(class FName* InName, struct FRigElementKey* InParent, bool bSetupUndo, bool bPrintPythonCommand)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "AddNull");

	Params::URigHierarchyController_AddNull_Params Parms{};

	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommand = bPrintPythonCommand;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InName != nullptr)
		*InName = Parms.InName;

	if (InParent != nullptr)
		*InParent = std::move(Parms.InParent);

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchyController.AddCurve
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InName                                                           (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// float                              InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               bSetupUndo                                                       (Edit, ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bPrintPythonCommand                                              (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FRigElementKey              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FRigElementKey URigHierarchyController::AddCurve(class FName* InName, bool bSetupUndo, bool bPrintPythonCommand)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "AddCurve");

	Params::URigHierarchyController_AddCurve_Params Parms{};

	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommand = bPrintPythonCommand;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InName != nullptr)
		*InName = Parms.InName;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchyController.AddControl_ForBlueprint
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InName                                                           (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FRigElementKey              InParent                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FRigControlSettings         InSettings                                                       (Edit, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FRigControlValue            InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               bSetupUndo                                                       (Edit, ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bPrintPythonCommand                                              (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FRigElementKey              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FRigElementKey URigHierarchyController::AddControl_ForBlueprint(class FName* InName, struct FRigElementKey* InParent, const struct FRigControlSettings& InSettings, bool bSetupUndo, bool bPrintPythonCommand)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "AddControl_ForBlueprint");

	Params::URigHierarchyController_AddControl_ForBlueprint_Params Parms{};

	Parms.InSettings = InSettings;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommand = bPrintPythonCommand;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InName != nullptr)
		*InName = Parms.InName;

	if (InParent != nullptr)
		*InParent = std::move(Parms.InParent);

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchyController.AddBone
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        InName                                                           (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FRigElementKey              InParent                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FTransform                  InTransform                                                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// bool                               bTransformInGlobal                                               (Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class ERigBoneType            InBoneType                                                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bSetupUndo                                                       (Edit, ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bPrintPythonCommand                                              (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FRigElementKey              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FRigElementKey URigHierarchyController::AddBone(class FName* InName, struct FRigElementKey* InParent, bool bSetupUndo, bool bPrintPythonCommand)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "AddBone");

	Params::URigHierarchyController_AddBone_Params Parms{};

	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommand = bPrintPythonCommand;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InName != nullptr)
		*InName = Parms.InName;

	if (InParent != nullptr)
		*InParent = std::move(Parms.InParent);

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchyController.AddAnimationChannel_ForBlueprint
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InName                                                           (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FRigElementKey              InParentControl                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FRigControlSettings         InSettings                                                       (Edit, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bSetupUndo                                                       (Edit, ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bPrintPythonCommand                                              (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FRigElementKey              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FRigElementKey URigHierarchyController::AddAnimationChannel_ForBlueprint(class FName* InName, const struct FRigControlSettings& InSettings, bool bSetupUndo, bool bPrintPythonCommand)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "AddAnimationChannel_ForBlueprint");

	Params::URigHierarchyController_AddAnimationChannel_ForBlueprint_Params Parms{};

	Parms.InSettings = InSettings;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommand = bPrintPythonCommand;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InName != nullptr)
		*InName = Parms.InName;

	return Parms.ReturnValue;

}


// Class ControlRig.ControlRigLayerInstance
// (None)

class UClass* UControlRigLayerInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ControlRigLayerInstance");

	return Clss;
}


// ControlRigLayerInstance ControlRig.Default__ControlRigLayerInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UControlRigLayerInstance* UControlRigLayerInstance::GetDefaultObj()
{
	static class UControlRigLayerInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UControlRigLayerInstance*>(UControlRigLayerInstance::StaticClass()->DefaultObject);

	return Default;
}


// Class ControlRig.ControlRigObjectHolder
// (None)

class UClass* UControlRigObjectHolder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ControlRigObjectHolder");

	return Clss;
}


// ControlRigObjectHolder ControlRig.Default__ControlRigObjectHolder
// (Public, ClassDefaultObject, ArchetypeObject)

class UControlRigObjectHolder* UControlRigObjectHolder::GetDefaultObj()
{
	static class UControlRigObjectHolder* Default = nullptr;

	if (!Default)
		Default = static_cast<UControlRigObjectHolder*>(UControlRigObjectHolder::StaticClass()->DefaultObject);

	return Default;
}


// Class ControlRig.ControlRigSequence
// (None)

class UClass* UControlRigSequence::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ControlRigSequence");

	return Clss;
}


// ControlRigSequence ControlRig.Default__ControlRigSequence
// (Public, ClassDefaultObject, ArchetypeObject)

class UControlRigSequence* UControlRigSequence::GetDefaultObj()
{
	static class UControlRigSequence* Default = nullptr;

	if (!Default)
		Default = static_cast<UControlRigSequence*>(UControlRigSequence::StaticClass()->DefaultObject);

	return Default;
}


// Class ControlRig.MovieSceneControlRigParameterSection
// (None)

class UClass* UMovieSceneControlRigParameterSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneControlRigParameterSection");

	return Clss;
}


// MovieSceneControlRigParameterSection ControlRig.Default__MovieSceneControlRigParameterSection
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneControlRigParameterSection* UMovieSceneControlRigParameterSection::GetDefaultObj()
{
	static class UMovieSceneControlRigParameterSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneControlRigParameterSection*>(UMovieSceneControlRigParameterSection::StaticClass()->DefaultObject);

	return Default;
}


// Class ControlRig.MovieSceneControlRigParameterTrack
// (None)

class UClass* UMovieSceneControlRigParameterTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneControlRigParameterTrack");

	return Clss;
}


// MovieSceneControlRigParameterTrack ControlRig.Default__MovieSceneControlRigParameterTrack
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneControlRigParameterTrack* UMovieSceneControlRigParameterTrack::GetDefaultObj()
{
	static class UMovieSceneControlRigParameterTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneControlRigParameterTrack*>(UMovieSceneControlRigParameterTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class ControlRig.ControlRigSettings
// (None)

class UClass* UControlRigSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ControlRigSettings");

	return Clss;
}


// ControlRigSettings ControlRig.Default__ControlRigSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UControlRigSettings* UControlRigSettings::GetDefaultObj()
{
	static class UControlRigSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UControlRigSettings*>(UControlRigSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class ControlRig.ControlRigEditorSettings
// (None)

class UClass* UControlRigEditorSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ControlRigEditorSettings");

	return Clss;
}


// ControlRigEditorSettings ControlRig.Default__ControlRigEditorSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UControlRigEditorSettings* UControlRigEditorSettings::GetDefaultObj()
{
	static class UControlRigEditorSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UControlRigEditorSettings*>(UControlRigEditorSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class ControlRig.ControlRigPoseAsset
// (None)

class UClass* UControlRigPoseAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ControlRigPoseAsset");

	return Clss;
}


// ControlRigPoseAsset ControlRig.Default__ControlRigPoseAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UControlRigPoseAsset* UControlRigPoseAsset::GetDefaultObj()
{
	static class UControlRigPoseAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UControlRigPoseAsset*>(UControlRigPoseAsset::StaticClass()->DefaultObject);

	return Default;
}


// Function ControlRig.ControlRigPoseAsset.SelectControls
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UControlRig*                 InControlRig                                                     (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bDoMirror                                                        (Edit, BlueprintReadOnly, Parm, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)

class UControlRig* UControlRigPoseAsset::SelectControls(bool* bDoMirror)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigPoseAsset", "SelectControls");

	Params::UControlRigPoseAsset_SelectControls_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bDoMirror != nullptr)
		*bDoMirror = Parms.bDoMirror;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigPoseAsset.SavePose
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UControlRig*                 InControlRig                                                     (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bUseAll                                                          (ConstParm, Net, Parm, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)

class UControlRig* UControlRigPoseAsset::SavePose(bool* bUseAll)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigPoseAsset", "SavePose");

	Params::UControlRigPoseAsset_SavePose_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bUseAll != nullptr)
		*bUseAll = Parms.bUseAll;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigPoseAsset.ReplaceControlName
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        CurrentName                                                      (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        NewName                                                          (ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)

void UControlRigPoseAsset::ReplaceControlName(class FName* CurrentName, class FName* NewName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigPoseAsset", "ReplaceControlName");

	Params::UControlRigPoseAsset_ReplaceControlName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (CurrentName != nullptr)
		*CurrentName = Parms.CurrentName;

	if (NewName != nullptr)
		*NewName = Parms.NewName;

}


// Function ControlRig.ControlRigPoseAsset.PastePose
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UControlRig*                 InControlRig                                                     (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bDoKey                                                           (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bDoMirror                                                        (Edit, BlueprintReadOnly, Parm, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)

class UControlRig* UControlRigPoseAsset::PastePose(bool* bDoKey, bool* bDoMirror)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigPoseAsset", "PastePose");

	Params::UControlRigPoseAsset_PastePose_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bDoKey != nullptr)
		*bDoKey = Parms.bDoKey;

	if (bDoMirror != nullptr)
		*bDoMirror = Parms.bDoMirror;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigPoseAsset.GetCurrentPose
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UControlRig*                 InControlRig                                                     (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FControlRigControlPose      OutPose                                                          (BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)

class UControlRig* UControlRigPoseAsset::GetCurrentPose(struct FControlRigControlPose* OutPose)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigPoseAsset", "GetCurrentPose");

	Params::UControlRigPoseAsset_GetCurrentPose_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutPose != nullptr)
		*OutPose = std::move(Parms.OutPose);

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigPoseAsset.GetControlNames
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FName>                ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<class FName> UControlRigPoseAsset::GetControlNames()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigPoseAsset", "GetControlNames");

	Params::UControlRigPoseAsset_GetControlNames_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigPoseAsset.DoesMirrorMatch
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UControlRig*                 ControlRig                                                       (ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnInstance, EditConst)
// class FName                        ControlName                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UControlRigPoseAsset::DoesMirrorMatch(class UControlRig** ControlRig)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigPoseAsset", "DoesMirrorMatch");

	Params::UControlRigPoseAsset_DoesMirrorMatch_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ControlRig != nullptr)
		*ControlRig = Parms.ControlRig;

	return Parms.ReturnValue;

}


// Class ControlRig.ControlRigPoseMirrorSettings
// (None)

class UClass* UControlRigPoseMirrorSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ControlRigPoseMirrorSettings");

	return Clss;
}


// ControlRigPoseMirrorSettings ControlRig.Default__ControlRigPoseMirrorSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UControlRigPoseMirrorSettings* UControlRigPoseMirrorSettings::GetDefaultObj()
{
	static class UControlRigPoseMirrorSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UControlRigPoseMirrorSettings*>(UControlRigPoseMirrorSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class ControlRig.ControlRigPoseProjectSettings
// (None)

class UClass* UControlRigPoseProjectSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ControlRigPoseProjectSettings");

	return Clss;
}


// ControlRigPoseProjectSettings ControlRig.Default__ControlRigPoseProjectSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UControlRigPoseProjectSettings* UControlRigPoseProjectSettings::GetDefaultObj()
{
	static class UControlRigPoseProjectSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UControlRigPoseProjectSettings*>(UControlRigPoseProjectSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class ControlRig.ControlRigSnapSettings
// (None)

class UClass* UControlRigSnapSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ControlRigSnapSettings");

	return Clss;
}


// ControlRigSnapSettings ControlRig.Default__ControlRigSnapSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UControlRigSnapSettings* UControlRigSnapSettings::GetDefaultObj()
{
	static class UControlRigSnapSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UControlRigSnapSettings*>(UControlRigSnapSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class ControlRig.ControlRigWorkflowOptions
// (None)

class UClass* UControlRigWorkflowOptions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ControlRigWorkflowOptions");

	return Clss;
}


// ControlRigWorkflowOptions ControlRig.Default__ControlRigWorkflowOptions
// (Public, ClassDefaultObject, ArchetypeObject)

class UControlRigWorkflowOptions* UControlRigWorkflowOptions::GetDefaultObj()
{
	static class UControlRigWorkflowOptions* Default = nullptr;

	if (!Default)
		Default = static_cast<UControlRigWorkflowOptions*>(UControlRigWorkflowOptions::StaticClass()->DefaultObject);

	return Default;
}


// Function ControlRig.ControlRigWorkflowOptions.EnsureAtLeastOneRigElementSelected
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UControlRigWorkflowOptions::EnsureAtLeastOneRigElementSelected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigWorkflowOptions", "EnsureAtLeastOneRigElementSelected");

	Params::UControlRigWorkflowOptions_EnsureAtLeastOneRigElementSelected_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ControlRig.ControlRigTransformWorkflowOptions
// (None)

class UClass* UControlRigTransformWorkflowOptions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ControlRigTransformWorkflowOptions");

	return Clss;
}


// ControlRigTransformWorkflowOptions ControlRig.Default__ControlRigTransformWorkflowOptions
// (Public, ClassDefaultObject, ArchetypeObject)

class UControlRigTransformWorkflowOptions* UControlRigTransformWorkflowOptions::GetDefaultObj()
{
	static class UControlRigTransformWorkflowOptions* Default = nullptr;

	if (!Default)
		Default = static_cast<UControlRigTransformWorkflowOptions*>(UControlRigTransformWorkflowOptions::StaticClass()->DefaultObject);

	return Default;
}


// Function ControlRig.ControlRigTransformWorkflowOptions.ProvideWorkflows
// (Final, Native, Public)
// Parameters:
// class UObject*                     InSubject                                                        (Edit, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FRigVMUserWorkflow>  ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<struct FRigVMUserWorkflow> UControlRigTransformWorkflowOptions::ProvideWorkflows(class UObject** InSubject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigTransformWorkflowOptions", "ProvideWorkflows");

	Params::UControlRigTransformWorkflowOptions_ProvideWorkflows_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InSubject != nullptr)
		*InSubject = Parms.InSubject;

	return Parms.ReturnValue;

}


// Class ControlRig.ControlRigNumericalValidationPass
// (None)

class UClass* UControlRigNumericalValidationPass::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ControlRigNumericalValidationPass");

	return Clss;
}


// ControlRigNumericalValidationPass ControlRig.Default__ControlRigNumericalValidationPass
// (Public, ClassDefaultObject, ArchetypeObject)

class UControlRigNumericalValidationPass* UControlRigNumericalValidationPass::GetDefaultObj()
{
	static class UControlRigNumericalValidationPass* Default = nullptr;

	if (!Default)
		Default = static_cast<UControlRigNumericalValidationPass*>(UControlRigNumericalValidationPass::StaticClass()->DefaultObject);

	return Default;
}

}



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
// int32                              InElementIndex                                                   (Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               bSetupUndo                                                       (Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

bool URigHierarchy::UnsetCurveValueByIndex(int32* InElementIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "UnsetCurveValueByIndex");

	Params::URigHierarchy_UnsetCurveValueByIndex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InElementIndex != nullptr)
		*InElementIndex = Parms.InElementIndex;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.UnsetCurveValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InKey                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               bSetupUndo                                                       (Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

bool URigHierarchy::UnsetCurveValue(struct FRigElementKey* InKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "UnsetCurveValue");

	Params::URigHierarchy_UnsetCurveValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InKey != nullptr)
		*InKey = std::move(Parms.InKey);

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SwitchToWorldSpace
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InChild                                                          (Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               bInitial                                                         (BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               bAffectChildren                                                  (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchy::SwitchToWorldSpace(struct FRigElementKey* InChild, bool* bAffectChildren, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SwitchToWorldSpace");

	Params::URigHierarchy_SwitchToWorldSpace_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InChild != nullptr)
		*InChild = std::move(Parms.InChild);

	if (bAffectChildren != nullptr)
		*bAffectChildren = Parms.bAffectChildren;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SwitchToParent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InChild                                                          (Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// struct FRigElementKey              InParent                                                         (OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
// bool                               bInitial                                                         (BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               bAffectChildren                                                  (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchy::SwitchToParent(struct FRigElementKey* InChild, struct FRigElementKey* InParent, bool* bAffectChildren, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SwitchToParent");

	Params::URigHierarchy_SwitchToParent_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InChild != nullptr)
		*InChild = std::move(Parms.InChild);

	if (InParent != nullptr)
		*InParent = std::move(Parms.InParent);

	if (bAffectChildren != nullptr)
		*bAffectChildren = Parms.bAffectChildren;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SwitchToDefaultParent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InChild                                                          (Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               bInitial                                                         (BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               bAffectChildren                                                  (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchy::SwitchToDefaultParent(struct FRigElementKey* InChild, bool* bAffectChildren, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SwitchToDefaultParent");

	Params::URigHierarchy_SwitchToDefaultParent_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InChild != nullptr)
		*InChild = std::move(Parms.InChild);

	if (bAffectChildren != nullptr)
		*bAffectChildren = Parms.bAffectChildren;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SortKeys
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FRigElementKey>      InKeys                                                           (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// TArray<struct FRigElementKey>      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<struct FRigElementKey> URigHierarchy::SortKeys(const TArray<struct FRigElementKey>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SortKeys");

	Params::URigHierarchy_SortKeys_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetVectorMetadata
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// struct FVector                     InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FVector URigHierarchy::SetVectorMetadata(struct FRigElementKey* InItem, class FName* InMetadataName, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetVectorMetadata");

	Params::URigHierarchy_SetVectorMetadata_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InItem != nullptr)
		*InItem = std::move(Parms.InItem);

	if (InMetadataName != nullptr)
		*InMetadataName = Parms.InMetadataName;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetVectorArrayMetadata
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// TArray<struct FVector>             InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<struct FVector> URigHierarchy::SetVectorArrayMetadata(struct FRigElementKey* InItem, class FName* InMetadataName, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetVectorArrayMetadata");

	Params::URigHierarchy_SetVectorArrayMetadata_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InItem != nullptr)
		*InItem = std::move(Parms.InItem);

	if (InMetadataName != nullptr)
		*InMetadataName = Parms.InMetadataName;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetTransformMetadata
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// struct FTransform                  InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FTransform URigHierarchy::SetTransformMetadata(struct FRigElementKey* InItem, class FName* InMetadataName, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetTransformMetadata");

	Params::URigHierarchy_SetTransformMetadata_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InItem != nullptr)
		*InItem = std::move(Parms.InItem);

	if (InMetadataName != nullptr)
		*InMetadataName = Parms.InMetadataName;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetTransformArrayMetadata
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// TArray<struct FTransform>          InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<struct FTransform> URigHierarchy::SetTransformArrayMetadata(struct FRigElementKey* InItem, class FName* InMetadataName, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetTransformArrayMetadata");

	Params::URigHierarchy_SetTransformArrayMetadata_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InItem != nullptr)
		*InItem = std::move(Parms.InItem);

	if (InMetadataName != nullptr)
		*InMetadataName = Parms.InMetadataName;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class FName                        InTag                                                            (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URigHierarchy::SetTag(struct FRigElementKey* InItem, class FName* InTag, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetTag");

	Params::URigHierarchy_SetTag_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InItem != nullptr)
		*InItem = std::move(Parms.InItem);

	if (InTag != nullptr)
		*InTag = Parms.InTag;

}


// Function ControlRig.RigHierarchy.SetRotatorMetadata
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// struct FRotator                    InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FRotator URigHierarchy::SetRotatorMetadata(struct FRigElementKey* InItem, class FName* InMetadataName, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetRotatorMetadata");

	Params::URigHierarchy_SetRotatorMetadata_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InItem != nullptr)
		*InItem = std::move(Parms.InItem);

	if (InMetadataName != nullptr)
		*InMetadataName = Parms.InMetadataName;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetRotatorArrayMetadata
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// TArray<struct FRotator>            InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<struct FRotator> URigHierarchy::SetRotatorArrayMetadata(struct FRigElementKey* InItem, class FName* InMetadataName, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetRotatorArrayMetadata");

	Params::URigHierarchy_SetRotatorArrayMetadata_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InItem != nullptr)
		*InItem = std::move(Parms.InItem);

	if (InMetadataName != nullptr)
		*InMetadataName = Parms.InMetadataName;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetRigElementKeyMetadata
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// struct FRigElementKey              InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FRigElementKey URigHierarchy::SetRigElementKeyMetadata(struct FRigElementKey* InItem, class FName* InMetadataName, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetRigElementKeyMetadata");

	Params::URigHierarchy_SetRigElementKeyMetadata_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InItem != nullptr)
		*InItem = std::move(Parms.InItem);

	if (InMetadataName != nullptr)
		*InMetadataName = Parms.InMetadataName;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetRigElementKeyArrayMetadata
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// TArray<struct FRigElementKey>      InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<struct FRigElementKey> URigHierarchy::SetRigElementKeyArrayMetadata(struct FRigElementKey* InItem, class FName* InMetadataName, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetRigElementKeyArrayMetadata");

	Params::URigHierarchy_SetRigElementKeyArrayMetadata_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InItem != nullptr)
		*InItem = std::move(Parms.InItem);

	if (InMetadataName != nullptr)
		*InMetadataName = Parms.InMetadataName;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetQuatMetadata
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// struct FQuat                       InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FQuat URigHierarchy::SetQuatMetadata(struct FRigElementKey* InItem, class FName* InMetadataName, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetQuatMetadata");

	Params::URigHierarchy_SetQuatMetadata_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InItem != nullptr)
		*InItem = std::move(Parms.InItem);

	if (InMetadataName != nullptr)
		*InMetadataName = Parms.InMetadataName;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetQuatArrayMetadata
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// TArray<struct FQuat>               InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<struct FQuat> URigHierarchy::SetQuatArrayMetadata(struct FRigElementKey* InItem, class FName* InMetadataName, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetQuatArrayMetadata");

	Params::URigHierarchy_SetQuatArrayMetadata_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InItem != nullptr)
		*InItem = std::move(Parms.InItem);

	if (InMetadataName != nullptr)
		*InMetadataName = Parms.InMetadataName;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetPose_ForBlueprint
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigPose                    InPose                                                           (ConstParm, BlueprintVisible, ReturnParm, DisableEditOnTemplate, Transient, EditConst)

struct FRigPose URigHierarchy::SetPose_ForBlueprint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetPose_ForBlueprint");

	Params::URigHierarchy_SetPose_ForBlueprint_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetParentWeightArray
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InChild                                                          (Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// TArray<struct FRigElementWeight>   InWeights                                                        (BlueprintVisible, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               bInitial                                                         (BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               bAffectChildren                                                  (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchy::SetParentWeightArray(struct FRigElementKey* InChild, bool* bAffectChildren, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetParentWeightArray");

	Params::URigHierarchy_SetParentWeightArray_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InChild != nullptr)
		*InChild = std::move(Parms.InChild);

	if (bAffectChildren != nullptr)
		*bAffectChildren = Parms.bAffectChildren;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetParentWeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InChild                                                          (Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// struct FRigElementKey              InParent                                                         (OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
// struct FRigElementWeight           InWeight                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               bInitial                                                         (BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               bAffectChildren                                                  (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchy::SetParentWeight(struct FRigElementKey* InChild, struct FRigElementKey* InParent, bool* bAffectChildren, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetParentWeight");

	Params::URigHierarchy_SetParentWeight_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InChild != nullptr)
		*InChild = std::move(Parms.InChild);

	if (InParent != nullptr)
		*InParent = std::move(Parms.InParent);

	if (bAffectChildren != nullptr)
		*bAffectChildren = Parms.bAffectChildren;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetNameMetadata
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class FName                        InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class FName URigHierarchy::SetNameMetadata(struct FRigElementKey* InItem, class FName* InMetadataName, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetNameMetadata");

	Params::URigHierarchy_SetNameMetadata_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InItem != nullptr)
		*InItem = std::move(Parms.InItem);

	if (InMetadataName != nullptr)
		*InMetadataName = Parms.InMetadataName;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetNameArrayMetadata
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// TArray<class FName>                InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<class FName> URigHierarchy::SetNameArrayMetadata(struct FRigElementKey* InItem, class FName* InMetadataName, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetNameArrayMetadata");

	Params::URigHierarchy_SetNameArrayMetadata_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InItem != nullptr)
		*InItem = std::move(Parms.InItem);

	if (InMetadataName != nullptr)
		*InMetadataName = Parms.InMetadataName;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetLocalTransformByIndex
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// int32                              InElementIndex                                                   (Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// struct FTransform                  InTransform                                                      (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, GlobalConfig, SubobjectReference)
// bool                               bInitial                                                         (BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               bAffectChildren                                                  (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
// bool                               bSetupUndo                                                       (Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               bPrintPythonCommands                                             (ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

bool URigHierarchy::SetLocalTransformByIndex(int32* InElementIndex, const struct FTransform& InTransform, bool* bAffectChildren)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetLocalTransformByIndex");

	Params::URigHierarchy_SetLocalTransformByIndex_Params Parms{};

	Parms.InTransform = InTransform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InElementIndex != nullptr)
		*InElementIndex = Parms.InElementIndex;

	if (bAffectChildren != nullptr)
		*bAffectChildren = Parms.bAffectChildren;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetLocalTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InKey                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// struct FTransform                  InTransform                                                      (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, GlobalConfig, SubobjectReference)
// bool                               bInitial                                                         (BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               bAffectChildren                                                  (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
// bool                               bSetupUndo                                                       (Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               bPrintPythonCommands                                             (ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

bool URigHierarchy::SetLocalTransform(struct FRigElementKey* InKey, const struct FTransform& InTransform, bool* bAffectChildren)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetLocalTransform");

	Params::URigHierarchy_SetLocalTransform_Params Parms{};

	Parms.InTransform = InTransform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InKey != nullptr)
		*InKey = std::move(Parms.InKey);

	if (bAffectChildren != nullptr)
		*bAffectChildren = Parms.bAffectChildren;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetLinearColorMetadata
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// struct FLinearColor                InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FLinearColor URigHierarchy::SetLinearColorMetadata(struct FRigElementKey* InItem, class FName* InMetadataName, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetLinearColorMetadata");

	Params::URigHierarchy_SetLinearColorMetadata_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InItem != nullptr)
		*InItem = std::move(Parms.InItem);

	if (InMetadataName != nullptr)
		*InMetadataName = Parms.InMetadataName;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetLinearColorArrayMetadata
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// TArray<struct FLinearColor>        InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<struct FLinearColor> URigHierarchy::SetLinearColorArrayMetadata(struct FRigElementKey* InItem, class FName* InMetadataName, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetLinearColorArrayMetadata");

	Params::URigHierarchy_SetLinearColorArrayMetadata_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InItem != nullptr)
		*InItem = std::move(Parms.InItem);

	if (InMetadataName != nullptr)
		*InMetadataName = Parms.InMetadataName;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetInt32Metadata
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// int32                              InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

int32 URigHierarchy::SetInt32Metadata(struct FRigElementKey* InItem, class FName* InMetadataName, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetInt32Metadata");

	Params::URigHierarchy_SetInt32Metadata_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InItem != nullptr)
		*InItem = std::move(Parms.InItem);

	if (InMetadataName != nullptr)
		*InMetadataName = Parms.InMetadataName;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetInt32ArrayMetadata
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// TArray<int32>                      InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<int32> URigHierarchy::SetInt32ArrayMetadata(struct FRigElementKey* InItem, class FName* InMetadataName, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetInt32ArrayMetadata");

	Params::URigHierarchy_SetInt32ArrayMetadata_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InItem != nullptr)
		*InItem = std::move(Parms.InItem);

	if (InMetadataName != nullptr)
		*InMetadataName = Parms.InMetadataName;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetGlobalTransformByIndex
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// int32                              InElementIndex                                                   (Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// struct FTransform                  InTransform                                                      (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, GlobalConfig, SubobjectReference)
// bool                               bInitial                                                         (BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               bAffectChildren                                                  (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
// bool                               bSetupUndo                                                       (Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               bPrintPythonCommand                                              (BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

bool URigHierarchy::SetGlobalTransformByIndex(int32* InElementIndex, const struct FTransform& InTransform, bool* bAffectChildren)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetGlobalTransformByIndex");

	Params::URigHierarchy_SetGlobalTransformByIndex_Params Parms{};

	Parms.InTransform = InTransform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InElementIndex != nullptr)
		*InElementIndex = Parms.InElementIndex;

	if (bAffectChildren != nullptr)
		*bAffectChildren = Parms.bAffectChildren;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetGlobalTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InKey                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// struct FTransform                  InTransform                                                      (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, GlobalConfig, SubobjectReference)
// bool                               bInitial                                                         (BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               bAffectChildren                                                  (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
// bool                               bSetupUndo                                                       (Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               bPrintPythonCommand                                              (BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

bool URigHierarchy::SetGlobalTransform(struct FRigElementKey* InKey, const struct FTransform& InTransform, bool* bAffectChildren)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetGlobalTransform");

	Params::URigHierarchy_SetGlobalTransform_Params Parms{};

	Parms.InTransform = InTransform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InKey != nullptr)
		*InKey = std::move(Parms.InKey);

	if (bAffectChildren != nullptr)
		*bAffectChildren = Parms.bAffectChildren;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetFloatMetadata
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// float                              InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float URigHierarchy::SetFloatMetadata(struct FRigElementKey* InItem, class FName* InMetadataName, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetFloatMetadata");

	Params::URigHierarchy_SetFloatMetadata_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InItem != nullptr)
		*InItem = std::move(Parms.InItem);

	if (InMetadataName != nullptr)
		*InMetadataName = Parms.InMetadataName;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetFloatArrayMetadata
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// TArray<float>                      InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<float> URigHierarchy::SetFloatArrayMetadata(struct FRigElementKey* InItem, class FName* InMetadataName, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetFloatArrayMetadata");

	Params::URigHierarchy_SetFloatArrayMetadata_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InItem != nullptr)
		*InItem = std::move(Parms.InItem);

	if (InMetadataName != nullptr)
		*InMetadataName = Parms.InMetadataName;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetCurveValueByIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InElementIndex                                                   (Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// float                              InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               bSetupUndo                                                       (Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

bool URigHierarchy::SetCurveValueByIndex(int32* InElementIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetCurveValueByIndex");

	Params::URigHierarchy_SetCurveValueByIndex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InElementIndex != nullptr)
		*InElementIndex = Parms.InElementIndex;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetCurveValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InKey                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// float                              InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               bSetupUndo                                                       (Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

bool URigHierarchy::SetCurveValue(struct FRigElementKey* InKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetCurveValue");

	Params::URigHierarchy_SetCurveValue_Params Parms{};


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
// int32                              InElementIndex                                                   (Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               bVisibility                                                      (Edit, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

bool URigHierarchy::SetControlVisibilityByIndex(int32* InElementIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetControlVisibilityByIndex");

	Params::URigHierarchy_SetControlVisibilityByIndex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InElementIndex != nullptr)
		*InElementIndex = Parms.InElementIndex;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetControlVisibility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InKey                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               bVisibility                                                      (Edit, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

bool URigHierarchy::SetControlVisibility(struct FRigElementKey* InKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetControlVisibility");

	Params::URigHierarchy_SetControlVisibility_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InKey != nullptr)
		*InKey = std::move(Parms.InKey);

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetControlValueByIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InElementIndex                                                   (Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// struct FRigControlValue            InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class ERigControlValueType    InValueType                                                      (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               bSetupUndo                                                       (Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               bPrintPythonCommands                                             (ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

bool URigHierarchy::SetControlValueByIndex(int32* InElementIndex, enum class ERigControlValueType* InValueType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetControlValueByIndex");

	Params::URigHierarchy_SetControlValueByIndex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InElementIndex != nullptr)
		*InElementIndex = Parms.InElementIndex;

	if (InValueType != nullptr)
		*InValueType = Parms.InValueType;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetControlValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InKey                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// struct FRigControlValue            InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class ERigControlValueType    InValueType                                                      (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               bSetupUndo                                                       (Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               bPrintPythonCommands                                             (ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

bool URigHierarchy::SetControlValue(struct FRigElementKey* InKey, enum class ERigControlValueType* InValueType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetControlValue");

	Params::URigHierarchy_SetControlValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InKey != nullptr)
		*InKey = std::move(Parms.InKey);

	if (InValueType != nullptr)
		*InValueType = Parms.InValueType;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetControlShapeTransformByIndex
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// int32                              InElementIndex                                                   (Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// struct FTransform                  InTransform                                                      (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, GlobalConfig, SubobjectReference)
// bool                               bInitial                                                         (BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               bSetupUndo                                                       (Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

bool URigHierarchy::SetControlShapeTransformByIndex(int32* InElementIndex, const struct FTransform& InTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetControlShapeTransformByIndex");

	Params::URigHierarchy_SetControlShapeTransformByIndex_Params Parms{};

	Parms.InTransform = InTransform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InElementIndex != nullptr)
		*InElementIndex = Parms.InElementIndex;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetControlShapeTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InKey                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// struct FTransform                  InTransform                                                      (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, GlobalConfig, SubobjectReference)
// bool                               bInitial                                                         (BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               bSetupUndo                                                       (Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

bool URigHierarchy::SetControlShapeTransform(struct FRigElementKey* InKey, const struct FTransform& InTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetControlShapeTransform");

	Params::URigHierarchy_SetControlShapeTransform_Params Parms{};

	Parms.InTransform = InTransform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InKey != nullptr)
		*InKey = std::move(Parms.InKey);

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetControlSettingsByIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InElementIndex                                                   (Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// struct FRigControlSettings         InSettings                                                       (Edit, ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               bSetupUndo                                                       (Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               bForce                                                           (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               bPrintPythonCommands                                             (ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

bool URigHierarchy::SetControlSettingsByIndex(int32* InElementIndex, bool bForce)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetControlSettingsByIndex");

	Params::URigHierarchy_SetControlSettingsByIndex_Params Parms{};

	Parms.bForce = bForce;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InElementIndex != nullptr)
		*InElementIndex = Parms.InElementIndex;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetControlSettings
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InKey                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// struct FRigControlSettings         InSettings                                                       (Edit, ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               bSetupUndo                                                       (Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               bForce                                                           (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               bPrintPythonCommands                                             (ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

bool URigHierarchy::SetControlSettings(struct FRigElementKey* InKey, bool bForce)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetControlSettings");

	Params::URigHierarchy_SetControlSettings_Params Parms{};

	Parms.bForce = bForce;

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
// int32                              InElementIndex                                                   (Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// struct FRotator                    InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               bInitial                                                         (BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               bFixEulerFlips                                                   (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

bool URigHierarchy::SetControlPreferredRotatorByIndex(int32* InElementIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetControlPreferredRotatorByIndex");

	Params::URigHierarchy_SetControlPreferredRotatorByIndex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InElementIndex != nullptr)
		*InElementIndex = Parms.InElementIndex;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetControlPreferredRotator
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InKey                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// struct FRotator                    InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               bInitial                                                         (BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               bFixEulerFlips                                                   (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

bool URigHierarchy::SetControlPreferredRotator(struct FRigElementKey* InKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetControlPreferredRotator");

	Params::URigHierarchy_SetControlPreferredRotator_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InKey != nullptr)
		*InKey = std::move(Parms.InKey);

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetControlOffsetTransformByIndex
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// int32                              InElementIndex                                                   (Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// struct FTransform                  InTransform                                                      (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, GlobalConfig, SubobjectReference)
// bool                               bInitial                                                         (BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               bAffectChildren                                                  (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
// bool                               bSetupUndo                                                       (Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               bPrintPythonCommands                                             (ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

bool URigHierarchy::SetControlOffsetTransformByIndex(int32* InElementIndex, const struct FTransform& InTransform, bool* bAffectChildren)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetControlOffsetTransformByIndex");

	Params::URigHierarchy_SetControlOffsetTransformByIndex_Params Parms{};

	Parms.InTransform = InTransform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InElementIndex != nullptr)
		*InElementIndex = Parms.InElementIndex;

	if (bAffectChildren != nullptr)
		*bAffectChildren = Parms.bAffectChildren;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetControlOffsetTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InKey                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// struct FTransform                  InTransform                                                      (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, GlobalConfig, SubobjectReference)
// bool                               bInitial                                                         (BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               bAffectChildren                                                  (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
// bool                               bSetupUndo                                                       (Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               bPrintPythonCommands                                             (ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

bool URigHierarchy::SetControlOffsetTransform(struct FRigElementKey* InKey, const struct FTransform& InTransform, bool* bAffectChildren)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetControlOffsetTransform");

	Params::URigHierarchy_SetControlOffsetTransform_Params Parms{};

	Parms.InTransform = InTransform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InKey != nullptr)
		*InKey = std::move(Parms.InKey);

	if (bAffectChildren != nullptr)
		*bAffectChildren = Parms.bAffectChildren;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetBoolMetadata
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchy::SetBoolMetadata(struct FRigElementKey* InItem, class FName* InMetadataName, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetBoolMetadata");

	Params::URigHierarchy_SetBoolMetadata_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InItem != nullptr)
		*InItem = std::move(Parms.InItem);

	if (InMetadataName != nullptr)
		*InMetadataName = Parms.InMetadataName;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetBoolArrayMetadata
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// TArray<bool>                       InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<bool> URigHierarchy::SetBoolArrayMetadata(struct FRigElementKey* InItem, class FName* InMetadataName, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetBoolArrayMetadata");

	Params::URigHierarchy_SetBoolArrayMetadata_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InItem != nullptr)
		*InItem = std::move(Parms.InItem);

	if (InMetadataName != nullptr)
		*InMetadataName = Parms.InMetadataName;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SendAutoKeyEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InElement                                                        (ExportObject, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// float                              InOffsetInSeconds                                                (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               bAsynchronous                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

struct FRigElementKey URigHierarchy::SendAutoKeyEvent(float* InOffsetInSeconds, bool* bAsynchronous)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SendAutoKeyEvent");

	Params::URigHierarchy_SendAutoKeyEvent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InOffsetInSeconds != nullptr)
		*InOffsetInSeconds = Parms.InOffsetInSeconds;

	if (bAsynchronous != nullptr)
		*bAsynchronous = Parms.bAsynchronous;

	return Parms.ReturnValue;

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
// enum class ERigElementType         InTypeFilter                                                     (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

void URigHierarchy::ResetPoseToInitial(enum class ERigElementType* InTypeFilter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "ResetPoseToInitial");

	Params::URigHierarchy_ResetPoseToInitial_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InTypeFilter != nullptr)
		*InTypeFilter = Parms.InTypeFilter;

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
// struct FRigElementKey              InItem                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URigHierarchy::RemoveMetadata(struct FRigElementKey* InItem, class FName* InMetadataName, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "RemoveMetadata");

	Params::URigHierarchy_RemoveMetadata_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InItem != nullptr)
		*InItem = std::move(Parms.InItem);

	if (InMetadataName != nullptr)
		*InMetadataName = Parms.InMetadataName;

}


// Function ControlRig.RigHierarchy.RemoveAllMetadata
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URigHierarchy::RemoveAllMetadata(struct FRigElementKey* InItem, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "RemoveAllMetadata");

	Params::URigHierarchy_RemoveAllMetadata_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InItem != nullptr)
		*InItem = std::move(Parms.InItem);

}


// Function ControlRig.RigHierarchy.Num
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URigHierarchy::Num(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "Num");

	Params::URigHierarchy_Num_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.MakeControlValueFromVector2D
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FRigControlValue            ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FVector2D URigHierarchy::MakeControlValueFromVector2D(const struct FRigControlValue& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "MakeControlValueFromVector2D");

	Params::URigHierarchy_MakeControlValueFromVector2D_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.MakeControlValueFromVector
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FRigControlValue            ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FVector URigHierarchy::MakeControlValueFromVector(const struct FRigControlValue& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "MakeControlValueFromVector");

	Params::URigHierarchy_MakeControlValueFromVector_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.MakeControlValueFromTransformNoScale
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FTransformNoScale           InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FRigControlValue            ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FTransformNoScale URigHierarchy::MakeControlValueFromTransformNoScale(const struct FRigControlValue& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "MakeControlValueFromTransformNoScale");

	Params::URigHierarchy_MakeControlValueFromTransformNoScale_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.MakeControlValueFromTransform
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform                  InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FRigControlValue            ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FTransform URigHierarchy::MakeControlValueFromTransform(const struct FRigControlValue& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "MakeControlValueFromTransform");

	Params::URigHierarchy_MakeControlValueFromTransform_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.MakeControlValueFromRotator
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                    InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FRigControlValue            ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FRotator URigHierarchy::MakeControlValueFromRotator(const struct FRigControlValue& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "MakeControlValueFromRotator");

	Params::URigHierarchy_MakeControlValueFromRotator_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.MakeControlValueFromInt
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FRigControlValue            ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

int32 URigHierarchy::MakeControlValueFromInt(const struct FRigControlValue& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "MakeControlValueFromInt");

	Params::URigHierarchy_MakeControlValueFromInt_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.MakeControlValueFromFloat
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FRigControlValue            ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float URigHierarchy::MakeControlValueFromFloat(const struct FRigControlValue& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "MakeControlValueFromFloat");

	Params::URigHierarchy_MakeControlValueFromFloat_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.MakeControlValueFromEulerTransform
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FEulerTransform             InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FRigControlValue            ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FEulerTransform URigHierarchy::MakeControlValueFromEulerTransform(const struct FRigControlValue& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "MakeControlValueFromEulerTransform");

	Params::URigHierarchy_MakeControlValueFromEulerTransform_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.MakeControlValueFromBool
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FRigControlValue            ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchy::MakeControlValueFromBool(const struct FRigControlValue& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "MakeControlValueFromBool");

	Params::URigHierarchy_MakeControlValueFromBool_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.IsValidIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              InElementIndex                                                   (Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URigHierarchy::IsValidIndex(int32* InElementIndex, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "IsValidIndex");

	Params::URigHierarchy_IsValidIndex_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InElementIndex != nullptr)
		*InElementIndex = Parms.InElementIndex;

}


// Function ControlRig.RigHierarchy.IsSelectedByIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              InIndex                                                          (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URigHierarchy::IsSelectedByIndex(int32* InIndex, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "IsSelectedByIndex");

	Params::URigHierarchy_IsSelectedByIndex_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InIndex != nullptr)
		*InIndex = Parms.InIndex;

}


// Function ControlRig.RigHierarchy.IsSelected
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URigHierarchy::IsSelected(struct FRigElementKey* InKey, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "IsSelected");

	Params::URigHierarchy_IsSelected_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InKey != nullptr)
		*InKey = std::move(Parms.InKey);

}


// Function ControlRig.RigHierarchy.IsProcedural
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URigHierarchy::IsProcedural(struct FRigElementKey* InKey, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "IsProcedural");

	Params::URigHierarchy_IsProcedural_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InKey != nullptr)
		*InKey = std::move(Parms.InKey);

}


// Function ControlRig.RigHierarchy.IsParentedTo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InChild                                                          (Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// struct FRigElementKey              InParent                                                         (OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URigHierarchy::IsParentedTo(struct FRigElementKey* InChild, struct FRigElementKey* InParent, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "IsParentedTo");

	Params::URigHierarchy_IsParentedTo_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InChild != nullptr)
		*InChild = std::move(Parms.InChild);

	if (InParent != nullptr)
		*InParent = std::move(Parms.InParent);

}


// Function ControlRig.RigHierarchy.IsCurveValueSetByIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              InElementIndex                                                   (Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URigHierarchy::IsCurveValueSetByIndex(int32* InElementIndex, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "IsCurveValueSetByIndex");

	Params::URigHierarchy_IsCurveValueSetByIndex_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InElementIndex != nullptr)
		*InElementIndex = Parms.InElementIndex;

}


// Function ControlRig.RigHierarchy.IsCurveValueSet
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URigHierarchy::IsCurveValueSet(struct FRigElementKey* InKey, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "IsCurveValueSet");

	Params::URigHierarchy_IsCurveValueSet_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InKey != nullptr)
		*InKey = std::move(Parms.InKey);

}


// Function ControlRig.RigHierarchy.IsControllerAvailable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URigHierarchy::IsControllerAvailable(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "IsControllerAvailable");

	Params::URigHierarchy_IsControllerAvailable_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.HasTag
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class FName                        InTag                                                            (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URigHierarchy::HasTag(struct FRigElementKey* InItem, class FName* InTag, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "HasTag");

	Params::URigHierarchy_HasTag_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InItem != nullptr)
		*InItem = std::move(Parms.InItem);

	if (InTag != nullptr)
		*InTag = Parms.InTag;

}


// Function ControlRig.RigHierarchy.GetVectorMetadata
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// struct FVector                     DefaultValue                                                     (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FVector                     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URigHierarchy::GetVectorMetadata(struct FRigElementKey* InItem, class FName* InMetadataName, struct FVector* DefaultValue, const struct FVector& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetVectorMetadata");

	Params::URigHierarchy_GetVectorMetadata_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InItem != nullptr)
		*InItem = std::move(Parms.InItem);

	if (InMetadataName != nullptr)
		*InMetadataName = Parms.InMetadataName;

	if (DefaultValue != nullptr)
		*DefaultValue = std::move(Parms.DefaultValue);

}


// Function ControlRig.RigHierarchy.GetVectorFromControlValue
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRigControlValue            InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FRigControlValue URigHierarchy::GetVectorFromControlValue(const struct FVector& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetVectorFromControlValue");

	Params::URigHierarchy_GetVectorFromControlValue_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetVectorArrayMetadata
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// TArray<struct FVector>             ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URigHierarchy::GetVectorArrayMetadata(struct FRigElementKey* InItem, class FName* InMetadataName, const TArray<struct FVector>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetVectorArrayMetadata");

	Params::URigHierarchy_GetVectorArrayMetadata_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InItem != nullptr)
		*InItem = std::move(Parms.InItem);

	if (InMetadataName != nullptr)
		*InMetadataName = Parms.InMetadataName;

}


// Function ControlRig.RigHierarchy.GetVector2DFromControlValue
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRigControlValue            InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector2D                   ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FRigControlValue URigHierarchy::GetVector2DFromControlValue(const struct FVector2D& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetVector2DFromControlValue");

	Params::URigHierarchy_GetVector2DFromControlValue_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetTransformNoScaleFromControlValue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FRigControlValue            InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FTransformNoScale           ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FRigControlValue URigHierarchy::GetTransformNoScaleFromControlValue(const struct FTransformNoScale& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetTransformNoScaleFromControlValue");

	Params::URigHierarchy_GetTransformNoScaleFromControlValue_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetTransformMetadata
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// struct FTransform                  DefaultValue                                                     (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FTransform                  ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URigHierarchy::GetTransformMetadata(struct FRigElementKey* InItem, class FName* InMetadataName, struct FTransform* DefaultValue, const struct FTransform& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetTransformMetadata");

	Params::URigHierarchy_GetTransformMetadata_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InItem != nullptr)
		*InItem = std::move(Parms.InItem);

	if (InMetadataName != nullptr)
		*InMetadataName = Parms.InMetadataName;

	if (DefaultValue != nullptr)
		*DefaultValue = std::move(Parms.DefaultValue);

}


// Function ControlRig.RigHierarchy.GetTransformFromControlValue
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRigControlValue            InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FTransform                  ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FRigControlValue URigHierarchy::GetTransformFromControlValue(const struct FTransform& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetTransformFromControlValue");

	Params::URigHierarchy_GetTransformFromControlValue_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetTransformArrayMetadata
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// TArray<struct FTransform>          ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URigHierarchy::GetTransformArrayMetadata(struct FRigElementKey* InItem, class FName* InMetadataName, const TArray<struct FTransform>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetTransformArrayMetadata");

	Params::URigHierarchy_GetTransformArrayMetadata_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InItem != nullptr)
		*InItem = std::move(Parms.InItem);

	if (InMetadataName != nullptr)
		*InMetadataName = Parms.InMetadataName;

}


// Function ControlRig.RigHierarchy.GetTags
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// TArray<class FName>                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URigHierarchy::GetTags(struct FRigElementKey* InItem, const TArray<class FName>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetTags");

	Params::URigHierarchy_GetTags_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InItem != nullptr)
		*InItem = std::move(Parms.InItem);

}


// Function ControlRig.RigHierarchy.GetSelectedKeys
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ERigElementType         InTypeFilter                                                     (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// TArray<struct FRigElementKey>      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URigHierarchy::GetSelectedKeys(enum class ERigElementType* InTypeFilter, const TArray<struct FRigElementKey>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetSelectedKeys");

	Params::URigHierarchy_GetSelectedKeys_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InTypeFilter != nullptr)
		*InTypeFilter = Parms.InTypeFilter;

}


// Function ControlRig.RigHierarchy.GetRotatorMetadata
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// struct FRotator                    DefaultValue                                                     (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FRotator                    ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URigHierarchy::GetRotatorMetadata(struct FRigElementKey* InItem, class FName* InMetadataName, struct FRotator* DefaultValue, const struct FRotator& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetRotatorMetadata");

	Params::URigHierarchy_GetRotatorMetadata_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InItem != nullptr)
		*InItem = std::move(Parms.InItem);

	if (InMetadataName != nullptr)
		*InMetadataName = Parms.InMetadataName;

	if (DefaultValue != nullptr)
		*DefaultValue = std::move(Parms.DefaultValue);

}


// Function ControlRig.RigHierarchy.GetRotatorFromControlValue
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRigControlValue            InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FRotator                    ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FRigControlValue URigHierarchy::GetRotatorFromControlValue(const struct FRotator& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetRotatorFromControlValue");

	Params::URigHierarchy_GetRotatorFromControlValue_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetRotatorArrayMetadata
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// TArray<struct FRotator>            ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URigHierarchy::GetRotatorArrayMetadata(struct FRigElementKey* InItem, class FName* InMetadataName, const TArray<struct FRotator>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetRotatorArrayMetadata");

	Params::URigHierarchy_GetRotatorArrayMetadata_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InItem != nullptr)
		*InItem = std::move(Parms.InItem);

	if (InMetadataName != nullptr)
		*InMetadataName = Parms.InMetadataName;

}


// Function ControlRig.RigHierarchy.GetRootElementKeys
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FRigElementKey>      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URigHierarchy::GetRootElementKeys(const TArray<struct FRigElementKey>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetRootElementKeys");

	Params::URigHierarchy_GetRootElementKeys_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.GetRigidBodyKeys
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               bTraverse                                                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// TArray<struct FRigElementKey>      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URigHierarchy::GetRigidBodyKeys(bool* bTraverse, const TArray<struct FRigElementKey>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetRigidBodyKeys");

	Params::URigHierarchy_GetRigidBodyKeys_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bTraverse != nullptr)
		*bTraverse = Parms.bTraverse;

}


// Function ControlRig.RigHierarchy.GetRigElementKeyMetadata
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// struct FRigElementKey              DefaultValue                                                     (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FRigElementKey              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URigHierarchy::GetRigElementKeyMetadata(struct FRigElementKey* InItem, class FName* InMetadataName, struct FRigElementKey* DefaultValue, const struct FRigElementKey& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetRigElementKeyMetadata");

	Params::URigHierarchy_GetRigElementKeyMetadata_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InItem != nullptr)
		*InItem = std::move(Parms.InItem);

	if (InMetadataName != nullptr)
		*InMetadataName = Parms.InMetadataName;

	if (DefaultValue != nullptr)
		*DefaultValue = std::move(Parms.DefaultValue);

}


// Function ControlRig.RigHierarchy.GetRigElementKeyArrayMetadata
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// TArray<struct FRigElementKey>      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URigHierarchy::GetRigElementKeyArrayMetadata(struct FRigElementKey* InItem, class FName* InMetadataName, const TArray<struct FRigElementKey>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetRigElementKeyArrayMetadata");

	Params::URigHierarchy_GetRigElementKeyArrayMetadata_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InItem != nullptr)
		*InItem = std::move(Parms.InItem);

	if (InMetadataName != nullptr)
		*InMetadataName = Parms.InMetadataName;

}


// Function ControlRig.RigHierarchy.GetReferenceKeys
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               bTraverse                                                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// TArray<struct FRigElementKey>      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URigHierarchy::GetReferenceKeys(bool* bTraverse, const TArray<struct FRigElementKey>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetReferenceKeys");

	Params::URigHierarchy_GetReferenceKeys_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bTraverse != nullptr)
		*bTraverse = Parms.bTraverse;

}


// Function ControlRig.RigHierarchy.GetQuatMetadata
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// struct FQuat                       DefaultValue                                                     (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FQuat                       ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URigHierarchy::GetQuatMetadata(struct FRigElementKey* InItem, class FName* InMetadataName, struct FQuat* DefaultValue, const struct FQuat& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetQuatMetadata");

	Params::URigHierarchy_GetQuatMetadata_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InItem != nullptr)
		*InItem = std::move(Parms.InItem);

	if (InMetadataName != nullptr)
		*InMetadataName = Parms.InMetadataName;

	if (DefaultValue != nullptr)
		*DefaultValue = std::move(Parms.DefaultValue);

}


// Function ControlRig.RigHierarchy.GetQuatArrayMetadata
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// TArray<struct FQuat>               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URigHierarchy::GetQuatArrayMetadata(struct FRigElementKey* InItem, class FName* InMetadataName, const TArray<struct FQuat>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetQuatArrayMetadata");

	Params::URigHierarchy_GetQuatArrayMetadata_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InItem != nullptr)
		*InItem = std::move(Parms.InItem);

	if (InMetadataName != nullptr)
		*InMetadataName = Parms.InMetadataName;

}


// Function ControlRig.RigHierarchy.GetPreviousParent
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// struct FRigElementKey              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URigHierarchy::GetPreviousParent(struct FRigElementKey* InKey, const struct FRigElementKey& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetPreviousParent");

	Params::URigHierarchy_GetPreviousParent_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InKey != nullptr)
		*InKey = std::move(Parms.InKey);

}


// Function ControlRig.RigHierarchy.GetPreviousName
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class FName                        ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URigHierarchy::GetPreviousName(struct FRigElementKey* InKey, class FName ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetPreviousName");

	Params::URigHierarchy_GetPreviousName_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InKey != nullptr)
		*InKey = std::move(Parms.InKey);

}


// Function ControlRig.RigHierarchy.GetPose
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               bInitial                                                         (BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// struct FRigPose                    ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchy::GetPose(const struct FRigPose& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetPose");

	Params::URigHierarchy_GetPose_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetParentWeightArray
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InChild                                                          (Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               bInitial                                                         (BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FRigElementWeight>   ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchy::GetParentWeightArray(struct FRigElementKey* InChild, const TArray<struct FRigElementWeight>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetParentWeightArray");

	Params::URigHierarchy_GetParentWeightArray_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InChild != nullptr)
		*InChild = std::move(Parms.InChild);

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetParentWeight
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InChild                                                          (Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// struct FRigElementKey              InParent                                                         (OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
// bool                               bInitial                                                         (BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// struct FRigElementWeight           ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchy::GetParentWeight(struct FRigElementKey* InChild, struct FRigElementKey* InParent, const struct FRigElementWeight& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetParentWeight");

	Params::URigHierarchy_GetParentWeight_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InChild != nullptr)
		*InChild = std::move(Parms.InChild);

	if (InParent != nullptr)
		*InParent = std::move(Parms.InParent);

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetParentTransformByIndex
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              InElementIndex                                                   (Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               bInitial                                                         (BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// struct FTransform                  ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchy::GetParentTransformByIndex(int32* InElementIndex, const struct FTransform& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetParentTransformByIndex");

	Params::URigHierarchy_GetParentTransformByIndex_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InElementIndex != nullptr)
		*InElementIndex = Parms.InElementIndex;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetParentTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               bInitial                                                         (BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// struct FTransform                  ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchy::GetParentTransform(struct FRigElementKey* InKey, const struct FTransform& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetParentTransform");

	Params::URigHierarchy_GetParentTransform_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InKey != nullptr)
		*InKey = std::move(Parms.InKey);

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetParents
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               bRecursive                                                       (Edit, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FRigElementKey>      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchy::GetParents(struct FRigElementKey* InKey, const TArray<struct FRigElementKey>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetParents");

	Params::URigHierarchy_GetParents_Params Parms{};

	Parms.ReturnValue = ReturnValue;

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
// struct FRigElementKey              InKey                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URigHierarchy::GetNumberOfParents(struct FRigElementKey* InKey, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetNumberOfParents");

	Params::URigHierarchy_GetNumberOfParents_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InKey != nullptr)
		*InKey = std::move(Parms.InKey);

}


// Function ControlRig.RigHierarchy.GetNullKeys
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               bTraverse                                                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// TArray<struct FRigElementKey>      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URigHierarchy::GetNullKeys(bool* bTraverse, const TArray<struct FRigElementKey>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetNullKeys");

	Params::URigHierarchy_GetNullKeys_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bTraverse != nullptr)
		*bTraverse = Parms.bTraverse;

}


// Function ControlRig.RigHierarchy.GetNameMetadata
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class FName                        DefaultValue                                                     (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// class FName                        ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URigHierarchy::GetNameMetadata(struct FRigElementKey* InItem, class FName* InMetadataName, class FName* DefaultValue, class FName ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetNameMetadata");

	Params::URigHierarchy_GetNameMetadata_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InItem != nullptr)
		*InItem = std::move(Parms.InItem);

	if (InMetadataName != nullptr)
		*InMetadataName = Parms.InMetadataName;

	if (DefaultValue != nullptr)
		*DefaultValue = Parms.DefaultValue;

}


// Function ControlRig.RigHierarchy.GetNameArrayMetadata
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// TArray<class FName>                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URigHierarchy::GetNameArrayMetadata(struct FRigElementKey* InItem, class FName* InMetadataName, const TArray<class FName>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetNameArrayMetadata");

	Params::URigHierarchy_GetNameArrayMetadata_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InItem != nullptr)
		*InItem = std::move(Parms.InItem);

	if (InMetadataName != nullptr)
		*InMetadataName = Parms.InMetadataName;

}


// Function ControlRig.RigHierarchy.GetMetadataType
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// enum class ERigMetadataType        ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URigHierarchy::GetMetadataType(struct FRigElementKey* InItem, class FName* InMetadataName, enum class ERigMetadataType ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetMetadataType");

	Params::URigHierarchy_GetMetadataType_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InItem != nullptr)
		*InItem = std::move(Parms.InItem);

	if (InMetadataName != nullptr)
		*InMetadataName = Parms.InMetadataName;

}


// Function ControlRig.RigHierarchy.GetMetadataNames
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// TArray<class FName>                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URigHierarchy::GetMetadataNames(struct FRigElementKey* InItem, const TArray<class FName>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetMetadataNames");

	Params::URigHierarchy_GetMetadataNames_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InItem != nullptr)
		*InItem = std::move(Parms.InItem);

}


// Function ControlRig.RigHierarchy.GetLocalTransformByIndex
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              InElementIndex                                                   (Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               bInitial                                                         (BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// struct FTransform                  ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchy::GetLocalTransformByIndex(int32* InElementIndex, const struct FTransform& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetLocalTransformByIndex");

	Params::URigHierarchy_GetLocalTransformByIndex_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InElementIndex != nullptr)
		*InElementIndex = Parms.InElementIndex;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetLocalTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               bInitial                                                         (BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// struct FTransform                  ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchy::GetLocalTransform(struct FRigElementKey* InKey, const struct FTransform& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetLocalTransform");

	Params::URigHierarchy_GetLocalTransform_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InKey != nullptr)
		*InKey = std::move(Parms.InKey);

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetLocalIndex_ForBlueprint
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URigHierarchy::GetLocalIndex_ForBlueprint(struct FRigElementKey* InKey, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetLocalIndex_ForBlueprint");

	Params::URigHierarchy_GetLocalIndex_ForBlueprint_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InKey != nullptr)
		*InKey = std::move(Parms.InKey);

}


// Function ControlRig.RigHierarchy.GetLocalControlShapeTransformByIndex
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              InElementIndex                                                   (Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               bInitial                                                         (BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// struct FTransform                  ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchy::GetLocalControlShapeTransformByIndex(int32* InElementIndex, const struct FTransform& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetLocalControlShapeTransformByIndex");

	Params::URigHierarchy_GetLocalControlShapeTransformByIndex_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InElementIndex != nullptr)
		*InElementIndex = Parms.InElementIndex;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetLocalControlShapeTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               bInitial                                                         (BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// struct FTransform                  ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchy::GetLocalControlShapeTransform(struct FRigElementKey* InKey, const struct FTransform& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetLocalControlShapeTransform");

	Params::URigHierarchy_GetLocalControlShapeTransform_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InKey != nullptr)
		*InKey = std::move(Parms.InKey);

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetLinearColorMetadata
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// struct FLinearColor                DefaultValue                                                     (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FLinearColor                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URigHierarchy::GetLinearColorMetadata(struct FRigElementKey* InItem, class FName* InMetadataName, struct FLinearColor* DefaultValue, const struct FLinearColor& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetLinearColorMetadata");

	Params::URigHierarchy_GetLinearColorMetadata_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InItem != nullptr)
		*InItem = std::move(Parms.InItem);

	if (InMetadataName != nullptr)
		*InMetadataName = Parms.InMetadataName;

	if (DefaultValue != nullptr)
		*DefaultValue = std::move(Parms.DefaultValue);

}


// Function ControlRig.RigHierarchy.GetLinearColorArrayMetadata
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// TArray<struct FLinearColor>        ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URigHierarchy::GetLinearColorArrayMetadata(struct FRigElementKey* InItem, class FName* InMetadataName, const TArray<struct FLinearColor>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetLinearColorArrayMetadata");

	Params::URigHierarchy_GetLinearColorArrayMetadata_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InItem != nullptr)
		*InItem = std::move(Parms.InItem);

	if (InMetadataName != nullptr)
		*InMetadataName = Parms.InMetadataName;

}


// Function ControlRig.RigHierarchy.GetKeys
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<int32>                      InElementIndices                                                 (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// TArray<struct FRigElementKey>      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URigHierarchy::GetKeys(TArray<int32>* InElementIndices, const TArray<struct FRigElementKey>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetKeys");

	Params::URigHierarchy_GetKeys_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InElementIndices != nullptr)
		*InElementIndices = std::move(Parms.InElementIndices);

}


// Function ControlRig.RigHierarchy.GetKey
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              InElementIndex                                                   (Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// struct FRigElementKey              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URigHierarchy::GetKey(int32* InElementIndex, const struct FRigElementKey& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetKey");

	Params::URigHierarchy_GetKey_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InElementIndex != nullptr)
		*InElementIndex = Parms.InElementIndex;

}


// Function ControlRig.RigHierarchy.GetIntFromControlValue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FRigControlValue            InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FRigControlValue URigHierarchy::GetIntFromControlValue(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetIntFromControlValue");

	Params::URigHierarchy_GetIntFromControlValue_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetInt32Metadata
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// int32                              DefaultValue                                                     (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URigHierarchy::GetInt32Metadata(struct FRigElementKey* InItem, class FName* InMetadataName, int32* DefaultValue, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetInt32Metadata");

	Params::URigHierarchy_GetInt32Metadata_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InItem != nullptr)
		*InItem = std::move(Parms.InItem);

	if (InMetadataName != nullptr)
		*InMetadataName = Parms.InMetadataName;

	if (DefaultValue != nullptr)
		*DefaultValue = Parms.DefaultValue;

}


// Function ControlRig.RigHierarchy.GetInt32ArrayMetadata
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// TArray<int32>                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URigHierarchy::GetInt32ArrayMetadata(struct FRigElementKey* InItem, class FName* InMetadataName, const TArray<int32>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetInt32ArrayMetadata");

	Params::URigHierarchy_GetInt32ArrayMetadata_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InItem != nullptr)
		*InItem = std::move(Parms.InItem);

	if (InMetadataName != nullptr)
		*InMetadataName = Parms.InMetadataName;

}


// Function ControlRig.RigHierarchy.GetIndex_ForBlueprint
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URigHierarchy::GetIndex_ForBlueprint(struct FRigElementKey* InKey, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetIndex_ForBlueprint");

	Params::URigHierarchy_GetIndex_ForBlueprint_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InKey != nullptr)
		*InKey = std::move(Parms.InKey);

}


// Function ControlRig.RigHierarchy.GetGlobalTransformByIndex
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              InElementIndex                                                   (Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               bInitial                                                         (BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// struct FTransform                  ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchy::GetGlobalTransformByIndex(int32* InElementIndex, const struct FTransform& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetGlobalTransformByIndex");

	Params::URigHierarchy_GetGlobalTransformByIndex_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InElementIndex != nullptr)
		*InElementIndex = Parms.InElementIndex;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetGlobalTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               bInitial                                                         (BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// struct FTransform                  ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchy::GetGlobalTransform(struct FRigElementKey* InKey, const struct FTransform& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetGlobalTransform");

	Params::URigHierarchy_GetGlobalTransform_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InKey != nullptr)
		*InKey = std::move(Parms.InKey);

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetGlobalControlShapeTransformByIndex
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              InElementIndex                                                   (Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               bInitial                                                         (BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// struct FTransform                  ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchy::GetGlobalControlShapeTransformByIndex(int32* InElementIndex, const struct FTransform& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetGlobalControlShapeTransformByIndex");

	Params::URigHierarchy_GetGlobalControlShapeTransformByIndex_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InElementIndex != nullptr)
		*InElementIndex = Parms.InElementIndex;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetGlobalControlShapeTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               bInitial                                                         (BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// struct FTransform                  ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchy::GetGlobalControlShapeTransform(struct FRigElementKey* InKey, const struct FTransform& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetGlobalControlShapeTransform");

	Params::URigHierarchy_GetGlobalControlShapeTransform_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InKey != nullptr)
		*InKey = std::move(Parms.InKey);

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetGlobalControlOffsetTransformByIndex
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              InElementIndex                                                   (Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               bInitial                                                         (BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// struct FTransform                  ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchy::GetGlobalControlOffsetTransformByIndex(int32* InElementIndex, const struct FTransform& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetGlobalControlOffsetTransformByIndex");

	Params::URigHierarchy_GetGlobalControlOffsetTransformByIndex_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InElementIndex != nullptr)
		*InElementIndex = Parms.InElementIndex;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetGlobalControlOffsetTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               bInitial                                                         (BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// struct FTransform                  ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchy::GetGlobalControlOffsetTransform(struct FRigElementKey* InKey, const struct FTransform& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetGlobalControlOffsetTransform");

	Params::URigHierarchy_GetGlobalControlOffsetTransform_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InKey != nullptr)
		*InKey = std::move(Parms.InKey);

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetFloatMetadata
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// float                              DefaultValue                                                     (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URigHierarchy::GetFloatMetadata(struct FRigElementKey* InItem, class FName* InMetadataName, float* DefaultValue, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetFloatMetadata");

	Params::URigHierarchy_GetFloatMetadata_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InItem != nullptr)
		*InItem = std::move(Parms.InItem);

	if (InMetadataName != nullptr)
		*InMetadataName = Parms.InMetadataName;

	if (DefaultValue != nullptr)
		*DefaultValue = Parms.DefaultValue;

}


// Function ControlRig.RigHierarchy.GetFloatFromControlValue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FRigControlValue            InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FRigControlValue URigHierarchy::GetFloatFromControlValue(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetFloatFromControlValue");

	Params::URigHierarchy_GetFloatFromControlValue_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetFloatArrayMetadata
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// TArray<float>                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URigHierarchy::GetFloatArrayMetadata(struct FRigElementKey* InItem, class FName* InMetadataName, const TArray<float>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetFloatArrayMetadata");

	Params::URigHierarchy_GetFloatArrayMetadata_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InItem != nullptr)
		*InItem = std::move(Parms.InItem);

	if (InMetadataName != nullptr)
		*InMetadataName = Parms.InMetadataName;

}


// Function ControlRig.RigHierarchy.GetFirstParent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// struct FRigElementKey              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URigHierarchy::GetFirstParent(struct FRigElementKey* InKey, const struct FRigElementKey& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetFirstParent");

	Params::URigHierarchy_GetFirstParent_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InKey != nullptr)
		*InKey = std::move(Parms.InKey);

}


// Function ControlRig.RigHierarchy.GetEulerTransformFromControlValue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FRigControlValue            InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FEulerTransform             ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FRigControlValue URigHierarchy::GetEulerTransformFromControlValue(const struct FEulerTransform& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetEulerTransformFromControlValue");

	Params::URigHierarchy_GetEulerTransformFromControlValue_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetDefaultParent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// struct FRigElementKey              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URigHierarchy::GetDefaultParent(struct FRigElementKey* InKey, const struct FRigElementKey& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetDefaultParent");

	Params::URigHierarchy_GetDefaultParent_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InKey != nullptr)
		*InKey = std::move(Parms.InKey);

}


// Function ControlRig.RigHierarchy.GetCurveValueByIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              InElementIndex                                                   (Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URigHierarchy::GetCurveValueByIndex(int32* InElementIndex, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetCurveValueByIndex");

	Params::URigHierarchy_GetCurveValueByIndex_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InElementIndex != nullptr)
		*InElementIndex = Parms.InElementIndex;

}


// Function ControlRig.RigHierarchy.GetCurveValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URigHierarchy::GetCurveValue(struct FRigElementKey* InKey, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetCurveValue");

	Params::URigHierarchy_GetCurveValue_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InKey != nullptr)
		*InKey = std::move(Parms.InKey);

}


// Function ControlRig.RigHierarchy.GetCurveKeys
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FRigElementKey>      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URigHierarchy::GetCurveKeys(const TArray<struct FRigElementKey>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetCurveKeys");

	Params::URigHierarchy_GetCurveKeys_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.GetControlValueByIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              InElementIndex                                                   (Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// enum class ERigControlValueType    InValueType                                                      (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// struct FRigControlValue            ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URigHierarchy::GetControlValueByIndex(int32* InElementIndex, enum class ERigControlValueType* InValueType, const struct FRigControlValue& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetControlValueByIndex");

	Params::URigHierarchy_GetControlValueByIndex_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InElementIndex != nullptr)
		*InElementIndex = Parms.InElementIndex;

	if (InValueType != nullptr)
		*InValueType = Parms.InValueType;

}


// Function ControlRig.RigHierarchy.GetControlValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// enum class ERigControlValueType    InValueType                                                      (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// struct FRigControlValue            ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URigHierarchy::GetControlValue(struct FRigElementKey* InKey, enum class ERigControlValueType* InValueType, const struct FRigControlValue& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetControlValue");

	Params::URigHierarchy_GetControlValue_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InKey != nullptr)
		*InKey = std::move(Parms.InKey);

	if (InValueType != nullptr)
		*InValueType = Parms.InValueType;

}


// Function ControlRig.RigHierarchy.GetControlPreferredRotatorByIndex
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              InElementIndex                                                   (Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               bInitial                                                         (BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// struct FRotator                    ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchy::GetControlPreferredRotatorByIndex(int32* InElementIndex, const struct FRotator& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetControlPreferredRotatorByIndex");

	Params::URigHierarchy_GetControlPreferredRotatorByIndex_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InElementIndex != nullptr)
		*InElementIndex = Parms.InElementIndex;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetControlPreferredRotator
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               bInitial                                                         (BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// struct FRotator                    ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchy::GetControlPreferredRotator(struct FRigElementKey* InKey, const struct FRotator& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetControlPreferredRotator");

	Params::URigHierarchy_GetControlPreferredRotator_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InKey != nullptr)
		*InKey = std::move(Parms.InKey);

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetController
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bCreateIfNeeded                                                  (ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class URigHierarchyController*     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URigHierarchy::GetController(bool bCreateIfNeeded, class URigHierarchyController* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetController");

	Params::URigHierarchy_GetController_Params Parms{};

	Parms.bCreateIfNeeded = bCreateIfNeeded;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.GetControlKeys
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               bTraverse                                                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// TArray<struct FRigElementKey>      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URigHierarchy::GetControlKeys(bool* bTraverse, const TArray<struct FRigElementKey>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetControlKeys");

	Params::URigHierarchy_GetControlKeys_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bTraverse != nullptr)
		*bTraverse = Parms.bTraverse;

}


// Function ControlRig.RigHierarchy.GetChildren
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               bRecursive                                                       (Edit, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FRigElementKey>      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchy::GetChildren(struct FRigElementKey* InKey, const TArray<struct FRigElementKey>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetChildren");

	Params::URigHierarchy_GetChildren_Params Parms{};

	Parms.ReturnValue = ReturnValue;

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
// struct FRigElementKey              InItem                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               DefaultValue                                                     (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URigHierarchy::GetBoolMetadata(struct FRigElementKey* InItem, class FName* InMetadataName, bool* DefaultValue, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetBoolMetadata");

	Params::URigHierarchy_GetBoolMetadata_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InItem != nullptr)
		*InItem = std::move(Parms.InItem);

	if (InMetadataName != nullptr)
		*InMetadataName = Parms.InMetadataName;

	if (DefaultValue != nullptr)
		*DefaultValue = Parms.DefaultValue;

}


// Function ControlRig.RigHierarchy.GetBoolArrayMetadata
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class FName                        InMetadataName                                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// TArray<bool>                       ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URigHierarchy::GetBoolArrayMetadata(struct FRigElementKey* InItem, class FName* InMetadataName, const TArray<bool>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetBoolArrayMetadata");

	Params::URigHierarchy_GetBoolArrayMetadata_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InItem != nullptr)
		*InItem = std::move(Parms.InItem);

	if (InMetadataName != nullptr)
		*InMetadataName = Parms.InMetadataName;

}


// Function ControlRig.RigHierarchy.GetBoneKeys
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               bTraverse                                                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// TArray<struct FRigElementKey>      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URigHierarchy::GetBoneKeys(bool* bTraverse, const TArray<struct FRigElementKey>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetBoneKeys");

	Params::URigHierarchy_GetBoneKeys_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bTraverse != nullptr)
		*bTraverse = Parms.bTraverse;

}


// Function ControlRig.RigHierarchy.GetAllKeys_ForBlueprint
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               bTraverse                                                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// TArray<struct FRigElementKey>      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URigHierarchy::GetAllKeys_ForBlueprint(bool* bTraverse, const TArray<struct FRigElementKey>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetAllKeys_ForBlueprint");

	Params::URigHierarchy_GetAllKeys_ForBlueprint_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bTraverse != nullptr)
		*bTraverse = Parms.bTraverse;

}


// Function ControlRig.RigHierarchy.FindNull_ForBlueprintOnly
// (Final, Native, Private, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// struct FRigNullElement             ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URigHierarchy::FindNull_ForBlueprintOnly(struct FRigElementKey* InKey, const struct FRigNullElement& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "FindNull_ForBlueprintOnly");

	Params::URigHierarchy_FindNull_ForBlueprintOnly_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InKey != nullptr)
		*InKey = std::move(Parms.InKey);

}


// Function ControlRig.RigHierarchy.FindControl_ForBlueprintOnly
// (Final, Native, Private, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// struct FRigControlElement          ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URigHierarchy::FindControl_ForBlueprintOnly(struct FRigElementKey* InKey, const struct FRigControlElement& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "FindControl_ForBlueprintOnly");

	Params::URigHierarchy_FindControl_ForBlueprintOnly_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InKey != nullptr)
		*InKey = std::move(Parms.InKey);

}


// Function ControlRig.RigHierarchy.FindBone_ForBlueprintOnly
// (Final, Native, Private, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// struct FRigBoneElement             ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URigHierarchy::FindBone_ForBlueprintOnly(struct FRigElementKey* InKey, const struct FRigBoneElement& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "FindBone_ForBlueprintOnly");

	Params::URigHierarchy_FindBone_ForBlueprintOnly_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InKey != nullptr)
		*InKey = std::move(Parms.InKey);

}


// Function ControlRig.RigHierarchy.CopyPose
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class URigHierarchy*               InHierarchy                                                      (ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               bCurrent                                                         (ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               bInitial                                                         (BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               bWeights                                                         (Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               bMatchPoseInGlobalIfNeeded                                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

bool URigHierarchy::CopyPose(class URigHierarchy** InHierarchy, bool* bCurrent, bool* bWeights, bool* bMatchPoseInGlobalIfNeeded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "CopyPose");

	Params::URigHierarchy_CopyPose_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InHierarchy != nullptr)
		*InHierarchy = Parms.InHierarchy;

	if (bCurrent != nullptr)
		*bCurrent = Parms.bCurrent;

	if (bWeights != nullptr)
		*bWeights = Parms.bWeights;

	if (bMatchPoseInGlobalIfNeeded != nullptr)
		*bMatchPoseInGlobalIfNeeded = Parms.bMatchPoseInGlobalIfNeeded;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.CopyHierarchy
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class URigHierarchy*               InHierarchy                                                      (ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

void URigHierarchy::CopyHierarchy(class URigHierarchy** InHierarchy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "CopyHierarchy");

	Params::URigHierarchy_CopyHierarchy_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InHierarchy != nullptr)
		*InHierarchy = Parms.InHierarchy;

}


// Function ControlRig.RigHierarchy.Contains_ForBlueprint
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URigHierarchy::Contains_ForBlueprint(struct FRigElementKey* InKey, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "Contains_ForBlueprint");

	Params::URigHierarchy_Contains_ForBlueprint_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InKey != nullptr)
		*InKey = std::move(Parms.InKey);

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
// class UClass*                      InInteractionRigClass                                            (ConstParm, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UControlRig::SetInteractionRigClass(class UClass** InInteractionRigClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRig", "SetInteractionRigClass");

	Params::UControlRig_SetInteractionRigClass_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InInteractionRigClass != nullptr)
		*InInteractionRigClass = Parms.InInteractionRigClass;

}


// Function ControlRig.ControlRig.SetInteractionRig
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UControlRig*                 InInteractionRig                                                 (Edit, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UControlRig::SetInteractionRig(class UControlRig** InInteractionRig)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRig", "SetInteractionRig");

	Params::UControlRig_SetInteractionRig_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InInteractionRig != nullptr)
		*InInteractionRig = Parms.InInteractionRig;

}


// Function ControlRig.ControlRig.SelectControl
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InControlName                                                    (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               bSelect                                                          (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class FName UControlRig::SelectControl(bool* bSelect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRig", "SelectControl");

	Params::UControlRig_SelectControl_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bSelect != nullptr)
		*bSelect = Parms.bSelect;

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
// class UControlRig*                 Rig                                                              (ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, DuplicateTransient)
// struct FRigControlElement          Control                                                          (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor)
// bool                               bSelected                                                        (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool UControlRig::OnControlSelectedBP__DelegateSignature(struct FRigControlElement* Control)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRig", "OnControlSelectedBP__DelegateSignature");

	Params::UControlRig_OnControlSelectedBP__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Control != nullptr)
		*Control = std::move(Parms.Control);

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRig.IsControlSelected
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        InControlName                                                    (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class FName UControlRig::IsControlSelected(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRig", "IsControlSelected");

	Params::UControlRig_IsControlSelected_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRig.GetInteractionRigClass
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UControlRig::GetInteractionRigClass(class UClass* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRig", "GetInteractionRigClass");

	Params::UControlRig_GetInteractionRigClass_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRig.GetInteractionRig
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UControlRig*                 ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UControlRig::GetInteractionRig(class UControlRig* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRig", "GetInteractionRig");

	Params::UControlRig_GetInteractionRig_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRig.GetHostingActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UControlRig::GetHostingActor(class AActor* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRig", "GetHostingActor");

	Params::UControlRig_GetHostingActor_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRig.GetHierarchy
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class URigHierarchy*               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UControlRig::GetHierarchy(class URigHierarchy* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRig", "GetHierarchy");

	Params::UControlRig_GetHierarchy_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRig.FindControlRigs
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Outer                                                            (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor)
// class UClass*                      OptionalClass                                                    (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// TArray<class UControlRig*>         ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UClass* UControlRig::FindControlRigs(class UObject* Outer, const TArray<class UControlRig*>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRig", "FindControlRigs");

	Params::UControlRig_FindControlRigs_Params Parms{};

	Parms.Outer = Outer;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRig.CurrentControlSelection
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FName>                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UControlRig::CurrentControlSelection(const TArray<class FName>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRig", "CurrentControlSelection");

	Params::UControlRig_CurrentControlSelection_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRig.CreateTransformableControlHandle
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                     Outer                                                            (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor)
// class FName                        ControlName                                                      (BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class UTransformableControlHandle* ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class FName UControlRig::CreateTransformableControlHandle(class UObject* Outer, class UTransformableControlHandle* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRig", "CreateTransformableControlHandle");

	Params::UControlRig_CreateTransformableControlHandle_Params Parms{};

	Parms.Outer = Outer;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRig.ClearControlSelection
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UControlRig::ClearControlSelection(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRig", "ClearControlSelection");

	Params::UControlRig_ClearControlSelection_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// float                              DeltaTime                                                        (BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)

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
// class UObject*                     InObjectToBind                                                   (Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

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
// TArray<struct FControlRigComponentMappedElement>NewMappedElements                                                (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

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
// class FName                        SpaceName                                                        (ConstParm, ExportObject, Parm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
// struct FTransform                  InitialTransform                                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
// enum class EControlRigComponentSpaceSpace                                                            (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)

struct FTransform UControlRigComponent::SetInitialSpaceTransform(enum class EControlRigComponentSpace Space)
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

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigComponent.SetInitialBoneTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        BoneName                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
// struct FTransform                  InitialTransform                                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
// enum class EControlRigComponentSpaceSpace                                                            (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
// bool                               bPropagateToChildren                                             (Edit, ConstParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)

bool UControlRigComponent::SetInitialBoneTransform(class FName* BoneName, enum class EControlRigComponentSpace Space)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "SetInitialBoneTransform");

	Params::UControlRigComponent_SetInitialBoneTransform_Params Parms{};

	Parms.Space = Space;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (BoneName != nullptr)
		*BoneName = Parms.BoneName;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigComponent.SetControlVector2D
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        ControlName                                                      (BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector2D                   Value                                                            (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)

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
// class FName                        ControlName                                                      (BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FTransform                  Value                                                            (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
// enum class EControlRigComponentSpaceSpace                                                            (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)

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
// class FName                        ControlName                                                      (BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     Value                                                            (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
// enum class EControlRigComponentSpaceSpace                                                            (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)

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
// class FName                        ControlName                                                      (BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FRotator                    Value                                                            (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
// enum class EControlRigComponentSpaceSpace                                                            (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)

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
// class UClass*                      InControlRigClass                                                (Edit, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

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
// class FName                        ControlName                                                      (BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     Value                                                            (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
// enum class EControlRigComponentSpaceSpace                                                            (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)

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
// class FName                        ControlName                                                      (BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FTransform                  OffsetTransform                                                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
// enum class EControlRigComponentSpaceSpace                                                            (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)

struct FTransform UControlRigComponent::SetControlOffset(enum class EControlRigComponentSpace Space)
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

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigComponent.SetControlInt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ControlName                                                      (BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// int32                              Value                                                            (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)

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
// class FName                        ControlName                                                      (BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              Value                                                            (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)

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
// class FName                        ControlName                                                      (BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               Value                                                            (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)

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
// class FName                        BoneName                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// enum class EControlRigComponentSpaceSpace                                                            (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
// float                              Weight                                                           (ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, EditConst)
// bool                               bPropagateToChildren                                             (Edit, ConstParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)

bool UControlRigComponent::SetBoneTransform(class FName* BoneName, struct FTransform* Transform, enum class EControlRigComponentSpace Space, float* Weight)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "SetBoneTransform");

	Params::UControlRigComponent_SetBoneTransform_Params Parms{};

	Parms.Space = Space;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (BoneName != nullptr)
		*BoneName = Parms.BoneName;

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	if (Weight != nullptr)
		*Weight = Parms.Weight;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigComponent.SetBoneInitialTransformsFromSkeletalMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USkeletalMesh*               InSkeletalMesh                                                   (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

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
// class UControlRigComponent*        Component                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)

void UControlRigComponent::OnPreInitialize(class UControlRigComponent* Component)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "OnPreInitialize");

	Params::UControlRigComponent_OnPreInitialize_Params Parms{};

	Parms.Component = Component;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigComponent.OnPreForwardsSolve
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UControlRigComponent*        Component                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)

void UControlRigComponent::OnPreForwardsSolve(class UControlRigComponent* Component)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "OnPreForwardsSolve");

	Params::UControlRigComponent_OnPreForwardsSolve_Params Parms{};

	Parms.Component = Component;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigComponent.OnPreConstruction
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UControlRigComponent*        Component                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)

void UControlRigComponent::OnPreConstruction(class UControlRigComponent* Component)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "OnPreConstruction");

	Params::UControlRigComponent_OnPreConstruction_Params Parms{};

	Parms.Component = Component;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigComponent.OnPostInitialize
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UControlRigComponent*        Component                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)

void UControlRigComponent::OnPostInitialize(class UControlRigComponent* Component)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "OnPostInitialize");

	Params::UControlRigComponent_OnPostInitialize_Params Parms{};

	Parms.Component = Component;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigComponent.OnPostForwardsSolve
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UControlRigComponent*        Component                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)

void UControlRigComponent::OnPostForwardsSolve(class UControlRigComponent* Component)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "OnPostForwardsSolve");

	Params::UControlRigComponent_OnPostForwardsSolve_Params Parms{};

	Parms.Component = Component;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigComponent.OnPostConstruction
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UControlRigComponent*        Component                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)

void UControlRigComponent::OnPostConstruction(class UControlRigComponent* Component)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "OnPostConstruction");

	Params::UControlRigComponent_OnPostConstruction_Params Parms{};

	Parms.Component = Component;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// class FName                        SpaceName                                                        (ConstParm, ExportObject, Parm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
// enum class EControlRigComponentSpaceSpace                                                            (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
// struct FTransform                  ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class FName UControlRigComponent::GetSpaceTransform(enum class EControlRigComponentSpace Space, const struct FTransform& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "GetSpaceTransform");

	Params::UControlRigComponent_GetSpaceTransform_Params Parms{};

	Parms.Space = Space;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigComponent.GetInitialSpaceTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        SpaceName                                                        (ConstParm, ExportObject, Parm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
// enum class EControlRigComponentSpaceSpace                                                            (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
// struct FTransform                  ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class FName UControlRigComponent::GetInitialSpaceTransform(enum class EControlRigComponentSpace Space, const struct FTransform& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "GetInitialSpaceTransform");

	Params::UControlRigComponent_GetInitialSpaceTransform_Params Parms{};

	Parms.Space = Space;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigComponent.GetInitialBoneTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        BoneName                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
// enum class EControlRigComponentSpaceSpace                                                            (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
// struct FTransform                  ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UControlRigComponent::GetInitialBoneTransform(class FName* BoneName, enum class EControlRigComponentSpace Space, const struct FTransform& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "GetInitialBoneTransform");

	Params::UControlRigComponent_GetInitialBoneTransform_Params Parms{};

	Parms.Space = Space;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (BoneName != nullptr)
		*BoneName = Parms.BoneName;

}


// Function ControlRig.ControlRigComponent.GetElementNames
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class ERigElementType         ElementType                                                      (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
// TArray<class FName>                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UControlRigComponent::GetElementNames(enum class ERigElementType ElementType, const TArray<class FName>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "GetElementNames");

	Params::UControlRigComponent_GetElementNames_Params Parms{};

	Parms.ElementType = ElementType;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigComponent.GetControlVector2D
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        ControlName                                                      (BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector2D                   ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class FName UControlRigComponent::GetControlVector2D(const struct FVector2D& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "GetControlVector2D");

	Params::UControlRigComponent_GetControlVector2D_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigComponent.GetControlTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        ControlName                                                      (BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class EControlRigComponentSpaceSpace                                                            (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
// struct FTransform                  ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class FName UControlRigComponent::GetControlTransform(enum class EControlRigComponentSpace Space, const struct FTransform& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "GetControlTransform");

	Params::UControlRigComponent_GetControlTransform_Params Parms{};

	Parms.Space = Space;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigComponent.GetControlScale
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        ControlName                                                      (BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class EControlRigComponentSpaceSpace                                                            (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
// struct FVector                     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class FName UControlRigComponent::GetControlScale(enum class EControlRigComponentSpace Space, const struct FVector& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "GetControlScale");

	Params::UControlRigComponent_GetControlScale_Params Parms{};

	Parms.Space = Space;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigComponent.GetControlRotator
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        ControlName                                                      (BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class EControlRigComponentSpaceSpace                                                            (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
// struct FRotator                    ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class FName UControlRigComponent::GetControlRotator(enum class EControlRigComponentSpace Space, const struct FRotator& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "GetControlRotator");

	Params::UControlRigComponent_GetControlRotator_Params Parms{};

	Parms.Space = Space;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigComponent.GetControlRig
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UControlRig*                 ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UControlRigComponent::GetControlRig(class UControlRig* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "GetControlRig");

	Params::UControlRigComponent_GetControlRig_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigComponent.GetControlPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        ControlName                                                      (BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class EControlRigComponentSpaceSpace                                                            (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
// struct FVector                     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class FName UControlRigComponent::GetControlPosition(enum class EControlRigComponentSpace Space, const struct FVector& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "GetControlPosition");

	Params::UControlRigComponent_GetControlPosition_Params Parms{};

	Parms.Space = Space;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigComponent.GetControlOffset
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        ControlName                                                      (BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class EControlRigComponentSpaceSpace                                                            (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
// struct FTransform                  ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class FName UControlRigComponent::GetControlOffset(enum class EControlRigComponentSpace Space, const struct FTransform& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "GetControlOffset");

	Params::UControlRigComponent_GetControlOffset_Params Parms{};

	Parms.Space = Space;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigComponent.GetControlInt
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        ControlName                                                      (BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class FName UControlRigComponent::GetControlInt(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "GetControlInt");

	Params::UControlRigComponent_GetControlInt_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigComponent.GetControlFloat
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        ControlName                                                      (BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class FName UControlRigComponent::GetControlFloat(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "GetControlFloat");

	Params::UControlRigComponent_GetControlFloat_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigComponent.GetControlBool
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        ControlName                                                      (BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class FName UControlRigComponent::GetControlBool(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "GetControlBool");

	Params::UControlRigComponent_GetControlBool_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigComponent.GetBoneTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        BoneName                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
// enum class EControlRigComponentSpaceSpace                                                            (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
// struct FTransform                  ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UControlRigComponent::GetBoneTransform(class FName* BoneName, enum class EControlRigComponentSpace Space, const struct FTransform& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "GetBoneTransform");

	Params::UControlRigComponent_GetBoneTransform_Params Parms{};

	Parms.Space = Space;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (BoneName != nullptr)
		*BoneName = Parms.BoneName;

}


// Function ControlRig.ControlRigComponent.GetAbsoluteTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UControlRigComponent::GetAbsoluteTime(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "GetAbsoluteTime");

	Params::UControlRigComponent_GetAbsoluteTime_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigComponent.DoesElementExist
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        Name                                                             (ConstParm, Net, OutParm)
// enum class ERigElementType         ElementType                                                      (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UControlRigComponent::DoesElementExist(class FName* Name, enum class ERigElementType ElementType, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "DoesElementExist");

	Params::UControlRigComponent_DoesElementExist_Params Parms{};

	Parms.ElementType = ElementType;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Name != nullptr)
		*Name = Parms.Name;

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
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UControlRigComponent::CanExecute(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "CanExecute");

	Params::UControlRigComponent_CanExecute_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigComponent.AddMappedSkeletalMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      SkeletalMeshComponent                                            (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
// TArray<struct FControlRigComponentMappedBone>Bones                                                            (ConstParm, OutParm, ZeroConstructor, Config, EditConst)
// TArray<struct FControlRigComponentMappedCurve>Curves                                                           (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst)

class USkeletalMeshComponent* UControlRigComponent::AddMappedSkeletalMesh(TArray<struct FControlRigComponentMappedBone>* Bones, const TArray<struct FControlRigComponentMappedCurve>& Curves)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "AddMappedSkeletalMesh");

	Params::UControlRigComponent_AddMappedSkeletalMesh_Params Parms{};

	Parms.Curves = Curves;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Bones != nullptr)
		*Bones = std::move(Parms.Bones);

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigComponent.AddMappedElements
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FControlRigComponentMappedElement>NewMappedElements                                                (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

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
// class USkeletalMeshComponent*      SkeletalMeshComponent                                            (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)

class USkeletalMeshComponent* UControlRigComponent::AddMappedCompleteSkeletalMesh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "AddMappedCompleteSkeletalMesh");

	Params::UControlRigComponent_AddMappedCompleteSkeletalMesh_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

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
// bool                               bInSelected                                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, InstancedReference, SubobjectReference)

void AControlRigShapeActor::SetSelected(bool bInSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigShapeActor", "SetSelected");

	Params::AControlRigShapeActor_SetSelected_Params Parms{};

	Parms.bInSelected = bInSelected;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigShapeActor.SetSelectable
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInSelectable                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, InstancedReference, SubobjectReference)

void AControlRigShapeActor::SetSelectable(bool bInSelectable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigShapeActor", "SetSelectable");

	Params::AControlRigShapeActor_SetSelectable_Params Parms{};

	Parms.bInSelectable = bInSelectable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigShapeActor.SetHovered
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInHovered                                                       (BlueprintReadOnly, Parm, InstancedReference, SubobjectReference)

void AControlRigShapeActor::SetHovered(bool bInHovered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigShapeActor", "SetHovered");

	Params::AControlRigShapeActor_SetHovered_Params Parms{};

	Parms.bInHovered = bInHovered;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigShapeActor.SetGlobalTransform
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform                  InTransform                                                      (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, GlobalConfig, SubobjectReference)

void AControlRigShapeActor::SetGlobalTransform(const struct FTransform& InTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigShapeActor", "SetGlobalTransform");

	Params::AControlRigShapeActor_SetGlobalTransform_Params Parms{};

	Parms.InTransform = InTransform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigShapeActor.SetEnabled
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInEnabled                                                       (ConstParm, ExportObject, Parm, InstancedReference, SubobjectReference)

void AControlRigShapeActor::SetEnabled(bool bInEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigShapeActor", "SetEnabled");

	Params::AControlRigShapeActor_SetEnabled_Params Parms{};

	Parms.bInEnabled = bInEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigShapeActor.OnTransformChanged
// (Event, Public, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// struct FTransform                  NewTransform                                                     (ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)

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
// bool                               bIsSelected                                                      (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, GlobalConfig, SubobjectReference)

void AControlRigShapeActor::OnSelectionChanged(bool* bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigShapeActor", "OnSelectionChanged");

	Params::AControlRigShapeActor_OnSelectionChanged_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bIsSelected != nullptr)
		*bIsSelected = Parms.bIsSelected;

}


// Function ControlRig.ControlRigShapeActor.OnManipulatingChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsManipulating                                                  (Edit, Parm, InstancedReference, SubobjectReference)

void AControlRigShapeActor::OnManipulatingChanged(bool bIsManipulating)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigShapeActor", "OnManipulatingChanged");

	Params::AControlRigShapeActor_OnManipulatingChanged_Params Parms{};

	Parms.bIsManipulating = bIsManipulating;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ControlRig.ControlRigShapeActor.OnHoveredChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, GlobalConfig, SubobjectReference)

void AControlRigShapeActor::OnHoveredChanged(bool* bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigShapeActor", "OnHoveredChanged");

	Params::AControlRigShapeActor_OnHoveredChanged_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bIsSelected != nullptr)
		*bIsSelected = Parms.bIsSelected;

}


// Function ControlRig.ControlRigShapeActor.OnEnabledChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsEnabled                                                       (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst)

void AControlRigShapeActor::OnEnabledChanged(bool* bIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigShapeActor", "OnEnabledChanged");

	Params::AControlRigShapeActor_OnEnabledChanged_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bIsEnabled != nullptr)
		*bIsEnabled = Parms.bIsEnabled;

}


// Function ControlRig.ControlRigShapeActor.IsSelectedInEditor
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void AControlRigShapeActor::IsSelectedInEditor(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigShapeActor", "IsSelectedInEditor");

	Params::AControlRigShapeActor_IsSelectedInEditor_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigShapeActor.IsHovered
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void AControlRigShapeActor::IsHovered(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigShapeActor", "IsHovered");

	Params::AControlRigShapeActor_IsHovered_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigShapeActor.IsEnabled
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void AControlRigShapeActor::IsEnabled(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigShapeActor", "IsEnabled");

	Params::AControlRigShapeActor_IsEnabled_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigShapeActor.GetGlobalTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform                  ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void AControlRigShapeActor::GetGlobalTransform(const struct FTransform& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigShapeActor", "GetGlobalTransform");

	Params::AControlRigShapeActor_GetGlobalTransform_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// class UControlRig*                 InControlRig                                                     (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, InstancedReference, SubobjectReference)
// bool                               bGroundTruth                                                     (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UControlRigTestData::SetupReplay(class UControlRig* InControlRig, bool bGroundTruth, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigTestData", "SetupReplay");

	Params::UControlRigTestData_SetupReplay_Params Parms{};

	Parms.InControlRig = InControlRig;
	Parms.bGroundTruth = bGroundTruth;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// class UControlRig*                 InControlRig                                                     (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, InstancedReference, SubobjectReference)
// double                             InRecordingDuration                                              (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UControlRigTestData::Record(class UControlRig* InControlRig, double InRecordingDuration, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigTestData", "Record");

	Params::UControlRigTestData_Record_Params Parms{};

	Parms.InControlRig = InControlRig;
	Parms.InRecordingDuration = InRecordingDuration;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigTestData.IsReplaying
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UControlRigTestData::IsReplaying(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigTestData", "IsReplaying");

	Params::UControlRigTestData_IsReplaying_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigTestData.IsRecording
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UControlRigTestData::IsRecording(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigTestData", "IsRecording");

	Params::UControlRigTestData_IsRecording_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigTestData.GetTimeRange
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               bInput                                                           (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, InstancedReference, SubobjectReference)
// struct FVector2D                   ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UControlRigTestData::GetTimeRange(bool bInput, const struct FVector2D& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigTestData", "GetTimeRange");

	Params::UControlRigTestData_GetTimeRange_Params Parms{};

	Parms.bInput = bInput;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigTestData.GetPlaybackMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EControlRigTestDataPlaybackModeReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UControlRigTestData::GetPlaybackMode(enum class EControlRigTestDataPlaybackMode ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigTestData", "GetPlaybackMode");

	Params::UControlRigTestData_GetPlaybackMode_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigTestData.GetFrameIndexForTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// double                             InSeconds                                                        (Net, EditFixedSize, Parm, InstancedReference, SubobjectReference)
// bool                               bInput                                                           (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UControlRigTestData::GetFrameIndexForTime(double InSeconds, bool bInput, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigTestData", "GetFrameIndexForTime");

	Params::UControlRigTestData_GetFrameIndexForTime_Params Parms{};

	Parms.InSeconds = InSeconds;
	Parms.bInput = bInput;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigTestData.CreateNewAsset
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      InDesiredPackagePath                                             (Edit, BlueprintReadOnly, EditFixedSize, Parm, InstancedReference, SubobjectReference)
// class FString                      InBlueprintPathName                                              (ConstParm, BlueprintVisible, EditFixedSize, Parm, InstancedReference, SubobjectReference)
// class UControlRigTestData*         ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UControlRigTestData::CreateNewAsset(const class FString& InDesiredPackagePath, const class FString& InBlueprintPathName, class UControlRigTestData* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigTestData", "CreateNewAsset");

	Params::UControlRigTestData_CreateNewAsset_Params Parms{};

	Parms.InDesiredPackagePath = InDesiredPackagePath;
	Parms.InBlueprintPathName = InBlueprintPathName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// TArray<struct FRigElementKey>      InKeys                                                           (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// bool                               bPrintPythonCommand                                              (BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchyController::SetSelection(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "SetSelection");

	Params::URigHierarchyController_SetSelection_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchyController.SetParent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InChild                                                          (Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// struct FRigElementKey              InParent                                                         (OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
// bool                               bMaintainGlobalTransform                                         (Edit, BlueprintVisible, EditFixedSize, OutParm, InstancedReference, SubobjectReference)
// bool                               bSetupUndo                                                       (Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               bPrintPythonCommand                                              (BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchyController::SetParent(struct FRigElementKey* InChild, struct FRigElementKey* InParent, bool* bMaintainGlobalTransform, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "SetParent");

	Params::URigHierarchyController_SetParent_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InChild != nullptr)
		*InChild = std::move(Parms.InChild);

	if (InParent != nullptr)
		*InParent = std::move(Parms.InParent);

	if (bMaintainGlobalTransform != nullptr)
		*bMaintainGlobalTransform = Parms.bMaintainGlobalTransform;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchyController.SetHierarchy
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class URigHierarchy*               InHierarchy                                                      (ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

void URigHierarchyController::SetHierarchy(class URigHierarchy** InHierarchy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "SetHierarchy");

	Params::URigHierarchyController_SetHierarchy_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InHierarchy != nullptr)
		*InHierarchy = Parms.InHierarchy;

}


// Function ControlRig.RigHierarchyController.SetDisplayName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InControl                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, InstancedReference, SubobjectReference)
// class FName                        InDisplayName                                                    (ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// bool                               bRenameElement                                                   (BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, InstancedReference, SubobjectReference)
// bool                               bSetupUndo                                                       (Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               bPrintPythonCommand                                              (BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class FName                        ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchyController::SetDisplayName(struct FRigElementKey* InControl, bool* bRenameElement, class FName ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "SetDisplayName");

	Params::URigHierarchyController_SetDisplayName_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InControl != nullptr)
		*InControl = std::move(Parms.InControl);

	if (bRenameElement != nullptr)
		*bRenameElement = Parms.bRenameElement;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchyController.SetControlSettings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// struct FRigControlSettings         InSettings                                                       (Edit, ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               bSetupUndo                                                       (Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchyController::SetControlSettings(struct FRigElementKey* InKey, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "SetControlSettings");

	Params::URigHierarchyController_SetControlSettings_Params Parms{};

	Parms.ReturnValue = ReturnValue;

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
// struct FRigElementKey              InKey                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               bSelect                                                          (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               bClearSelection                                                  (Edit, ConstParm, ExportObject, Net, Parm, OutParm, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URigHierarchyController::SelectElement(struct FRigElementKey* InKey, bool* bSelect, bool* bClearSelection, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "SelectElement");

	Params::URigHierarchyController_SelectElement_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InKey != nullptr)
		*InKey = std::move(Parms.InKey);

	if (bSelect != nullptr)
		*bSelect = Parms.bSelect;

	if (bClearSelection != nullptr)
		*bClearSelection = Parms.bClearSelection;

}


// Function ControlRig.RigHierarchyController.ReorderElement
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InElement                                                        (ExportObject, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// int32                              InIndex                                                          (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               bSetupUndo                                                       (Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               bPrintPythonCommand                                              (BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchyController::ReorderElement(int32* InIndex, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "ReorderElement");

	Params::URigHierarchyController_ReorderElement_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InIndex != nullptr)
		*InIndex = Parms.InIndex;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchyController.RenameElement
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InElement                                                        (ExportObject, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class FName                        InName                                                           (ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// bool                               bSetupUndo                                                       (Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               bPrintPythonCommand                                              (BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               bClearSelection                                                  (Edit, ConstParm, ExportObject, Net, Parm, OutParm, InstancedReference, SubobjectReference)
// struct FRigElementKey              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchyController::RenameElement(bool* bClearSelection, const struct FRigElementKey& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "RenameElement");

	Params::URigHierarchyController_RenameElement_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bClearSelection != nullptr)
		*bClearSelection = Parms.bClearSelection;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchyController.RemoveParent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InChild                                                          (Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// struct FRigElementKey              InParent                                                         (OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
// bool                               bMaintainGlobalTransform                                         (Edit, BlueprintVisible, EditFixedSize, OutParm, InstancedReference, SubobjectReference)
// bool                               bSetupUndo                                                       (Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               bPrintPythonCommand                                              (BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchyController::RemoveParent(struct FRigElementKey* InChild, struct FRigElementKey* InParent, bool* bMaintainGlobalTransform, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "RemoveParent");

	Params::URigHierarchyController_RemoveParent_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InChild != nullptr)
		*InChild = std::move(Parms.InChild);

	if (InParent != nullptr)
		*InParent = std::move(Parms.InParent);

	if (bMaintainGlobalTransform != nullptr)
		*bMaintainGlobalTransform = Parms.bMaintainGlobalTransform;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchyController.RemoveElement
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InElement                                                        (ExportObject, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               bSetupUndo                                                       (Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               bPrintPythonCommand                                              (BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchyController::RemoveElement(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "RemoveElement");

	Params::URigHierarchyController_RemoveElement_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchyController.RemoveAllParents
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InChild                                                          (Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               bMaintainGlobalTransform                                         (Edit, BlueprintVisible, EditFixedSize, OutParm, InstancedReference, SubobjectReference)
// bool                               bSetupUndo                                                       (Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               bPrintPythonCommand                                              (BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchyController::RemoveAllParents(struct FRigElementKey* InChild, bool* bMaintainGlobalTransform, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "RemoveAllParents");

	Params::URigHierarchyController_RemoveAllParents_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InChild != nullptr)
		*InChild = std::move(Parms.InChild);

	if (bMaintainGlobalTransform != nullptr)
		*bMaintainGlobalTransform = Parms.bMaintainGlobalTransform;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchyController.MirrorElements
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FRigElementKey>      InKeys                                                           (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// struct FRigVMMirrorSettings        InSettings                                                       (Edit, ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               bSelectNewElements                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, InstancedReference, SubobjectReference)
// bool                               bSetupUndo                                                       (Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               bPrintPythonCommands                                             (ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// TArray<struct FRigElementKey>      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchyController::MirrorElements(bool* bSelectNewElements, const TArray<struct FRigElementKey>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "MirrorElements");

	Params::URigHierarchyController_MirrorElements_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bSelectNewElements != nullptr)
		*bSelectNewElements = Parms.bSelectNewElements;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchyController.ImportFromText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InContent                                                        (Edit, BlueprintVisible, Net, Parm, OutParm, InstancedReference, SubobjectReference)
// bool                               bReplaceExistingElements                                         (ExportObject, BlueprintReadOnly, Parm, OutParm, InstancedReference, SubobjectReference)
// bool                               bSelectNewElements                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, InstancedReference, SubobjectReference)
// bool                               bSetupUndo                                                       (Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               bPrintPythonCommands                                             (ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// TArray<struct FRigElementKey>      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchyController::ImportFromText(class FString* InContent, bool* bReplaceExistingElements, bool* bSelectNewElements, const TArray<struct FRigElementKey>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "ImportFromText");

	Params::URigHierarchyController_ImportFromText_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InContent != nullptr)
		*InContent = std::move(Parms.InContent);

	if (bReplaceExistingElements != nullptr)
		*bReplaceExistingElements = Parms.bReplaceExistingElements;

	if (bSelectNewElements != nullptr)
		*bSelectNewElements = Parms.bSelectNewElements;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchyController.ImportCurves
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USkeleton*                   InSkeleton                                                       (ConstParm, ExportObject, Parm, OutParm, InstancedReference, SubobjectReference)
// class FName                        InNameSpace                                                      (Edit, ConstParm, Parm, OutParm, InstancedReference, SubobjectReference)
// bool                               bSelectCurves                                                    (BlueprintReadOnly, Parm, OutParm, InstancedReference, SubobjectReference)
// bool                               bSetupUndo                                                       (Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               bPrintPythonCommand                                              (BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// TArray<struct FRigElementKey>      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchyController::ImportCurves(class USkeleton** InSkeleton, class FName* InNameSpace, bool* bSelectCurves, const TArray<struct FRigElementKey>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "ImportCurves");

	Params::URigHierarchyController_ImportCurves_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InSkeleton != nullptr)
		*InSkeleton = Parms.InSkeleton;

	if (InNameSpace != nullptr)
		*InNameSpace = Parms.InNameSpace;

	if (bSelectCurves != nullptr)
		*bSelectCurves = Parms.bSelectCurves;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchyController.ImportBones
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USkeleton*                   InSkeleton                                                       (ConstParm, ExportObject, Parm, OutParm, InstancedReference, SubobjectReference)
// class FName                        InNameSpace                                                      (Edit, ConstParm, Parm, OutParm, InstancedReference, SubobjectReference)
// bool                               bReplaceExistingBones                                            (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, InstancedReference, SubobjectReference)
// bool                               bRemoveObsoleteBones                                             (BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, InstancedReference, SubobjectReference)
// bool                               bSelectBones                                                     (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, InstancedReference, SubobjectReference)
// bool                               bSetupUndo                                                       (Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               bPrintPythonCommand                                              (BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// TArray<struct FRigElementKey>      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchyController::ImportBones(class USkeleton** InSkeleton, class FName* InNameSpace, bool* bReplaceExistingBones, bool* bRemoveObsoleteBones, bool* bSelectBones, const TArray<struct FRigElementKey>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "ImportBones");

	Params::URigHierarchyController_ImportBones_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InSkeleton != nullptr)
		*InSkeleton = Parms.InSkeleton;

	if (InNameSpace != nullptr)
		*InNameSpace = Parms.InNameSpace;

	if (bReplaceExistingBones != nullptr)
		*bReplaceExistingBones = Parms.bReplaceExistingBones;

	if (bRemoveObsoleteBones != nullptr)
		*bRemoveObsoleteBones = Parms.bRemoveObsoleteBones;

	if (bSelectBones != nullptr)
		*bSelectBones = Parms.bSelectBones;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchyController.GetHierarchy
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class URigHierarchy*               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URigHierarchyController::GetHierarchy(class URigHierarchy* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "GetHierarchy");

	Params::URigHierarchyController_GetHierarchy_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchyController.GetControlSettings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// struct FRigControlSettings         ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URigHierarchyController::GetControlSettings(struct FRigElementKey* InKey, const struct FRigControlSettings& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "GetControlSettings");

	Params::URigHierarchyController_GetControlSettings_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InKey != nullptr)
		*InKey = std::move(Parms.InKey);

}


// Function ControlRig.RigHierarchyController.ExportToText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FRigElementKey>      InKeys                                                           (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// class FString                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<struct FRigElementKey> URigHierarchyController::ExportToText(const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "ExportToText");

	Params::URigHierarchyController_ExportToText_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchyController.ExportSelectionToText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URigHierarchyController::ExportSelectionToText(const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "ExportSelectionToText");

	Params::URigHierarchyController_ExportSelectionToText_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchyController.DuplicateElements
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FRigElementKey>      InKeys                                                           (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// bool                               bSelectNewElements                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, InstancedReference, SubobjectReference)
// bool                               bSetupUndo                                                       (Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               bPrintPythonCommands                                             (ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// TArray<struct FRigElementKey>      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchyController::DuplicateElements(bool* bSelectNewElements, const TArray<struct FRigElementKey>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "DuplicateElements");

	Params::URigHierarchyController_DuplicateElements_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bSelectNewElements != nullptr)
		*bSelectNewElements = Parms.bSelectNewElements;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchyController.DeselectElement
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InKey                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URigHierarchyController::DeselectElement(struct FRigElementKey* InKey, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "DeselectElement");

	Params::URigHierarchyController_DeselectElement_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InKey != nullptr)
		*InKey = std::move(Parms.InKey);

}


// Function ControlRig.RigHierarchyController.ClearSelection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URigHierarchyController::ClearSelection(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "ClearSelection");

	Params::URigHierarchyController_ClearSelection_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchyController.AddRigidBody
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        InName                                                           (ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FRigElementKey              InParent                                                         (OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
// struct FRigRigidBodySettings       InSettings                                                       (Edit, ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// struct FTransform                  InLocalTransform                                                 (ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, InstancedReference, SubobjectReference)
// bool                               bSetupUndo                                                       (Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               bPrintPythonCommand                                              (BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// struct FRigElementKey              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchyController::AddRigidBody(struct FRigElementKey* InParent, struct FTransform* InLocalTransform, const struct FRigElementKey& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "AddRigidBody");

	Params::URigHierarchyController_AddRigidBody_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InParent != nullptr)
		*InParent = std::move(Parms.InParent);

	if (InLocalTransform != nullptr)
		*InLocalTransform = std::move(Parms.InLocalTransform);

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchyController.AddParent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InChild                                                          (Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// struct FRigElementKey              InParent                                                         (OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
// float                              InWeight                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               bMaintainGlobalTransform                                         (Edit, BlueprintVisible, EditFixedSize, OutParm, InstancedReference, SubobjectReference)
// bool                               bSetupUndo                                                       (Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchyController::AddParent(struct FRigElementKey* InChild, struct FRigElementKey* InParent, bool* bMaintainGlobalTransform, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "AddParent");

	Params::URigHierarchyController_AddParent_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InChild != nullptr)
		*InChild = std::move(Parms.InChild);

	if (InParent != nullptr)
		*InParent = std::move(Parms.InParent);

	if (bMaintainGlobalTransform != nullptr)
		*bMaintainGlobalTransform = Parms.bMaintainGlobalTransform;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchyController.AddNull
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        InName                                                           (ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FRigElementKey              InParent                                                         (OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
// struct FTransform                  InTransform                                                      (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, GlobalConfig, SubobjectReference)
// bool                               bTransformInGlobal                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, InstancedReference, SubobjectReference)
// bool                               bSetupUndo                                                       (Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               bPrintPythonCommand                                              (BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// struct FRigElementKey              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchyController::AddNull(struct FRigElementKey* InParent, const struct FTransform& InTransform, bool* bTransformInGlobal, const struct FRigElementKey& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "AddNull");

	Params::URigHierarchyController_AddNull_Params Parms{};

	Parms.InTransform = InTransform;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InParent != nullptr)
		*InParent = std::move(Parms.InParent);

	if (bTransformInGlobal != nullptr)
		*bTransformInGlobal = Parms.bTransformInGlobal;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchyController.AddCurve
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InName                                                           (ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// float                              InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               bSetupUndo                                                       (Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               bPrintPythonCommand                                              (BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// struct FRigElementKey              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchyController::AddCurve(const struct FRigElementKey& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "AddCurve");

	Params::URigHierarchyController_AddCurve_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchyController.AddControl_ForBlueprint
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InName                                                           (ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FRigElementKey              InParent                                                         (OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
// struct FRigControlSettings         InSettings                                                       (Edit, ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// struct FRigControlValue            InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               bSetupUndo                                                       (Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               bPrintPythonCommand                                              (BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// struct FRigElementKey              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchyController::AddControl_ForBlueprint(struct FRigElementKey* InParent, const struct FRigElementKey& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "AddControl_ForBlueprint");

	Params::URigHierarchyController_AddControl_ForBlueprint_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InParent != nullptr)
		*InParent = std::move(Parms.InParent);

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchyController.AddBone
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        InName                                                           (ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FRigElementKey              InParent                                                         (OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
// struct FTransform                  InTransform                                                      (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, GlobalConfig, SubobjectReference)
// bool                               bTransformInGlobal                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, InstancedReference, SubobjectReference)
// enum class ERigBoneType            InBoneType                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, InstancedReference, SubobjectReference)
// bool                               bSetupUndo                                                       (Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               bPrintPythonCommand                                              (BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// struct FRigElementKey              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchyController::AddBone(struct FRigElementKey* InParent, const struct FTransform& InTransform, bool* bTransformInGlobal, enum class ERigBoneType* InBoneType, const struct FRigElementKey& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "AddBone");

	Params::URigHierarchyController_AddBone_Params Parms{};

	Parms.InTransform = InTransform;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InParent != nullptr)
		*InParent = std::move(Parms.InParent);

	if (bTransformInGlobal != nullptr)
		*bTransformInGlobal = Parms.bTransformInGlobal;

	if (InBoneType != nullptr)
		*InBoneType = Parms.InBoneType;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchyController.AddAnimationChannel_ForBlueprint
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InName                                                           (ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FRigElementKey              InParentControl                                                  (BlueprintVisible, ExportObject, Net, OutParm, InstancedReference, SubobjectReference)
// struct FRigControlSettings         InSettings                                                       (Edit, ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               bSetupUndo                                                       (Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               bPrintPythonCommand                                              (BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// struct FRigElementKey              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool URigHierarchyController::AddAnimationChannel_ForBlueprint(struct FRigElementKey* InParentControl, const struct FRigElementKey& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "AddAnimationChannel_ForBlueprint");

	Params::URigHierarchyController_AddAnimationChannel_ForBlueprint_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InParentControl != nullptr)
		*InParentControl = std::move(Parms.InParentControl);

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
// class UControlRig*                 InControlRig                                                     (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, InstancedReference, SubobjectReference)
// bool                               bDoMirror                                                        (Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)

void UControlRigPoseAsset::SelectControls(class UControlRig* InControlRig, bool* bDoMirror)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigPoseAsset", "SelectControls");

	Params::UControlRigPoseAsset_SelectControls_Params Parms{};

	Parms.InControlRig = InControlRig;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bDoMirror != nullptr)
		*bDoMirror = Parms.bDoMirror;

}


// Function ControlRig.ControlRigPoseAsset.SavePose
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UControlRig*                 InControlRig                                                     (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, InstancedReference, SubobjectReference)
// bool                               bUseAll                                                          (ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)

void UControlRigPoseAsset::SavePose(class UControlRig* InControlRig, bool* bUseAll)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigPoseAsset", "SavePose");

	Params::UControlRigPoseAsset_SavePose_Params Parms{};

	Parms.InControlRig = InControlRig;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bUseAll != nullptr)
		*bUseAll = Parms.bUseAll;

}


// Function ControlRig.ControlRigPoseAsset.ReplaceControlName
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        CurrentName                                                      (Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
// class FName                        NewName                                                          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

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
// class UControlRig*                 InControlRig                                                     (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, InstancedReference, SubobjectReference)
// bool                               bDoKey                                                           (Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
// bool                               bDoMirror                                                        (Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)

void UControlRigPoseAsset::PastePose(class UControlRig* InControlRig, bool* bDoKey, bool* bDoMirror)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigPoseAsset", "PastePose");

	Params::UControlRigPoseAsset_PastePose_Params Parms{};

	Parms.InControlRig = InControlRig;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bDoKey != nullptr)
		*bDoKey = Parms.bDoKey;

	if (bDoMirror != nullptr)
		*bDoMirror = Parms.bDoMirror;

}


// Function ControlRig.ControlRigPoseAsset.GetCurrentPose
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UControlRig*                 InControlRig                                                     (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, InstancedReference, SubobjectReference)
// struct FControlRigControlPose      OutPose                                                          (ConstParm, Net, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)

void UControlRigPoseAsset::GetCurrentPose(class UControlRig* InControlRig, struct FControlRigControlPose* OutPose)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigPoseAsset", "GetCurrentPose");

	Params::UControlRigPoseAsset_GetCurrentPose_Params Parms{};

	Parms.InControlRig = InControlRig;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutPose != nullptr)
		*OutPose = std::move(Parms.OutPose);

}


// Function ControlRig.ControlRigPoseAsset.GetControlNames
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FName>                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UControlRigPoseAsset::GetControlNames(const TArray<class FName>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigPoseAsset", "GetControlNames");

	Params::UControlRigPoseAsset_GetControlNames_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigPoseAsset.DoesMirrorMatch
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UControlRig*                 ControlRig                                                       (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
// class FName                        ControlName                                                      (BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class FName UControlRigPoseAsset::DoesMirrorMatch(class UControlRig** ControlRig, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigPoseAsset", "DoesMirrorMatch");

	Params::UControlRigPoseAsset_DoesMirrorMatch_Params Parms{};

	Parms.ReturnValue = ReturnValue;

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
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UControlRigWorkflowOptions::EnsureAtLeastOneRigElementSelected(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigWorkflowOptions", "EnsureAtLeastOneRigElementSelected");

	Params::UControlRigWorkflowOptions_EnsureAtLeastOneRigElementSelected_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// class UObject*                     InSubject                                                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
// TArray<struct FRigVMUserWorkflow>  ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UControlRigTransformWorkflowOptions::ProvideWorkflows(class UObject** InSubject, const TArray<struct FRigVMUserWorkflow>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigTransformWorkflowOptions", "ProvideWorkflows");

	Params::UControlRigTransformWorkflowOptions_ProvideWorkflows_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InSubject != nullptr)
		*InSubject = Parms.InSubject;

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



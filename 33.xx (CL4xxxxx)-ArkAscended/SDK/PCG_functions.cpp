#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class PCG.PCGAttributeExtractorTestObject
// (None)

class UClass* UPCGAttributeExtractorTestObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGAttributeExtractorTestObject");

	return Clss;
}


// PCGAttributeExtractorTestObject PCG.Default__PCGAttributeExtractorTestObject
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGAttributeExtractorTestObject* UPCGAttributeExtractorTestObject::GetDefaultObj()
{
	static class UPCGAttributeExtractorTestObject* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGAttributeExtractorTestObject*>(UPCGAttributeExtractorTestObject::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGAttributePropertySelectorBlueprintHelpers
// (None)

class UClass* UPCGAttributePropertySelectorBlueprintHelpers::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGAttributePropertySelectorBlueprintHelpers");

	return Clss;
}


// PCGAttributePropertySelectorBlueprintHelpers PCG.Default__PCGAttributePropertySelectorBlueprintHelpers
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGAttributePropertySelectorBlueprintHelpers* UPCGAttributePropertySelectorBlueprintHelpers::GetDefaultObj()
{
	static class UPCGAttributePropertySelectorBlueprintHelpers* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGAttributePropertySelectorBlueprintHelpers*>(UPCGAttributePropertySelectorBlueprintHelpers::StaticClass()->DefaultObject);

	return Default;
}


// Function PCG.PCGAttributePropertySelectorBlueprintHelpers.SetPointProperty
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPCGAttributePropertySelectorSelector                                                         (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// enum class EPCGPointProperties     InPointProperty                                                  (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

enum class EPCGPointProperties UPCGAttributePropertySelectorBlueprintHelpers::SetPointProperty(bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGAttributePropertySelectorBlueprintHelpers", "SetPointProperty");

	Params::UPCGAttributePropertySelectorBlueprintHelpers_SetPointProperty_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function PCG.PCGAttributePropertySelectorBlueprintHelpers.SetAttributeName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPCGAttributePropertySelectorSelector                                                         (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// class FName                        InAttributeName                                                  (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class FName UPCGAttributePropertySelectorBlueprintHelpers::SetAttributeName(bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGAttributePropertySelectorBlueprintHelpers", "SetAttributeName");

	Params::UPCGAttributePropertySelectorBlueprintHelpers_SetAttributeName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function PCG.PCGAttributePropertySelectorBlueprintHelpers.GetName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPCGAttributePropertySelectorSelector                                                         (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// class FName                        ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FPCGAttributePropertySelector UPCGAttributePropertySelectorBlueprintHelpers::GetName(class FName* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGAttributePropertySelectorBlueprintHelpers", "GetName");

	Params::UPCGAttributePropertySelectorBlueprintHelpers_GetName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Class PCG.PCGData
// (None)

class UClass* UPCGData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGData");

	return Clss;
}


// PCGData PCG.Default__PCGData
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGData* UPCGData::GetDefaultObj()
{
	static class UPCGData* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGData*>(UPCGData::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGSpatialData
// (None)

class UClass* UPCGSpatialData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGSpatialData");

	return Clss;
}


// PCGSpatialData PCG.Default__PCGSpatialData
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGSpatialData* UPCGSpatialData::GetDefaultObj()
{
	static class UPCGSpatialData* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGSpatialData*>(UPCGSpatialData::StaticClass()->DefaultObject);

	return Default;
}


// Function PCG.PCGSpatialData.UnionWith
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPCGSpatialData*             InOther                                                          (ExportObject, Net, Parm, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// class UPCGUnionData*               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UPCGSpatialData* UPCGSpatialData::UnionWith(class UPCGUnionData** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGSpatialData", "UnionWith");

	Params::UPCGSpatialData_UnionWith_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function PCG.PCGSpatialData.ToPointDataWithContext
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPCGContext                 Context                                                          (ConstParm, BlueprintReadOnly, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// class UPCGPointData*               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UPCGSpatialData::ToPointDataWithContext(const struct FPCGContext& Context, class UPCGPointData** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGSpatialData", "ToPointDataWithContext");

	Params::UPCGSpatialData_ToPointDataWithContext_Params Parms{};

	Parms.Context = Context;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function PCG.PCGSpatialData.ToPointData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPCGPointData*               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UPCGSpatialData::ToPointData(class UPCGPointData** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGSpatialData", "ToPointData");

	Params::UPCGSpatialData_ToPointData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function PCG.PCGSpatialData.Subtract
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPCGSpatialData*             InOther                                                          (ExportObject, Net, Parm, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// class UPCGDifferenceData*          ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UPCGSpatialData* UPCGSpatialData::Subtract(class UPCGDifferenceData** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGSpatialData", "Subtract");

	Params::UPCGSpatialData_Subtract_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function PCG.PCGSpatialData.SamplePoint
// (Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// struct FBox                        Bounds                                                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FPCGPoint                   OutPoint                                                         (BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// class UPCGMetadata*                OutMetadata                                                      (Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UPCGMetadata* UPCGSpatialData::SamplePoint(struct FTransform* Transform, bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGSpatialData", "SamplePoint");

	Params::UPCGSpatialData_SamplePoint_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function PCG.PCGSpatialData.ProjectPoint
// (Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform                  InTransform                                                      (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FBox                        InBounds                                                         (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// struct FPCGProjectionParams        InParams                                                         (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
// struct FPCGPoint                   OutPoint                                                         (BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// class UPCGMetadata*                OutMetadata                                                      (Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UPCGMetadata* UPCGSpatialData::ProjectPoint(const struct FTransform& InTransform, struct FPCGProjectionParams* InParams, bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGSpatialData", "ProjectPoint");

	Params::UPCGSpatialData_ProjectPoint_Params Parms{};

	Parms.InTransform = InTransform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InParams != nullptr)
		*InParams = std::move(Parms.InParams);

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function PCG.PCGSpatialData.ProjectOn
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPCGSpatialData*             InOther                                                          (ExportObject, Net, Parm, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// struct FPCGProjectionParams        InParams                                                         (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
// class UPCGSpatialData*             ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UPCGSpatialData* UPCGSpatialData::ProjectOn(struct FPCGProjectionParams* InParams, class UPCGSpatialData** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGSpatialData", "ProjectOn");

	Params::UPCGSpatialData_ProjectOn_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InParams != nullptr)
		*InParams = std::move(Parms.InParams);

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function PCG.PCGSpatialData.MutableMetadata
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPCGMetadata*                ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UPCGSpatialData::MutableMetadata(class UPCGMetadata** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGSpatialData", "MutableMetadata");

	Params::UPCGSpatialData_MutableMetadata_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function PCG.PCGSpatialData.IntersectWith
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPCGSpatialData*             InOther                                                          (ExportObject, Net, Parm, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// class UPCGIntersectionData*        ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UPCGSpatialData* UPCGSpatialData::IntersectWith(class UPCGIntersectionData** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGSpatialData", "IntersectWith");

	Params::UPCGSpatialData_IntersectWith_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function PCG.PCGSpatialData.InitializeFromData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPCGSpatialData*             InSource                                                         (Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UPCGMetadata*                InMetadataParentOverride                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               bInheritMetadata                                                 (ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               bInheritAttributes                                               (ExportObject, Parm, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

bool UPCGSpatialData::InitializeFromData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGSpatialData", "InitializeFromData");

	Params::UPCGSpatialData_InitializeFromData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PCG.PCGSpatialData.HasNonTrivialTransform
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UPCGSpatialData::HasNonTrivialTransform(bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGSpatialData", "HasNonTrivialTransform");

	Params::UPCGSpatialData_HasNonTrivialTransform_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function PCG.PCGSpatialData.GetStrictBounds
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FBox                        ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UPCGSpatialData::GetStrictBounds(struct FBox* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGSpatialData", "GetStrictBounds");

	Params::UPCGSpatialData_GetStrictBounds_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function PCG.PCGSpatialData.GetNormal
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UPCGSpatialData::GetNormal(struct FVector* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGSpatialData", "GetNormal");

	Params::UPCGSpatialData_GetNormal_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function PCG.PCGSpatialData.GetDimension
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UPCGSpatialData::GetDimension(int32* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGSpatialData", "GetDimension");

	Params::UPCGSpatialData_GetDimension_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function PCG.PCGSpatialData.GetDensityAtPosition
// (Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     InPosition                                                       (ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector UPCGSpatialData::GetDensityAtPosition(float* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGSpatialData", "GetDensityAtPosition");

	Params::UPCGSpatialData_GetDensityAtPosition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function PCG.PCGSpatialData.GetBounds
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FBox                        ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UPCGSpatialData::GetBounds(struct FBox* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGSpatialData", "GetBounds");

	Params::UPCGSpatialData_GetBounds_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function PCG.PCGSpatialData.CreateEmptyMetadata
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPCGMetadata*                ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UPCGSpatialData::CreateEmptyMetadata(class UPCGMetadata** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGSpatialData", "CreateEmptyMetadata");

	Params::UPCGSpatialData_CreateEmptyMetadata_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function PCG.PCGSpatialData.ConstMetadata
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPCGMetadata*                ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UPCGSpatialData::ConstMetadata(class UPCGMetadata** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGSpatialData", "ConstMetadata");

	Params::UPCGSpatialData_ConstMetadata_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Class PCG.PCGSpatialDataWithPointCache
// (None)

class UClass* UPCGSpatialDataWithPointCache::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGSpatialDataWithPointCache");

	return Clss;
}


// PCGSpatialDataWithPointCache PCG.Default__PCGSpatialDataWithPointCache
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGSpatialDataWithPointCache* UPCGSpatialDataWithPointCache::GetDefaultObj()
{
	static class UPCGSpatialDataWithPointCache* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGSpatialDataWithPointCache*>(UPCGSpatialDataWithPointCache::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGCollisionShapeData
// (None)

class UClass* UPCGCollisionShapeData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGCollisionShapeData");

	return Clss;
}


// PCGCollisionShapeData PCG.Default__PCGCollisionShapeData
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGCollisionShapeData* UPCGCollisionShapeData::GetDefaultObj()
{
	static class UPCGCollisionShapeData* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGCollisionShapeData*>(UPCGCollisionShapeData::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGSettingsInterface
// (None)

class UClass* UPCGSettingsInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGSettingsInterface");

	return Clss;
}


// PCGSettingsInterface PCG.Default__PCGSettingsInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGSettingsInterface* UPCGSettingsInterface::GetDefaultObj()
{
	static class UPCGSettingsInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGSettingsInterface*>(UPCGSettingsInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGSettings
// (None)

class UClass* UPCGSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGSettings");

	return Clss;
}


// PCGSettings PCG.Default__PCGSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGSettings* UPCGSettings::GetDefaultObj()
{
	static class UPCGSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGSettings*>(UPCGSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGDistanceSettings
// (None)

class UClass* UPCGDistanceSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGDistanceSettings");

	return Clss;
}


// PCGDistanceSettings PCG.Default__PCGDistanceSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGDistanceSettings* UPCGDistanceSettings::GetDefaultObj()
{
	static class UPCGDistanceSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGDistanceSettings*>(UPCGDistanceSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGEngineSettings
// (None)

class UClass* UPCGEngineSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGEngineSettings");

	return Clss;
}


// PCGEngineSettings PCG.Default__PCGEngineSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGEngineSettings* UPCGEngineSettings::GetDefaultObj()
{
	static class UPCGEngineSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGEngineSettings*>(UPCGEngineSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGGatherSettings
// (None)

class UClass* UPCGGatherSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGGatherSettings");

	return Clss;
}


// PCGGatherSettings PCG.Default__PCGGatherSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGGatherSettings* UPCGGatherSettings::GetDefaultObj()
{
	static class UPCGGatherSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGGatherSettings*>(UPCGGatherSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGNormalToDensitySettings
// (None)

class UClass* UPCGNormalToDensitySettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGNormalToDensitySettings");

	return Clss;
}


// PCGNormalToDensitySettings PCG.Default__PCGNormalToDensitySettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGNormalToDensitySettings* UPCGNormalToDensitySettings::GetDefaultObj()
{
	static class UPCGNormalToDensitySettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGNormalToDensitySettings*>(UPCGNormalToDensitySettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGRerouteSettings
// (None)

class UClass* UPCGRerouteSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGRerouteSettings");

	return Clss;
}


// PCGRerouteSettings PCG.Default__PCGRerouteSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGRerouteSettings* UPCGRerouteSettings::GetDefaultObj()
{
	static class UPCGRerouteSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGRerouteSettings*>(UPCGRerouteSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGUserParameterGetSettings
// (None)

class UClass* UPCGUserParameterGetSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGUserParameterGetSettings");

	return Clss;
}


// PCGUserParameterGetSettings PCG.Default__PCGUserParameterGetSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGUserParameterGetSettings* UPCGUserParameterGetSettings::GetDefaultObj()
{
	static class UPCGUserParameterGetSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGUserParameterGetSettings*>(UPCGUserParameterGetSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGUserParametersData
// (None)

class UClass* UPCGUserParametersData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGUserParametersData");

	return Clss;
}


// PCGUserParametersData PCG.Default__PCGUserParametersData
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGUserParametersData* UPCGUserParametersData::GetDefaultObj()
{
	static class UPCGUserParametersData* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGUserParametersData*>(UPCGUserParametersData::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGDifferenceData
// (None)

class UClass* UPCGDifferenceData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGDifferenceData");

	return Clss;
}


// PCGDifferenceData PCG.Default__PCGDifferenceData
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGDifferenceData* UPCGDifferenceData::GetDefaultObj()
{
	static class UPCGDifferenceData* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGDifferenceData*>(UPCGDifferenceData::StaticClass()->DefaultObject);

	return Default;
}


// Function PCG.PCGDifferenceData.SetDensityFunction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EPCGDifferenceDensityFunctionInDensityFunction                                                (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

enum class EPCGDifferenceDensityFunction UPCGDifferenceData::SetDensityFunction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGDifferenceData", "SetDensityFunction");

	Params::UPCGDifferenceData_SetDensityFunction_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PCG.PCGDifferenceData.Initialize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPCGSpatialData*             InData                                                           (ConstParm, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

class UPCGSpatialData* UPCGDifferenceData::Initialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGDifferenceData", "Initialize");

	Params::UPCGDifferenceData_Initialize_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PCG.PCGDifferenceData.AddDifference
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPCGSpatialData*             InDifference                                                     (ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

class UPCGSpatialData* UPCGDifferenceData::AddDifference()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGDifferenceData", "AddDifference");

	Params::UPCGDifferenceData_AddDifference_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class PCG.PCGIntersectionData
// (None)

class UClass* UPCGIntersectionData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGIntersectionData");

	return Clss;
}


// PCGIntersectionData PCG.Default__PCGIntersectionData
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGIntersectionData* UPCGIntersectionData::GetDefaultObj()
{
	static class UPCGIntersectionData* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGIntersectionData*>(UPCGIntersectionData::StaticClass()->DefaultObject);

	return Default;
}


// Function PCG.PCGIntersectionData.Initialize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPCGSpatialData*             InA                                                              (ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config)
// class UPCGSpatialData*             InB                                                              (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config)

void UPCGIntersectionData::Initialize(class UPCGSpatialData* InA, class UPCGSpatialData* InB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGIntersectionData", "Initialize");

	Params::UPCGIntersectionData_Initialize_Params Parms{};

	Parms.InA = InA;
	Parms.InB = InB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class PCG.PCGSurfaceData
// (None)

class UClass* UPCGSurfaceData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGSurfaceData");

	return Clss;
}


// PCGSurfaceData PCG.Default__PCGSurfaceData
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGSurfaceData* UPCGSurfaceData::GetDefaultObj()
{
	static class UPCGSurfaceData* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGSurfaceData*>(UPCGSurfaceData::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGLandscapeData
// (None)

class UClass* UPCGLandscapeData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGLandscapeData");

	return Clss;
}


// PCGLandscapeData PCG.Default__PCGLandscapeData
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGLandscapeData* UPCGLandscapeData::GetDefaultObj()
{
	static class UPCGLandscapeData* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGLandscapeData*>(UPCGLandscapeData::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGPolyLineData
// (None)

class UClass* UPCGPolyLineData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGPolyLineData");

	return Clss;
}


// PCGPolyLineData PCG.Default__PCGPolyLineData
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGPolyLineData* UPCGPolyLineData::GetDefaultObj()
{
	static class UPCGPolyLineData* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGPolyLineData*>(UPCGPolyLineData::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGLandscapeSplineData
// (None)

class UClass* UPCGLandscapeSplineData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGLandscapeSplineData");

	return Clss;
}


// PCGLandscapeSplineData PCG.Default__PCGLandscapeSplineData
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGLandscapeSplineData* UPCGLandscapeSplineData::GetDefaultObj()
{
	static class UPCGLandscapeSplineData* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGLandscapeSplineData*>(UPCGLandscapeSplineData::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGPointData
// (None)

class UClass* UPCGPointData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGPointData");

	return Clss;
}


// PCGPointData PCG.Default__PCGPointData
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGPointData* UPCGPointData::GetDefaultObj()
{
	static class UPCGPointData* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGPointData*>(UPCGPointData::StaticClass()->DefaultObject);

	return Default;
}


// Function PCG.PCGPointData.SetPoints
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FPCGPoint>           InPoints                                                         (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

TArray<struct FPCGPoint> UPCGPointData::SetPoints()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGPointData", "SetPoints");

	Params::UPCGPointData_SetPoints_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PCG.PCGPointData.GetPoints
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FPCGPoint>           ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UPCGPointData::GetPoints(TArray<struct FPCGPoint>* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGPointData", "GetPoints");

	Params::UPCGPointData_GetPoints_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function PCG.PCGPointData.GetPoint
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// struct FPCGPoint                   ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UPCGPointData::GetPoint(struct FPCGPoint* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGPointData", "GetPoint");

	Params::UPCGPointData_GetPoint_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

	return Parms.ReturnValue;

}


// Function PCG.PCGPointData.CopyPointsFrom
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UPCGPointData*               InData                                                           (ConstParm, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// TArray<int32>                      InDataIndices                                                    (Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

TArray<int32> UPCGPointData::CopyPointsFrom()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGPointData", "CopyPointsFrom");

	Params::UPCGPointData_CopyPointsFrom_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class PCG.PCGPrimitiveData
// (None)

class UClass* UPCGPrimitiveData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGPrimitiveData");

	return Clss;
}


// PCGPrimitiveData PCG.Default__PCGPrimitiveData
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGPrimitiveData* UPCGPrimitiveData::GetDefaultObj()
{
	static class UPCGPrimitiveData* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGPrimitiveData*>(UPCGPrimitiveData::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGProjectionData
// (None)

class UClass* UPCGProjectionData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGProjectionData");

	return Clss;
}


// PCGProjectionData PCG.Default__PCGProjectionData
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGProjectionData* UPCGProjectionData::GetDefaultObj()
{
	static class UPCGProjectionData* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGProjectionData*>(UPCGProjectionData::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGBaseTextureData
// (None)

class UClass* UPCGBaseTextureData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGBaseTextureData");

	return Clss;
}


// PCGBaseTextureData PCG.Default__PCGBaseTextureData
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGBaseTextureData* UPCGBaseTextureData::GetDefaultObj()
{
	static class UPCGBaseTextureData* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGBaseTextureData*>(UPCGBaseTextureData::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGRenderTargetData
// (None)

class UClass* UPCGRenderTargetData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGRenderTargetData");

	return Clss;
}


// PCGRenderTargetData PCG.Default__PCGRenderTargetData
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGRenderTargetData* UPCGRenderTargetData::GetDefaultObj()
{
	static class UPCGRenderTargetData* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGRenderTargetData*>(UPCGRenderTargetData::StaticClass()->DefaultObject);

	return Default;
}


// Function PCG.PCGRenderTargetData.Initialize
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UTextureRenderTarget2D*      InRenderTarget                                                   (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// struct FTransform                  InTransform                                                      (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)

class UTextureRenderTarget2D* UPCGRenderTargetData::Initialize(const struct FTransform& InTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGRenderTargetData", "Initialize");

	Params::UPCGRenderTargetData_Initialize_Params Parms{};

	Parms.InTransform = InTransform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class PCG.PCGSplineData
// (None)

class UClass* UPCGSplineData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGSplineData");

	return Clss;
}


// PCGSplineData PCG.Default__PCGSplineData
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGSplineData* UPCGSplineData::GetDefaultObj()
{
	static class UPCGSplineData* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGSplineData*>(UPCGSplineData::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGSplineProjectionData
// (None)

class UClass* UPCGSplineProjectionData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGSplineProjectionData");

	return Clss;
}


// PCGSplineProjectionData PCG.Default__PCGSplineProjectionData
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGSplineProjectionData* UPCGSplineProjectionData::GetDefaultObj()
{
	static class UPCGSplineProjectionData* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGSplineProjectionData*>(UPCGSplineProjectionData::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGTextureData
// (None)

class UClass* UPCGTextureData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGTextureData");

	return Clss;
}


// PCGTextureData PCG.Default__PCGTextureData
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGTextureData* UPCGTextureData::GetDefaultObj()
{
	static class UPCGTextureData* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGTextureData*>(UPCGTextureData::StaticClass()->DefaultObject);

	return Default;
}


// Function PCG.PCGTextureData.Initialize
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UTexture2D*                  InTexture                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// struct FTransform                  InTransform                                                      (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)

class UTexture2D* UPCGTextureData::Initialize(const struct FTransform& InTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGTextureData", "Initialize");

	Params::UPCGTextureData_Initialize_Params Parms{};

	Parms.InTransform = InTransform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class PCG.PCGUnionData
// (None)

class UClass* UPCGUnionData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGUnionData");

	return Clss;
}


// PCGUnionData PCG.Default__PCGUnionData
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGUnionData* UPCGUnionData::GetDefaultObj()
{
	static class UPCGUnionData* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGUnionData*>(UPCGUnionData::StaticClass()->DefaultObject);

	return Default;
}


// Function PCG.PCGUnionData.Initialize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPCGSpatialData*             InA                                                              (ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config)
// class UPCGSpatialData*             InB                                                              (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config)

void UPCGUnionData::Initialize(class UPCGSpatialData* InA, class UPCGSpatialData* InB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGUnionData", "Initialize");

	Params::UPCGUnionData_Initialize_Params Parms{};

	Parms.InA = InA;
	Parms.InB = InB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGUnionData.AddData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPCGSpatialData*             InData                                                           (ConstParm, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

class UPCGSpatialData* UPCGUnionData::AddData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGUnionData", "AddData");

	Params::UPCGUnionData_AddData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class PCG.PCGVolumeData
// (None)

class UClass* UPCGVolumeData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGVolumeData");

	return Clss;
}


// PCGVolumeData PCG.Default__PCGVolumeData
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGVolumeData* UPCGVolumeData::GetDefaultObj()
{
	static class UPCGVolumeData* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGVolumeData*>(UPCGVolumeData::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGWorldVolumetricData
// (None)

class UClass* UPCGWorldVolumetricData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGWorldVolumetricData");

	return Clss;
}


// PCGWorldVolumetricData PCG.Default__PCGWorldVolumetricData
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGWorldVolumetricData* UPCGWorldVolumetricData::GetDefaultObj()
{
	static class UPCGWorldVolumetricData* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGWorldVolumetricData*>(UPCGWorldVolumetricData::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGWorldRayHitData
// (None)

class UClass* UPCGWorldRayHitData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGWorldRayHitData");

	return Clss;
}


// PCGWorldRayHitData PCG.Default__PCGWorldRayHitData
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGWorldRayHitData* UPCGWorldRayHitData::GetDefaultObj()
{
	static class UPCGWorldRayHitData* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGWorldRayHitData*>(UPCGWorldRayHitData::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGMetadataSettingsBase
// (None)

class UClass* UPCGMetadataSettingsBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGMetadataSettingsBase");

	return Clss;
}


// PCGMetadataSettingsBase PCG.Default__PCGMetadataSettingsBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGMetadataSettingsBase* UPCGMetadataSettingsBase::GetDefaultObj()
{
	static class UPCGMetadataSettingsBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGMetadataSettingsBase*>(UPCGMetadataSettingsBase::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGMetadataBitwiseSettings
// (None)

class UClass* UPCGMetadataBitwiseSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGMetadataBitwiseSettings");

	return Clss;
}


// PCGMetadataBitwiseSettings PCG.Default__PCGMetadataBitwiseSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGMetadataBitwiseSettings* UPCGMetadataBitwiseSettings::GetDefaultObj()
{
	static class UPCGMetadataBitwiseSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGMetadataBitwiseSettings*>(UPCGMetadataBitwiseSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGMetadataBooleanSettings
// (None)

class UClass* UPCGMetadataBooleanSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGMetadataBooleanSettings");

	return Clss;
}


// PCGMetadataBooleanSettings PCG.Default__PCGMetadataBooleanSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGMetadataBooleanSettings* UPCGMetadataBooleanSettings::GetDefaultObj()
{
	static class UPCGMetadataBooleanSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGMetadataBooleanSettings*>(UPCGMetadataBooleanSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGMetadataBreakTransformSettings
// (None)

class UClass* UPCGMetadataBreakTransformSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGMetadataBreakTransformSettings");

	return Clss;
}


// PCGMetadataBreakTransformSettings PCG.Default__PCGMetadataBreakTransformSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGMetadataBreakTransformSettings* UPCGMetadataBreakTransformSettings::GetDefaultObj()
{
	static class UPCGMetadataBreakTransformSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGMetadataBreakTransformSettings*>(UPCGMetadataBreakTransformSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGMetadataBreakVectorSettings
// (None)

class UClass* UPCGMetadataBreakVectorSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGMetadataBreakVectorSettings");

	return Clss;
}


// PCGMetadataBreakVectorSettings PCG.Default__PCGMetadataBreakVectorSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGMetadataBreakVectorSettings* UPCGMetadataBreakVectorSettings::GetDefaultObj()
{
	static class UPCGMetadataBreakVectorSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGMetadataBreakVectorSettings*>(UPCGMetadataBreakVectorSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGMetadataCompareSettings
// (None)

class UClass* UPCGMetadataCompareSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGMetadataCompareSettings");

	return Clss;
}


// PCGMetadataCompareSettings PCG.Default__PCGMetadataCompareSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGMetadataCompareSettings* UPCGMetadataCompareSettings::GetDefaultObj()
{
	static class UPCGMetadataCompareSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGMetadataCompareSettings*>(UPCGMetadataCompareSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGMetadataOperationSettings
// (None)

class UClass* UPCGMetadataOperationSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGMetadataOperationSettings");

	return Clss;
}


// PCGMetadataOperationSettings PCG.Default__PCGMetadataOperationSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGMetadataOperationSettings* UPCGMetadataOperationSettings::GetDefaultObj()
{
	static class UPCGMetadataOperationSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGMetadataOperationSettings*>(UPCGMetadataOperationSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGMetadataMakeTransformSettings
// (None)

class UClass* UPCGMetadataMakeTransformSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGMetadataMakeTransformSettings");

	return Clss;
}


// PCGMetadataMakeTransformSettings PCG.Default__PCGMetadataMakeTransformSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGMetadataMakeTransformSettings* UPCGMetadataMakeTransformSettings::GetDefaultObj()
{
	static class UPCGMetadataMakeTransformSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGMetadataMakeTransformSettings*>(UPCGMetadataMakeTransformSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGMetadataMakeVectorSettings
// (None)

class UClass* UPCGMetadataMakeVectorSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGMetadataMakeVectorSettings");

	return Clss;
}


// PCGMetadataMakeVectorSettings PCG.Default__PCGMetadataMakeVectorSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGMetadataMakeVectorSettings* UPCGMetadataMakeVectorSettings::GetDefaultObj()
{
	static class UPCGMetadataMakeVectorSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGMetadataMakeVectorSettings*>(UPCGMetadataMakeVectorSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGMetadataMathsSettings
// (None)

class UClass* UPCGMetadataMathsSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGMetadataMathsSettings");

	return Clss;
}


// PCGMetadataMathsSettings PCG.Default__PCGMetadataMathsSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGMetadataMathsSettings* UPCGMetadataMathsSettings::GetDefaultObj()
{
	static class UPCGMetadataMathsSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGMetadataMathsSettings*>(UPCGMetadataMathsSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGMetadataPartitionSettings
// (None)

class UClass* UPCGMetadataPartitionSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGMetadataPartitionSettings");

	return Clss;
}


// PCGMetadataPartitionSettings PCG.Default__PCGMetadataPartitionSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGMetadataPartitionSettings* UPCGMetadataPartitionSettings::GetDefaultObj()
{
	static class UPCGMetadataPartitionSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGMetadataPartitionSettings*>(UPCGMetadataPartitionSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGMetadataRenameSettings
// (None)

class UClass* UPCGMetadataRenameSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGMetadataRenameSettings");

	return Clss;
}


// PCGMetadataRenameSettings PCG.Default__PCGMetadataRenameSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGMetadataRenameSettings* UPCGMetadataRenameSettings::GetDefaultObj()
{
	static class UPCGMetadataRenameSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGMetadataRenameSettings*>(UPCGMetadataRenameSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGMetadataRotatorSettings
// (None)

class UClass* UPCGMetadataRotatorSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGMetadataRotatorSettings");

	return Clss;
}


// PCGMetadataRotatorSettings PCG.Default__PCGMetadataRotatorSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGMetadataRotatorSettings* UPCGMetadataRotatorSettings::GetDefaultObj()
{
	static class UPCGMetadataRotatorSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGMetadataRotatorSettings*>(UPCGMetadataRotatorSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGMetadataTransformSettings
// (None)

class UClass* UPCGMetadataTransformSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGMetadataTransformSettings");

	return Clss;
}


// PCGMetadataTransformSettings PCG.Default__PCGMetadataTransformSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGMetadataTransformSettings* UPCGMetadataTransformSettings::GetDefaultObj()
{
	static class UPCGMetadataTransformSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGMetadataTransformSettings*>(UPCGMetadataTransformSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGMetadataTrigSettings
// (None)

class UClass* UPCGMetadataTrigSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGMetadataTrigSettings");

	return Clss;
}


// PCGMetadataTrigSettings PCG.Default__PCGMetadataTrigSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGMetadataTrigSettings* UPCGMetadataTrigSettings::GetDefaultObj()
{
	static class UPCGMetadataTrigSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGMetadataTrigSettings*>(UPCGMetadataTrigSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGMetadataVectorSettings
// (None)

class UClass* UPCGMetadataVectorSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGMetadataVectorSettings");

	return Clss;
}


// PCGMetadataVectorSettings PCG.Default__PCGMetadataVectorSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGMetadataVectorSettings* UPCGMetadataVectorSettings::GetDefaultObj()
{
	static class UPCGMetadataVectorSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGMetadataVectorSettings*>(UPCGMetadataVectorSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGAttributeFilterSettings
// (None)

class UClass* UPCGAttributeFilterSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGAttributeFilterSettings");

	return Clss;
}


// PCGAttributeFilterSettings PCG.Default__PCGAttributeFilterSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGAttributeFilterSettings* UPCGAttributeFilterSettings::GetDefaultObj()
{
	static class UPCGAttributeFilterSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGAttributeFilterSettings*>(UPCGAttributeFilterSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGAttributeGetFromPointIndexSettings
// (None)

class UClass* UPCGAttributeGetFromPointIndexSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGAttributeGetFromPointIndexSettings");

	return Clss;
}


// PCGAttributeGetFromPointIndexSettings PCG.Default__PCGAttributeGetFromPointIndexSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGAttributeGetFromPointIndexSettings* UPCGAttributeGetFromPointIndexSettings::GetDefaultObj()
{
	static class UPCGAttributeGetFromPointIndexSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGAttributeGetFromPointIndexSettings*>(UPCGAttributeGetFromPointIndexSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGAttributeReduceSettings
// (None)

class UClass* UPCGAttributeReduceSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGAttributeReduceSettings");

	return Clss;
}


// PCGAttributeReduceSettings PCG.Default__PCGAttributeReduceSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGAttributeReduceSettings* UPCGAttributeReduceSettings::GetDefaultObj()
{
	static class UPCGAttributeReduceSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGAttributeReduceSettings*>(UPCGAttributeReduceSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGAttributeSelectSettings
// (None)

class UClass* UPCGAttributeSelectSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGAttributeSelectSettings");

	return Clss;
}


// PCGAttributeSelectSettings PCG.Default__PCGAttributeSelectSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGAttributeSelectSettings* UPCGAttributeSelectSettings::GetDefaultObj()
{
	static class UPCGAttributeSelectSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGAttributeSelectSettings*>(UPCGAttributeSelectSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGAttributeTransferSettings
// (None)

class UClass* UPCGAttributeTransferSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGAttributeTransferSettings");

	return Clss;
}


// PCGAttributeTransferSettings PCG.Default__PCGAttributeTransferSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGAttributeTransferSettings* UPCGAttributeTransferSettings::GetDefaultObj()
{
	static class UPCGAttributeTransferSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGAttributeTransferSettings*>(UPCGAttributeTransferSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGBoundsModifierSettings
// (None)

class UClass* UPCGBoundsModifierSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGBoundsModifierSettings");

	return Clss;
}


// PCGBoundsModifierSettings PCG.Default__PCGBoundsModifierSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGBoundsModifierSettings* UPCGBoundsModifierSettings::GetDefaultObj()
{
	static class UPCGBoundsModifierSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGBoundsModifierSettings*>(UPCGBoundsModifierSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGCollapseSettings
// (None)

class UClass* UPCGCollapseSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGCollapseSettings");

	return Clss;
}


// PCGCollapseSettings PCG.Default__PCGCollapseSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGCollapseSettings* UPCGCollapseSettings::GetDefaultObj()
{
	static class UPCGCollapseSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGCollapseSettings*>(UPCGCollapseSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGCopyPointsSettings
// (None)

class UClass* UPCGCopyPointsSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGCopyPointsSettings");

	return Clss;
}


// PCGCopyPointsSettings PCG.Default__PCGCopyPointsSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGCopyPointsSettings* UPCGCopyPointsSettings::GetDefaultObj()
{
	static class UPCGCopyPointsSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGCopyPointsSettings*>(UPCGCopyPointsSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGCreateAttributeSettings
// (None)

class UClass* UPCGCreateAttributeSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGCreateAttributeSettings");

	return Clss;
}


// PCGCreateAttributeSettings PCG.Default__PCGCreateAttributeSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGCreateAttributeSettings* UPCGCreateAttributeSettings::GetDefaultObj()
{
	static class UPCGCreateAttributeSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGCreateAttributeSettings*>(UPCGCreateAttributeSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGCreateAttributeSetSettings
// (None)

class UClass* UPCGCreateAttributeSetSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGCreateAttributeSetSettings");

	return Clss;
}


// PCGCreateAttributeSetSettings PCG.Default__PCGCreateAttributeSetSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGCreateAttributeSetSettings* UPCGCreateAttributeSetSettings::GetDefaultObj()
{
	static class UPCGCreateAttributeSetSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGCreateAttributeSetSettings*>(UPCGCreateAttributeSetSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGCreateSplineSettings
// (None)

class UClass* UPCGCreateSplineSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGCreateSplineSettings");

	return Clss;
}


// PCGCreateSplineSettings PCG.Default__PCGCreateSplineSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGCreateSplineSettings* UPCGCreateSplineSettings::GetDefaultObj()
{
	static class UPCGCreateSplineSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGCreateSplineSettings*>(UPCGCreateSplineSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGDataFromActorSettings
// (None)

class UClass* UPCGDataFromActorSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGDataFromActorSettings");

	return Clss;
}


// PCGDataFromActorSettings PCG.Default__PCGDataFromActorSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGDataFromActorSettings* UPCGDataFromActorSettings::GetDefaultObj()
{
	static class UPCGDataFromActorSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGDataFromActorSettings*>(UPCGDataFromActorSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGDataTableRowToParamDataSettings
// (None)

class UClass* UPCGDataTableRowToParamDataSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGDataTableRowToParamDataSettings");

	return Clss;
}


// PCGDataTableRowToParamDataSettings PCG.Default__PCGDataTableRowToParamDataSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGDataTableRowToParamDataSettings* UPCGDataTableRowToParamDataSettings::GetDefaultObj()
{
	static class UPCGDataTableRowToParamDataSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGDataTableRowToParamDataSettings*>(UPCGDataTableRowToParamDataSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGDebugSettings
// (None)

class UClass* UPCGDebugSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGDebugSettings");

	return Clss;
}


// PCGDebugSettings PCG.Default__PCGDebugSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGDebugSettings* UPCGDebugSettings::GetDefaultObj()
{
	static class UPCGDebugSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGDebugSettings*>(UPCGDebugSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGDensityFilterSettings
// (None)

class UClass* UPCGDensityFilterSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGDensityFilterSettings");

	return Clss;
}


// PCGDensityFilterSettings PCG.Default__PCGDensityFilterSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGDensityFilterSettings* UPCGDensityFilterSettings::GetDefaultObj()
{
	static class UPCGDensityFilterSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGDensityFilterSettings*>(UPCGDensityFilterSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGDensityNoiseSettings
// (None)

class UClass* UPCGDensityNoiseSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGDensityNoiseSettings");

	return Clss;
}


// PCGDensityNoiseSettings PCG.Default__PCGDensityNoiseSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGDensityNoiseSettings* UPCGDensityNoiseSettings::GetDefaultObj()
{
	static class UPCGDensityNoiseSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGDensityNoiseSettings*>(UPCGDensityNoiseSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGLinearDensityRemapSettings
// (None)

class UClass* UPCGLinearDensityRemapSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGLinearDensityRemapSettings");

	return Clss;
}


// PCGLinearDensityRemapSettings PCG.Default__PCGLinearDensityRemapSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGLinearDensityRemapSettings* UPCGLinearDensityRemapSettings::GetDefaultObj()
{
	static class UPCGLinearDensityRemapSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGLinearDensityRemapSettings*>(UPCGLinearDensityRemapSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGDensityRemapSettings
// (None)

class UClass* UPCGDensityRemapSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGDensityRemapSettings");

	return Clss;
}


// PCGDensityRemapSettings PCG.Default__PCGDensityRemapSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGDensityRemapSettings* UPCGDensityRemapSettings::GetDefaultObj()
{
	static class UPCGDensityRemapSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGDensityRemapSettings*>(UPCGDensityRemapSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGDifferenceSettings
// (None)

class UClass* UPCGDifferenceSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGDifferenceSettings");

	return Clss;
}


// PCGDifferenceSettings PCG.Default__PCGDifferenceSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGDifferenceSettings* UPCGDifferenceSettings::GetDefaultObj()
{
	static class UPCGDifferenceSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGDifferenceSettings*>(UPCGDifferenceSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGBlueprintElement
// (None)

class UClass* UPCGBlueprintElement::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGBlueprintElement");

	return Clss;
}


// PCGBlueprintElement PCG.Default__PCGBlueprintElement
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGBlueprintElement* UPCGBlueprintElement::GetDefaultObj()
{
	static class UPCGBlueprintElement* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGBlueprintElement*>(UPCGBlueprintElement::StaticClass()->DefaultObject);

	return Default;
}


// Function PCG.PCGBlueprintElement.VariableLoopBody
// (Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// struct FPCGContext                 InContext                                                        (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// class UPCGPointData*               InData                                                           (ConstParm, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// struct FPCGPoint                   InPoint                                                          (Edit, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// class UPCGMetadata*                OutMetadata                                                      (Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FPCGPoint>           ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UPCGMetadata* UPCGBlueprintElement::VariableLoopBody(const struct FPCGContext& InContext, const struct FPCGPoint& InPoint, TArray<struct FPCGPoint>* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGBlueprintElement", "VariableLoopBody");

	Params::UPCGBlueprintElement_VariableLoopBody_Params Parms{};

	Parms.InContext = InContext;
	Parms.InPoint = InPoint;

	UObject::ProcessEvent(Func, &Parms);

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

	return Parms.ReturnValue;

}


// Function PCG.PCGBlueprintElement.VariableLoop
// (Final, Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// struct FPCGContext                 InContext                                                        (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// class UPCGPointData*               InData                                                           (ConstParm, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class UPCGPointData*               OutData                                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class UPCGPointData*               OptionalOutData                                                  (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

class UPCGPointData* UPCGBlueprintElement::VariableLoop(const struct FPCGContext& InContext, class UPCGPointData* OptionalOutData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGBlueprintElement", "VariableLoop");

	Params::UPCGBlueprintElement_VariableLoop_Params Parms{};

	Parms.InContext = InContext;
	Parms.OptionalOutData = OptionalOutData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PCG.PCGBlueprintElement.PointLoopBody
// (Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// struct FPCGContext                 InContext                                                        (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// class UPCGPointData*               InData                                                           (ConstParm, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// struct FPCGPoint                   InPoint                                                          (Edit, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// struct FPCGPoint                   OutPoint                                                         (BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// class UPCGMetadata*                OutMetadata                                                      (Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UPCGMetadata* UPCGBlueprintElement::PointLoopBody(const struct FPCGContext& InContext, const struct FPCGPoint& InPoint, bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGBlueprintElement", "PointLoopBody");

	Params::UPCGBlueprintElement_PointLoopBody_Params Parms{};

	Parms.InContext = InContext;
	Parms.InPoint = InPoint;

	UObject::ProcessEvent(Func, &Parms);

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function PCG.PCGBlueprintElement.PointLoop
// (Final, Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// struct FPCGContext                 InContext                                                        (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// class UPCGPointData*               InData                                                           (ConstParm, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class UPCGPointData*               OutData                                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class UPCGPointData*               OptionalOutData                                                  (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

class UPCGPointData* UPCGBlueprintElement::PointLoop(const struct FPCGContext& InContext, class UPCGPointData* OptionalOutData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGBlueprintElement", "PointLoop");

	Params::UPCGBlueprintElement_PointLoop_Params Parms{};

	Parms.InContext = InContext;
	Parms.OptionalOutData = OptionalOutData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PCG.PCGBlueprintElement.OutputLabels
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TSet<class FName>                  ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UPCGBlueprintElement::OutputLabels(TSet<class FName>* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGBlueprintElement", "OutputLabels");

	Params::UPCGBlueprintElement_OutputLabels_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function PCG.PCGBlueprintElement.NodeTypeOverride
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// enum class EPCGSettingsType        ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UPCGBlueprintElement::NodeTypeOverride(enum class EPCGSettingsType* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGBlueprintElement", "NodeTypeOverride");

	Params::UPCGBlueprintElement_NodeTypeOverride_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function PCG.PCGBlueprintElement.NodeTitleOverride
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class FName                        ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UPCGBlueprintElement::NodeTitleOverride(class FName* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGBlueprintElement", "NodeTitleOverride");

	Params::UPCGBlueprintElement_NodeTitleOverride_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function PCG.PCGBlueprintElement.NodeColorOverride
// (Native, Event, Public, HasDefaults, BlueprintEvent, Const)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UPCGBlueprintElement::NodeColorOverride(struct FLinearColor* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGBlueprintElement", "NodeColorOverride");

	Params::UPCGBlueprintElement_NodeColorOverride_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function PCG.PCGBlueprintElement.NestedLoopBody
// (Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// struct FPCGContext                 InContext                                                        (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// class UPCGPointData*               InOuterData                                                      (Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// class UPCGPointData*               InInnerData                                                      (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// struct FPCGPoint                   InOuterPoint                                                     (OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// struct FPCGPoint                   InInnerPoint                                                     (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// struct FPCGPoint                   OutPoint                                                         (BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// class UPCGMetadata*                OutMetadata                                                      (Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UPCGMetadata* UPCGBlueprintElement::NestedLoopBody(const struct FPCGContext& InContext, bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGBlueprintElement", "NestedLoopBody");

	Params::UPCGBlueprintElement_NestedLoopBody_Params Parms{};

	Parms.InContext = InContext;

	UObject::ProcessEvent(Func, &Parms);

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function PCG.PCGBlueprintElement.NestedLoop
// (Final, Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// struct FPCGContext                 InContext                                                        (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// class UPCGPointData*               InOuterData                                                      (Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// class UPCGPointData*               InInnerData                                                      (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// class UPCGPointData*               OutData                                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class UPCGPointData*               OptionalOutData                                                  (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

class UPCGPointData* UPCGBlueprintElement::NestedLoop(const struct FPCGContext& InContext, class UPCGPointData* OptionalOutData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGBlueprintElement", "NestedLoop");

	Params::UPCGBlueprintElement_NestedLoop_Params Parms{};

	Parms.InContext = InContext;
	Parms.OptionalOutData = OptionalOutData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PCG.PCGBlueprintElement.IterationLoopBody
// (Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// struct FPCGContext                 InContext                                                        (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// int64                              Iteration                                                        (Edit, ConstParm, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// class UPCGSpatialData*             InA                                                              (ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config)
// class UPCGSpatialData*             InB                                                              (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config)
// struct FPCGPoint                   OutPoint                                                         (BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// class UPCGMetadata*                OutMetadata                                                      (Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UPCGMetadata* UPCGBlueprintElement::IterationLoopBody(const struct FPCGContext& InContext, int64 Iteration, class UPCGSpatialData* InA, class UPCGSpatialData* InB, bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGBlueprintElement", "IterationLoopBody");

	Params::UPCGBlueprintElement_IterationLoopBody_Params Parms{};

	Parms.InContext = InContext;
	Parms.Iteration = Iteration;
	Parms.InA = InA;
	Parms.InB = InB;

	UObject::ProcessEvent(Func, &Parms);

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function PCG.PCGBlueprintElement.IterationLoop
// (Final, Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// struct FPCGContext                 InContext                                                        (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// int64                              NumIterations                                                    (ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UPCGPointData*               OutData                                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class UPCGSpatialData*             OptionalA                                                        (BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// class UPCGSpatialData*             OptionalB                                                        (ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// class UPCGPointData*               OptionalOutData                                                  (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

class UPCGSpatialData* UPCGBlueprintElement::IterationLoop(const struct FPCGContext& InContext, class UPCGPointData* OptionalOutData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGBlueprintElement", "IterationLoop");

	Params::UPCGBlueprintElement_IterationLoop_Params Parms{};

	Parms.InContext = InContext;
	Parms.OptionalOutData = OptionalOutData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PCG.PCGBlueprintElement.InputLabels
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TSet<class FName>                  ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UPCGBlueprintElement::InputLabels(TSet<class FName>* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGBlueprintElement", "InputLabels");

	Params::UPCGBlueprintElement_InputLabels_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function PCG.PCGBlueprintElement.GetSeed
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPCGContext                 InContext                                                        (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UPCGBlueprintElement::GetSeed(const struct FPCGContext& InContext, int32* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGBlueprintElement", "GetSeed");

	Params::UPCGBlueprintElement_GetSeed_Params Parms{};

	Parms.InContext = InContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function PCG.PCGBlueprintElement.GetRandomStream
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, Const)
// Parameters:
// struct FPCGContext                 InContext                                                        (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// struct FRandomStream               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UPCGBlueprintElement::GetRandomStream(const struct FPCGContext& InContext, struct FRandomStream* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGBlueprintElement", "GetRandomStream");

	Params::UPCGBlueprintElement_GetRandomStream_Params Parms{};

	Parms.InContext = InContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function PCG.PCGBlueprintElement.ExecuteWithContext
// (Native, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPCGContext                 InContext                                                        (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// struct FPCGDataCollection          Input                                                            (Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor)
// struct FPCGDataCollection          Output                                                           (Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor)

void UPCGBlueprintElement::ExecuteWithContext(const struct FPCGContext& InContext, const struct FPCGDataCollection& Input, struct FPCGDataCollection* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGBlueprintElement", "ExecuteWithContext");

	Params::UPCGBlueprintElement_ExecuteWithContext_Params Parms{};

	Parms.InContext = InContext;
	Parms.Input = Input;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

}


// Function PCG.PCGBlueprintElement.Execute
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPCGDataCollection          Input                                                            (Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor)
// struct FPCGDataCollection          Output                                                           (Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor)

void UPCGBlueprintElement::Execute(const struct FPCGDataCollection& Input, struct FPCGDataCollection* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGBlueprintElement", "Execute");

	Params::UPCGBlueprintElement_Execute_Params Parms{};

	Parms.Input = Input;

	UObject::ProcessEvent(Func, &Parms);

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

}


// Class PCG.PCGBlueprintSettings
// (None)

class UClass* UPCGBlueprintSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGBlueprintSettings");

	return Clss;
}


// PCGBlueprintSettings PCG.Default__PCGBlueprintSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGBlueprintSettings* UPCGBlueprintSettings::GetDefaultObj()
{
	static class UPCGBlueprintSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGBlueprintSettings*>(UPCGBlueprintSettings::StaticClass()->DefaultObject);

	return Default;
}


// Function PCG.PCGBlueprintSettings.SetElementType
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UClass*                      InElementType                                                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// class UPCGBlueprintElement*        ElementInstance                                                  (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

void UPCGBlueprintSettings::SetElementType(class UClass** InElementType, class UPCGBlueprintElement** ElementInstance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGBlueprintSettings", "SetElementType");

	Params::UPCGBlueprintSettings_SetElementType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InElementType != nullptr)
		*InElementType = Parms.InElementType;

	if (ElementInstance != nullptr)
		*ElementInstance = Parms.ElementInstance;

}


// Function PCG.PCGBlueprintSettings.GetElementType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                      ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UPCGBlueprintSettings::GetElementType(class UClass** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGBlueprintSettings", "GetElementType");

	Params::UPCGBlueprintSettings_GetElementType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Class PCG.PCGFilterByTagSettings
// (None)

class UClass* UPCGFilterByTagSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGFilterByTagSettings");

	return Clss;
}


// PCGFilterByTagSettings PCG.Default__PCGFilterByTagSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGFilterByTagSettings* UPCGFilterByTagSettings::GetDefaultObj()
{
	static class UPCGFilterByTagSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGFilterByTagSettings*>(UPCGFilterByTagSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGIntersectionSettings
// (None)

class UClass* UPCGIntersectionSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGIntersectionSettings");

	return Clss;
}


// PCGIntersectionSettings PCG.Default__PCGIntersectionSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGIntersectionSettings* UPCGIntersectionSettings::GetDefaultObj()
{
	static class UPCGIntersectionSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGIntersectionSettings*>(UPCGIntersectionSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGMergeSettings
// (None)

class UClass* UPCGMergeSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGMergeSettings");

	return Clss;
}


// PCGMergeSettings PCG.Default__PCGMergeSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGMergeSettings* UPCGMergeSettings::GetDefaultObj()
{
	static class UPCGMergeSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGMergeSettings*>(UPCGMergeSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGPointExtentsModifierSettings
// (None)

class UClass* UPCGPointExtentsModifierSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGPointExtentsModifierSettings");

	return Clss;
}


// PCGPointExtentsModifierSettings PCG.Default__PCGPointExtentsModifierSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGPointExtentsModifierSettings* UPCGPointExtentsModifierSettings::GetDefaultObj()
{
	static class UPCGPointExtentsModifierSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGPointExtentsModifierSettings*>(UPCGPointExtentsModifierSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGPointFilterSettings
// (None)

class UClass* UPCGPointFilterSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGPointFilterSettings");

	return Clss;
}


// PCGPointFilterSettings PCG.Default__PCGPointFilterSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGPointFilterSettings* UPCGPointFilterSettings::GetDefaultObj()
{
	static class UPCGPointFilterSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGPointFilterSettings*>(UPCGPointFilterSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGPointMatchAndSetSettings
// (None)

class UClass* UPCGPointMatchAndSetSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGPointMatchAndSetSettings");

	return Clss;
}


// PCGPointMatchAndSetSettings PCG.Default__PCGPointMatchAndSetSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGPointMatchAndSetSettings* UPCGPointMatchAndSetSettings::GetDefaultObj()
{
	static class UPCGPointMatchAndSetSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGPointMatchAndSetSettings*>(UPCGPointMatchAndSetSettings::StaticClass()->DefaultObject);

	return Default;
}


// Function PCG.PCGPointMatchAndSetSettings.SetMatchAndSetType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                      InMatchAndSetType                                                (ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

void UPCGPointMatchAndSetSettings::SetMatchAndSetType(class UClass** InMatchAndSetType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGPointMatchAndSetSettings", "SetMatchAndSetType");

	Params::UPCGPointMatchAndSetSettings_SetMatchAndSetType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InMatchAndSetType != nullptr)
		*InMatchAndSetType = Parms.InMatchAndSetType;

}


// Class PCG.PCGPointSamplerSettings
// (None)

class UClass* UPCGPointSamplerSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGPointSamplerSettings");

	return Clss;
}


// PCGPointSamplerSettings PCG.Default__PCGPointSamplerSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGPointSamplerSettings* UPCGPointSamplerSettings::GetDefaultObj()
{
	static class UPCGPointSamplerSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGPointSamplerSettings*>(UPCGPointSamplerSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGProjectionSettings
// (None)

class UClass* UPCGProjectionSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGProjectionSettings");

	return Clss;
}


// PCGProjectionSettings PCG.Default__PCGProjectionSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGProjectionSettings* UPCGProjectionSettings::GetDefaultObj()
{
	static class UPCGProjectionSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGProjectionSettings*>(UPCGProjectionSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGPropertyToParamDataSettings
// (None)

class UClass* UPCGPropertyToParamDataSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGPropertyToParamDataSettings");

	return Clss;
}


// PCGPropertyToParamDataSettings PCG.Default__PCGPropertyToParamDataSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGPropertyToParamDataSettings* UPCGPropertyToParamDataSettings::GetDefaultObj()
{
	static class UPCGPropertyToParamDataSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGPropertyToParamDataSettings*>(UPCGPropertyToParamDataSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGSelfPruningSettings
// (None)

class UClass* UPCGSelfPruningSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGSelfPruningSettings");

	return Clss;
}


// PCGSelfPruningSettings PCG.Default__PCGSelfPruningSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGSelfPruningSettings* UPCGSelfPruningSettings::GetDefaultObj()
{
	static class UPCGSelfPruningSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGSelfPruningSettings*>(UPCGSelfPruningSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGBaseSubgraphSettings
// (None)

class UClass* UPCGBaseSubgraphSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGBaseSubgraphSettings");

	return Clss;
}


// PCGBaseSubgraphSettings PCG.Default__PCGBaseSubgraphSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGBaseSubgraphSettings* UPCGBaseSubgraphSettings::GetDefaultObj()
{
	static class UPCGBaseSubgraphSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGBaseSubgraphSettings*>(UPCGBaseSubgraphSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGSpawnActorSettings
// (None)

class UClass* UPCGSpawnActorSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGSpawnActorSettings");

	return Clss;
}


// PCGSpawnActorSettings PCG.Default__PCGSpawnActorSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGSpawnActorSettings* UPCGSpawnActorSettings::GetDefaultObj()
{
	static class UPCGSpawnActorSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGSpawnActorSettings*>(UPCGSpawnActorSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGNode
// (None)

class UClass* UPCGNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGNode");

	return Clss;
}


// PCGNode PCG.Default__PCGNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGNode* UPCGNode::GetDefaultObj()
{
	static class UPCGNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGNode*>(UPCGNode::StaticClass()->DefaultObject);

	return Default;
}


// Function PCG.PCGNode.RemoveEdgeTo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        FromPinLable                                                     (ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// class UPCGNode*                    To                                                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// class FName                        ToPinLabel                                                       (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UPCGNode::RemoveEdgeTo(class FName FromPinLable, class UPCGNode* To, class FName ToPinLabel, bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGNode", "RemoveEdgeTo");

	Params::UPCGNode_RemoveEdgeTo_Params Parms{};

	Parms.FromPinLable = FromPinLable;
	Parms.To = To;
	Parms.ToPinLabel = ToPinLabel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function PCG.PCGNode.GetSettings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPCGSettings*                ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UPCGNode::GetSettings(class UPCGSettings** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGNode", "GetSettings");

	Params::UPCGNode_GetSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function PCG.PCGNode.GetGraph
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPCGGraph*                   ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UPCGNode::GetGraph(class UPCGGraph** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGNode", "GetGraph");

	Params::UPCGNode_GetGraph_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function PCG.PCGNode.AddEdgeTo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        FromPinLabel                                                     (Edit, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// class UPCGNode*                    To                                                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// class FName                        ToPinLabel                                                       (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// class UPCGNode*                    ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UPCGNode::AddEdgeTo(class FName FromPinLabel, class UPCGNode* To, class FName ToPinLabel, class UPCGNode** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGNode", "AddEdgeTo");

	Params::UPCGNode_AddEdgeTo_Params Parms{};

	Parms.FromPinLabel = FromPinLabel;
	Parms.To = To;
	Parms.ToPinLabel = ToPinLabel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Class PCG.PCGBaseSubgraphNode
// (None)

class UClass* UPCGBaseSubgraphNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGBaseSubgraphNode");

	return Clss;
}


// PCGBaseSubgraphNode PCG.Default__PCGBaseSubgraphNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGBaseSubgraphNode* UPCGBaseSubgraphNode::GetDefaultObj()
{
	static class UPCGBaseSubgraphNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGBaseSubgraphNode*>(UPCGBaseSubgraphNode::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGSpawnActorNode
// (None)

class UClass* UPCGSpawnActorNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGSpawnActorNode");

	return Clss;
}


// PCGSpawnActorNode PCG.Default__PCGSpawnActorNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGSpawnActorNode* UPCGSpawnActorNode::GetDefaultObj()
{
	static class UPCGSpawnActorNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGSpawnActorNode*>(UPCGSpawnActorNode::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGSplineSamplerSettings
// (None)

class UClass* UPCGSplineSamplerSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGSplineSamplerSettings");

	return Clss;
}


// PCGSplineSamplerSettings PCG.Default__PCGSplineSamplerSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGSplineSamplerSettings* UPCGSplineSamplerSettings::GetDefaultObj()
{
	static class UPCGSplineSamplerSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGSplineSamplerSettings*>(UPCGSplineSamplerSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGStaticMeshSpawnerSettings
// (None)

class UClass* UPCGStaticMeshSpawnerSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGStaticMeshSpawnerSettings");

	return Clss;
}


// PCGStaticMeshSpawnerSettings PCG.Default__PCGStaticMeshSpawnerSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGStaticMeshSpawnerSettings* UPCGStaticMeshSpawnerSettings::GetDefaultObj()
{
	static class UPCGStaticMeshSpawnerSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGStaticMeshSpawnerSettings*>(UPCGStaticMeshSpawnerSettings::StaticClass()->DefaultObject);

	return Default;
}


// Function PCG.PCGStaticMeshSpawnerSettings.SetMeshSelectorType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                      InMeshSelectorType                                               (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

void UPCGStaticMeshSpawnerSettings::SetMeshSelectorType(class UClass* InMeshSelectorType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGStaticMeshSpawnerSettings", "SetMeshSelectorType");

	Params::UPCGStaticMeshSpawnerSettings_SetMeshSelectorType_Params Parms{};

	Parms.InMeshSelectorType = InMeshSelectorType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGStaticMeshSpawnerSettings.SetInstancePackerType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                      InInstancePackerType                                             (BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

void UPCGStaticMeshSpawnerSettings::SetInstancePackerType(class UClass* InInstancePackerType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGStaticMeshSpawnerSettings", "SetInstancePackerType");

	Params::UPCGStaticMeshSpawnerSettings_SetInstancePackerType_Params Parms{};

	Parms.InInstancePackerType = InInstancePackerType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class PCG.PCGSurfaceSamplerSettings
// (None)

class UClass* UPCGSurfaceSamplerSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGSurfaceSamplerSettings");

	return Clss;
}


// PCGSurfaceSamplerSettings PCG.Default__PCGSurfaceSamplerSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGSurfaceSamplerSettings* UPCGSurfaceSamplerSettings::GetDefaultObj()
{
	static class UPCGSurfaceSamplerSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGSurfaceSamplerSettings*>(UPCGSurfaceSamplerSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGTextureSamplerSettings
// (None)

class UClass* UPCGTextureSamplerSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGTextureSamplerSettings");

	return Clss;
}


// PCGTextureSamplerSettings PCG.Default__PCGTextureSamplerSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGTextureSamplerSettings* UPCGTextureSamplerSettings::GetDefaultObj()
{
	static class UPCGTextureSamplerSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGTextureSamplerSettings*>(UPCGTextureSamplerSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGTransformPointsSettings
// (None)

class UClass* UPCGTransformPointsSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGTransformPointsSettings");

	return Clss;
}


// PCGTransformPointsSettings PCG.Default__PCGTransformPointsSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGTransformPointsSettings* UPCGTransformPointsSettings::GetDefaultObj()
{
	static class UPCGTransformPointsSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGTransformPointsSettings*>(UPCGTransformPointsSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGGetLandscapeSettings
// (None)

class UClass* UPCGGetLandscapeSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGGetLandscapeSettings");

	return Clss;
}


// PCGGetLandscapeSettings PCG.Default__PCGGetLandscapeSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGGetLandscapeSettings* UPCGGetLandscapeSettings::GetDefaultObj()
{
	static class UPCGGetLandscapeSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGGetLandscapeSettings*>(UPCGGetLandscapeSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGGetSplineSettings
// (None)

class UClass* UPCGGetSplineSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGGetSplineSettings");

	return Clss;
}


// PCGGetSplineSettings PCG.Default__PCGGetSplineSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGGetSplineSettings* UPCGGetSplineSettings::GetDefaultObj()
{
	static class UPCGGetSplineSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGGetSplineSettings*>(UPCGGetSplineSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGGetVolumeSettings
// (None)

class UClass* UPCGGetVolumeSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGGetVolumeSettings");

	return Clss;
}


// PCGGetVolumeSettings PCG.Default__PCGGetVolumeSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGGetVolumeSettings* UPCGGetVolumeSettings::GetDefaultObj()
{
	static class UPCGGetVolumeSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGGetVolumeSettings*>(UPCGGetVolumeSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGGetPrimitiveSettings
// (None)

class UClass* UPCGGetPrimitiveSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGGetPrimitiveSettings");

	return Clss;
}


// PCGGetPrimitiveSettings PCG.Default__PCGGetPrimitiveSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGGetPrimitiveSettings* UPCGGetPrimitiveSettings::GetDefaultObj()
{
	static class UPCGGetPrimitiveSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGGetPrimitiveSettings*>(UPCGGetPrimitiveSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGUnionSettings
// (None)

class UClass* UPCGUnionSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGUnionSettings");

	return Clss;
}


// PCGUnionSettings PCG.Default__PCGUnionSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGUnionSettings* UPCGUnionSettings::GetDefaultObj()
{
	static class UPCGUnionSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGUnionSettings*>(UPCGUnionSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGVolumeSamplerSettings
// (None)

class UClass* UPCGVolumeSamplerSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGVolumeSamplerSettings");

	return Clss;
}


// PCGVolumeSamplerSettings PCG.Default__PCGVolumeSamplerSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGVolumeSamplerSettings* UPCGVolumeSamplerSettings::GetDefaultObj()
{
	static class UPCGVolumeSamplerSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGVolumeSamplerSettings*>(UPCGVolumeSamplerSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGWorldQuerySettings
// (None)

class UClass* UPCGWorldQuerySettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGWorldQuerySettings");

	return Clss;
}


// PCGWorldQuerySettings PCG.Default__PCGWorldQuerySettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGWorldQuerySettings* UPCGWorldQuerySettings::GetDefaultObj()
{
	static class UPCGWorldQuerySettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGWorldQuerySettings*>(UPCGWorldQuerySettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGWorldRayHitSettings
// (None)

class UClass* UPCGWorldRayHitSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGWorldRayHitSettings");

	return Clss;
}


// PCGWorldRayHitSettings PCG.Default__PCGWorldRayHitSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGWorldRayHitSettings* UPCGWorldRayHitSettings::GetDefaultObj()
{
	static class UPCGWorldRayHitSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGWorldRayHitSettings*>(UPCGWorldRayHitSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGLandscapeCache
// (None)

class UClass* UPCGLandscapeCache::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGLandscapeCache");

	return Clss;
}


// PCGLandscapeCache PCG.Default__PCGLandscapeCache
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGLandscapeCache* UPCGLandscapeCache::GetDefaultObj()
{
	static class UPCGLandscapeCache* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGLandscapeCache*>(UPCGLandscapeCache::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGPartitionActor
// (Actor)

class UClass* APCGPartitionActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGPartitionActor");

	return Clss;
}


// PCGPartitionActor PCG.Default__PCGPartitionActor
// (Public, ClassDefaultObject, ArchetypeObject)

class APCGPartitionActor* APCGPartitionActor::GetDefaultObj()
{
	static class APCGPartitionActor* Default = nullptr;

	if (!Default)
		Default = static_cast<APCGPartitionActor*>(APCGPartitionActor::StaticClass()->DefaultObject);

	return Default;
}


// Function PCG.PCGPartitionActor.GetOriginalComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPCGComponent*               LocalComponent                                                   (Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// class UPCGComponent*               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void APCGPartitionActor::GetOriginalComponent(class UPCGComponent** LocalComponent, class UPCGComponent** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGPartitionActor", "GetOriginalComponent");

	Params::APCGPartitionActor_GetOriginalComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (LocalComponent != nullptr)
		*LocalComponent = Parms.LocalComponent;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function PCG.PCGPartitionActor.GetLocalComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPCGComponent*               OriginalComponent                                                (Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// class UPCGComponent*               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void APCGPartitionActor::GetLocalComponent(class UPCGComponent** OriginalComponent, class UPCGComponent** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGPartitionActor", "GetLocalComponent");

	Params::APCGPartitionActor_GetLocalComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OriginalComponent != nullptr)
		*OriginalComponent = Parms.OriginalComponent;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Class PCG.PCGActorHelpers
// (None)

class UClass* UPCGActorHelpers::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGActorHelpers");

	return Clss;
}


// PCGActorHelpers PCG.Default__PCGActorHelpers
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGActorHelpers* UPCGActorHelpers::GetDefaultObj()
{
	static class UPCGActorHelpers* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGActorHelpers*>(UPCGActorHelpers::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGBlueprintHelpers
// (None)

class UClass* UPCGBlueprintHelpers::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGBlueprintHelpers");

	return Clss;
}


// PCGBlueprintHelpers PCG.Default__PCGBlueprintHelpers
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGBlueprintHelpers* UPCGBlueprintHelpers::GetDefaultObj()
{
	static class UPCGBlueprintHelpers* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGBlueprintHelpers*>(UPCGBlueprintHelpers::StaticClass()->DefaultObject);

	return Default;
}


// Function PCG.PCGBlueprintHelpers.SetSeedFromPosition
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPCGPoint                   InPoint                                                          (Edit, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

void UPCGBlueprintHelpers::SetSeedFromPosition(const struct FPCGPoint& InPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGBlueprintHelpers", "SetSeedFromPosition");

	Params::UPCGBlueprintHelpers_SetSeedFromPosition_Params Parms{};

	Parms.InPoint = InPoint;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGBlueprintHelpers.SetLocalCenter
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPCGPoint                   InPoint                                                          (Edit, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     InLocalCenter                                                    (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

void UPCGBlueprintHelpers::SetLocalCenter(const struct FPCGPoint& InPoint, struct FVector* InLocalCenter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGBlueprintHelpers", "SetLocalCenter");

	Params::UPCGBlueprintHelpers_SetLocalCenter_Params Parms{};

	Parms.InPoint = InPoint;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InLocalCenter != nullptr)
		*InLocalCenter = std::move(Parms.InLocalCenter);

}


// Function PCG.PCGBlueprintHelpers.SetExtents
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPCGPoint                   InPoint                                                          (Edit, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     InExtents                                                        (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

void UPCGBlueprintHelpers::SetExtents(const struct FPCGPoint& InPoint, struct FVector* InExtents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGBlueprintHelpers", "SetExtents");

	Params::UPCGBlueprintHelpers_SetExtents_Params Parms{};

	Parms.InPoint = InPoint;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InExtents != nullptr)
		*InExtents = std::move(Parms.InExtents);

}


// Function PCG.PCGBlueprintHelpers.GetTransformedBounds
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPCGPoint                   InPoint                                                          (Edit, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// struct FBox                        ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UPCGBlueprintHelpers::GetTransformedBounds(const struct FPCGPoint& InPoint, struct FBox* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGBlueprintHelpers", "GetTransformedBounds");

	Params::UPCGBlueprintHelpers_GetTransformedBounds_Params Parms{};

	Parms.InPoint = InPoint;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function PCG.PCGBlueprintHelpers.GetTaskId
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPCGContext                 Context                                                          (ConstParm, BlueprintReadOnly, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// int64                              ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UPCGBlueprintHelpers::GetTaskId(const struct FPCGContext& Context, int64* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGBlueprintHelpers", "GetTaskId");

	Params::UPCGBlueprintHelpers_GetTaskId_Params Parms{};

	Parms.Context = Context;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function PCG.PCGBlueprintHelpers.GetSettings
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPCGContext                 Context                                                          (ConstParm, BlueprintReadOnly, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// class UPCGSettings*                ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UPCGBlueprintHelpers::GetSettings(const struct FPCGContext& Context, class UPCGSettings** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGBlueprintHelpers", "GetSettings");

	Params::UPCGBlueprintHelpers_GetSettings_Params Parms{};

	Parms.Context = Context;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function PCG.PCGBlueprintHelpers.GetRandomStream
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPCGPoint                   InPoint                                                          (Edit, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// class UPCGSettings*                OptionalSettings                                                 (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// class UPCGComponent*               OptionalComponent                                                (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// struct FRandomStream               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UPCGBlueprintHelpers::GetRandomStream(const struct FPCGPoint& InPoint, class UPCGSettings** OptionalSettings, class UPCGComponent** OptionalComponent, struct FRandomStream* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGBlueprintHelpers", "GetRandomStream");

	Params::UPCGBlueprintHelpers_GetRandomStream_Params Parms{};

	Parms.InPoint = InPoint;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OptionalSettings != nullptr)
		*OptionalSettings = Parms.OptionalSettings;

	if (OptionalComponent != nullptr)
		*OptionalComponent = Parms.OptionalComponent;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function PCG.PCGBlueprintHelpers.GetOriginalComponent
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPCGContext                 Context                                                          (ConstParm, BlueprintReadOnly, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// class UPCGComponent*               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UPCGBlueprintHelpers::GetOriginalComponent(const struct FPCGContext& Context, class UPCGComponent** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGBlueprintHelpers", "GetOriginalComponent");

	Params::UPCGBlueprintHelpers_GetOriginalComponent_Params Parms{};

	Parms.Context = Context;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function PCG.PCGBlueprintHelpers.GetLocalCenter
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPCGPoint                   InPoint                                                          (Edit, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UPCGBlueprintHelpers::GetLocalCenter(const struct FPCGPoint& InPoint, struct FVector* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGBlueprintHelpers", "GetLocalCenter");

	Params::UPCGBlueprintHelpers_GetLocalCenter_Params Parms{};

	Parms.InPoint = InPoint;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function PCG.PCGBlueprintHelpers.GetInterpolatedPCGLandscapeLayerWeights
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     Location                                                         (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
// TArray<struct FPCGLandscapeLayerWeight>ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UObject* UPCGBlueprintHelpers::GetInterpolatedPCGLandscapeLayerWeights(struct FVector* Location, TArray<struct FPCGLandscapeLayerWeight>* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGBlueprintHelpers", "GetInterpolatedPCGLandscapeLayerWeights");

	Params::UPCGBlueprintHelpers_GetInterpolatedPCGLandscapeLayerWeights_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

	return Parms.ReturnValue;

}


// Function PCG.PCGBlueprintHelpers.GetInputData
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPCGContext                 Context                                                          (ConstParm, BlueprintReadOnly, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// class UPCGData*                    ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UPCGBlueprintHelpers::GetInputData(const struct FPCGContext& Context, class UPCGData** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGBlueprintHelpers", "GetInputData");

	Params::UPCGBlueprintHelpers_GetInputData_Params Parms{};

	Parms.Context = Context;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function PCG.PCGBlueprintHelpers.GetExtents
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPCGPoint                   InPoint                                                          (Edit, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UPCGBlueprintHelpers::GetExtents(const struct FPCGPoint& InPoint, struct FVector* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGBlueprintHelpers", "GetExtents");

	Params::UPCGBlueprintHelpers_GetExtents_Params Parms{};

	Parms.InPoint = InPoint;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function PCG.PCGBlueprintHelpers.GetComponent
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPCGContext                 Context                                                          (ConstParm, BlueprintReadOnly, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// class UPCGComponent*               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UPCGBlueprintHelpers::GetComponent(const struct FPCGContext& Context, class UPCGComponent** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGBlueprintHelpers", "GetComponent");

	Params::UPCGBlueprintHelpers_GetComponent_Params Parms{};

	Parms.Context = Context;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function PCG.PCGBlueprintHelpers.GetActorLocalBoundsPCG
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                      InActor                                                          (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// bool                               bIgnorePCGCreatedComponents                                      (ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// struct FBox                        ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UPCGBlueprintHelpers::GetActorLocalBoundsPCG(class AActor* InActor, bool* bIgnorePCGCreatedComponents, struct FBox* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGBlueprintHelpers", "GetActorLocalBoundsPCG");

	Params::UPCGBlueprintHelpers_GetActorLocalBoundsPCG_Params Parms{};

	Parms.InActor = InActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIgnorePCGCreatedComponents != nullptr)
		*bIgnorePCGCreatedComponents = Parms.bIgnorePCGCreatedComponents;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function PCG.PCGBlueprintHelpers.GetActorData
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPCGContext                 Context                                                          (ConstParm, BlueprintReadOnly, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// class UPCGData*                    ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UPCGBlueprintHelpers::GetActorData(const struct FPCGContext& Context, class UPCGData** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGBlueprintHelpers", "GetActorData");

	Params::UPCGBlueprintHelpers_GetActorData_Params Parms{};

	Parms.Context = Context;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function PCG.PCGBlueprintHelpers.GetActorBoundsPCG
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                      InActor                                                          (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// bool                               bIgnorePCGCreatedComponents                                      (ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// struct FBox                        ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UPCGBlueprintHelpers::GetActorBoundsPCG(class AActor* InActor, bool* bIgnorePCGCreatedComponents, struct FBox* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGBlueprintHelpers", "GetActorBoundsPCG");

	Params::UPCGBlueprintHelpers_GetActorBoundsPCG_Params Parms{};

	Parms.InActor = InActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIgnorePCGCreatedComponents != nullptr)
		*bIgnorePCGCreatedComponents = Parms.bIgnorePCGCreatedComponents;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function PCG.PCGBlueprintHelpers.CreatePCGDataFromActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      InActor                                                          (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// bool                               bParseActor                                                      (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// class UPCGData*                    ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UPCGBlueprintHelpers::CreatePCGDataFromActor(class AActor* InActor, bool* bParseActor, class UPCGData** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGBlueprintHelpers", "CreatePCGDataFromActor");

	Params::UPCGBlueprintHelpers_CreatePCGDataFromActor_Params Parms{};

	Parms.InActor = InActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bParseActor != nullptr)
		*bParseActor = Parms.bParseActor;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function PCG.PCGBlueprintHelpers.ComputeSeedFromPosition
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     InPosition                                                       (ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector UPCGBlueprintHelpers::ComputeSeedFromPosition(int32* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGBlueprintHelpers", "ComputeSeedFromPosition");

	Params::UPCGBlueprintHelpers_ComputeSeedFromPosition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Class PCG.PCGInstancePackerBase
// (None)

class UClass* UPCGInstancePackerBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGInstancePackerBase");

	return Clss;
}


// PCGInstancePackerBase PCG.Default__PCGInstancePackerBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGInstancePackerBase* UPCGInstancePackerBase::GetDefaultObj()
{
	static class UPCGInstancePackerBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGInstancePackerBase*>(UPCGInstancePackerBase::StaticClass()->DefaultObject);

	return Default;
}


// Function PCG.PCGInstancePackerBase.PackInstances
// (Native, Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// struct FPCGContext                 Context                                                          (ConstParm, BlueprintReadOnly, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// class UPCGSpatialData*             InSpatialData                                                    (ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// struct FPCGMeshInstanceList        InstanceList                                                     (Edit, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// struct FPCGPackedCustomData        OutPackedCustomData                                              (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

struct FPCGMeshInstanceList UPCGInstancePackerBase::PackInstances(const struct FPCGContext& Context, struct FPCGPackedCustomData* OutPackedCustomData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGInstancePackerBase", "PackInstances");

	Params::UPCGInstancePackerBase_PackInstances_Params Parms{};

	Parms.Context = Context;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutPackedCustomData != nullptr)
		*OutPackedCustomData = std::move(Parms.OutPackedCustomData);

	return Parms.ReturnValue;

}


// Function PCG.PCGInstancePackerBase.PackCustomDataFromAttributes
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPCGMeshInstanceList        InstanceList                                                     (Edit, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// class UPCGMetadata*                MetaData                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
// TArray<class FName>                AttributeNames                                                   (Edit, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// struct FPCGPackedCustomData        OutPackedCustomData                                              (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

TArray<class FName> UPCGInstancePackerBase::PackCustomDataFromAttributes(class UPCGMetadata** MetaData, struct FPCGPackedCustomData* OutPackedCustomData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGInstancePackerBase", "PackCustomDataFromAttributes");

	Params::UPCGInstancePackerBase_PackCustomDataFromAttributes_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MetaData != nullptr)
		*MetaData = Parms.MetaData;

	if (OutPackedCustomData != nullptr)
		*OutPackedCustomData = std::move(Parms.OutPackedCustomData);

	return Parms.ReturnValue;

}


// Function PCG.PCGInstancePackerBase.AddTypeToPacking
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              TypeId                                                           (Edit, BlueprintVisible, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// struct FPCGPackedCustomData        OutPackedCustomData                                              (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UPCGInstancePackerBase::AddTypeToPacking(struct FPCGPackedCustomData* OutPackedCustomData, bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGInstancePackerBase", "AddTypeToPacking");

	Params::UPCGInstancePackerBase_AddTypeToPacking_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutPackedCustomData != nullptr)
		*OutPackedCustomData = std::move(Parms.OutPackedCustomData);

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Class PCG.PCGInstancePackerByAttribute
// (None)

class UClass* UPCGInstancePackerByAttribute::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGInstancePackerByAttribute");

	return Clss;
}


// PCGInstancePackerByAttribute PCG.Default__PCGInstancePackerByAttribute
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGInstancePackerByAttribute* UPCGInstancePackerByAttribute::GetDefaultObj()
{
	static class UPCGInstancePackerByAttribute* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGInstancePackerByAttribute*>(UPCGInstancePackerByAttribute::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGInstancePackerByRegex
// (None)

class UClass* UPCGInstancePackerByRegex::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGInstancePackerByRegex");

	return Clss;
}


// PCGInstancePackerByRegex PCG.Default__PCGInstancePackerByRegex
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGInstancePackerByRegex* UPCGInstancePackerByRegex::GetDefaultObj()
{
	static class UPCGInstancePackerByRegex* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGInstancePackerByRegex*>(UPCGInstancePackerByRegex::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGMatchAndSetBase
// (None)

class UClass* UPCGMatchAndSetBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGMatchAndSetBase");

	return Clss;
}


// PCGMatchAndSetBase PCG.Default__PCGMatchAndSetBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGMatchAndSetBase* UPCGMatchAndSetBase::GetDefaultObj()
{
	static class UPCGMatchAndSetBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGMatchAndSetBase*>(UPCGMatchAndSetBase::StaticClass()->DefaultObject);

	return Default;
}


// Function PCG.PCGMatchAndSetBase.ValidatePreconditions
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UPCGPointData*               InPointData                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UPCGPointData* UPCGMatchAndSetBase::ValidatePreconditions(bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMatchAndSetBase", "ValidatePreconditions");

	Params::UPCGMatchAndSetBase_ValidatePreconditions_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function PCG.PCGMatchAndSetBase.MatchAndSet
// (Native, Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// struct FPCGContext                 Context                                                          (ConstParm, BlueprintReadOnly, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// class UPCGPointMatchAndSetSettings*InSettings                                                       (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UPCGPointData*               InPointData                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// class UPCGPointData*               OutPointData                                                     (ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

class UPCGPointData* UPCGMatchAndSetBase::MatchAndSet(const struct FPCGContext& Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMatchAndSetBase", "MatchAndSet");

	Params::UPCGMatchAndSetBase_MatchAndSet_Params Parms{};

	Parms.Context = Context;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class PCG.PCGMatchAndSetByAttribute
// (None)

class UClass* UPCGMatchAndSetByAttribute::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGMatchAndSetByAttribute");

	return Clss;
}


// PCGMatchAndSetByAttribute PCG.Default__PCGMatchAndSetByAttribute
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGMatchAndSetByAttribute* UPCGMatchAndSetByAttribute::GetDefaultObj()
{
	static class UPCGMatchAndSetByAttribute* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGMatchAndSetByAttribute*>(UPCGMatchAndSetByAttribute::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGMatchAndSetWeighted
// (None)

class UClass* UPCGMatchAndSetWeighted::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGMatchAndSetWeighted");

	return Clss;
}


// PCGMatchAndSetWeighted PCG.Default__PCGMatchAndSetWeighted
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGMatchAndSetWeighted* UPCGMatchAndSetWeighted::GetDefaultObj()
{
	static class UPCGMatchAndSetWeighted* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGMatchAndSetWeighted*>(UPCGMatchAndSetWeighted::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGMatchAndSetWeightedByCategory
// (None)

class UClass* UPCGMatchAndSetWeightedByCategory::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGMatchAndSetWeightedByCategory");

	return Clss;
}


// PCGMatchAndSetWeightedByCategory PCG.Default__PCGMatchAndSetWeightedByCategory
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGMatchAndSetWeightedByCategory* UPCGMatchAndSetWeightedByCategory::GetDefaultObj()
{
	static class UPCGMatchAndSetWeightedByCategory* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGMatchAndSetWeightedByCategory*>(UPCGMatchAndSetWeightedByCategory::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGMeshSelectorBase
// (None)

class UClass* UPCGMeshSelectorBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGMeshSelectorBase");

	return Clss;
}


// PCGMeshSelectorBase PCG.Default__PCGMeshSelectorBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGMeshSelectorBase* UPCGMeshSelectorBase::GetDefaultObj()
{
	static class UPCGMeshSelectorBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGMeshSelectorBase*>(UPCGMeshSelectorBase::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGMeshSelectorByAttribute
// (None)

class UClass* UPCGMeshSelectorByAttribute::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGMeshSelectorByAttribute");

	return Clss;
}


// PCGMeshSelectorByAttribute PCG.Default__PCGMeshSelectorByAttribute
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGMeshSelectorByAttribute* UPCGMeshSelectorByAttribute::GetDefaultObj()
{
	static class UPCGMeshSelectorByAttribute* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGMeshSelectorByAttribute*>(UPCGMeshSelectorByAttribute::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGMeshSelectorWeighted
// (None)

class UClass* UPCGMeshSelectorWeighted::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGMeshSelectorWeighted");

	return Clss;
}


// PCGMeshSelectorWeighted PCG.Default__PCGMeshSelectorWeighted
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGMeshSelectorWeighted* UPCGMeshSelectorWeighted::GetDefaultObj()
{
	static class UPCGMeshSelectorWeighted* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGMeshSelectorWeighted*>(UPCGMeshSelectorWeighted::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGMeshSelectorWeightedByCategory
// (None)

class UClass* UPCGMeshSelectorWeightedByCategory::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGMeshSelectorWeightedByCategory");

	return Clss;
}


// PCGMeshSelectorWeightedByCategory PCG.Default__PCGMeshSelectorWeightedByCategory
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGMeshSelectorWeightedByCategory* UPCGMeshSelectorWeightedByCategory::GetDefaultObj()
{
	static class UPCGMeshSelectorWeightedByCategory* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGMeshSelectorWeightedByCategory*>(UPCGMeshSelectorWeightedByCategory::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGMetadata
// (None)

class UClass* UPCGMetadata::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGMetadata");

	return Clss;
}


// PCGMetadata PCG.Default__PCGMetadata
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGMetadata* UPCGMetadata::GetDefaultObj()
{
	static class UPCGMetadata* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGMetadata*>(UPCGMetadata::StaticClass()->DefaultObject);

	return Default;
}


// Function PCG.PCGMetadata.SetPointAttributes
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPCGPoint                   Point                                                            (ConstParm, Parm, ReturnParm)
// class UPCGMetadata*                MetaData                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
// struct FPCGPoint                   OutPoint                                                         (BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

struct FPCGPoint UPCGMetadata::SetPointAttributes(class UPCGMetadata** MetaData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadata", "SetPointAttributes");

	Params::UPCGMetadata_SetPointAttributes_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MetaData != nullptr)
		*MetaData = Parms.MetaData;

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadata.SetAttributesByKey
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int64                              Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
// class UPCGMetadata*                InMetaData                                                       (Net, Parm, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
// int64                              TargetKey                                                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// int64                              OutKey                                                           (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

int64 UPCGMetadata::SetAttributesByKey(int64 Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadata", "SetAttributesByKey");

	Params::UPCGMetadata_SetAttributesByKey_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadata.ResetWeightedAttributesByKey
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int64                              TargetKey                                                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// int64                              OutKey                                                           (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

int64 UPCGMetadata::ResetWeightedAttributesByKey()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadata", "ResetWeightedAttributesByKey");

	Params::UPCGMetadata_ResetWeightedAttributesByKey_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadata.ResetPointWeightedAttributes
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPCGPoint                   OutPoint                                                         (BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

struct FPCGPoint UPCGMetadata::ResetPointWeightedAttributes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadata", "ResetPointWeightedAttributes");

	Params::UPCGMetadata_ResetPointWeightedAttributes_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadata.RenameAttribute
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        AttributeToRename                                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// class FName                        NewAttributeName                                                 (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class FName UPCGMetadata::RenameAttribute(bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadata", "RenameAttribute");

	Params::UPCGMetadata_RenameAttribute_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadata.MergePointAttributes
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPCGPoint                   PointA                                                           (ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// class UPCGMetadata*                MetadataA                                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// struct FPCGPoint                   PointB                                                           (ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// class UPCGMetadata*                MetadataB                                                        (BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// struct FPCGPoint                   TargetPoint                                                      (Edit, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, GlobalConfig)
// enum class EPCGMetadataOp          Op                                                               (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UPCGMetadata* UPCGMetadata::MergePointAttributes(struct FPCGPoint* TargetPoint, enum class EPCGMetadataOp Op)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadata", "MergePointAttributes");

	Params::UPCGMetadata_MergePointAttributes_Params Parms{};

	Parms.Op = Op;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TargetPoint != nullptr)
		*TargetPoint = std::move(Parms.TargetPoint);

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadata.MergeAttributesByKey
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int64                              KeyA                                                             (Edit, ConstParm, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// class UPCGMetadata*                MetadataA                                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// int64                              KeyB                                                             (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// class UPCGMetadata*                MetadataB                                                        (BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// int64                              TargetKey                                                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// enum class EPCGMetadataOp          Op                                                               (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// int64                              OutKey                                                           (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

int64 UPCGMetadata::MergeAttributesByKey(enum class EPCGMetadataOp Op)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadata", "MergeAttributesByKey");

	Params::UPCGMetadata_MergeAttributesByKey_Params Parms{};

	Parms.Op = Op;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadata.InitializeWithAttributeFilter
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UPCGMetadata*                InParent                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// TSet<class FName>                  InFilteredAttributes                                             (Edit, ConstParm, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// enum class EPCGMetadataFilterMode  InFilterMode                                                     (BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

enum class EPCGMetadataFilterMode UPCGMetadata::InitializeWithAttributeFilter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadata", "InitializeWithAttributeFilter");

	Params::UPCGMetadata_InitializeWithAttributeFilter_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadata.InitializeAsCopyWithAttributeFilter
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UPCGMetadata*                InMetadataToCopy                                                 (Edit, ConstParm, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// TSet<class FName>                  InFilteredAttributes                                             (Edit, ConstParm, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// enum class EPCGMetadataFilterMode  InFilterMode                                                     (BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

enum class EPCGMetadataFilterMode UPCGMetadata::InitializeAsCopyWithAttributeFilter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadata", "InitializeAsCopyWithAttributeFilter");

	Params::UPCGMetadata_InitializeAsCopyWithAttributeFilter_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadata.InitializeAsCopy
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPCGMetadata*                InMetadataToCopy                                                 (Edit, ConstParm, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

class UPCGMetadata* UPCGMetadata::InitializeAsCopy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadata", "InitializeAsCopy");

	Params::UPCGMetadata_InitializeAsCopy_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadata.Initialize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPCGMetadata*                InParent                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)

class UPCGMetadata* UPCGMetadata::Initialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadata", "Initialize");

	Params::UPCGMetadata_Initialize_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadata.HasCommonAttributes
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPCGMetadata*                InMetaData                                                       (Net, Parm, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UPCGMetadata* UPCGMetadata::HasCommonAttributes(bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadata", "HasCommonAttributes");

	Params::UPCGMetadata_HasCommonAttributes_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadata.HasAttribute
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        AttributeName                                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class FName UPCGMetadata::HasAttribute(bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadata", "HasAttribute");

	Params::UPCGMetadata_HasAttribute_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadata.GetAttributes
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FName>                AttributeNames                                                   (Edit, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// TArray<enum class EPCGMetadataTypes>AttributeTypes                                                   (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

TArray<enum class EPCGMetadataTypes> UPCGMetadata::GetAttributes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadata", "GetAttributes");

	Params::UPCGMetadata_GetAttributes_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadata.DeleteAttribute
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        AttributeName                                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)

class FName UPCGMetadata::DeleteAttribute()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadata", "DeleteAttribute");

	Params::UPCGMetadata_DeleteAttribute_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadata.CreateVectorAttribute
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        AttributeName                                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// struct FVector                     DefaultValue                                                     (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               bAllowsInterpolation                                             (OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               bOverrideParent                                                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

bool UPCGMetadata::CreateVectorAttribute(const struct FVector& DefaultValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadata", "CreateVectorAttribute");

	Params::UPCGMetadata_CreateVectorAttribute_Params Parms{};

	Parms.DefaultValue = DefaultValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadata.CreateVector4Attribute
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        AttributeName                                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// struct FVector4                    DefaultValue                                                     (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               bAllowsInterpolation                                             (OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               bOverrideParent                                                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

bool UPCGMetadata::CreateVector4Attribute(const struct FVector4& DefaultValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadata", "CreateVector4Attribute");

	Params::UPCGMetadata_CreateVector4Attribute_Params Parms{};

	Parms.DefaultValue = DefaultValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadata.CreateVector2Attribute
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        AttributeName                                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// struct FVector2D                   DefaultValue                                                     (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               bAllowsInterpolation                                             (OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               bOverrideParent                                                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

bool UPCGMetadata::CreateVector2Attribute(const struct FVector2D& DefaultValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadata", "CreateVector2Attribute");

	Params::UPCGMetadata_CreateVector2Attribute_Params Parms{};

	Parms.DefaultValue = DefaultValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadata.CreateTransformAttribute
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        AttributeName                                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// struct FTransform                  DefaultValue                                                     (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               bAllowsInterpolation                                             (OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               bOverrideParent                                                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

bool UPCGMetadata::CreateTransformAttribute(const struct FTransform& DefaultValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadata", "CreateTransformAttribute");

	Params::UPCGMetadata_CreateTransformAttribute_Params Parms{};

	Parms.DefaultValue = DefaultValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadata.CreateStringAttribute
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        AttributeName                                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// class FString                      DefaultValue                                                     (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               bAllowsInterpolation                                             (OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               bOverrideParent                                                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

bool UPCGMetadata::CreateStringAttribute(const class FString& DefaultValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadata", "CreateStringAttribute");

	Params::UPCGMetadata_CreateStringAttribute_Params Parms{};

	Parms.DefaultValue = DefaultValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadata.CreateRotatorAttribute
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        AttributeName                                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// struct FRotator                    DefaultValue                                                     (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               bAllowsInterpolation                                             (OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               bOverrideParent                                                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

bool UPCGMetadata::CreateRotatorAttribute(const struct FRotator& DefaultValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadata", "CreateRotatorAttribute");

	Params::UPCGMetadata_CreateRotatorAttribute_Params Parms{};

	Parms.DefaultValue = DefaultValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadata.CreateQuatAttribute
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        AttributeName                                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// struct FQuat                       DefaultValue                                                     (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               bAllowsInterpolation                                             (OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               bOverrideParent                                                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

bool UPCGMetadata::CreateQuatAttribute(const struct FQuat& DefaultValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadata", "CreateQuatAttribute");

	Params::UPCGMetadata_CreateQuatAttribute_Params Parms{};

	Parms.DefaultValue = DefaultValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadata.CreateInteger64Attribute
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        AttributeName                                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// int64                              DefaultValue                                                     (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               bAllowsInterpolation                                             (OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               bOverrideParent                                                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

bool UPCGMetadata::CreateInteger64Attribute(int64 DefaultValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadata", "CreateInteger64Attribute");

	Params::UPCGMetadata_CreateInteger64Attribute_Params Parms{};

	Parms.DefaultValue = DefaultValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadata.CreateInteger32Attribute
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        AttributeName                                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// int32                              DefaultValue                                                     (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               bAllowsInterpolation                                             (OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               bOverrideParent                                                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

bool UPCGMetadata::CreateInteger32Attribute(int32 DefaultValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadata", "CreateInteger32Attribute");

	Params::UPCGMetadata_CreateInteger32Attribute_Params Parms{};

	Parms.DefaultValue = DefaultValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadata.CreateFloatAttribute
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        AttributeName                                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// float                              DefaultValue                                                     (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               bAllowsInterpolation                                             (OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               bOverrideParent                                                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

bool UPCGMetadata::CreateFloatAttribute(float DefaultValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadata", "CreateFloatAttribute");

	Params::UPCGMetadata_CreateFloatAttribute_Params Parms{};

	Parms.DefaultValue = DefaultValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadata.CreateDoubleAttribute
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        AttributeName                                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// double                             DefaultValue                                                     (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               bAllowsInterpolation                                             (OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               bOverrideParent                                                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

bool UPCGMetadata::CreateDoubleAttribute(double DefaultValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadata", "CreateDoubleAttribute");

	Params::UPCGMetadata_CreateDoubleAttribute_Params Parms{};

	Parms.DefaultValue = DefaultValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadata.CreateBoolAttribute
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        AttributeName                                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// bool                               DefaultValue                                                     (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               bAllowsInterpolation                                             (OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               bOverrideParent                                                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

bool UPCGMetadata::CreateBoolAttribute(bool DefaultValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadata", "CreateBoolAttribute");

	Params::UPCGMetadata_CreateBoolAttribute_Params Parms{};

	Parms.DefaultValue = DefaultValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadata.CopyExistingAttribute
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        AttributeToCopy                                                  (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// class FName                        NewAttributeName                                                 (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               bKeepParent                                                      (BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool UPCGMetadata::CopyExistingAttribute(bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadata", "CopyExistingAttribute");

	Params::UPCGMetadata_CopyExistingAttribute_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadata.CopyAttributes
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPCGMetadata*                InOther                                                          (ExportObject, Net, Parm, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

class UPCGMetadata* UPCGMetadata::CopyAttributes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadata", "CopyAttributes");

	Params::UPCGMetadata_CopyAttributes_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadata.CopyAttribute
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPCGMetadata*                InOther                                                          (ExportObject, Net, Parm, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// class FName                        AttributeToCopy                                                  (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// class FName                        NewAttributeName                                                 (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

class FName UPCGMetadata::CopyAttribute()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadata", "CopyAttribute");

	Params::UPCGMetadata_CopyAttribute_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadata.ClearAttribute
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        AttributeToClear                                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

class FName UPCGMetadata::ClearAttribute()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadata", "ClearAttribute");

	Params::UPCGMetadata_ClearAttribute_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadata.AddEntry
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64                              ParentEntryKey                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// int64                              ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

int64 UPCGMetadata::AddEntry(int64* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadata", "AddEntry");

	Params::UPCGMetadata_AddEntry_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadata.AddAttributesFiltered
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UPCGMetadata*                InOther                                                          (ExportObject, Net, Parm, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// TSet<class FName>                  InFilteredAttributes                                             (Edit, ConstParm, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// enum class EPCGMetadataFilterMode  InFilterMode                                                     (BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

enum class EPCGMetadataFilterMode UPCGMetadata::AddAttributesFiltered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadata", "AddAttributesFiltered");

	Params::UPCGMetadata_AddAttributesFiltered_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadata.AddAttributes
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPCGMetadata*                InOther                                                          (ExportObject, Net, Parm, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

class UPCGMetadata* UPCGMetadata::AddAttributes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadata", "AddAttributes");

	Params::UPCGMetadata_AddAttributes_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadata.AddAttribute
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPCGMetadata*                InOther                                                          (ExportObject, Net, Parm, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// class FName                        AttributeName                                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)

class FName UPCGMetadata::AddAttribute()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadata", "AddAttribute");

	Params::UPCGMetadata_AddAttribute_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadata.AccumulateWeightedAttributesByKey
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int64                              Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
// class UPCGMetadata*                MetaData                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
// float                              Weight                                                           (Edit, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// bool                               bSetNonInterpolableAttributes                                    (ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// int64                              TargetKey                                                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// int64                              OutKey                                                           (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

int64 UPCGMetadata::AccumulateWeightedAttributesByKey(int64 Key, class UPCGMetadata** MetaData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadata", "AccumulateWeightedAttributesByKey");

	Params::UPCGMetadata_AccumulateWeightedAttributesByKey_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MetaData != nullptr)
		*MetaData = Parms.MetaData;

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadata.AccumulatePointWeightedAttributes
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPCGPoint                   InPoint                                                          (Edit, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// class UPCGMetadata*                InMetaData                                                       (Net, Parm, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
// float                              Weight                                                           (Edit, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// bool                               bSetNonInterpolableAttributes                                    (ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// struct FPCGPoint                   OutPoint                                                         (BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

struct FPCGPoint UPCGMetadata::AccumulatePointWeightedAttributes(const struct FPCGPoint& InPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadata", "AccumulatePointWeightedAttributes");

	Params::UPCGMetadata_AccumulatePointWeightedAttributes_Params Parms{};

	Parms.InPoint = InPoint;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class PCG.PCGMetadataAccessorHelpers
// (None)

class UClass* UPCGMetadataAccessorHelpers::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGMetadataAccessorHelpers");

	return Clss;
}


// PCGMetadataAccessorHelpers PCG.Default__PCGMetadataAccessorHelpers
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGMetadataAccessorHelpers* UPCGMetadataAccessorHelpers::GetDefaultObj()
{
	static class UPCGMetadataAccessorHelpers* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGMetadataAccessorHelpers*>(UPCGMetadataAccessorHelpers::StaticClass()->DefaultObject);

	return Default;
}


// Function PCG.PCGMetadataAccessorHelpers.SetVectorAttributeByMetadataKey
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// int64                              Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
// class UPCGMetadata*                MetaData                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
// class FName                        AttributeName                                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// struct FVector                     Value                                                            (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)

class FName UPCGMetadataAccessorHelpers::SetVectorAttributeByMetadataKey(int64 Key, class UPCGMetadata** MetaData, const struct FVector& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "SetVectorAttributeByMetadataKey");

	Params::UPCGMetadataAccessorHelpers_SetVectorAttributeByMetadataKey_Params Parms{};

	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MetaData != nullptr)
		*MetaData = Parms.MetaData;

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadataAccessorHelpers.SetVectorAttribute
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPCGPoint                   Point                                                            (ConstParm, Parm, ReturnParm)
// class UPCGMetadata*                MetaData                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
// class FName                        AttributeName                                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// struct FVector                     Value                                                            (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)

class FName UPCGMetadataAccessorHelpers::SetVectorAttribute(class UPCGMetadata** MetaData, const struct FVector& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "SetVectorAttribute");

	Params::UPCGMetadataAccessorHelpers_SetVectorAttribute_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MetaData != nullptr)
		*MetaData = Parms.MetaData;

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadataAccessorHelpers.SetVector4AttributeByMetadataKey
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// int64                              Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
// class UPCGMetadata*                MetaData                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
// class FName                        AttributeName                                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// struct FVector4                    Value                                                            (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)

class FName UPCGMetadataAccessorHelpers::SetVector4AttributeByMetadataKey(int64 Key, class UPCGMetadata** MetaData, const struct FVector4& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "SetVector4AttributeByMetadataKey");

	Params::UPCGMetadataAccessorHelpers_SetVector4AttributeByMetadataKey_Params Parms{};

	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MetaData != nullptr)
		*MetaData = Parms.MetaData;

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadataAccessorHelpers.SetVector4Attribute
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPCGPoint                   Point                                                            (ConstParm, Parm, ReturnParm)
// class UPCGMetadata*                MetaData                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
// class FName                        AttributeName                                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// struct FVector4                    Value                                                            (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)

class FName UPCGMetadataAccessorHelpers::SetVector4Attribute(class UPCGMetadata** MetaData, const struct FVector4& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "SetVector4Attribute");

	Params::UPCGMetadataAccessorHelpers_SetVector4Attribute_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MetaData != nullptr)
		*MetaData = Parms.MetaData;

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadataAccessorHelpers.SetVector2AttributeByMetadataKey
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// int64                              Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
// class UPCGMetadata*                MetaData                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
// class FName                        AttributeName                                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// struct FVector2D                   Value                                                            (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)

class FName UPCGMetadataAccessorHelpers::SetVector2AttributeByMetadataKey(int64 Key, class UPCGMetadata** MetaData, const struct FVector2D& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "SetVector2AttributeByMetadataKey");

	Params::UPCGMetadataAccessorHelpers_SetVector2AttributeByMetadataKey_Params Parms{};

	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MetaData != nullptr)
		*MetaData = Parms.MetaData;

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadataAccessorHelpers.SetVector2Attribute
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPCGPoint                   Point                                                            (ConstParm, Parm, ReturnParm)
// class UPCGMetadata*                MetaData                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
// class FName                        AttributeName                                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// struct FVector2D                   Value                                                            (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)

class FName UPCGMetadataAccessorHelpers::SetVector2Attribute(class UPCGMetadata** MetaData, const struct FVector2D& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "SetVector2Attribute");

	Params::UPCGMetadataAccessorHelpers_SetVector2Attribute_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MetaData != nullptr)
		*MetaData = Parms.MetaData;

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadataAccessorHelpers.SetTransformAttributeByMetadataKey
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// int64                              Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
// class UPCGMetadata*                MetaData                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
// class FName                        AttributeName                                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// struct FTransform                  Value                                                            (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)

class FName UPCGMetadataAccessorHelpers::SetTransformAttributeByMetadataKey(int64 Key, class UPCGMetadata** MetaData, const struct FTransform& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "SetTransformAttributeByMetadataKey");

	Params::UPCGMetadataAccessorHelpers_SetTransformAttributeByMetadataKey_Params Parms{};

	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MetaData != nullptr)
		*MetaData = Parms.MetaData;

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadataAccessorHelpers.SetTransformAttribute
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPCGPoint                   Point                                                            (ConstParm, Parm, ReturnParm)
// class UPCGMetadata*                MetaData                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
// class FName                        AttributeName                                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// struct FTransform                  Value                                                            (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)

class FName UPCGMetadataAccessorHelpers::SetTransformAttribute(class UPCGMetadata** MetaData, const struct FTransform& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "SetTransformAttribute");

	Params::UPCGMetadataAccessorHelpers_SetTransformAttribute_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MetaData != nullptr)
		*MetaData = Parms.MetaData;

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadataAccessorHelpers.SetStringAttributeByMetadataKey
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int64                              Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
// class UPCGMetadata*                MetaData                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
// class FName                        AttributeName                                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// class FString                      Value                                                            (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)

class FName UPCGMetadataAccessorHelpers::SetStringAttributeByMetadataKey(int64 Key, class UPCGMetadata** MetaData, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "SetStringAttributeByMetadataKey");

	Params::UPCGMetadataAccessorHelpers_SetStringAttributeByMetadataKey_Params Parms{};

	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MetaData != nullptr)
		*MetaData = Parms.MetaData;

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadataAccessorHelpers.SetStringAttribute
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPCGPoint                   Point                                                            (ConstParm, Parm, ReturnParm)
// class UPCGMetadata*                MetaData                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
// class FName                        AttributeName                                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// class FString                      Value                                                            (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)

class FName UPCGMetadataAccessorHelpers::SetStringAttribute(class UPCGMetadata** MetaData, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "SetStringAttribute");

	Params::UPCGMetadataAccessorHelpers_SetStringAttribute_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MetaData != nullptr)
		*MetaData = Parms.MetaData;

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadataAccessorHelpers.SetRotatorAttributeByMetadataKey
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// int64                              Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
// class UPCGMetadata*                MetaData                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
// class FName                        AttributeName                                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// struct FRotator                    Value                                                            (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)

class FName UPCGMetadataAccessorHelpers::SetRotatorAttributeByMetadataKey(int64 Key, class UPCGMetadata** MetaData, const struct FRotator& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "SetRotatorAttributeByMetadataKey");

	Params::UPCGMetadataAccessorHelpers_SetRotatorAttributeByMetadataKey_Params Parms{};

	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MetaData != nullptr)
		*MetaData = Parms.MetaData;

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadataAccessorHelpers.SetRotatorAttribute
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPCGPoint                   Point                                                            (ConstParm, Parm, ReturnParm)
// class UPCGMetadata*                MetaData                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
// class FName                        AttributeName                                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// struct FRotator                    Value                                                            (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)

class FName UPCGMetadataAccessorHelpers::SetRotatorAttribute(class UPCGMetadata** MetaData, const struct FRotator& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "SetRotatorAttribute");

	Params::UPCGMetadataAccessorHelpers_SetRotatorAttribute_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MetaData != nullptr)
		*MetaData = Parms.MetaData;

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadataAccessorHelpers.SetQuatAttributeByMetadataKey
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// int64                              Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
// class UPCGMetadata*                MetaData                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
// class FName                        AttributeName                                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// struct FQuat                       Value                                                            (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)

class FName UPCGMetadataAccessorHelpers::SetQuatAttributeByMetadataKey(int64 Key, class UPCGMetadata** MetaData, const struct FQuat& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "SetQuatAttributeByMetadataKey");

	Params::UPCGMetadataAccessorHelpers_SetQuatAttributeByMetadataKey_Params Parms{};

	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MetaData != nullptr)
		*MetaData = Parms.MetaData;

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadataAccessorHelpers.SetQuatAttribute
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPCGPoint                   Point                                                            (ConstParm, Parm, ReturnParm)
// class UPCGMetadata*                MetaData                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
// class FName                        AttributeName                                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// struct FQuat                       Value                                                            (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)

class FName UPCGMetadataAccessorHelpers::SetQuatAttribute(class UPCGMetadata** MetaData, const struct FQuat& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "SetQuatAttribute");

	Params::UPCGMetadataAccessorHelpers_SetQuatAttribute_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MetaData != nullptr)
		*MetaData = Parms.MetaData;

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadataAccessorHelpers.SetInteger64AttributeByMetadataKey
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int64                              Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
// class UPCGMetadata*                MetaData                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
// class FName                        AttributeName                                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// int64                              Value                                                            (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)

class FName UPCGMetadataAccessorHelpers::SetInteger64AttributeByMetadataKey(int64 Key, class UPCGMetadata** MetaData, int64 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "SetInteger64AttributeByMetadataKey");

	Params::UPCGMetadataAccessorHelpers_SetInteger64AttributeByMetadataKey_Params Parms{};

	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MetaData != nullptr)
		*MetaData = Parms.MetaData;

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadataAccessorHelpers.SetInteger64Attribute
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPCGPoint                   Point                                                            (ConstParm, Parm, ReturnParm)
// class UPCGMetadata*                MetaData                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
// class FName                        AttributeName                                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// int64                              Value                                                            (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)

class FName UPCGMetadataAccessorHelpers::SetInteger64Attribute(class UPCGMetadata** MetaData, int64 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "SetInteger64Attribute");

	Params::UPCGMetadataAccessorHelpers_SetInteger64Attribute_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MetaData != nullptr)
		*MetaData = Parms.MetaData;

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadataAccessorHelpers.SetInteger32AttributeByMetadataKey
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int64                              Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
// class UPCGMetadata*                MetaData                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
// class FName                        AttributeName                                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// int32                              Value                                                            (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)

class FName UPCGMetadataAccessorHelpers::SetInteger32AttributeByMetadataKey(int64 Key, class UPCGMetadata** MetaData, int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "SetInteger32AttributeByMetadataKey");

	Params::UPCGMetadataAccessorHelpers_SetInteger32AttributeByMetadataKey_Params Parms{};

	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MetaData != nullptr)
		*MetaData = Parms.MetaData;

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadataAccessorHelpers.SetInteger32Attribute
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPCGPoint                   Point                                                            (ConstParm, Parm, ReturnParm)
// class UPCGMetadata*                MetaData                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
// class FName                        AttributeName                                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// int32                              Value                                                            (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)

class FName UPCGMetadataAccessorHelpers::SetInteger32Attribute(class UPCGMetadata** MetaData, int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "SetInteger32Attribute");

	Params::UPCGMetadataAccessorHelpers_SetInteger32Attribute_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MetaData != nullptr)
		*MetaData = Parms.MetaData;

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadataAccessorHelpers.SetFloatAttributeByMetadataKey
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int64                              Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
// class UPCGMetadata*                MetaData                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
// class FName                        AttributeName                                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// float                              Value                                                            (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)

class FName UPCGMetadataAccessorHelpers::SetFloatAttributeByMetadataKey(int64 Key, class UPCGMetadata** MetaData, float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "SetFloatAttributeByMetadataKey");

	Params::UPCGMetadataAccessorHelpers_SetFloatAttributeByMetadataKey_Params Parms{};

	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MetaData != nullptr)
		*MetaData = Parms.MetaData;

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadataAccessorHelpers.SetFloatAttribute
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPCGPoint                   Point                                                            (ConstParm, Parm, ReturnParm)
// class UPCGMetadata*                MetaData                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
// class FName                        AttributeName                                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// float                              Value                                                            (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)

class FName UPCGMetadataAccessorHelpers::SetFloatAttribute(class UPCGMetadata** MetaData, float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "SetFloatAttribute");

	Params::UPCGMetadataAccessorHelpers_SetFloatAttribute_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MetaData != nullptr)
		*MetaData = Parms.MetaData;

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadataAccessorHelpers.SetDoubleAttributeByMetadataKey
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int64                              Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
// class UPCGMetadata*                MetaData                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
// class FName                        AttributeName                                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// double                             Value                                                            (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)

class FName UPCGMetadataAccessorHelpers::SetDoubleAttributeByMetadataKey(int64 Key, class UPCGMetadata** MetaData, double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "SetDoubleAttributeByMetadataKey");

	Params::UPCGMetadataAccessorHelpers_SetDoubleAttributeByMetadataKey_Params Parms{};

	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MetaData != nullptr)
		*MetaData = Parms.MetaData;

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadataAccessorHelpers.SetDoubleAttribute
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPCGPoint                   Point                                                            (ConstParm, Parm, ReturnParm)
// class UPCGMetadata*                MetaData                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
// class FName                        AttributeName                                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// double                             Value                                                            (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)

class FName UPCGMetadataAccessorHelpers::SetDoubleAttribute(class UPCGMetadata** MetaData, double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "SetDoubleAttribute");

	Params::UPCGMetadataAccessorHelpers_SetDoubleAttribute_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MetaData != nullptr)
		*MetaData = Parms.MetaData;

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadataAccessorHelpers.SetBoolAttributeByMetadataKey
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int64                              Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
// class UPCGMetadata*                MetaData                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
// class FName                        AttributeName                                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// bool                               Value                                                            (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)

class FName UPCGMetadataAccessorHelpers::SetBoolAttributeByMetadataKey(int64 Key, class UPCGMetadata** MetaData, bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "SetBoolAttributeByMetadataKey");

	Params::UPCGMetadataAccessorHelpers_SetBoolAttributeByMetadataKey_Params Parms{};

	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MetaData != nullptr)
		*MetaData = Parms.MetaData;

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadataAccessorHelpers.SetBoolAttribute
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPCGPoint                   Point                                                            (ConstParm, Parm, ReturnParm)
// class UPCGMetadata*                MetaData                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
// class FName                        AttributeName                                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// bool                               Value                                                            (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)

class FName UPCGMetadataAccessorHelpers::SetBoolAttribute(class UPCGMetadata** MetaData, bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "SetBoolAttribute");

	Params::UPCGMetadataAccessorHelpers_SetBoolAttribute_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MetaData != nullptr)
		*MetaData = Parms.MetaData;

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadataAccessorHelpers.SetAttributeFromPropertyByMetadataKey
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int64                              Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
// class UPCGMetadata*                MetaData                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
// class FName                        AttributeName                                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// class UObject*                     Object                                                           (BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
// class FName                        PropertyName                                                     (ConstParm, ExportObject, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class FName UPCGMetadataAccessorHelpers::SetAttributeFromPropertyByMetadataKey(int64 Key, class UPCGMetadata** MetaData, class UObject** Object, bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "SetAttributeFromPropertyByMetadataKey");

	Params::UPCGMetadataAccessorHelpers_SetAttributeFromPropertyByMetadataKey_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MetaData != nullptr)
		*MetaData = Parms.MetaData;

	if (Object != nullptr)
		*Object = Parms.Object;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadataAccessorHelpers.InitializeMetadata
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPCGPoint                   Point                                                            (ConstParm, Parm, ReturnParm)
// class UPCGMetadata*                MetaData                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
// struct FPCGPoint                   ParentPoint                                                      (Edit, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// class UPCGMetadata*                ParentMetadata                                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

class UPCGMetadata* UPCGMetadataAccessorHelpers::InitializeMetadata(class UPCGMetadata** MetaData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "InitializeMetadata");

	Params::UPCGMetadataAccessorHelpers_InitializeMetadata_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MetaData != nullptr)
		*MetaData = Parms.MetaData;

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadataAccessorHelpers.HasAttributeSetByMetadataKey
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int64                              Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
// class UPCGMetadata*                MetaData                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
// class FName                        AttributeName                                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class FName UPCGMetadataAccessorHelpers::HasAttributeSetByMetadataKey(int64 Key, class UPCGMetadata** MetaData, bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "HasAttributeSetByMetadataKey");

	Params::UPCGMetadataAccessorHelpers_HasAttributeSetByMetadataKey_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MetaData != nullptr)
		*MetaData = Parms.MetaData;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadataAccessorHelpers.HasAttributeSet
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPCGPoint                   Point                                                            (ConstParm, Parm, ReturnParm)
// class UPCGMetadata*                MetaData                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
// class FName                        AttributeName                                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class FName UPCGMetadataAccessorHelpers::HasAttributeSet(class UPCGMetadata** MetaData, bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "HasAttributeSet");

	Params::UPCGMetadataAccessorHelpers_HasAttributeSet_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MetaData != nullptr)
		*MetaData = Parms.MetaData;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadataAccessorHelpers.GetVectorAttributeByMetadataKey
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// int64                              Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
// class UPCGMetadata*                MetaData                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
// class FName                        AttributeName                                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// struct FVector                     ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class FName UPCGMetadataAccessorHelpers::GetVectorAttributeByMetadataKey(int64 Key, class UPCGMetadata** MetaData, struct FVector* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "GetVectorAttributeByMetadataKey");

	Params::UPCGMetadataAccessorHelpers_GetVectorAttributeByMetadataKey_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MetaData != nullptr)
		*MetaData = Parms.MetaData;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadataAccessorHelpers.GetVectorAttribute
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPCGPoint                   Point                                                            (ConstParm, Parm, ReturnParm)
// class UPCGMetadata*                MetaData                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
// class FName                        AttributeName                                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// struct FVector                     ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class FName UPCGMetadataAccessorHelpers::GetVectorAttribute(class UPCGMetadata** MetaData, struct FVector* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "GetVectorAttribute");

	Params::UPCGMetadataAccessorHelpers_GetVectorAttribute_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MetaData != nullptr)
		*MetaData = Parms.MetaData;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadataAccessorHelpers.GetVector4AttributeByMetadataKey
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// int64                              Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
// class UPCGMetadata*                MetaData                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
// class FName                        AttributeName                                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// struct FVector4                    ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class FName UPCGMetadataAccessorHelpers::GetVector4AttributeByMetadataKey(int64 Key, class UPCGMetadata** MetaData, struct FVector4* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "GetVector4AttributeByMetadataKey");

	Params::UPCGMetadataAccessorHelpers_GetVector4AttributeByMetadataKey_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MetaData != nullptr)
		*MetaData = Parms.MetaData;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadataAccessorHelpers.GetVector4Attribute
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPCGPoint                   Point                                                            (ConstParm, Parm, ReturnParm)
// class UPCGMetadata*                MetaData                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
// class FName                        AttributeName                                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// struct FVector4                    ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class FName UPCGMetadataAccessorHelpers::GetVector4Attribute(class UPCGMetadata** MetaData, struct FVector4* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "GetVector4Attribute");

	Params::UPCGMetadataAccessorHelpers_GetVector4Attribute_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MetaData != nullptr)
		*MetaData = Parms.MetaData;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadataAccessorHelpers.GetVector2AttributeByMetadataKey
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// int64                              Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
// class UPCGMetadata*                MetaData                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
// class FName                        AttributeName                                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// struct FVector2D                   ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class FName UPCGMetadataAccessorHelpers::GetVector2AttributeByMetadataKey(int64 Key, class UPCGMetadata** MetaData, struct FVector2D* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "GetVector2AttributeByMetadataKey");

	Params::UPCGMetadataAccessorHelpers_GetVector2AttributeByMetadataKey_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MetaData != nullptr)
		*MetaData = Parms.MetaData;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadataAccessorHelpers.GetVector2Attribute
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPCGPoint                   Point                                                            (ConstParm, Parm, ReturnParm)
// class UPCGMetadata*                MetaData                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
// class FName                        AttributeName                                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// struct FVector2D                   ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class FName UPCGMetadataAccessorHelpers::GetVector2Attribute(class UPCGMetadata** MetaData, struct FVector2D* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "GetVector2Attribute");

	Params::UPCGMetadataAccessorHelpers_GetVector2Attribute_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MetaData != nullptr)
		*MetaData = Parms.MetaData;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadataAccessorHelpers.GetTransformAttributeByMetadataKey
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// int64                              Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
// class UPCGMetadata*                MetaData                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
// class FName                        AttributeName                                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// struct FTransform                  ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class FName UPCGMetadataAccessorHelpers::GetTransformAttributeByMetadataKey(int64 Key, class UPCGMetadata** MetaData, struct FTransform* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "GetTransformAttributeByMetadataKey");

	Params::UPCGMetadataAccessorHelpers_GetTransformAttributeByMetadataKey_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MetaData != nullptr)
		*MetaData = Parms.MetaData;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadataAccessorHelpers.GetTransformAttribute
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPCGPoint                   Point                                                            (ConstParm, Parm, ReturnParm)
// class UPCGMetadata*                MetaData                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
// class FName                        AttributeName                                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// struct FTransform                  ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class FName UPCGMetadataAccessorHelpers::GetTransformAttribute(class UPCGMetadata** MetaData, struct FTransform* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "GetTransformAttribute");

	Params::UPCGMetadataAccessorHelpers_GetTransformAttribute_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MetaData != nullptr)
		*MetaData = Parms.MetaData;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadataAccessorHelpers.GetStringAttributeByMetadataKey
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int64                              Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
// class UPCGMetadata*                MetaData                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
// class FName                        AttributeName                                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// class FString                      ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class FName UPCGMetadataAccessorHelpers::GetStringAttributeByMetadataKey(int64 Key, class UPCGMetadata** MetaData, class FString* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "GetStringAttributeByMetadataKey");

	Params::UPCGMetadataAccessorHelpers_GetStringAttributeByMetadataKey_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MetaData != nullptr)
		*MetaData = Parms.MetaData;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadataAccessorHelpers.GetStringAttribute
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPCGPoint                   Point                                                            (ConstParm, Parm, ReturnParm)
// class UPCGMetadata*                MetaData                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
// class FName                        AttributeName                                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// class FString                      ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class FName UPCGMetadataAccessorHelpers::GetStringAttribute(class UPCGMetadata** MetaData, class FString* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "GetStringAttribute");

	Params::UPCGMetadataAccessorHelpers_GetStringAttribute_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MetaData != nullptr)
		*MetaData = Parms.MetaData;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadataAccessorHelpers.GetRotatorAttributeByMetadataKey
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// int64                              Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
// class UPCGMetadata*                MetaData                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
// class FName                        AttributeName                                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// struct FRotator                    ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class FName UPCGMetadataAccessorHelpers::GetRotatorAttributeByMetadataKey(int64 Key, class UPCGMetadata** MetaData, struct FRotator* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "GetRotatorAttributeByMetadataKey");

	Params::UPCGMetadataAccessorHelpers_GetRotatorAttributeByMetadataKey_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MetaData != nullptr)
		*MetaData = Parms.MetaData;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadataAccessorHelpers.GetRotatorAttribute
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPCGPoint                   Point                                                            (ConstParm, Parm, ReturnParm)
// class UPCGMetadata*                MetaData                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
// class FName                        AttributeName                                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// struct FRotator                    ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class FName UPCGMetadataAccessorHelpers::GetRotatorAttribute(class UPCGMetadata** MetaData, struct FRotator* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "GetRotatorAttribute");

	Params::UPCGMetadataAccessorHelpers_GetRotatorAttribute_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MetaData != nullptr)
		*MetaData = Parms.MetaData;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadataAccessorHelpers.GetQuatAttributeByMetadataKey
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// int64                              Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
// class UPCGMetadata*                MetaData                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
// class FName                        AttributeName                                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// struct FQuat                       ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class FName UPCGMetadataAccessorHelpers::GetQuatAttributeByMetadataKey(int64 Key, class UPCGMetadata** MetaData, struct FQuat* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "GetQuatAttributeByMetadataKey");

	Params::UPCGMetadataAccessorHelpers_GetQuatAttributeByMetadataKey_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MetaData != nullptr)
		*MetaData = Parms.MetaData;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadataAccessorHelpers.GetQuatAttribute
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPCGPoint                   Point                                                            (ConstParm, Parm, ReturnParm)
// class UPCGMetadata*                MetaData                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
// class FName                        AttributeName                                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// struct FQuat                       ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class FName UPCGMetadataAccessorHelpers::GetQuatAttribute(class UPCGMetadata** MetaData, struct FQuat* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "GetQuatAttribute");

	Params::UPCGMetadataAccessorHelpers_GetQuatAttribute_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MetaData != nullptr)
		*MetaData = Parms.MetaData;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadataAccessorHelpers.GetInteger64AttributeByMetadataKey
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int64                              Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
// class UPCGMetadata*                MetaData                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
// class FName                        AttributeName                                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// int64                              ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class FName UPCGMetadataAccessorHelpers::GetInteger64AttributeByMetadataKey(int64 Key, class UPCGMetadata** MetaData, int64* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "GetInteger64AttributeByMetadataKey");

	Params::UPCGMetadataAccessorHelpers_GetInteger64AttributeByMetadataKey_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MetaData != nullptr)
		*MetaData = Parms.MetaData;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadataAccessorHelpers.GetInteger64Attribute
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPCGPoint                   Point                                                            (ConstParm, Parm, ReturnParm)
// class UPCGMetadata*                MetaData                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
// class FName                        AttributeName                                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// int64                              ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class FName UPCGMetadataAccessorHelpers::GetInteger64Attribute(class UPCGMetadata** MetaData, int64* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "GetInteger64Attribute");

	Params::UPCGMetadataAccessorHelpers_GetInteger64Attribute_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MetaData != nullptr)
		*MetaData = Parms.MetaData;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadataAccessorHelpers.GetInteger32AttributeByMetadataKey
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int64                              Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
// class UPCGMetadata*                MetaData                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
// class FName                        AttributeName                                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class FName UPCGMetadataAccessorHelpers::GetInteger32AttributeByMetadataKey(int64 Key, class UPCGMetadata** MetaData, int32* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "GetInteger32AttributeByMetadataKey");

	Params::UPCGMetadataAccessorHelpers_GetInteger32AttributeByMetadataKey_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MetaData != nullptr)
		*MetaData = Parms.MetaData;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadataAccessorHelpers.GetInteger32Attribute
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPCGPoint                   Point                                                            (ConstParm, Parm, ReturnParm)
// class UPCGMetadata*                MetaData                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
// class FName                        AttributeName                                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class FName UPCGMetadataAccessorHelpers::GetInteger32Attribute(class UPCGMetadata** MetaData, int32* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "GetInteger32Attribute");

	Params::UPCGMetadataAccessorHelpers_GetInteger32Attribute_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MetaData != nullptr)
		*MetaData = Parms.MetaData;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadataAccessorHelpers.GetFloatAttributeByMetadataKey
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int64                              Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
// class UPCGMetadata*                MetaData                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
// class FName                        AttributeName                                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class FName UPCGMetadataAccessorHelpers::GetFloatAttributeByMetadataKey(int64 Key, class UPCGMetadata** MetaData, float* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "GetFloatAttributeByMetadataKey");

	Params::UPCGMetadataAccessorHelpers_GetFloatAttributeByMetadataKey_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MetaData != nullptr)
		*MetaData = Parms.MetaData;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadataAccessorHelpers.GetFloatAttribute
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPCGPoint                   Point                                                            (ConstParm, Parm, ReturnParm)
// class UPCGMetadata*                MetaData                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
// class FName                        AttributeName                                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class FName UPCGMetadataAccessorHelpers::GetFloatAttribute(class UPCGMetadata** MetaData, float* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "GetFloatAttribute");

	Params::UPCGMetadataAccessorHelpers_GetFloatAttribute_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MetaData != nullptr)
		*MetaData = Parms.MetaData;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadataAccessorHelpers.GetDoubleAttributeByMetadataKey
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int64                              Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
// class UPCGMetadata*                MetaData                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
// class FName                        AttributeName                                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// double                             ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class FName UPCGMetadataAccessorHelpers::GetDoubleAttributeByMetadataKey(int64 Key, class UPCGMetadata** MetaData, double* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "GetDoubleAttributeByMetadataKey");

	Params::UPCGMetadataAccessorHelpers_GetDoubleAttributeByMetadataKey_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MetaData != nullptr)
		*MetaData = Parms.MetaData;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadataAccessorHelpers.GetDoubleAttribute
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPCGPoint                   Point                                                            (ConstParm, Parm, ReturnParm)
// class UPCGMetadata*                MetaData                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
// class FName                        AttributeName                                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// double                             ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class FName UPCGMetadataAccessorHelpers::GetDoubleAttribute(class UPCGMetadata** MetaData, double* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "GetDoubleAttribute");

	Params::UPCGMetadataAccessorHelpers_GetDoubleAttribute_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MetaData != nullptr)
		*MetaData = Parms.MetaData;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadataAccessorHelpers.GetBoolAttributeByMetadataKey
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int64                              Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
// class UPCGMetadata*                MetaData                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
// class FName                        AttributeName                                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class FName UPCGMetadataAccessorHelpers::GetBoolAttributeByMetadataKey(int64 Key, class UPCGMetadata** MetaData, bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "GetBoolAttributeByMetadataKey");

	Params::UPCGMetadataAccessorHelpers_GetBoolAttributeByMetadataKey_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MetaData != nullptr)
		*MetaData = Parms.MetaData;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadataAccessorHelpers.GetBoolAttribute
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPCGPoint                   Point                                                            (ConstParm, Parm, ReturnParm)
// class UPCGMetadata*                MetaData                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
// class FName                        AttributeName                                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class FName UPCGMetadataAccessorHelpers::GetBoolAttribute(class UPCGMetadata** MetaData, bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "GetBoolAttribute");

	Params::UPCGMetadataAccessorHelpers_GetBoolAttribute_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MetaData != nullptr)
		*MetaData = Parms.MetaData;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function PCG.PCGMetadataAccessorHelpers.CopyPoint
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPCGPoint                   InPoint                                                          (Edit, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// struct FPCGPoint                   OutPoint                                                         (BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               bCopyMetadata                                                    (Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// class UPCGMetadata*                InMetaData                                                       (Net, Parm, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
// class UPCGMetadata*                OutMetadata                                                      (Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

class UPCGMetadata* UPCGMetadataAccessorHelpers::CopyPoint(const struct FPCGPoint& InPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "CopyPoint");

	Params::UPCGMetadataAccessorHelpers_CopyPoint_Params Parms{};

	Parms.InPoint = InPoint;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class PCG.PCGComponent
// (None)

class UClass* UPCGComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGComponent");

	return Clss;
}


// PCGComponent PCG.Default__PCGComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGComponent* UPCGComponent::GetDefaultObj()
{
	static class UPCGComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGComponent*>(UPCGComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function PCG.PCGComponent.SetGraph
// (Net, NetReliable, Native, Event, NetMulticast, Public, BlueprintCallable)
// Parameters:
// class UPCGGraphInterface*          InGraph                                                          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

class UPCGGraphInterface* UPCGComponent::SetGraph()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGComponent", "SetGraph");

	Params::UPCGComponent_SetGraph_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PCG.PCGComponent.NotifyPropertiesChangedFromBlueprint
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UPCGComponent::NotifyPropertiesChangedFromBlueprint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGComponent", "NotifyPropertiesChangedFromBlueprint");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGComponent.GetGeneratedGraphOutput
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPCGDataCollection          ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UPCGComponent::GetGeneratedGraphOutput(struct FPCGDataCollection* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGComponent", "GetGeneratedGraphOutput");

	Params::UPCGComponent_GetGeneratedGraphOutput_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function PCG.PCGComponent.GenerateLocal
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bForce                                                           (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UPCGComponent::GenerateLocal(bool bForce)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGComponent", "GenerateLocal");

	Params::UPCGComponent_GenerateLocal_Params Parms{};

	Parms.bForce = bForce;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGComponent.Generate
// (Net, NetReliable, Native, Event, NetMulticast, Public, BlueprintCallable)
// Parameters:
// bool                               bForce                                                           (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UPCGComponent::Generate(bool bForce)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGComponent", "Generate");

	Params::UPCGComponent_Generate_Params Parms{};

	Parms.bForce = bForce;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGComponent.ClearPCGLink
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                      TemplateActor                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// class AActor*                      ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UPCGComponent::ClearPCGLink(class UClass* TemplateActor, class AActor** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGComponent", "ClearPCGLink");

	Params::UPCGComponent_ClearPCGLink_Params Parms{};

	Parms.TemplateActor = TemplateActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function PCG.PCGComponent.CleanupLocal
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bRemoveComponents                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               bSave                                                            (ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

bool UPCGComponent::CleanupLocal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGComponent", "CleanupLocal");

	Params::UPCGComponent_CleanupLocal_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PCG.PCGComponent.Cleanup
// (Net, NetReliable, Native, Event, NetMulticast, Public, BlueprintCallable)
// Parameters:
// bool                               bRemoveComponents                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               bSave                                                            (ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

bool UPCGComponent::Cleanup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGComponent", "Cleanup");

	Params::UPCGComponent_Cleanup_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PCG.PCGComponent.AddToManagedResources
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPCGManagedResource*         InResource                                                       (BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

class UPCGManagedResource* UPCGComponent::AddToManagedResources()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGComponent", "AddToManagedResources");

	Params::UPCGComponent_AddToManagedResources_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class PCG.PCGDataFunctionLibrary
// (None)

class UClass* UPCGDataFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGDataFunctionLibrary");

	return Clss;
}


// PCGDataFunctionLibrary PCG.Default__PCGDataFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGDataFunctionLibrary* UPCGDataFunctionLibrary::GetDefaultObj()
{
	static class UPCGDataFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGDataFunctionLibrary*>(UPCGDataFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function PCG.PCGDataFunctionLibrary.GetTaggedParams
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPCGDataCollection          InCollection                                                     (ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// class FString                      InTag                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FPCGTaggedData>      ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class FString UPCGDataFunctionLibrary::GetTaggedParams(TArray<struct FPCGTaggedData>* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGDataFunctionLibrary", "GetTaggedParams");

	Params::UPCGDataFunctionLibrary_GetTaggedParams_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

	return Parms.ReturnValue;

}


// Function PCG.PCGDataFunctionLibrary.GetTaggedInputs
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPCGDataCollection          InCollection                                                     (ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// class FString                      InTag                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FPCGTaggedData>      ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class FString UPCGDataFunctionLibrary::GetTaggedInputs(TArray<struct FPCGTaggedData>* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGDataFunctionLibrary", "GetTaggedInputs");

	Params::UPCGDataFunctionLibrary_GetTaggedInputs_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

	return Parms.ReturnValue;

}


// Function PCG.PCGDataFunctionLibrary.GetParamsByPin
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPCGDataCollection          InCollection                                                     (ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// class FName                        InPinLabel                                                       (Edit, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FPCGTaggedData>      ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class FName UPCGDataFunctionLibrary::GetParamsByPin(TArray<struct FPCGTaggedData>* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGDataFunctionLibrary", "GetParamsByPin");

	Params::UPCGDataFunctionLibrary_GetParamsByPin_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

	return Parms.ReturnValue;

}


// Function PCG.PCGDataFunctionLibrary.GetParams
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPCGDataCollection          InCollection                                                     (ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FPCGTaggedData>      ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FPCGDataCollection UPCGDataFunctionLibrary::GetParams(TArray<struct FPCGTaggedData>* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGDataFunctionLibrary", "GetParams");

	Params::UPCGDataFunctionLibrary_GetParams_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

	return Parms.ReturnValue;

}


// Function PCG.PCGDataFunctionLibrary.GetInputsByPin
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPCGDataCollection          InCollection                                                     (ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// class FName                        InPinLabel                                                       (Edit, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FPCGTaggedData>      ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class FName UPCGDataFunctionLibrary::GetInputsByPin(TArray<struct FPCGTaggedData>* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGDataFunctionLibrary", "GetInputsByPin");

	Params::UPCGDataFunctionLibrary_GetInputsByPin_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

	return Parms.ReturnValue;

}


// Function PCG.PCGDataFunctionLibrary.GetInputs
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPCGDataCollection          InCollection                                                     (ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FPCGTaggedData>      ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FPCGDataCollection UPCGDataFunctionLibrary::GetInputs(TArray<struct FPCGTaggedData>* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGDataFunctionLibrary", "GetInputs");

	Params::UPCGDataFunctionLibrary_GetInputs_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

	return Parms.ReturnValue;

}


// Function PCG.PCGDataFunctionLibrary.GetAllSettings
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPCGDataCollection          InCollection                                                     (ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FPCGTaggedData>      ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FPCGDataCollection UPCGDataFunctionLibrary::GetAllSettings(TArray<struct FPCGTaggedData>* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGDataFunctionLibrary", "GetAllSettings");

	Params::UPCGDataFunctionLibrary_GetAllSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

	return Parms.ReturnValue;

}


// Class PCG.PCGEdge
// (None)

class UClass* UPCGEdge::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGEdge");

	return Clss;
}


// PCGEdge PCG.Default__PCGEdge
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UPCGEdge* UPCGEdge::GetDefaultObj()
{
	static class UPCGEdge* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGEdge*>(UPCGEdge::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGGraphInterface
// (None)

class UClass* UPCGGraphInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGGraphInterface");

	return Clss;
}


// PCGGraphInterface PCG.Default__PCGGraphInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGGraphInterface* UPCGGraphInterface::GetDefaultObj()
{
	static class UPCGGraphInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGGraphInterface*>(UPCGGraphInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function PCG.PCGGraphInterface.GetMutablePCGGraph
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPCGGraph*                   ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UPCGGraphInterface::GetMutablePCGGraph(class UPCGGraph** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGGraphInterface", "GetMutablePCGGraph");

	Params::UPCGGraphInterface_GetMutablePCGGraph_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function PCG.PCGGraphInterface.GetConstPCGGraph
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPCGGraph*                   ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UPCGGraphInterface::GetConstPCGGraph(class UPCGGraph** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGGraphInterface", "GetConstPCGGraph");

	Params::UPCGGraphInterface_GetConstPCGGraph_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Class PCG.PCGGraph
// (None)

class UClass* UPCGGraph::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGGraph");

	return Clss;
}


// PCGGraph PCG.Default__PCGGraph
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGGraph* UPCGGraph::GetDefaultObj()
{
	static class UPCGGraph* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGGraph*>(UPCGGraph::StaticClass()->DefaultObject);

	return Default;
}


// Function PCG.PCGGraph.RemoveNode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPCGNode*                    InNode                                                           (ConstParm, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

class UPCGNode* UPCGGraph::RemoveNode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGGraph", "RemoveNode");

	Params::UPCGGraph_RemoveNode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PCG.PCGGraph.RemoveEdge
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UPCGNode*                    From                                                             (BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// class FName                        FromLabel                                                        (ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// class UPCGNode*                    To                                                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// class FName                        ToLabel                                                          (Edit, ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class FName UPCGGraph::RemoveEdge(class UPCGNode* To, bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGGraph", "RemoveEdge");

	Params::UPCGGraph_RemoveEdge_Params Parms{};

	Parms.To = To;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function PCG.PCGGraph.GetOutputNode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPCGNode*                    ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UPCGGraph::GetOutputNode(class UPCGNode** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGGraph", "GetOutputNode");

	Params::UPCGGraph_GetOutputNode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function PCG.PCGGraph.GetInputNode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPCGNode*                    ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UPCGGraph::GetInputNode(class UPCGNode** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGGraph", "GetInputNode");

	Params::UPCGGraph_GetInputNode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function PCG.PCGGraph.AddNodeOfType
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UClass*                      InSettingsClass                                                  (ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// class UPCGSettings*                DefaultNodeSettings                                              (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// class UPCGNode*                    ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UPCGSettings* UPCGGraph::AddNodeOfType(class UPCGNode** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGGraph", "AddNodeOfType");

	Params::UPCGGraph_AddNodeOfType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function PCG.PCGGraph.AddNodeInstance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPCGSettings*                InSettings                                                       (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UPCGNode*                    ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UPCGSettings* UPCGGraph::AddNodeInstance(class UPCGNode** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGGraph", "AddNodeInstance");

	Params::UPCGGraph_AddNodeInstance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function PCG.PCGGraph.AddNodeCopy
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UPCGSettings*                InSettings                                                       (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UPCGSettings*                DefaultNodeSettings                                              (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// class UPCGNode*                    ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UPCGSettings* UPCGGraph::AddNodeCopy(class UPCGNode** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGGraph", "AddNodeCopy");

	Params::UPCGGraph_AddNodeCopy_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function PCG.PCGGraph.AddEdge
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UPCGNode*                    From                                                             (BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// class FName                        FromPinLabel                                                     (Edit, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// class UPCGNode*                    To                                                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// class FName                        ToPinLabel                                                       (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// class UPCGNode*                    ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UPCGNode* UPCGGraph::AddEdge(class FName FromPinLabel, class UPCGNode* To, class FName ToPinLabel, class UPCGNode** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGGraph", "AddEdge");

	Params::UPCGGraph_AddEdge_Params Parms{};

	Parms.FromPinLabel = FromPinLabel;
	Parms.To = To;
	Parms.ToPinLabel = ToPinLabel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Class PCG.PCGGraphInstance
// (None)

class UClass* UPCGGraphInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGGraphInstance");

	return Clss;
}


// PCGGraphInstance PCG.Default__PCGGraphInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGGraphInstance* UPCGGraphInstance::GetDefaultObj()
{
	static class UPCGGraphInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGGraphInstance*>(UPCGGraphInstance::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGGraphInputOutputSettings
// (None)

class UClass* UPCGGraphInputOutputSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGGraphInputOutputSettings");

	return Clss;
}


// PCGGraphInputOutputSettings PCG.Default__PCGGraphInputOutputSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGGraphInputOutputSettings* UPCGGraphInputOutputSettings::GetDefaultObj()
{
	static class UPCGGraphInputOutputSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGGraphInputOutputSettings*>(UPCGGraphInputOutputSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGManagedResource
// (None)

class UClass* UPCGManagedResource::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGManagedResource");

	return Clss;
}


// PCGManagedResource PCG.Default__PCGManagedResource
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGManagedResource* UPCGManagedResource::GetDefaultObj()
{
	static class UPCGManagedResource* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGManagedResource*>(UPCGManagedResource::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGManagedActors
// (None)

class UClass* UPCGManagedActors::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGManagedActors");

	return Clss;
}


// PCGManagedActors PCG.Default__PCGManagedActors
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGManagedActors* UPCGManagedActors::GetDefaultObj()
{
	static class UPCGManagedActors* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGManagedActors*>(UPCGManagedActors::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGManagedComponent
// (None)

class UClass* UPCGManagedComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGManagedComponent");

	return Clss;
}


// PCGManagedComponent PCG.Default__PCGManagedComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGManagedComponent* UPCGManagedComponent::GetDefaultObj()
{
	static class UPCGManagedComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGManagedComponent*>(UPCGManagedComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGManagedISMComponent
// (None)

class UClass* UPCGManagedISMComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGManagedISMComponent");

	return Clss;
}


// PCGManagedISMComponent PCG.Default__PCGManagedISMComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGManagedISMComponent* UPCGManagedISMComponent::GetDefaultObj()
{
	static class UPCGManagedISMComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGManagedISMComponent*>(UPCGManagedISMComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGParamData
// (None)

class UClass* UPCGParamData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGParamData");

	return Clss;
}


// PCGParamData PCG.Default__PCGParamData
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGParamData* UPCGParamData::GetDefaultObj()
{
	static class UPCGParamData* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGParamData*>(UPCGParamData::StaticClass()->DefaultObject);

	return Default;
}


// Function PCG.PCGParamData.MutableMetadata
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPCGMetadata*                ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UPCGParamData::MutableMetadata(class UPCGMetadata** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGParamData", "MutableMetadata");

	Params::UPCGParamData_MutableMetadata_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function PCG.PCGParamData.FindOrAddMetadataKey
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InName                                                           (BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int64                              ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UPCGParamData::FindOrAddMetadataKey(class FName InName, int64* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGParamData", "FindOrAddMetadataKey");

	Params::UPCGParamData_FindOrAddMetadataKey_Params Parms{};

	Parms.InName = InName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function PCG.PCGParamData.FindMetadataKey
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        InName                                                           (BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int64                              ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UPCGParamData::FindMetadataKey(class FName InName, int64* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGParamData", "FindMetadataKey");

	Params::UPCGParamData_FindMetadataKey_Params Parms{};

	Parms.InName = InName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function PCG.PCGParamData.FilterParamsByName
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        InName                                                           (BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UPCGParamData*               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UPCGParamData::FilterParamsByName(class FName InName, class UPCGParamData** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGParamData", "FilterParamsByName");

	Params::UPCGParamData_FilterParamsByName_Params Parms{};

	Parms.InName = InName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function PCG.PCGParamData.FilterParamsByKey
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int64                              InKey                                                            (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UPCGParamData*               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

int64 UPCGParamData::FilterParamsByKey(class UPCGParamData** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGParamData", "FilterParamsByKey");

	Params::UPCGParamData_FilterParamsByKey_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function PCG.PCGParamData.ConstMetadata
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPCGMetadata*                ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UPCGParamData::ConstMetadata(class UPCGMetadata** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGParamData", "ConstMetadata");

	Params::UPCGParamData_ConstMetadata_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Class PCG.PCGPin
// (None)

class UClass* UPCGPin::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGPin");

	return Clss;
}


// PCGPin PCG.Default__PCGPin
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UPCGPin* UPCGPin::GetDefaultObj()
{
	static class UPCGPin* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGPin*>(UPCGPin::StaticClass()->DefaultObject);

	return Default;
}


// Function PCG.PCGPin.SetToolTip
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FText                        InTooltip                                                        (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

class FText UPCGPin::SetToolTip()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGPin", "SetToolTip");

	Params::UPCGPin_SetToolTip_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PCG.PCGPin.GetTooltip
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UPCGPin::GetTooltip(class FText* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGPin", "GetTooltip");

	Params::UPCGPin_GetTooltip_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Class PCG.PCGSettingsInstance
// (None)

class UClass* UPCGSettingsInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGSettingsInstance");

	return Clss;
}


// PCGSettingsInstance PCG.Default__PCGSettingsInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGSettingsInstance* UPCGSettingsInstance::GetDefaultObj()
{
	static class UPCGSettingsInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGSettingsInstance*>(UPCGSettingsInstance::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGTrivialSettings
// (None)

class UClass* UPCGTrivialSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGTrivialSettings");

	return Clss;
}


// PCGTrivialSettings PCG.Default__PCGTrivialSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGTrivialSettings* UPCGTrivialSettings::GetDefaultObj()
{
	static class UPCGTrivialSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGTrivialSettings*>(UPCGTrivialSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGSubgraphSettings
// (None)

class UClass* UPCGSubgraphSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGSubgraphSettings");

	return Clss;
}


// PCGSubgraphSettings PCG.Default__PCGSubgraphSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGSubgraphSettings* UPCGSubgraphSettings::GetDefaultObj()
{
	static class UPCGSubgraphSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGSubgraphSettings*>(UPCGSubgraphSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGSubgraphNode
// (None)

class UClass* UPCGSubgraphNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGSubgraphNode");

	return Clss;
}


// PCGSubgraphNode PCG.Default__PCGSubgraphNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGSubgraphNode* UPCGSubgraphNode::GetDefaultObj()
{
	static class UPCGSubgraphNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGSubgraphNode*>(UPCGSubgraphNode::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGSubsystem
// (None)

class UClass* UPCGSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGSubsystem");

	return Clss;
}


// PCGSubsystem PCG.Default__PCGSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGSubsystem* UPCGSubsystem::GetDefaultObj()
{
	static class UPCGSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGSubsystem*>(UPCGSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGVolume
// (Actor)

class UClass* APCGVolume::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGVolume");

	return Clss;
}


// PCGVolume PCG.Default__PCGVolume
// (Public, ClassDefaultObject, ArchetypeObject)

class APCGVolume* APCGVolume::GetDefaultObj()
{
	static class APCGVolume* Default = nullptr;

	if (!Default)
		Default = static_cast<APCGVolume*>(APCGVolume::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGWorldActor
// (Actor)

class UClass* APCGWorldActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGWorldActor");

	return Clss;
}


// PCGWorldActor PCG.Default__PCGWorldActor
// (Public, ClassDefaultObject, ArchetypeObject)

class APCGWorldActor* APCGWorldActor::GetDefaultObj()
{
	static class APCGWorldActor* Default = nullptr;

	if (!Default)
		Default = static_cast<APCGWorldActor*>(APCGWorldActor::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGDeterminismTestBlueprintBase
// (None)

class UClass* UPCGDeterminismTestBlueprintBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGDeterminismTestBlueprintBase");

	return Clss;
}


// PCGDeterminismTestBlueprintBase PCG.Default__PCGDeterminismTestBlueprintBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGDeterminismTestBlueprintBase* UPCGDeterminismTestBlueprintBase::GetDefaultObj()
{
	static class UPCGDeterminismTestBlueprintBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGDeterminismTestBlueprintBase*>(UPCGDeterminismTestBlueprintBase::StaticClass()->DefaultObject);

	return Default;
}


// Function PCG.PCGDeterminismTestBlueprintBase.ExecuteTest
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPCGNode*                    InPCGNode                                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// struct FDeterminismTestResult      InOutTestResult                                                  (BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

struct FDeterminismTestResult UPCGDeterminismTestBlueprintBase::ExecuteTest()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGDeterminismTestBlueprintBase", "ExecuteTest");

	Params::UPCGDeterminismTestBlueprintBase_ExecuteTest_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class PCG.PCGUnitTestDummyActor
// (Actor)

class UClass* APCGUnitTestDummyActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGUnitTestDummyActor");

	return Clss;
}


// PCGUnitTestDummyActor PCG.Default__PCGUnitTestDummyActor
// (Public, ClassDefaultObject, ArchetypeObject)

class APCGUnitTestDummyActor* APCGUnitTestDummyActor::GetDefaultObj()
{
	static class APCGUnitTestDummyActor* Default = nullptr;

	if (!Default)
		Default = static_cast<APCGUnitTestDummyActor*>(APCGUnitTestDummyActor::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGUnitTestDummyComponent
// (None)

class UClass* UPCGUnitTestDummyComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGUnitTestDummyComponent");

	return Clss;
}


// PCGUnitTestDummyComponent PCG.Default__PCGUnitTestDummyComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGUnitTestDummyComponent* UPCGUnitTestDummyComponent::GetDefaultObj()
{
	static class UPCGUnitTestDummyComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGUnitTestDummyComponent*>(UPCGUnitTestDummyComponent::StaticClass()->DefaultObject);

	return Default;
}

}



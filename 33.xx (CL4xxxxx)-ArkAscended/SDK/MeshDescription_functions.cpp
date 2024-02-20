#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MeshDescription.MeshDescriptionBase
// (None)

class UClass* UMeshDescriptionBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshDescriptionBase");

	return Clss;
}


// MeshDescriptionBase MeshDescription.Default__MeshDescriptionBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshDescriptionBase* UMeshDescriptionBase::GetDefaultObj()
{
	static class UMeshDescriptionBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshDescriptionBase*>(UMeshDescriptionBase::StaticClass()->DefaultObject);

	return Default;
}


// Function MeshDescription.MeshDescriptionBase.SetVertexPosition
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVertexID                   VertexID                                                         (Edit, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FVector                     Position                                                         (Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config)

void UMeshDescriptionBase::SetVertexPosition(struct FVertexID* VertexID, struct FVector* Position)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "SetVertexPosition");

	Params::UMeshDescriptionBase_SetVertexPosition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VertexID != nullptr)
		*VertexID = std::move(Parms.VertexID);

	if (Position != nullptr)
		*Position = std::move(Parms.Position);

}


// Function MeshDescription.MeshDescriptionBase.SetPolygonVertexInstances
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FVertexInstanceID>   VertexInstanceIDs                                                (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UMeshDescriptionBase::SetPolygonVertexInstances(struct FPolygonID* PolygonID, const TArray<struct FVertexInstanceID>& VertexInstanceIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "SetPolygonVertexInstances");

	Params::UMeshDescriptionBase_SetPolygonVertexInstances_Params Parms{};

	Parms.VertexInstanceIDs = VertexInstanceIDs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PolygonID != nullptr)
		*PolygonID = std::move(Parms.PolygonID);

}


// Function MeshDescription.MeshDescriptionBase.SetPolygonPolygonGroup
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FPolygonGroupID             PolygonGroupID                                                   (EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)

void UMeshDescriptionBase::SetPolygonPolygonGroup(struct FPolygonID* PolygonID, struct FPolygonGroupID* PolygonGroupID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "SetPolygonPolygonGroup");

	Params::UMeshDescriptionBase_SetPolygonPolygonGroup_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PolygonID != nullptr)
		*PolygonID = std::move(Parms.PolygonID);

	if (PolygonGroupID != nullptr)
		*PolygonGroupID = std::move(Parms.PolygonGroupID);

}


// Function MeshDescription.MeshDescriptionBase.ReversePolygonFacing
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)

void UMeshDescriptionBase::ReversePolygonFacing(struct FPolygonID* PolygonID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "ReversePolygonFacing");

	Params::UMeshDescriptionBase_ReversePolygonFacing_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PolygonID != nullptr)
		*PolygonID = std::move(Parms.PolygonID);

}


// Function MeshDescription.MeshDescriptionBase.ReserveNewVertices
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NumberOfNewVertices                                              (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UMeshDescriptionBase::ReserveNewVertices(int32 NumberOfNewVertices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "ReserveNewVertices");

	Params::UMeshDescriptionBase_ReserveNewVertices_Params Parms{};

	Parms.NumberOfNewVertices = NumberOfNewVertices;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.ReserveNewVertexInstances
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NumberOfNewVertexInstances                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UMeshDescriptionBase::ReserveNewVertexInstances(int32 NumberOfNewVertexInstances)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "ReserveNewVertexInstances");

	Params::UMeshDescriptionBase_ReserveNewVertexInstances_Params Parms{};

	Parms.NumberOfNewVertexInstances = NumberOfNewVertexInstances;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.ReserveNewTriangles
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NumberOfNewTriangles                                             (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UMeshDescriptionBase::ReserveNewTriangles(int32 NumberOfNewTriangles)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "ReserveNewTriangles");

	Params::UMeshDescriptionBase_ReserveNewTriangles_Params Parms{};

	Parms.NumberOfNewTriangles = NumberOfNewTriangles;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.ReserveNewPolygons
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NumberOfNewPolygons                                              (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UMeshDescriptionBase::ReserveNewPolygons(int32 NumberOfNewPolygons)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "ReserveNewPolygons");

	Params::UMeshDescriptionBase_ReserveNewPolygons_Params Parms{};

	Parms.NumberOfNewPolygons = NumberOfNewPolygons;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.ReserveNewPolygonGroups
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NumberOfNewPolygonGroups                                         (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UMeshDescriptionBase::ReserveNewPolygonGroups(int32 NumberOfNewPolygonGroups)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "ReserveNewPolygonGroups");

	Params::UMeshDescriptionBase_ReserveNewPolygonGroups_Params Parms{};

	Parms.NumberOfNewPolygonGroups = NumberOfNewPolygonGroups;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.ReserveNewEdges
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NumberOfNewEdges                                                 (Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UMeshDescriptionBase::ReserveNewEdges(int32 NumberOfNewEdges)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "ReserveNewEdges");

	Params::UMeshDescriptionBase_ReserveNewEdges_Params Parms{};

	Parms.NumberOfNewEdges = NumberOfNewEdges;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.IsVertexValid
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID                   VertexID                                                         (Edit, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UMeshDescriptionBase::IsVertexValid(struct FVertexID* VertexID, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "IsVertexValid");

	Params::UMeshDescriptionBase_IsVertexValid_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VertexID != nullptr)
		*VertexID = std::move(Parms.VertexID);

}


// Function MeshDescription.MeshDescriptionBase.IsVertexOrphaned
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID                   VertexID                                                         (Edit, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UMeshDescriptionBase::IsVertexOrphaned(struct FVertexID* VertexID, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "IsVertexOrphaned");

	Params::UMeshDescriptionBase_IsVertexOrphaned_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VertexID != nullptr)
		*VertexID = std::move(Parms.VertexID);

}


// Function MeshDescription.MeshDescriptionBase.IsVertexInstanceValid
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexInstanceID           VertexInstanceID                                                 (ConstParm, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UMeshDescriptionBase::IsVertexInstanceValid(struct FVertexInstanceID* VertexInstanceID, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "IsVertexInstanceValid");

	Params::UMeshDescriptionBase_IsVertexInstanceValid_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VertexInstanceID != nullptr)
		*VertexInstanceID = std::move(Parms.VertexInstanceID);

}


// Function MeshDescription.MeshDescriptionBase.IsTriangleValid
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTriangleID                 TriangleID                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UMeshDescriptionBase::IsTriangleValid(struct FTriangleID* TriangleID, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "IsTriangleValid");

	Params::UMeshDescriptionBase_IsTriangleValid_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TriangleID != nullptr)
		*TriangleID = std::move(Parms.TriangleID);

}


// Function MeshDescription.MeshDescriptionBase.IsTrianglePartOfNgon
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTriangleID                 TriangleID                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UMeshDescriptionBase::IsTrianglePartOfNgon(struct FTriangleID* TriangleID, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "IsTrianglePartOfNgon");

	Params::UMeshDescriptionBase_IsTrianglePartOfNgon_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TriangleID != nullptr)
		*TriangleID = std::move(Parms.TriangleID);

}


// Function MeshDescription.MeshDescriptionBase.IsPolygonValid
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UMeshDescriptionBase::IsPolygonValid(struct FPolygonID* PolygonID, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "IsPolygonValid");

	Params::UMeshDescriptionBase_IsPolygonValid_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PolygonID != nullptr)
		*PolygonID = std::move(Parms.PolygonID);

}


// Function MeshDescription.MeshDescriptionBase.IsPolygonGroupValid
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonGroupID             PolygonGroupID                                                   (EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UMeshDescriptionBase::IsPolygonGroupValid(struct FPolygonGroupID* PolygonGroupID, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "IsPolygonGroupValid");

	Params::UMeshDescriptionBase_IsPolygonGroupValid_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PolygonGroupID != nullptr)
		*PolygonGroupID = std::move(Parms.PolygonGroupID);

}


// Function MeshDescription.MeshDescriptionBase.IsEmpty
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UMeshDescriptionBase::IsEmpty(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "IsEmpty");

	Params::UMeshDescriptionBase_IsEmpty_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.IsEdgeValid
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEdgeID                     EdgeID                                                           (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UMeshDescriptionBase::IsEdgeValid(struct FEdgeID* EdgeID, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "IsEdgeValid");

	Params::UMeshDescriptionBase_IsEdgeValid_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (EdgeID != nullptr)
		*EdgeID = std::move(Parms.EdgeID);

}


// Function MeshDescription.MeshDescriptionBase.IsEdgeInternalToPolygon
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEdgeID                     EdgeID                                                           (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FPolygonID                  PolygonID                                                        (ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UMeshDescriptionBase::IsEdgeInternalToPolygon(struct FEdgeID* EdgeID, struct FPolygonID* PolygonID, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "IsEdgeInternalToPolygon");

	Params::UMeshDescriptionBase_IsEdgeInternalToPolygon_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (EdgeID != nullptr)
		*EdgeID = std::move(Parms.EdgeID);

	if (PolygonID != nullptr)
		*PolygonID = std::move(Parms.PolygonID);

}


// Function MeshDescription.MeshDescriptionBase.IsEdgeInternal
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEdgeID                     EdgeID                                                           (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UMeshDescriptionBase::IsEdgeInternal(struct FEdgeID* EdgeID, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "IsEdgeInternal");

	Params::UMeshDescriptionBase_IsEdgeInternal_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (EdgeID != nullptr)
		*EdgeID = std::move(Parms.EdgeID);

}


// Function MeshDescription.MeshDescriptionBase.GetVertexVertexInstances
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID                   VertexID                                                         (Edit, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FVertexInstanceID>   OutVertexInstanceIDs                                             (Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UMeshDescriptionBase::GetVertexVertexInstances(struct FVertexID* VertexID, const TArray<struct FVertexInstanceID>& OutVertexInstanceIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetVertexVertexInstances");

	Params::UMeshDescriptionBase_GetVertexVertexInstances_Params Parms{};

	Parms.OutVertexInstanceIDs = OutVertexInstanceIDs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VertexID != nullptr)
		*VertexID = std::move(Parms.VertexID);

}


// Function MeshDescription.MeshDescriptionBase.GetVertexPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID                   VertexID                                                         (Edit, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FVector                     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UMeshDescriptionBase::GetVertexPosition(struct FVertexID* VertexID, const struct FVector& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetVertexPosition");

	Params::UMeshDescriptionBase_GetVertexPosition_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VertexID != nullptr)
		*VertexID = std::move(Parms.VertexID);

}


// Function MeshDescription.MeshDescriptionBase.GetVertexPairEdge
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID                   VertexID0                                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVertexID                   VertexID1                                                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FEdgeID                     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UMeshDescriptionBase::GetVertexPairEdge(struct FVertexID* VertexID0, struct FVertexID* VertexID1, const struct FEdgeID& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetVertexPairEdge");

	Params::UMeshDescriptionBase_GetVertexPairEdge_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VertexID0 != nullptr)
		*VertexID0 = std::move(Parms.VertexID0);

	if (VertexID1 != nullptr)
		*VertexID1 = std::move(Parms.VertexID1);

}


// Function MeshDescription.MeshDescriptionBase.GetVertexInstanceVertex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexInstanceID           VertexInstanceID                                                 (ConstParm, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FVertexID                   ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UMeshDescriptionBase::GetVertexInstanceVertex(struct FVertexInstanceID* VertexInstanceID, const struct FVertexID& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetVertexInstanceVertex");

	Params::UMeshDescriptionBase_GetVertexInstanceVertex_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VertexInstanceID != nullptr)
		*VertexInstanceID = std::move(Parms.VertexInstanceID);

}


// Function MeshDescription.MeshDescriptionBase.GetVertexInstancePairEdge
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexInstanceID           VertexInstanceID0                                                (Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVertexInstanceID           VertexInstanceID1                                                (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FEdgeID                     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UMeshDescriptionBase::GetVertexInstancePairEdge(const struct FVertexInstanceID& VertexInstanceID0, const struct FVertexInstanceID& VertexInstanceID1, const struct FEdgeID& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetVertexInstancePairEdge");

	Params::UMeshDescriptionBase_GetVertexInstancePairEdge_Params Parms{};

	Parms.VertexInstanceID0 = VertexInstanceID0;
	Parms.VertexInstanceID1 = VertexInstanceID1;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.GetVertexInstanceForTriangleVertex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTriangleID                 TriangleID                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FVertexID                   VertexID                                                         (Edit, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FVertexInstanceID           ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UMeshDescriptionBase::GetVertexInstanceForTriangleVertex(struct FTriangleID* TriangleID, struct FVertexID* VertexID, const struct FVertexInstanceID& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetVertexInstanceForTriangleVertex");

	Params::UMeshDescriptionBase_GetVertexInstanceForTriangleVertex_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TriangleID != nullptr)
		*TriangleID = std::move(Parms.TriangleID);

	if (VertexID != nullptr)
		*VertexID = std::move(Parms.VertexID);

}


// Function MeshDescription.MeshDescriptionBase.GetVertexInstanceForPolygonVertex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FVertexID                   VertexID                                                         (Edit, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FVertexInstanceID           ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UMeshDescriptionBase::GetVertexInstanceForPolygonVertex(struct FPolygonID* PolygonID, struct FVertexID* VertexID, const struct FVertexInstanceID& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetVertexInstanceForPolygonVertex");

	Params::UMeshDescriptionBase_GetVertexInstanceForPolygonVertex_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PolygonID != nullptr)
		*PolygonID = std::move(Parms.PolygonID);

	if (VertexID != nullptr)
		*VertexID = std::move(Parms.VertexID);

}


// Function MeshDescription.MeshDescriptionBase.GetVertexInstanceCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UMeshDescriptionBase::GetVertexInstanceCount(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetVertexInstanceCount");

	Params::UMeshDescriptionBase_GetVertexInstanceCount_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedTriangles
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexInstanceID           VertexInstanceID                                                 (ConstParm, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FTriangleID>         OutConnectedTriangleIDs                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UMeshDescriptionBase::GetVertexInstanceConnectedTriangles(struct FVertexInstanceID* VertexInstanceID, const TArray<struct FTriangleID>& OutConnectedTriangleIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetVertexInstanceConnectedTriangles");

	Params::UMeshDescriptionBase_GetVertexInstanceConnectedTriangles_Params Parms{};

	Parms.OutConnectedTriangleIDs = OutConnectedTriangleIDs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VertexInstanceID != nullptr)
		*VertexInstanceID = std::move(Parms.VertexInstanceID);

}


// Function MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedPolygons
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexInstanceID           VertexInstanceID                                                 (ConstParm, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FPolygonID>          OutConnectedPolygonIDs                                           (ConstParm, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UMeshDescriptionBase::GetVertexInstanceConnectedPolygons(struct FVertexInstanceID* VertexInstanceID, const TArray<struct FPolygonID>& OutConnectedPolygonIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetVertexInstanceConnectedPolygons");

	Params::UMeshDescriptionBase_GetVertexInstanceConnectedPolygons_Params Parms{};

	Parms.OutConnectedPolygonIDs = OutConnectedPolygonIDs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VertexInstanceID != nullptr)
		*VertexInstanceID = std::move(Parms.VertexInstanceID);

}


// Function MeshDescription.MeshDescriptionBase.GetVertexCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UMeshDescriptionBase::GetVertexCount(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetVertexCount");

	Params::UMeshDescriptionBase_GetVertexCount_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.GetVertexConnectedTriangles
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID                   VertexID                                                         (Edit, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FTriangleID>         OutConnectedTriangleIDs                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UMeshDescriptionBase::GetVertexConnectedTriangles(struct FVertexID* VertexID, const TArray<struct FTriangleID>& OutConnectedTriangleIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetVertexConnectedTriangles");

	Params::UMeshDescriptionBase_GetVertexConnectedTriangles_Params Parms{};

	Parms.OutConnectedTriangleIDs = OutConnectedTriangleIDs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VertexID != nullptr)
		*VertexID = std::move(Parms.VertexID);

}


// Function MeshDescription.MeshDescriptionBase.GetVertexConnectedPolygons
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID                   VertexID                                                         (Edit, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FPolygonID>          OutConnectedPolygonIDs                                           (ConstParm, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UMeshDescriptionBase::GetVertexConnectedPolygons(struct FVertexID* VertexID, const TArray<struct FPolygonID>& OutConnectedPolygonIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetVertexConnectedPolygons");

	Params::UMeshDescriptionBase_GetVertexConnectedPolygons_Params Parms{};

	Parms.OutConnectedPolygonIDs = OutConnectedPolygonIDs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VertexID != nullptr)
		*VertexID = std::move(Parms.VertexID);

}


// Function MeshDescription.MeshDescriptionBase.GetVertexConnectedEdges
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID                   VertexID                                                         (Edit, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FEdgeID>             OutEdgeIDs                                                       (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UMeshDescriptionBase::GetVertexConnectedEdges(struct FVertexID* VertexID, const TArray<struct FEdgeID>& OutEdgeIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetVertexConnectedEdges");

	Params::UMeshDescriptionBase_GetVertexConnectedEdges_Params Parms{};

	Parms.OutEdgeIDs = OutEdgeIDs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VertexID != nullptr)
		*VertexID = std::move(Parms.VertexID);

}


// Function MeshDescription.MeshDescriptionBase.GetVertexAdjacentVertices
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID                   VertexID                                                         (Edit, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FVertexID>           OutAdjacentVertexIDs                                             (ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UMeshDescriptionBase::GetVertexAdjacentVertices(struct FVertexID* VertexID, const TArray<struct FVertexID>& OutAdjacentVertexIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetVertexAdjacentVertices");

	Params::UMeshDescriptionBase_GetVertexAdjacentVertices_Params Parms{};

	Parms.OutAdjacentVertexIDs = OutAdjacentVertexIDs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VertexID != nullptr)
		*VertexID = std::move(Parms.VertexID);

}


// Function MeshDescription.MeshDescriptionBase.GetTriangleVertices
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTriangleID                 TriangleID                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FVertexID>           OutVertexIDs                                                     (ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UMeshDescriptionBase::GetTriangleVertices(struct FTriangleID* TriangleID, const TArray<struct FVertexID>& OutVertexIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetTriangleVertices");

	Params::UMeshDescriptionBase_GetTriangleVertices_Params Parms{};

	Parms.OutVertexIDs = OutVertexIDs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TriangleID != nullptr)
		*TriangleID = std::move(Parms.TriangleID);

}


// Function MeshDescription.MeshDescriptionBase.GetTriangleVertexInstances
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTriangleID                 TriangleID                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FVertexInstanceID>   OutVertexInstanceIDs                                             (Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UMeshDescriptionBase::GetTriangleVertexInstances(struct FTriangleID* TriangleID, const TArray<struct FVertexInstanceID>& OutVertexInstanceIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetTriangleVertexInstances");

	Params::UMeshDescriptionBase_GetTriangleVertexInstances_Params Parms{};

	Parms.OutVertexInstanceIDs = OutVertexInstanceIDs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TriangleID != nullptr)
		*TriangleID = std::move(Parms.TriangleID);

}


// Function MeshDescription.MeshDescriptionBase.GetTriangleVertexInstance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTriangleID                 TriangleID                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// int32                              Index                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
// struct FVertexInstanceID           ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UMeshDescriptionBase::GetTriangleVertexInstance(struct FTriangleID* TriangleID, int32* Index, const struct FVertexInstanceID& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetTriangleVertexInstance");

	Params::UMeshDescriptionBase_GetTriangleVertexInstance_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TriangleID != nullptr)
		*TriangleID = std::move(Parms.TriangleID);

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function MeshDescription.MeshDescriptionBase.GetTrianglePolygonGroup
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTriangleID                 TriangleID                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FPolygonGroupID             ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UMeshDescriptionBase::GetTrianglePolygonGroup(struct FTriangleID* TriangleID, const struct FPolygonGroupID& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetTrianglePolygonGroup");

	Params::UMeshDescriptionBase_GetTrianglePolygonGroup_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TriangleID != nullptr)
		*TriangleID = std::move(Parms.TriangleID);

}


// Function MeshDescription.MeshDescriptionBase.GetTrianglePolygon
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTriangleID                 TriangleID                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FPolygonID                  ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UMeshDescriptionBase::GetTrianglePolygon(struct FTriangleID* TriangleID, const struct FPolygonID& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetTrianglePolygon");

	Params::UMeshDescriptionBase_GetTrianglePolygon_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TriangleID != nullptr)
		*TriangleID = std::move(Parms.TriangleID);

}


// Function MeshDescription.MeshDescriptionBase.GetTriangleEdges
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTriangleID                 TriangleID                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FEdgeID>             OutEdgeIDs                                                       (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UMeshDescriptionBase::GetTriangleEdges(struct FTriangleID* TriangleID, const TArray<struct FEdgeID>& OutEdgeIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetTriangleEdges");

	Params::UMeshDescriptionBase_GetTriangleEdges_Params Parms{};

	Parms.OutEdgeIDs = OutEdgeIDs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TriangleID != nullptr)
		*TriangleID = std::move(Parms.TriangleID);

}


// Function MeshDescription.MeshDescriptionBase.GetTriangleCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UMeshDescriptionBase::GetTriangleCount(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetTriangleCount");

	Params::UMeshDescriptionBase_GetTriangleCount_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.GetTriangleAdjacentTriangles
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTriangleID                 TriangleID                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FTriangleID>         OutTriangleIDs                                                   (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UMeshDescriptionBase::GetTriangleAdjacentTriangles(struct FTriangleID* TriangleID, const TArray<struct FTriangleID>& OutTriangleIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetTriangleAdjacentTriangles");

	Params::UMeshDescriptionBase_GetTriangleAdjacentTriangles_Params Parms{};

	Parms.OutTriangleIDs = OutTriangleIDs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TriangleID != nullptr)
		*TriangleID = std::move(Parms.TriangleID);

}


// Function MeshDescription.MeshDescriptionBase.GetPolygonVertices
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FVertexID>           OutVertexIDs                                                     (ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UMeshDescriptionBase::GetPolygonVertices(struct FPolygonID* PolygonID, const TArray<struct FVertexID>& OutVertexIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetPolygonVertices");

	Params::UMeshDescriptionBase_GetPolygonVertices_Params Parms{};

	Parms.OutVertexIDs = OutVertexIDs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PolygonID != nullptr)
		*PolygonID = std::move(Parms.PolygonID);

}


// Function MeshDescription.MeshDescriptionBase.GetPolygonVertexInstances
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FVertexInstanceID>   OutVertexInstanceIDs                                             (Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UMeshDescriptionBase::GetPolygonVertexInstances(struct FPolygonID* PolygonID, const TArray<struct FVertexInstanceID>& OutVertexInstanceIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetPolygonVertexInstances");

	Params::UMeshDescriptionBase_GetPolygonVertexInstances_Params Parms{};

	Parms.OutVertexInstanceIDs = OutVertexInstanceIDs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PolygonID != nullptr)
		*PolygonID = std::move(Parms.PolygonID);

}


// Function MeshDescription.MeshDescriptionBase.GetPolygonTriangles
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FTriangleID>         OutTriangleIDs                                                   (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UMeshDescriptionBase::GetPolygonTriangles(struct FPolygonID* PolygonID, const TArray<struct FTriangleID>& OutTriangleIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetPolygonTriangles");

	Params::UMeshDescriptionBase_GetPolygonTriangles_Params Parms{};

	Parms.OutTriangleIDs = OutTriangleIDs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PolygonID != nullptr)
		*PolygonID = std::move(Parms.PolygonID);

}


// Function MeshDescription.MeshDescriptionBase.GetPolygonPolygonGroup
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FPolygonGroupID             ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UMeshDescriptionBase::GetPolygonPolygonGroup(struct FPolygonID* PolygonID, const struct FPolygonGroupID& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetPolygonPolygonGroup");

	Params::UMeshDescriptionBase_GetPolygonPolygonGroup_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PolygonID != nullptr)
		*PolygonID = std::move(Parms.PolygonID);

}


// Function MeshDescription.MeshDescriptionBase.GetPolygonPerimeterEdges
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FEdgeID>             OutEdgeIDs                                                       (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UMeshDescriptionBase::GetPolygonPerimeterEdges(struct FPolygonID* PolygonID, const TArray<struct FEdgeID>& OutEdgeIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetPolygonPerimeterEdges");

	Params::UMeshDescriptionBase_GetPolygonPerimeterEdges_Params Parms{};

	Parms.OutEdgeIDs = OutEdgeIDs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PolygonID != nullptr)
		*PolygonID = std::move(Parms.PolygonID);

}


// Function MeshDescription.MeshDescriptionBase.GetPolygonInternalEdges
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FEdgeID>             OutEdgeIDs                                                       (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UMeshDescriptionBase::GetPolygonInternalEdges(struct FPolygonID* PolygonID, const TArray<struct FEdgeID>& OutEdgeIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetPolygonInternalEdges");

	Params::UMeshDescriptionBase_GetPolygonInternalEdges_Params Parms{};

	Parms.OutEdgeIDs = OutEdgeIDs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PolygonID != nullptr)
		*PolygonID = std::move(Parms.PolygonID);

}


// Function MeshDescription.MeshDescriptionBase.GetPolygonGroupPolygons
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonGroupID             PolygonGroupID                                                   (EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FPolygonID>          OutPolygonIDs                                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UMeshDescriptionBase::GetPolygonGroupPolygons(struct FPolygonGroupID* PolygonGroupID, const TArray<struct FPolygonID>& OutPolygonIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetPolygonGroupPolygons");

	Params::UMeshDescriptionBase_GetPolygonGroupPolygons_Params Parms{};

	Parms.OutPolygonIDs = OutPolygonIDs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PolygonGroupID != nullptr)
		*PolygonGroupID = std::move(Parms.PolygonGroupID);

}


// Function MeshDescription.MeshDescriptionBase.GetPolygonGroupCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UMeshDescriptionBase::GetPolygonGroupCount(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetPolygonGroupCount");

	Params::UMeshDescriptionBase_GetPolygonGroupCount_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.GetPolygonCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UMeshDescriptionBase::GetPolygonCount(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetPolygonCount");

	Params::UMeshDescriptionBase_GetPolygonCount_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.GetPolygonAdjacentPolygons
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FPolygonID>          OutPolygonIDs                                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UMeshDescriptionBase::GetPolygonAdjacentPolygons(struct FPolygonID* PolygonID, const TArray<struct FPolygonID>& OutPolygonIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetPolygonAdjacentPolygons");

	Params::UMeshDescriptionBase_GetPolygonAdjacentPolygons_Params Parms{};

	Parms.OutPolygonIDs = OutPolygonIDs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PolygonID != nullptr)
		*PolygonID = std::move(Parms.PolygonID);

}


// Function MeshDescription.MeshDescriptionBase.GetNumVertexVertexInstances
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID                   VertexID                                                         (Edit, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UMeshDescriptionBase::GetNumVertexVertexInstances(struct FVertexID* VertexID, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetNumVertexVertexInstances");

	Params::UMeshDescriptionBase_GetNumVertexVertexInstances_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VertexID != nullptr)
		*VertexID = std::move(Parms.VertexID);

}


// Function MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedTriangles
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexInstanceID           VertexInstanceID                                                 (ConstParm, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UMeshDescriptionBase::GetNumVertexInstanceConnectedTriangles(struct FVertexInstanceID* VertexInstanceID, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetNumVertexInstanceConnectedTriangles");

	Params::UMeshDescriptionBase_GetNumVertexInstanceConnectedTriangles_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VertexInstanceID != nullptr)
		*VertexInstanceID = std::move(Parms.VertexInstanceID);

}


// Function MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedPolygons
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexInstanceID           VertexInstanceID                                                 (ConstParm, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UMeshDescriptionBase::GetNumVertexInstanceConnectedPolygons(struct FVertexInstanceID* VertexInstanceID, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetNumVertexInstanceConnectedPolygons");

	Params::UMeshDescriptionBase_GetNumVertexInstanceConnectedPolygons_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VertexInstanceID != nullptr)
		*VertexInstanceID = std::move(Parms.VertexInstanceID);

}


// Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedTriangles
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID                   VertexID                                                         (Edit, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UMeshDescriptionBase::GetNumVertexConnectedTriangles(struct FVertexID* VertexID, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetNumVertexConnectedTriangles");

	Params::UMeshDescriptionBase_GetNumVertexConnectedTriangles_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VertexID != nullptr)
		*VertexID = std::move(Parms.VertexID);

}


// Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedPolygons
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID                   VertexID                                                         (Edit, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UMeshDescriptionBase::GetNumVertexConnectedPolygons(struct FVertexID* VertexID, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetNumVertexConnectedPolygons");

	Params::UMeshDescriptionBase_GetNumVertexConnectedPolygons_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VertexID != nullptr)
		*VertexID = std::move(Parms.VertexID);

}


// Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedEdges
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID                   VertexID                                                         (Edit, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UMeshDescriptionBase::GetNumVertexConnectedEdges(struct FVertexID* VertexID, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetNumVertexConnectedEdges");

	Params::UMeshDescriptionBase_GetNumVertexConnectedEdges_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VertexID != nullptr)
		*VertexID = std::move(Parms.VertexID);

}


// Function MeshDescription.MeshDescriptionBase.GetNumPolygonVertices
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UMeshDescriptionBase::GetNumPolygonVertices(struct FPolygonID* PolygonID, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetNumPolygonVertices");

	Params::UMeshDescriptionBase_GetNumPolygonVertices_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PolygonID != nullptr)
		*PolygonID = std::move(Parms.PolygonID);

}


// Function MeshDescription.MeshDescriptionBase.GetNumPolygonTriangles
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UMeshDescriptionBase::GetNumPolygonTriangles(struct FPolygonID* PolygonID, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetNumPolygonTriangles");

	Params::UMeshDescriptionBase_GetNumPolygonTriangles_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PolygonID != nullptr)
		*PolygonID = std::move(Parms.PolygonID);

}


// Function MeshDescription.MeshDescriptionBase.GetNumPolygonInternalEdges
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UMeshDescriptionBase::GetNumPolygonInternalEdges(struct FPolygonID* PolygonID, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetNumPolygonInternalEdges");

	Params::UMeshDescriptionBase_GetNumPolygonInternalEdges_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PolygonID != nullptr)
		*PolygonID = std::move(Parms.PolygonID);

}


// Function MeshDescription.MeshDescriptionBase.GetNumPolygonGroupPolygons
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonGroupID             PolygonGroupID                                                   (EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UMeshDescriptionBase::GetNumPolygonGroupPolygons(struct FPolygonGroupID* PolygonGroupID, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetNumPolygonGroupPolygons");

	Params::UMeshDescriptionBase_GetNumPolygonGroupPolygons_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PolygonGroupID != nullptr)
		*PolygonGroupID = std::move(Parms.PolygonGroupID);

}


// Function MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedTriangles
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEdgeID                     EdgeID                                                           (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UMeshDescriptionBase::GetNumEdgeConnectedTriangles(struct FEdgeID* EdgeID, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetNumEdgeConnectedTriangles");

	Params::UMeshDescriptionBase_GetNumEdgeConnectedTriangles_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (EdgeID != nullptr)
		*EdgeID = std::move(Parms.EdgeID);

}


// Function MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedPolygons
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEdgeID                     EdgeID                                                           (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UMeshDescriptionBase::GetNumEdgeConnectedPolygons(struct FEdgeID* EdgeID, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetNumEdgeConnectedPolygons");

	Params::UMeshDescriptionBase_GetNumEdgeConnectedPolygons_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (EdgeID != nullptr)
		*EdgeID = std::move(Parms.EdgeID);

}


// Function MeshDescription.MeshDescriptionBase.GetEdgeVertices
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEdgeID                     EdgeID                                                           (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FVertexID>           OutVertexIDs                                                     (ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UMeshDescriptionBase::GetEdgeVertices(struct FEdgeID* EdgeID, const TArray<struct FVertexID>& OutVertexIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetEdgeVertices");

	Params::UMeshDescriptionBase_GetEdgeVertices_Params Parms{};

	Parms.OutVertexIDs = OutVertexIDs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (EdgeID != nullptr)
		*EdgeID = std::move(Parms.EdgeID);

}


// Function MeshDescription.MeshDescriptionBase.GetEdgeVertex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEdgeID                     EdgeID                                                           (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// int32                              VertexNumber                                                     (Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVertexID                   ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UMeshDescriptionBase::GetEdgeVertex(struct FEdgeID* EdgeID, int32 VertexNumber, const struct FVertexID& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetEdgeVertex");

	Params::UMeshDescriptionBase_GetEdgeVertex_Params Parms{};

	Parms.VertexNumber = VertexNumber;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (EdgeID != nullptr)
		*EdgeID = std::move(Parms.EdgeID);

}


// Function MeshDescription.MeshDescriptionBase.GetEdgeCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UMeshDescriptionBase::GetEdgeCount(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetEdgeCount");

	Params::UMeshDescriptionBase_GetEdgeCount_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.GetEdgeConnectedTriangles
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEdgeID                     EdgeID                                                           (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FTriangleID>         OutConnectedTriangleIDs                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UMeshDescriptionBase::GetEdgeConnectedTriangles(struct FEdgeID* EdgeID, const TArray<struct FTriangleID>& OutConnectedTriangleIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetEdgeConnectedTriangles");

	Params::UMeshDescriptionBase_GetEdgeConnectedTriangles_Params Parms{};

	Parms.OutConnectedTriangleIDs = OutConnectedTriangleIDs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (EdgeID != nullptr)
		*EdgeID = std::move(Parms.EdgeID);

}


// Function MeshDescription.MeshDescriptionBase.GetEdgeConnectedPolygons
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEdgeID                     EdgeID                                                           (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FPolygonID>          OutConnectedPolygonIDs                                           (ConstParm, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UMeshDescriptionBase::GetEdgeConnectedPolygons(struct FEdgeID* EdgeID, const TArray<struct FPolygonID>& OutConnectedPolygonIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetEdgeConnectedPolygons");

	Params::UMeshDescriptionBase_GetEdgeConnectedPolygons_Params Parms{};

	Parms.OutConnectedPolygonIDs = OutConnectedPolygonIDs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (EdgeID != nullptr)
		*EdgeID = std::move(Parms.EdgeID);

}


// Function MeshDescription.MeshDescriptionBase.Empty
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMeshDescriptionBase::Empty()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "Empty");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.DeleteVertexInstance
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FVertexInstanceID           VertexInstanceID                                                 (ConstParm, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FVertexID>           OrphanedVertices                                                 (Edit, ConstParm, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UMeshDescriptionBase::DeleteVertexInstance(struct FVertexInstanceID* VertexInstanceID, const TArray<struct FVertexID>& OrphanedVertices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "DeleteVertexInstance");

	Params::UMeshDescriptionBase_DeleteVertexInstance_Params Parms{};

	Parms.OrphanedVertices = OrphanedVertices;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VertexInstanceID != nullptr)
		*VertexInstanceID = std::move(Parms.VertexInstanceID);

}


// Function MeshDescription.MeshDescriptionBase.DeleteVertex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FVertexID                   VertexID                                                         (Edit, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)

void UMeshDescriptionBase::DeleteVertex(struct FVertexID* VertexID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "DeleteVertex");

	Params::UMeshDescriptionBase_DeleteVertex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VertexID != nullptr)
		*VertexID = std::move(Parms.VertexID);

}


// Function MeshDescription.MeshDescriptionBase.DeleteTriangle
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTriangleID                 TriangleID                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FEdgeID>             OrphanedEdges                                                    (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FVertexInstanceID>   OrphanedVertexInstances                                          (ExportObject, Net, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FPolygonGroupID>     OrphanedPolygonGroupsPtr                                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UMeshDescriptionBase::DeleteTriangle(struct FTriangleID* TriangleID, const TArray<struct FEdgeID>& OrphanedEdges, const TArray<struct FVertexInstanceID>& OrphanedVertexInstances, const TArray<struct FPolygonGroupID>& OrphanedPolygonGroupsPtr)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "DeleteTriangle");

	Params::UMeshDescriptionBase_DeleteTriangle_Params Parms{};

	Parms.OrphanedEdges = OrphanedEdges;
	Parms.OrphanedVertexInstances = OrphanedVertexInstances;
	Parms.OrphanedPolygonGroupsPtr = OrphanedPolygonGroupsPtr;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TriangleID != nullptr)
		*TriangleID = std::move(Parms.TriangleID);

}


// Function MeshDescription.MeshDescriptionBase.DeletePolygonGroup
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FPolygonGroupID             PolygonGroupID                                                   (EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)

void UMeshDescriptionBase::DeletePolygonGroup(struct FPolygonGroupID* PolygonGroupID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "DeletePolygonGroup");

	Params::UMeshDescriptionBase_DeletePolygonGroup_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PolygonGroupID != nullptr)
		*PolygonGroupID = std::move(Parms.PolygonGroupID);

}


// Function MeshDescription.MeshDescriptionBase.DeletePolygon
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FEdgeID>             OrphanedEdges                                                    (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FVertexInstanceID>   OrphanedVertexInstances                                          (ExportObject, Net, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FPolygonGroupID>     OrphanedPolygonGroups                                            (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UMeshDescriptionBase::DeletePolygon(struct FPolygonID* PolygonID, const TArray<struct FEdgeID>& OrphanedEdges, const TArray<struct FVertexInstanceID>& OrphanedVertexInstances, const TArray<struct FPolygonGroupID>& OrphanedPolygonGroups)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "DeletePolygon");

	Params::UMeshDescriptionBase_DeletePolygon_Params Parms{};

	Parms.OrphanedEdges = OrphanedEdges;
	Parms.OrphanedVertexInstances = OrphanedVertexInstances;
	Parms.OrphanedPolygonGroups = OrphanedPolygonGroups;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PolygonID != nullptr)
		*PolygonID = std::move(Parms.PolygonID);

}


// Function MeshDescription.MeshDescriptionBase.DeleteEdge
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FEdgeID                     EdgeID                                                           (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FVertexID>           OrphanedVertices                                                 (Edit, ConstParm, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UMeshDescriptionBase::DeleteEdge(struct FEdgeID* EdgeID, const TArray<struct FVertexID>& OrphanedVertices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "DeleteEdge");

	Params::UMeshDescriptionBase_DeleteEdge_Params Parms{};

	Parms.OrphanedVertices = OrphanedVertices;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (EdgeID != nullptr)
		*EdgeID = std::move(Parms.EdgeID);

}


// Function MeshDescription.MeshDescriptionBase.CreateVertexWithID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FVertexID                   VertexID                                                         (Edit, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)

void UMeshDescriptionBase::CreateVertexWithID(struct FVertexID* VertexID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "CreateVertexWithID");

	Params::UMeshDescriptionBase_CreateVertexWithID_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VertexID != nullptr)
		*VertexID = std::move(Parms.VertexID);

}


// Function MeshDescription.MeshDescriptionBase.CreateVertexInstanceWithID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FVertexInstanceID           VertexInstanceID                                                 (ConstParm, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FVertexID                   VertexID                                                         (Edit, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)

void UMeshDescriptionBase::CreateVertexInstanceWithID(struct FVertexInstanceID* VertexInstanceID, struct FVertexID* VertexID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "CreateVertexInstanceWithID");

	Params::UMeshDescriptionBase_CreateVertexInstanceWithID_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VertexInstanceID != nullptr)
		*VertexInstanceID = std::move(Parms.VertexInstanceID);

	if (VertexID != nullptr)
		*VertexID = std::move(Parms.VertexID);

}


// Function MeshDescription.MeshDescriptionBase.CreateVertexInstance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FVertexID                   VertexID                                                         (Edit, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FVertexInstanceID           ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UMeshDescriptionBase::CreateVertexInstance(struct FVertexID* VertexID, const struct FVertexInstanceID& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "CreateVertexInstance");

	Params::UMeshDescriptionBase_CreateVertexInstance_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VertexID != nullptr)
		*VertexID = std::move(Parms.VertexID);

}


// Function MeshDescription.MeshDescriptionBase.CreateVertex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FVertexID                   ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UMeshDescriptionBase::CreateVertex(const struct FVertexID& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "CreateVertex");

	Params::UMeshDescriptionBase_CreateVertex_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.CreateTriangleWithID
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTriangleID                 TriangleID                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FPolygonGroupID             PolygonGroupID                                                   (EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FVertexInstanceID>   VertexInstanceIDs                                                (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FEdgeID>             NewEdgeIDs                                                       (Edit, ConstParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UMeshDescriptionBase::CreateTriangleWithID(struct FTriangleID* TriangleID, struct FPolygonGroupID* PolygonGroupID, const TArray<struct FVertexInstanceID>& VertexInstanceIDs, const TArray<struct FEdgeID>& NewEdgeIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "CreateTriangleWithID");

	Params::UMeshDescriptionBase_CreateTriangleWithID_Params Parms{};

	Parms.VertexInstanceIDs = VertexInstanceIDs;
	Parms.NewEdgeIDs = NewEdgeIDs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TriangleID != nullptr)
		*TriangleID = std::move(Parms.TriangleID);

	if (PolygonGroupID != nullptr)
		*PolygonGroupID = std::move(Parms.PolygonGroupID);

}


// Function MeshDescription.MeshDescriptionBase.CreateTriangle
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPolygonGroupID             PolygonGroupID                                                   (EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FVertexInstanceID>   VertexInstanceIDs                                                (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FEdgeID>             NewEdgeIDs                                                       (Edit, ConstParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FTriangleID                 ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UMeshDescriptionBase::CreateTriangle(struct FPolygonGroupID* PolygonGroupID, const TArray<struct FVertexInstanceID>& VertexInstanceIDs, const TArray<struct FEdgeID>& NewEdgeIDs, const struct FTriangleID& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "CreateTriangle");

	Params::UMeshDescriptionBase_CreateTriangle_Params Parms{};

	Parms.VertexInstanceIDs = VertexInstanceIDs;
	Parms.NewEdgeIDs = NewEdgeIDs;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PolygonGroupID != nullptr)
		*PolygonGroupID = std::move(Parms.PolygonGroupID);

}


// Function MeshDescription.MeshDescriptionBase.CreatePolygonWithID
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FPolygonGroupID             PolygonGroupID                                                   (EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FVertexInstanceID>   VertexInstanceIDs                                                (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FEdgeID>             NewEdgeIDs                                                       (Edit, ConstParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UMeshDescriptionBase::CreatePolygonWithID(struct FPolygonID* PolygonID, struct FPolygonGroupID* PolygonGroupID, const TArray<struct FVertexInstanceID>& VertexInstanceIDs, const TArray<struct FEdgeID>& NewEdgeIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "CreatePolygonWithID");

	Params::UMeshDescriptionBase_CreatePolygonWithID_Params Parms{};

	Parms.VertexInstanceIDs = VertexInstanceIDs;
	Parms.NewEdgeIDs = NewEdgeIDs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PolygonID != nullptr)
		*PolygonID = std::move(Parms.PolygonID);

	if (PolygonGroupID != nullptr)
		*PolygonGroupID = std::move(Parms.PolygonGroupID);

}


// Function MeshDescription.MeshDescriptionBase.CreatePolygonGroupWithID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FPolygonGroupID             PolygonGroupID                                                   (EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)

void UMeshDescriptionBase::CreatePolygonGroupWithID(struct FPolygonGroupID* PolygonGroupID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "CreatePolygonGroupWithID");

	Params::UMeshDescriptionBase_CreatePolygonGroupWithID_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PolygonGroupID != nullptr)
		*PolygonGroupID = std::move(Parms.PolygonGroupID);

}


// Function MeshDescription.MeshDescriptionBase.CreatePolygonGroup
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FPolygonGroupID             ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UMeshDescriptionBase::CreatePolygonGroup(const struct FPolygonGroupID& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "CreatePolygonGroup");

	Params::UMeshDescriptionBase_CreatePolygonGroup_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.CreatePolygon
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPolygonGroupID             PolygonGroupID                                                   (EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FVertexInstanceID>   VertexInstanceIDs                                                (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FEdgeID>             NewEdgeIDs                                                       (Edit, ConstParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FPolygonID                  ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UMeshDescriptionBase::CreatePolygon(struct FPolygonGroupID* PolygonGroupID, const TArray<struct FVertexInstanceID>& VertexInstanceIDs, const TArray<struct FEdgeID>& NewEdgeIDs, const struct FPolygonID& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "CreatePolygon");

	Params::UMeshDescriptionBase_CreatePolygon_Params Parms{};

	Parms.VertexInstanceIDs = VertexInstanceIDs;
	Parms.NewEdgeIDs = NewEdgeIDs;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PolygonGroupID != nullptr)
		*PolygonGroupID = std::move(Parms.PolygonGroupID);

}


// Function MeshDescription.MeshDescriptionBase.CreateEdgeWithID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FEdgeID                     EdgeID                                                           (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FVertexID                   VertexID0                                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVertexID                   VertexID1                                                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UMeshDescriptionBase::CreateEdgeWithID(struct FEdgeID* EdgeID, struct FVertexID* VertexID0, struct FVertexID* VertexID1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "CreateEdgeWithID");

	Params::UMeshDescriptionBase_CreateEdgeWithID_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (EdgeID != nullptr)
		*EdgeID = std::move(Parms.EdgeID);

	if (VertexID0 != nullptr)
		*VertexID0 = std::move(Parms.VertexID0);

	if (VertexID1 != nullptr)
		*VertexID1 = std::move(Parms.VertexID1);

}


// Function MeshDescription.MeshDescriptionBase.CreateEdge
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FVertexID                   VertexID0                                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVertexID                   VertexID1                                                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FEdgeID                     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UMeshDescriptionBase::CreateEdge(struct FVertexID* VertexID0, struct FVertexID* VertexID1, const struct FEdgeID& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "CreateEdge");

	Params::UMeshDescriptionBase_CreateEdge_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VertexID0 != nullptr)
		*VertexID0 = std::move(Parms.VertexID0);

	if (VertexID1 != nullptr)
		*VertexID1 = std::move(Parms.VertexID1);

}


// Function MeshDescription.MeshDescriptionBase.ComputePolygonTriangulation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)

void UMeshDescriptionBase::ComputePolygonTriangulation(struct FPolygonID* PolygonID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "ComputePolygonTriangulation");

	Params::UMeshDescriptionBase_ComputePolygonTriangulation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PolygonID != nullptr)
		*PolygonID = std::move(Parms.PolygonID);

}


// Class MeshDescription.MeshDescriptionBaseBulkData
// (None)

class UClass* UMeshDescriptionBaseBulkData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshDescriptionBaseBulkData");

	return Clss;
}


// MeshDescriptionBaseBulkData MeshDescription.Default__MeshDescriptionBaseBulkData
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshDescriptionBaseBulkData* UMeshDescriptionBaseBulkData::GetDefaultObj()
{
	static class UMeshDescriptionBaseBulkData* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshDescriptionBaseBulkData*>(UMeshDescriptionBaseBulkData::StaticClass()->DefaultObject);

	return Default;
}

}



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
// struct FVertexID                   VertexID                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FVector                     Position                                                         (Edit, ConstParm, ExportObject, ReturnParm, Transient, Config)

struct FVector UMeshDescriptionBase::SetVertexPosition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "SetVertexPosition");

	Params::UMeshDescriptionBase_SetVertexPosition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.SetPolygonVertexInstances
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FVertexInstanceID>   VertexInstanceIDs                                                (Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)

struct FPolygonID UMeshDescriptionBase::SetPolygonVertexInstances(TArray<struct FVertexInstanceID>* VertexInstanceIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "SetPolygonVertexInstances");

	Params::UMeshDescriptionBase_SetPolygonVertexInstances_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VertexInstanceIDs != nullptr)
		*VertexInstanceIDs = std::move(Parms.VertexInstanceIDs);

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.SetPolygonPolygonGroup
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FPolygonGroupID             PolygonGroupID                                                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)

struct FPolygonGroupID UMeshDescriptionBase::SetPolygonPolygonGroup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "SetPolygonPolygonGroup");

	Params::UMeshDescriptionBase_SetPolygonPolygonGroup_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.ReversePolygonFacing
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)

struct FPolygonID UMeshDescriptionBase::ReversePolygonFacing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "ReversePolygonFacing");

	Params::UMeshDescriptionBase_ReversePolygonFacing_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.ReserveNewVertices
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NumberOfNewVertices                                              (Edit, ConstParm, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)

int32 UMeshDescriptionBase::ReserveNewVertices()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "ReserveNewVertices");

	Params::UMeshDescriptionBase_ReserveNewVertices_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.ReserveNewVertexInstances
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NumberOfNewVertexInstances                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)

int32 UMeshDescriptionBase::ReserveNewVertexInstances()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "ReserveNewVertexInstances");

	Params::UMeshDescriptionBase_ReserveNewVertexInstances_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.ReserveNewTriangles
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NumberOfNewTriangles                                             (ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)

int32 UMeshDescriptionBase::ReserveNewTriangles()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "ReserveNewTriangles");

	Params::UMeshDescriptionBase_ReserveNewTriangles_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.ReserveNewPolygons
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NumberOfNewPolygons                                              (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)

int32 UMeshDescriptionBase::ReserveNewPolygons()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "ReserveNewPolygons");

	Params::UMeshDescriptionBase_ReserveNewPolygons_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.ReserveNewPolygonGroups
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NumberOfNewPolygonGroups                                         (ConstParm, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)

int32 UMeshDescriptionBase::ReserveNewPolygonGroups()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "ReserveNewPolygonGroups");

	Params::UMeshDescriptionBase_ReserveNewPolygonGroups_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.ReserveNewEdges
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NumberOfNewEdges                                                 (Edit, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)

int32 UMeshDescriptionBase::ReserveNewEdges()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "ReserveNewEdges");

	Params::UMeshDescriptionBase_ReserveNewEdges_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.IsVertexValid
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID                   VertexID                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UMeshDescriptionBase::IsVertexValid()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "IsVertexValid");

	Params::UMeshDescriptionBase_IsVertexValid_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.IsVertexOrphaned
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID                   VertexID                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UMeshDescriptionBase::IsVertexOrphaned()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "IsVertexOrphaned");

	Params::UMeshDescriptionBase_IsVertexOrphaned_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.IsVertexInstanceValid
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexInstanceID           VertexInstanceID                                                 (Edit, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UMeshDescriptionBase::IsVertexInstanceValid()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "IsVertexInstanceValid");

	Params::UMeshDescriptionBase_IsVertexInstanceValid_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.IsTriangleValid
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTriangleID                 TriangleID                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UMeshDescriptionBase::IsTriangleValid()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "IsTriangleValid");

	Params::UMeshDescriptionBase_IsTriangleValid_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.IsTrianglePartOfNgon
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTriangleID                 TriangleID                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UMeshDescriptionBase::IsTrianglePartOfNgon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "IsTrianglePartOfNgon");

	Params::UMeshDescriptionBase_IsTrianglePartOfNgon_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.IsPolygonValid
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UMeshDescriptionBase::IsPolygonValid()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "IsPolygonValid");

	Params::UMeshDescriptionBase_IsPolygonValid_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.IsPolygonGroupValid
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonGroupID             PolygonGroupID                                                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UMeshDescriptionBase::IsPolygonGroupValid()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "IsPolygonGroupValid");

	Params::UMeshDescriptionBase_IsPolygonGroupValid_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.IsEmpty
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UMeshDescriptionBase::IsEmpty()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "IsEmpty");

	Params::UMeshDescriptionBase_IsEmpty_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.IsEdgeValid
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEdgeID                     EdgeID                                                           (ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UMeshDescriptionBase::IsEdgeValid()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "IsEdgeValid");

	Params::UMeshDescriptionBase_IsEdgeValid_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.IsEdgeInternalToPolygon
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEdgeID                     EdgeID                                                           (ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FPolygonID                  PolygonID                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UMeshDescriptionBase::IsEdgeInternalToPolygon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "IsEdgeInternalToPolygon");

	Params::UMeshDescriptionBase_IsEdgeInternalToPolygon_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.IsEdgeInternal
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEdgeID                     EdgeID                                                           (ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UMeshDescriptionBase::IsEdgeInternal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "IsEdgeInternal");

	Params::UMeshDescriptionBase_IsEdgeInternal_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.GetVertexVertexInstances
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID                   VertexID                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FVertexInstanceID>   OutVertexInstanceIDs                                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)

TArray<struct FVertexInstanceID> UMeshDescriptionBase::GetVertexVertexInstances()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetVertexVertexInstances");

	Params::UMeshDescriptionBase_GetVertexVertexInstances_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.GetVertexPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID                   VertexID                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FVector                     ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FVector UMeshDescriptionBase::GetVertexPosition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetVertexPosition");

	Params::UMeshDescriptionBase_GetVertexPosition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.GetVertexPairEdge
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID                   VertexID0                                                        (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVertexID                   VertexID1                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// struct FEdgeID                     ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FEdgeID UMeshDescriptionBase::GetVertexPairEdge(struct FVertexID* VertexID0, struct FVertexID* VertexID1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetVertexPairEdge");

	Params::UMeshDescriptionBase_GetVertexPairEdge_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VertexID0 != nullptr)
		*VertexID0 = std::move(Parms.VertexID0);

	if (VertexID1 != nullptr)
		*VertexID1 = std::move(Parms.VertexID1);

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.GetVertexInstanceVertex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexInstanceID           VertexInstanceID                                                 (Edit, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FVertexID                   ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FVertexID UMeshDescriptionBase::GetVertexInstanceVertex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetVertexInstanceVertex");

	Params::UMeshDescriptionBase_GetVertexInstanceVertex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.GetVertexInstancePairEdge
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexInstanceID           VertexInstanceID0                                                (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVertexInstanceID           VertexInstanceID1                                                (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// struct FEdgeID                     ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FEdgeID UMeshDescriptionBase::GetVertexInstancePairEdge()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetVertexInstancePairEdge");

	Params::UMeshDescriptionBase_GetVertexInstancePairEdge_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.GetVertexInstanceForTriangleVertex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTriangleID                 TriangleID                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FVertexID                   VertexID                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FVertexInstanceID           ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FVertexInstanceID UMeshDescriptionBase::GetVertexInstanceForTriangleVertex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetVertexInstanceForTriangleVertex");

	Params::UMeshDescriptionBase_GetVertexInstanceForTriangleVertex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.GetVertexInstanceForPolygonVertex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FVertexID                   VertexID                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FVertexInstanceID           ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FVertexInstanceID UMeshDescriptionBase::GetVertexInstanceForPolygonVertex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetVertexInstanceForPolygonVertex");

	Params::UMeshDescriptionBase_GetVertexInstanceForPolygonVertex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.GetVertexInstanceCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

int32 UMeshDescriptionBase::GetVertexInstanceCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetVertexInstanceCount");

	Params::UMeshDescriptionBase_GetVertexInstanceCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedTriangles
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexInstanceID           VertexInstanceID                                                 (Edit, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FTriangleID>         OutConnectedTriangleIDs                                          (ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)

TArray<struct FTriangleID> UMeshDescriptionBase::GetVertexInstanceConnectedTriangles()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetVertexInstanceConnectedTriangles");

	Params::UMeshDescriptionBase_GetVertexInstanceConnectedTriangles_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedPolygons
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexInstanceID           VertexInstanceID                                                 (Edit, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FPolygonID>          OutConnectedPolygonIDs                                           (ConstParm, Net, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)

TArray<struct FPolygonID> UMeshDescriptionBase::GetVertexInstanceConnectedPolygons()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetVertexInstanceConnectedPolygons");

	Params::UMeshDescriptionBase_GetVertexInstanceConnectedPolygons_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.GetVertexCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

int32 UMeshDescriptionBase::GetVertexCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetVertexCount");

	Params::UMeshDescriptionBase_GetVertexCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.GetVertexConnectedTriangles
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID                   VertexID                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FTriangleID>         OutConnectedTriangleIDs                                          (ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)

TArray<struct FTriangleID> UMeshDescriptionBase::GetVertexConnectedTriangles()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetVertexConnectedTriangles");

	Params::UMeshDescriptionBase_GetVertexConnectedTriangles_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.GetVertexConnectedPolygons
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID                   VertexID                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FPolygonID>          OutConnectedPolygonIDs                                           (ConstParm, Net, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)

TArray<struct FPolygonID> UMeshDescriptionBase::GetVertexConnectedPolygons()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetVertexConnectedPolygons");

	Params::UMeshDescriptionBase_GetVertexConnectedPolygons_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.GetVertexConnectedEdges
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID                   VertexID                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FEdgeID>             OutEdgeIDs                                                       (Edit, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)

TArray<struct FEdgeID> UMeshDescriptionBase::GetVertexConnectedEdges()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetVertexConnectedEdges");

	Params::UMeshDescriptionBase_GetVertexConnectedEdges_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.GetVertexAdjacentVertices
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID                   VertexID                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FVertexID>           OutAdjacentVertexIDs                                             (ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)

TArray<struct FVertexID> UMeshDescriptionBase::GetVertexAdjacentVertices()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetVertexAdjacentVertices");

	Params::UMeshDescriptionBase_GetVertexAdjacentVertices_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.GetTriangleVertices
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTriangleID                 TriangleID                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FVertexID>           OutVertexIDs                                                     (ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)

TArray<struct FVertexID> UMeshDescriptionBase::GetTriangleVertices()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetTriangleVertices");

	Params::UMeshDescriptionBase_GetTriangleVertices_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.GetTriangleVertexInstances
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTriangleID                 TriangleID                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FVertexInstanceID>   OutVertexInstanceIDs                                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)

TArray<struct FVertexInstanceID> UMeshDescriptionBase::GetTriangleVertexInstances()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetTriangleVertexInstances");

	Params::UMeshDescriptionBase_GetTriangleVertexInstances_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.GetTriangleVertexInstance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTriangleID                 TriangleID                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// int32                              Index                                                            (EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
// struct FVertexInstanceID           ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FVertexInstanceID UMeshDescriptionBase::GetTriangleVertexInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetTriangleVertexInstance");

	Params::UMeshDescriptionBase_GetTriangleVertexInstance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.GetTrianglePolygonGroup
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTriangleID                 TriangleID                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FPolygonGroupID             ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FPolygonGroupID UMeshDescriptionBase::GetTrianglePolygonGroup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetTrianglePolygonGroup");

	Params::UMeshDescriptionBase_GetTrianglePolygonGroup_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.GetTrianglePolygon
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTriangleID                 TriangleID                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FPolygonID                  ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FPolygonID UMeshDescriptionBase::GetTrianglePolygon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetTrianglePolygon");

	Params::UMeshDescriptionBase_GetTrianglePolygon_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.GetTriangleEdges
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTriangleID                 TriangleID                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FEdgeID>             OutEdgeIDs                                                       (Edit, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)

TArray<struct FEdgeID> UMeshDescriptionBase::GetTriangleEdges()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetTriangleEdges");

	Params::UMeshDescriptionBase_GetTriangleEdges_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.GetTriangleCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

int32 UMeshDescriptionBase::GetTriangleCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetTriangleCount");

	Params::UMeshDescriptionBase_GetTriangleCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.GetTriangleAdjacentTriangles
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTriangleID                 TriangleID                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FTriangleID>         OutTriangleIDs                                                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)

TArray<struct FTriangleID> UMeshDescriptionBase::GetTriangleAdjacentTriangles()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetTriangleAdjacentTriangles");

	Params::UMeshDescriptionBase_GetTriangleAdjacentTriangles_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.GetPolygonVertices
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FVertexID>           OutVertexIDs                                                     (ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)

TArray<struct FVertexID> UMeshDescriptionBase::GetPolygonVertices()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetPolygonVertices");

	Params::UMeshDescriptionBase_GetPolygonVertices_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.GetPolygonVertexInstances
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FVertexInstanceID>   OutVertexInstanceIDs                                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)

TArray<struct FVertexInstanceID> UMeshDescriptionBase::GetPolygonVertexInstances()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetPolygonVertexInstances");

	Params::UMeshDescriptionBase_GetPolygonVertexInstances_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.GetPolygonTriangles
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FTriangleID>         OutTriangleIDs                                                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)

TArray<struct FTriangleID> UMeshDescriptionBase::GetPolygonTriangles()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetPolygonTriangles");

	Params::UMeshDescriptionBase_GetPolygonTriangles_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.GetPolygonPolygonGroup
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FPolygonGroupID             ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FPolygonGroupID UMeshDescriptionBase::GetPolygonPolygonGroup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetPolygonPolygonGroup");

	Params::UMeshDescriptionBase_GetPolygonPolygonGroup_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.GetPolygonPerimeterEdges
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FEdgeID>             OutEdgeIDs                                                       (Edit, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)

TArray<struct FEdgeID> UMeshDescriptionBase::GetPolygonPerimeterEdges()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetPolygonPerimeterEdges");

	Params::UMeshDescriptionBase_GetPolygonPerimeterEdges_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.GetPolygonInternalEdges
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FEdgeID>             OutEdgeIDs                                                       (Edit, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)

TArray<struct FEdgeID> UMeshDescriptionBase::GetPolygonInternalEdges()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetPolygonInternalEdges");

	Params::UMeshDescriptionBase_GetPolygonInternalEdges_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.GetPolygonGroupPolygons
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonGroupID             PolygonGroupID                                                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FPolygonID>          OutPolygonIDs                                                    (Edit, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)

TArray<struct FPolygonID> UMeshDescriptionBase::GetPolygonGroupPolygons()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetPolygonGroupPolygons");

	Params::UMeshDescriptionBase_GetPolygonGroupPolygons_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.GetPolygonGroupCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

int32 UMeshDescriptionBase::GetPolygonGroupCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetPolygonGroupCount");

	Params::UMeshDescriptionBase_GetPolygonGroupCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.GetPolygonCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

int32 UMeshDescriptionBase::GetPolygonCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetPolygonCount");

	Params::UMeshDescriptionBase_GetPolygonCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.GetPolygonAdjacentPolygons
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FPolygonID>          OutPolygonIDs                                                    (Edit, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)

TArray<struct FPolygonID> UMeshDescriptionBase::GetPolygonAdjacentPolygons()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetPolygonAdjacentPolygons");

	Params::UMeshDescriptionBase_GetPolygonAdjacentPolygons_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.GetNumVertexVertexInstances
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID                   VertexID                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// int32                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

int32 UMeshDescriptionBase::GetNumVertexVertexInstances()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetNumVertexVertexInstances");

	Params::UMeshDescriptionBase_GetNumVertexVertexInstances_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedTriangles
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexInstanceID           VertexInstanceID                                                 (Edit, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// int32                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

int32 UMeshDescriptionBase::GetNumVertexInstanceConnectedTriangles()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetNumVertexInstanceConnectedTriangles");

	Params::UMeshDescriptionBase_GetNumVertexInstanceConnectedTriangles_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedPolygons
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexInstanceID           VertexInstanceID                                                 (Edit, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// int32                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

int32 UMeshDescriptionBase::GetNumVertexInstanceConnectedPolygons()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetNumVertexInstanceConnectedPolygons");

	Params::UMeshDescriptionBase_GetNumVertexInstanceConnectedPolygons_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedTriangles
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID                   VertexID                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// int32                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

int32 UMeshDescriptionBase::GetNumVertexConnectedTriangles()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetNumVertexConnectedTriangles");

	Params::UMeshDescriptionBase_GetNumVertexConnectedTriangles_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedPolygons
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID                   VertexID                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// int32                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

int32 UMeshDescriptionBase::GetNumVertexConnectedPolygons()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetNumVertexConnectedPolygons");

	Params::UMeshDescriptionBase_GetNumVertexConnectedPolygons_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedEdges
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID                   VertexID                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// int32                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

int32 UMeshDescriptionBase::GetNumVertexConnectedEdges()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetNumVertexConnectedEdges");

	Params::UMeshDescriptionBase_GetNumVertexConnectedEdges_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.GetNumPolygonVertices
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// int32                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

int32 UMeshDescriptionBase::GetNumPolygonVertices()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetNumPolygonVertices");

	Params::UMeshDescriptionBase_GetNumPolygonVertices_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.GetNumPolygonTriangles
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// int32                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

int32 UMeshDescriptionBase::GetNumPolygonTriangles()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetNumPolygonTriangles");

	Params::UMeshDescriptionBase_GetNumPolygonTriangles_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.GetNumPolygonInternalEdges
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// int32                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

int32 UMeshDescriptionBase::GetNumPolygonInternalEdges()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetNumPolygonInternalEdges");

	Params::UMeshDescriptionBase_GetNumPolygonInternalEdges_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.GetNumPolygonGroupPolygons
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonGroupID             PolygonGroupID                                                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// int32                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

int32 UMeshDescriptionBase::GetNumPolygonGroupPolygons()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetNumPolygonGroupPolygons");

	Params::UMeshDescriptionBase_GetNumPolygonGroupPolygons_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedTriangles
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEdgeID                     EdgeID                                                           (ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// int32                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

int32 UMeshDescriptionBase::GetNumEdgeConnectedTriangles()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetNumEdgeConnectedTriangles");

	Params::UMeshDescriptionBase_GetNumEdgeConnectedTriangles_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedPolygons
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEdgeID                     EdgeID                                                           (ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// int32                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

int32 UMeshDescriptionBase::GetNumEdgeConnectedPolygons()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetNumEdgeConnectedPolygons");

	Params::UMeshDescriptionBase_GetNumEdgeConnectedPolygons_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.GetEdgeVertices
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEdgeID                     EdgeID                                                           (ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FVertexID>           OutVertexIDs                                                     (ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)

TArray<struct FVertexID> UMeshDescriptionBase::GetEdgeVertices()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetEdgeVertices");

	Params::UMeshDescriptionBase_GetEdgeVertices_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.GetEdgeVertex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEdgeID                     EdgeID                                                           (ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// int32                              VertexNumber                                                     (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVertexID                   ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FVertexID UMeshDescriptionBase::GetEdgeVertex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetEdgeVertex");

	Params::UMeshDescriptionBase_GetEdgeVertex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.GetEdgeCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

int32 UMeshDescriptionBase::GetEdgeCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetEdgeCount");

	Params::UMeshDescriptionBase_GetEdgeCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.GetEdgeConnectedTriangles
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEdgeID                     EdgeID                                                           (ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FTriangleID>         OutConnectedTriangleIDs                                          (ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)

TArray<struct FTriangleID> UMeshDescriptionBase::GetEdgeConnectedTriangles()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetEdgeConnectedTriangles");

	Params::UMeshDescriptionBase_GetEdgeConnectedTriangles_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.GetEdgeConnectedPolygons
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEdgeID                     EdgeID                                                           (ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FPolygonID>          OutConnectedPolygonIDs                                           (ConstParm, Net, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)

TArray<struct FPolygonID> UMeshDescriptionBase::GetEdgeConnectedPolygons()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetEdgeConnectedPolygons");

	Params::UMeshDescriptionBase_GetEdgeConnectedPolygons_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

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
// struct FVertexInstanceID           VertexInstanceID                                                 (Edit, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FVertexID>           OrphanedVertices                                                 (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)

struct FVertexInstanceID UMeshDescriptionBase::DeleteVertexInstance(TArray<struct FVertexID>* OrphanedVertices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "DeleteVertexInstance");

	Params::UMeshDescriptionBase_DeleteVertexInstance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OrphanedVertices != nullptr)
		*OrphanedVertices = std::move(Parms.OrphanedVertices);

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.DeleteVertex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FVertexID                   VertexID                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)

struct FVertexID UMeshDescriptionBase::DeleteVertex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "DeleteVertex");

	Params::UMeshDescriptionBase_DeleteVertex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.DeleteTriangle
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTriangleID                 TriangleID                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FEdgeID>             OrphanedEdges                                                    (Edit, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<struct FVertexInstanceID>   OrphanedVertexInstances                                          (ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<struct FPolygonGroupID>     OrphanedPolygonGroupsPtr                                         (Edit, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)

TArray<struct FPolygonGroupID> UMeshDescriptionBase::DeleteTriangle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "DeleteTriangle");

	Params::UMeshDescriptionBase_DeleteTriangle_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.DeletePolygonGroup
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FPolygonGroupID             PolygonGroupID                                                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)

struct FPolygonGroupID UMeshDescriptionBase::DeletePolygonGroup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "DeletePolygonGroup");

	Params::UMeshDescriptionBase_DeletePolygonGroup_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.DeletePolygon
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FEdgeID>             OrphanedEdges                                                    (Edit, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<struct FVertexInstanceID>   OrphanedVertexInstances                                          (ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<struct FPolygonGroupID>     OrphanedPolygonGroups                                            (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)

TArray<struct FVertexInstanceID> UMeshDescriptionBase::DeletePolygon(TArray<struct FPolygonGroupID>* OrphanedPolygonGroups)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "DeletePolygon");

	Params::UMeshDescriptionBase_DeletePolygon_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OrphanedPolygonGroups != nullptr)
		*OrphanedPolygonGroups = std::move(Parms.OrphanedPolygonGroups);

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.DeleteEdge
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FEdgeID                     EdgeID                                                           (ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FVertexID>           OrphanedVertices                                                 (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)

struct FEdgeID UMeshDescriptionBase::DeleteEdge(TArray<struct FVertexID>* OrphanedVertices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "DeleteEdge");

	Params::UMeshDescriptionBase_DeleteEdge_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OrphanedVertices != nullptr)
		*OrphanedVertices = std::move(Parms.OrphanedVertices);

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.CreateVertexWithID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FVertexID                   VertexID                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)

struct FVertexID UMeshDescriptionBase::CreateVertexWithID()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "CreateVertexWithID");

	Params::UMeshDescriptionBase_CreateVertexWithID_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.CreateVertexInstanceWithID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FVertexInstanceID           VertexInstanceID                                                 (Edit, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FVertexID                   VertexID                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)

struct FVertexID UMeshDescriptionBase::CreateVertexInstanceWithID()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "CreateVertexInstanceWithID");

	Params::UMeshDescriptionBase_CreateVertexInstanceWithID_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.CreateVertexInstance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FVertexID                   VertexID                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FVertexInstanceID           ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FVertexInstanceID UMeshDescriptionBase::CreateVertexInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "CreateVertexInstance");

	Params::UMeshDescriptionBase_CreateVertexInstance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.CreateVertex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FVertexID                   ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FVertexID UMeshDescriptionBase::CreateVertex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "CreateVertex");

	Params::UMeshDescriptionBase_CreateVertex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.CreateTriangleWithID
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTriangleID                 TriangleID                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FPolygonGroupID             PolygonGroupID                                                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FVertexInstanceID>   VertexInstanceIDs                                                (Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<struct FEdgeID>             NewEdgeIDs                                                       (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)

struct FPolygonGroupID UMeshDescriptionBase::CreateTriangleWithID(TArray<struct FVertexInstanceID>* VertexInstanceIDs, TArray<struct FEdgeID>* NewEdgeIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "CreateTriangleWithID");

	Params::UMeshDescriptionBase_CreateTriangleWithID_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VertexInstanceIDs != nullptr)
		*VertexInstanceIDs = std::move(Parms.VertexInstanceIDs);

	if (NewEdgeIDs != nullptr)
		*NewEdgeIDs = std::move(Parms.NewEdgeIDs);

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.CreateTriangle
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPolygonGroupID             PolygonGroupID                                                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FVertexInstanceID>   VertexInstanceIDs                                                (Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<struct FEdgeID>             NewEdgeIDs                                                       (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// struct FTriangleID                 ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FTriangleID UMeshDescriptionBase::CreateTriangle(TArray<struct FVertexInstanceID>* VertexInstanceIDs, TArray<struct FEdgeID>* NewEdgeIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "CreateTriangle");

	Params::UMeshDescriptionBase_CreateTriangle_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VertexInstanceIDs != nullptr)
		*VertexInstanceIDs = std::move(Parms.VertexInstanceIDs);

	if (NewEdgeIDs != nullptr)
		*NewEdgeIDs = std::move(Parms.NewEdgeIDs);

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.CreatePolygonWithID
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FPolygonGroupID             PolygonGroupID                                                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FVertexInstanceID>   VertexInstanceIDs                                                (Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<struct FEdgeID>             NewEdgeIDs                                                       (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)

struct FPolygonGroupID UMeshDescriptionBase::CreatePolygonWithID(TArray<struct FVertexInstanceID>* VertexInstanceIDs, TArray<struct FEdgeID>* NewEdgeIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "CreatePolygonWithID");

	Params::UMeshDescriptionBase_CreatePolygonWithID_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VertexInstanceIDs != nullptr)
		*VertexInstanceIDs = std::move(Parms.VertexInstanceIDs);

	if (NewEdgeIDs != nullptr)
		*NewEdgeIDs = std::move(Parms.NewEdgeIDs);

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.CreatePolygonGroupWithID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FPolygonGroupID             PolygonGroupID                                                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)

struct FPolygonGroupID UMeshDescriptionBase::CreatePolygonGroupWithID()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "CreatePolygonGroupWithID");

	Params::UMeshDescriptionBase_CreatePolygonGroupWithID_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.CreatePolygonGroup
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FPolygonGroupID             ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FPolygonGroupID UMeshDescriptionBase::CreatePolygonGroup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "CreatePolygonGroup");

	Params::UMeshDescriptionBase_CreatePolygonGroup_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.CreatePolygon
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPolygonGroupID             PolygonGroupID                                                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FVertexInstanceID>   VertexInstanceIDs                                                (Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<struct FEdgeID>             NewEdgeIDs                                                       (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// struct FPolygonID                  ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FPolygonID UMeshDescriptionBase::CreatePolygon(TArray<struct FVertexInstanceID>* VertexInstanceIDs, TArray<struct FEdgeID>* NewEdgeIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "CreatePolygon");

	Params::UMeshDescriptionBase_CreatePolygon_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VertexInstanceIDs != nullptr)
		*VertexInstanceIDs = std::move(Parms.VertexInstanceIDs);

	if (NewEdgeIDs != nullptr)
		*NewEdgeIDs = std::move(Parms.NewEdgeIDs);

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.CreateEdgeWithID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FEdgeID                     EdgeID                                                           (ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FVertexID                   VertexID0                                                        (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVertexID                   VertexID1                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)

struct FEdgeID UMeshDescriptionBase::CreateEdgeWithID(struct FVertexID* VertexID0, struct FVertexID* VertexID1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "CreateEdgeWithID");

	Params::UMeshDescriptionBase_CreateEdgeWithID_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VertexID0 != nullptr)
		*VertexID0 = std::move(Parms.VertexID0);

	if (VertexID1 != nullptr)
		*VertexID1 = std::move(Parms.VertexID1);

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.CreateEdge
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FVertexID                   VertexID0                                                        (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVertexID                   VertexID1                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// struct FEdgeID                     ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FEdgeID UMeshDescriptionBase::CreateEdge(struct FVertexID* VertexID0, struct FVertexID* VertexID1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "CreateEdge");

	Params::UMeshDescriptionBase_CreateEdge_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VertexID0 != nullptr)
		*VertexID0 = std::move(Parms.VertexID0);

	if (VertexID1 != nullptr)
		*VertexID1 = std::move(Parms.VertexID1);

	return Parms.ReturnValue;

}


// Function MeshDescription.MeshDescriptionBase.ComputePolygonTriangulation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)

struct FPolygonID UMeshDescriptionBase::ComputePolygonTriangulation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "ComputePolygonTriangulation");

	Params::UMeshDescriptionBase_ComputePolygonTriangulation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

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



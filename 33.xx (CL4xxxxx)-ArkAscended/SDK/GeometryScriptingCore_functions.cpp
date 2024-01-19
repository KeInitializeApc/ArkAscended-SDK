#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GeometryScriptingCore.GeometryScriptDebug
// (None)

class UClass* UGeometryScriptDebug::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptDebug");

	return Clss;
}


// GeometryScriptDebug GeometryScriptingCore.Default__GeometryScriptDebug
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptDebug* UGeometryScriptDebug::GetDefaultObj()
{
	static class UGeometryScriptDebug* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptDebug*>(UGeometryScriptDebug::StaticClass()->DefaultObject);

	return Default;
}


// Class GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions
// (None)

class UClass* UGeometryScriptLibrary_CollisionFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_CollisionFunctions");

	return Clss;
}


// GeometryScriptLibrary_CollisionFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_CollisionFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_CollisionFunctions* UGeometryScriptLibrary_CollisionFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_CollisionFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_CollisionFunctions*>(UGeometryScriptLibrary_CollisionFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions.SetStaticMeshCollisionFromMesh
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                FromDynamicMesh                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UStaticMesh*                 ToStaticMeshAsset                                                (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptCollisionFromMeshOptionsOptions                                                          (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_CollisionFunctions::SetStaticMeshCollisionFromMesh(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_CollisionFunctions", "SetStaticMeshCollisionFromMesh");

	Params::UGeometryScriptLibrary_CollisionFunctions_SetStaticMeshCollisionFromMesh_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions.SetStaticMeshCollisionFromComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UStaticMesh*                 StaticMeshAsset                                                  (Edit, ExportObject, EditFixedSize, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UPrimitiveComponent*         SourceComponent                                                  (Edit, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FGeometryScriptSetSimpleCollisionOptionsOptions                                                          (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_CollisionFunctions::SetStaticMeshCollisionFromComponent(class UStaticMesh* StaticMeshAsset, class UPrimitiveComponent** SourceComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_CollisionFunctions", "SetStaticMeshCollisionFromComponent");

	Params::UGeometryScriptLibrary_CollisionFunctions_SetStaticMeshCollisionFromComponent_Params Parms{};

	Parms.StaticMeshAsset = StaticMeshAsset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SourceComponent != nullptr)
		*SourceComponent = Parms.SourceComponent;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions.SetDynamicMeshCollisionFromMesh
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                FromDynamicMesh                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMeshComponent*       ToDynamicMeshComponent                                           (ConstParm, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptCollisionFromMeshOptionsOptions                                                          (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_CollisionFunctions::SetDynamicMeshCollisionFromMesh(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_CollisionFunctions", "SetDynamicMeshCollisionFromMesh");

	Params::UGeometryScriptLibrary_CollisionFunctions_SetDynamicMeshCollisionFromMesh_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions.ResetDynamicMeshCollision
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMeshComponent*       Component                                                        (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               bEmitTransaction                                                 (ConstParm, Net, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_CollisionFunctions::ResetDynamicMeshCollision(class UDynamicMeshComponent** Component, bool* bEmitTransaction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_CollisionFunctions", "ResetDynamicMeshCollision");

	Params::UGeometryScriptLibrary_CollisionFunctions_ResetDynamicMeshCollision_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Component != nullptr)
		*Component = Parms.Component;

	if (bEmitTransaction != nullptr)
		*bEmitTransaction = Parms.bEmitTransaction;

	return Parms.ReturnValue;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_ContainmentFunctions
// (None)

class UClass* UGeometryScriptLibrary_ContainmentFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_ContainmentFunctions");

	return Clss;
}


// GeometryScriptLibrary_ContainmentFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_ContainmentFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_ContainmentFunctions* UGeometryScriptLibrary_ContainmentFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_ContainmentFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_ContainmentFunctions*>(UGeometryScriptLibrary_ContainmentFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_ContainmentFunctions.ComputeMeshSweptHull
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                CopyToMesh                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                CopyToMeshOut                                                    (Edit, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  ProjectionFrame                                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptSweptHullOptionsOptions                                                          (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_ContainmentFunctions::ComputeMeshSweptHull(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ContainmentFunctions", "ComputeMeshSweptHull");

	Params::UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshSweptHull_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ContainmentFunctions.ComputeMeshConvexHull
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                CopyToMesh                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                CopyToMeshOut                                                    (Edit, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptConvexHullOptionsOptions                                                          (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_ContainmentFunctions::ComputeMeshConvexHull(struct FGeometryScriptMeshSelection* Selection, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ContainmentFunctions", "ComputeMeshConvexHull");

	Params::UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexHull_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Selection != nullptr)
		*Selection = std::move(Parms.Selection);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ContainmentFunctions.ComputeMeshConvexDecomposition
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                CopyToMesh                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                CopyToMeshOut                                                    (Edit, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptConvexDecompositionOptionsOptions                                                          (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_ContainmentFunctions::ComputeMeshConvexDecomposition(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ContainmentFunctions", "ComputeMeshConvexDecomposition");

	Params::UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexDecomposition_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions
// (None)

class UClass* UGeometryScriptLibrary_ListUtilityFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_ListUtilityFunctions");

	return Clss;
}


// GeometryScriptLibrary_ListUtilityFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_ListUtilityFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_ListUtilityFunctions* UGeometryScriptLibrary_ListUtilityFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_ListUtilityFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_ListUtilityFunctions*>(UGeometryScriptLibrary_ListUtilityFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.SetVectorListItem
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGeometryScriptVectorList   VectorList                                                       (Edit, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// struct FVector                     NewValue                                                         (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// bool                               bIsValidIndex                                                    (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

bool UGeometryScriptLibrary_ListUtilityFunctions::SetVectorListItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "SetVectorListItem");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_SetVectorListItem_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.SetUVListItem
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGeometryScriptUVList       UVList                                                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// struct FVector2D                   NewUV                                                            (BlueprintVisible, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bIsValidIndex                                                    (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

bool UGeometryScriptLibrary_ListUtilityFunctions::SetUVListItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "SetUVListItem");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_SetUVListItem_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.SetScalarListItem
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptScalarList   ScalarList                                                       (ConstParm, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// double                             NewValue                                                         (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// bool                               bIsValidIndex                                                    (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

bool UGeometryScriptLibrary_ListUtilityFunctions::SetScalarListItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "SetScalarListItem");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_SetScalarListItem_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.SetIndexListItem
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptIndexList    IndexList                                                        (BlueprintVisible, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// int32                              NewValue                                                         (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// bool                               bIsValidIndex                                                    (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

bool UGeometryScriptLibrary_ListUtilityFunctions::SetIndexListItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "SetIndexListItem");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_SetIndexListItem_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.SetColorListItem
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGeometryScriptColorList    ColorList                                                        (ConstParm, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// struct FLinearColor                NewColor                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bIsValidIndex                                                    (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

bool UGeometryScriptLibrary_ListUtilityFunctions::SetColorListItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "SetColorListItem");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_SetColorListItem_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetVectorListLength
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptVectorList   VectorList                                                       (Edit, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FGeometryScriptVectorList UGeometryScriptLibrary_ListUtilityFunctions::GetVectorListLength(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "GetVectorListLength");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLength_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetVectorListLastIndex
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptVectorList   VectorList                                                       (Edit, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FGeometryScriptVectorList UGeometryScriptLibrary_ListUtilityFunctions::GetVectorListLastIndex(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "GetVectorListLastIndex");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLastIndex_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetVectorListItem
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptVectorList   VectorList                                                       (Edit, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// bool                               bIsValidIndex                                                    (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool UGeometryScriptLibrary_ListUtilityFunctions::GetVectorListItem(const struct FVector& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "GetVectorListItem");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListItem_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetUVListLength
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptUVList       UVList                                                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FGeometryScriptUVList UGeometryScriptLibrary_ListUtilityFunctions::GetUVListLength(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "GetUVListLength");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLength_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetUVListLastIndex
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptUVList       UVList                                                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FGeometryScriptUVList UGeometryScriptLibrary_ListUtilityFunctions::GetUVListLastIndex(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "GetUVListLastIndex");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLastIndex_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetUVListItem
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptUVList       UVList                                                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// bool                               bIsValidIndex                                                    (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector2D                   ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool UGeometryScriptLibrary_ListUtilityFunctions::GetUVListItem(const struct FVector2D& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "GetUVListItem");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_GetUVListItem_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetTriangleListLength
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptTriangleList TriangleList                                                     (Edit, ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FGeometryScriptTriangleList UGeometryScriptLibrary_ListUtilityFunctions::GetTriangleListLength(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "GetTriangleListLength");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLength_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetTriangleListLastTriangle
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptTriangleList TriangleList                                                     (Edit, ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FGeometryScriptTriangleList UGeometryScriptLibrary_ListUtilityFunctions::GetTriangleListLastTriangle(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "GetTriangleListLastTriangle");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLastTriangle_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetTriangleListItem
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptTriangleList TriangleList                                                     (Edit, ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              Triangle                                                         (ConstParm, BlueprintVisible, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config)
// bool                               bIsValidTriangle                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FIntVector                  ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool UGeometryScriptLibrary_ListUtilityFunctions::GetTriangleListItem(const struct FIntVector& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "GetTriangleListItem");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListItem_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetScalarListLength
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptScalarList   ScalarList                                                       (ConstParm, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FGeometryScriptScalarList UGeometryScriptLibrary_ListUtilityFunctions::GetScalarListLength(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "GetScalarListLength");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLength_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetScalarListLastIndex
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptScalarList   ScalarList                                                       (ConstParm, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FGeometryScriptScalarList UGeometryScriptLibrary_ListUtilityFunctions::GetScalarListLastIndex(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "GetScalarListLastIndex");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLastIndex_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetScalarListItem
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptScalarList   ScalarList                                                       (ConstParm, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// bool                               bIsValidIndex                                                    (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool UGeometryScriptLibrary_ListUtilityFunctions::GetScalarListItem(double ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "GetScalarListItem");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListItem_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetIndexListLength
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptIndexList    IndexList                                                        (BlueprintVisible, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FGeometryScriptIndexList UGeometryScriptLibrary_ListUtilityFunctions::GetIndexListLength(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "GetIndexListLength");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLength_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetIndexListLastIndex
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptIndexList    IndexList                                                        (BlueprintVisible, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FGeometryScriptIndexList UGeometryScriptLibrary_ListUtilityFunctions::GetIndexListLastIndex(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "GetIndexListLastIndex");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLastIndex_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetIndexListItem
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptIndexList    IndexList                                                        (BlueprintVisible, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// bool                               bIsValidIndex                                                    (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool UGeometryScriptLibrary_ListUtilityFunctions::GetIndexListItem(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "GetIndexListItem");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListItem_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetColorListLength
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptColorList    ColorList                                                        (ConstParm, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FGeometryScriptColorList UGeometryScriptLibrary_ListUtilityFunctions::GetColorListLength(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "GetColorListLength");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLength_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetColorListLastIndex
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptColorList    ColorList                                                        (ConstParm, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FGeometryScriptColorList UGeometryScriptLibrary_ListUtilityFunctions::GetColorListLastIndex(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "GetColorListLastIndex");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLastIndex_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetColorListItem
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptColorList    ColorList                                                        (ConstParm, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// bool                               bIsValidIndex                                                    (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FLinearColor                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool UGeometryScriptLibrary_ListUtilityFunctions::GetColorListItem(const struct FLinearColor& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "GetColorListItem");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_GetColorListItem_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ExtractColorListChannels
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptColorList    ColorList                                                        (ConstParm, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptVectorList   VectorList                                                       (Edit, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              XChannelIndex                                                    (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              YChannelIndex                                                    (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ZChannelIndex                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

int32 UGeometryScriptLibrary_ListUtilityFunctions::ExtractColorListChannels()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "ExtractColorListChannels");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannels_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ExtractColorListChannel
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptColorList    ColorList                                                        (ConstParm, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptScalarList   ScalarList                                                       (ConstParm, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ChannelIndex                                                     (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)

struct FGeometryScriptScalarList UGeometryScriptLibrary_ListUtilityFunctions::ExtractColorListChannel(int32* ChannelIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "ExtractColorListChannel");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannel_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ChannelIndex != nullptr)
		*ChannelIndex = Parms.ChannelIndex;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.DuplicateVectorList
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptVectorList   VectorList                                                       (Edit, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptVectorList   DuplicateList                                                    (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

struct FGeometryScriptVectorList UGeometryScriptLibrary_ListUtilityFunctions::DuplicateVectorList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "DuplicateVectorList");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_DuplicateVectorList_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.DuplicateUVList
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptUVList       UVList                                                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptUVList       DuplicateList                                                    (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

struct FGeometryScriptUVList UGeometryScriptLibrary_ListUtilityFunctions::DuplicateUVList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "DuplicateUVList");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_DuplicateUVList_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.DuplicateScalarList
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptScalarList   ScalarList                                                       (ConstParm, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptScalarList   DuplicateList                                                    (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

struct FGeometryScriptScalarList UGeometryScriptLibrary_ListUtilityFunctions::DuplicateScalarList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "DuplicateScalarList");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_DuplicateScalarList_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.DuplicateIndexList
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptIndexList    IndexList                                                        (BlueprintVisible, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptIndexList    DuplicateList                                                    (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

struct FGeometryScriptIndexList UGeometryScriptLibrary_ListUtilityFunctions::DuplicateIndexList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "DuplicateIndexList");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_DuplicateIndexList_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.DuplicateColorList
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptColorList    ColorList                                                        (ConstParm, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptColorList    DuplicateList                                                    (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

struct FGeometryScriptColorList UGeometryScriptLibrary_ListUtilityFunctions::DuplicateColorList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "DuplicateColorList");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_DuplicateColorList_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertVectorListToArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptVectorList   VectorList                                                       (Edit, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FVector>             VectorArray                                                      (ConstParm, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

TArray<struct FVector> UGeometryScriptLibrary_ListUtilityFunctions::ConvertVectorListToArray()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "ConvertVectorListToArray");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_ConvertVectorListToArray_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertUVListToArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptUVList       UVList                                                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FVector2D>           UVArray                                                          (ConstParm, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

TArray<struct FVector2D> UGeometryScriptLibrary_ListUtilityFunctions::ConvertUVListToArray()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "ConvertUVListToArray");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_ConvertUVListToArray_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertTriangleListToArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptTriangleList TriangleList                                                     (Edit, ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FIntVector>          TriangleArray                                                    (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

TArray<struct FIntVector> UGeometryScriptLibrary_ListUtilityFunctions::ConvertTriangleListToArray()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "ConvertTriangleListToArray");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_ConvertTriangleListToArray_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertScalarListToArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptScalarList   ScalarList                                                       (ConstParm, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<double>                     ScalarArray                                                      (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

TArray<double> UGeometryScriptLibrary_ListUtilityFunctions::ConvertScalarListToArray()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "ConvertScalarListToArray");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_ConvertScalarListToArray_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertIndexListToArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptIndexList    IndexList                                                        (BlueprintVisible, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<int32>                      IndexArray                                                       (Edit, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

TArray<int32> UGeometryScriptLibrary_ListUtilityFunctions::ConvertIndexListToArray()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "ConvertIndexListToArray");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_ConvertIndexListToArray_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertColorListToArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptColorList    ColorList                                                        (ConstParm, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FLinearColor>        ColorArray                                                       (Edit, ConstParm, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

TArray<struct FLinearColor> UGeometryScriptLibrary_ListUtilityFunctions::ConvertColorListToArray()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "ConvertColorListToArray");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_ConvertColorListToArray_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertArrayToVectorList
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FVector>             VectorArray                                                      (ConstParm, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptVectorList   VectorList                                                       (Edit, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

struct FGeometryScriptVectorList UGeometryScriptLibrary_ListUtilityFunctions::ConvertArrayToVectorList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "ConvertArrayToVectorList");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToVectorList_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertArrayToUVList
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FVector2D>           UVArray                                                          (ConstParm, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptUVList       UVList                                                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

struct FGeometryScriptUVList UGeometryScriptLibrary_ListUtilityFunctions::ConvertArrayToUVList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "ConvertArrayToUVList");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToUVList_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertArrayToTriangleList
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FIntVector>          TriangleArray                                                    (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptTriangleList TriangleList                                                     (Edit, ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

struct FGeometryScriptTriangleList UGeometryScriptLibrary_ListUtilityFunctions::ConvertArrayToTriangleList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "ConvertArrayToTriangleList");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToTriangleList_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertArrayToScalarList
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<double>                     VectorArray                                                      (ConstParm, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptScalarList   ScalarList                                                       (ConstParm, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

struct FGeometryScriptScalarList UGeometryScriptLibrary_ListUtilityFunctions::ConvertArrayToScalarList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "ConvertArrayToScalarList");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToScalarList_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertArrayToIndexList
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<int32>                      IndexArray                                                       (Edit, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptIndexList    IndexList                                                        (BlueprintVisible, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EGeometryScriptIndexTypeIndexType                                                        (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

struct FGeometryScriptIndexList UGeometryScriptLibrary_ListUtilityFunctions::ConvertArrayToIndexList(enum class EGeometryScriptIndexType IndexType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "ConvertArrayToIndexList");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToIndexList_Params Parms{};

	Parms.IndexType = IndexType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertArrayToColorList
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FLinearColor>        ColorArray                                                       (Edit, ConstParm, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptColorList    ColorList                                                        (ConstParm, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

struct FGeometryScriptColorList UGeometryScriptLibrary_ListUtilityFunctions::ConvertArrayToColorList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "ConvertArrayToColorList");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToColorList_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ClearVectorList
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGeometryScriptVectorList   VectorList                                                       (Edit, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     ClearValue                                                       (ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, EditConst, SubobjectReference)

struct FGeometryScriptVectorList UGeometryScriptLibrary_ListUtilityFunctions::ClearVectorList(struct FVector* ClearValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "ClearVectorList");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_ClearVectorList_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ClearValue != nullptr)
		*ClearValue = std::move(Parms.ClearValue);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ClearUVList
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGeometryScriptUVList       UVList                                                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector2D                   ClearUV                                                          (ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

struct FVector2D UGeometryScriptLibrary_ListUtilityFunctions::ClearUVList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "ClearUVList");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_ClearUVList_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ClearScalarList
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptScalarList   ScalarList                                                       (ConstParm, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             ClearValue                                                       (ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, EditConst, SubobjectReference)

struct FGeometryScriptScalarList UGeometryScriptLibrary_ListUtilityFunctions::ClearScalarList(double* ClearValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "ClearScalarList");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_ClearScalarList_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ClearValue != nullptr)
		*ClearValue = Parms.ClearValue;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ClearIndexList
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptIndexList    IndexList                                                        (BlueprintVisible, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ClearValue                                                       (ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, EditConst, SubobjectReference)

struct FGeometryScriptIndexList UGeometryScriptLibrary_ListUtilityFunctions::ClearIndexList(int32* ClearValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "ClearIndexList");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_ClearIndexList_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ClearValue != nullptr)
		*ClearValue = Parms.ClearValue;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ClearColorList
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGeometryScriptColorList    ColorList                                                        (ConstParm, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FLinearColor                ClearColor                                                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, GlobalConfig)

struct FGeometryScriptColorList UGeometryScriptLibrary_ListUtilityFunctions::ClearColorList(const struct FLinearColor& ClearColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "ClearColorList");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_ClearColorList_Params Parms{};

	Parms.ClearColor = ClearColor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_StaticMeshFunctions
// (None)

class UClass* UGeometryScriptLibrary_StaticMeshFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_StaticMeshFunctions");

	return Clss;
}


// GeometryScriptLibrary_StaticMeshFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_StaticMeshFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_StaticMeshFunctions* UGeometryScriptLibrary_StaticMeshFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_StaticMeshFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_StaticMeshFunctions*>(UGeometryScriptLibrary_StaticMeshFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_StaticMeshFunctions.GetSectionMaterialListFromStaticMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UStaticMesh*                 FromStaticMeshAsset                                              (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshReadLOD  RequestedLOD                                                     (Edit, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<class UMaterialInterface*>  MaterialList                                                     (ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<int32>                      MaterialIndex                                                    (ConstParm, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// enum class EGeometryScriptOutcomePinsOutcome                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_StaticMeshFunctions::GetSectionMaterialListFromStaticMesh(const struct FGeometryScriptMeshReadLOD& RequestedLOD, const TArray<int32>& MaterialIndex, enum class EGeometryScriptOutcomePins* Outcome)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_StaticMeshFunctions", "GetSectionMaterialListFromStaticMesh");

	Params::UGeometryScriptLibrary_StaticMeshFunctions_GetSectionMaterialListFromStaticMesh_Params Parms{};

	Parms.RequestedLOD = RequestedLOD;
	Parms.MaterialIndex = MaterialIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Outcome != nullptr)
		*Outcome = Parms.Outcome;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_StaticMeshFunctions.CopyMeshToStaticMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                FromDynamicMesh                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UStaticMesh*                 ToStaticMeshAsset                                                (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptCopyMeshToAssetOptionsOptions                                                          (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FGeometryScriptMeshWriteLOD TargetLod                                                        (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EGeometryScriptOutcomePinsOutcome                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_StaticMeshFunctions::CopyMeshToStaticMesh(struct FGeometryScriptMeshWriteLOD* TargetLod, enum class EGeometryScriptOutcomePins* Outcome, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_StaticMeshFunctions", "CopyMeshToStaticMesh");

	Params::UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshToStaticMesh_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TargetLod != nullptr)
		*TargetLod = std::move(Parms.TargetLod);

	if (Outcome != nullptr)
		*Outcome = Parms.Outcome;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_StaticMeshFunctions.CopyMeshToSkeletalMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                FromDynamicMesh                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class USkeletalMesh*               ToSkeletalMeshAsset                                              (Edit, ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptCopyMeshToAssetOptionsOptions                                                          (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FGeometryScriptMeshWriteLOD TargetLod                                                        (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EGeometryScriptOutcomePinsOutcome                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_StaticMeshFunctions::CopyMeshToSkeletalMesh(struct FGeometryScriptMeshWriteLOD* TargetLod, enum class EGeometryScriptOutcomePins* Outcome, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_StaticMeshFunctions", "CopyMeshToSkeletalMesh");

	Params::UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshToSkeletalMesh_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TargetLod != nullptr)
		*TargetLod = std::move(Parms.TargetLod);

	if (Outcome != nullptr)
		*Outcome = Parms.Outcome;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_StaticMeshFunctions.CopyMeshFromStaticMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UStaticMesh*                 FromStaticMeshAsset                                              (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ToDynamicMesh                                                    (ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptCopyMeshFromAssetOptionsAssetOptions                                                     (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshReadLOD  RequestedLOD                                                     (Edit, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// enum class EGeometryScriptOutcomePinsOutcome                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_StaticMeshFunctions::CopyMeshFromStaticMesh(const struct FGeometryScriptMeshReadLOD& RequestedLOD, enum class EGeometryScriptOutcomePins* Outcome, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_StaticMeshFunctions", "CopyMeshFromStaticMesh");

	Params::UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshFromStaticMesh_Params Parms{};

	Parms.RequestedLOD = RequestedLOD;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Outcome != nullptr)
		*Outcome = Parms.Outcome;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_StaticMeshFunctions.CopyMeshFromSkeletalMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class USkeletalMesh*               FromSkeletalMeshAsset                                            (BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ToDynamicMesh                                                    (ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptCopyMeshFromAssetOptionsAssetOptions                                                     (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshReadLOD  RequestedLOD                                                     (Edit, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// enum class EGeometryScriptOutcomePinsOutcome                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_StaticMeshFunctions::CopyMeshFromSkeletalMesh(const struct FGeometryScriptMeshReadLOD& RequestedLOD, enum class EGeometryScriptOutcomePins* Outcome, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_StaticMeshFunctions", "CopyMeshFromSkeletalMesh");

	Params::UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshFromSkeletalMesh_Params Parms{};

	Parms.RequestedLOD = RequestedLOD;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Outcome != nullptr)
		*Outcome = Parms.Outcome;

	return Parms.ReturnValue;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions
// (None)

class UClass* UGeometryScriptLibrary_MeshBakeFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshBakeFunctions");

	return Clss;
}


// GeometryScriptLibrary_MeshBakeFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_MeshBakeFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_MeshBakeFunctions* UGeometryScriptLibrary_MeshBakeFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_MeshBakeFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_MeshBakeFunctions*>(UGeometryScriptLibrary_MeshBakeFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeVertexColor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptBakeTypeOptionsReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypeVertexColor(const struct FGeometryScriptBakeTypeOptions& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBakeFunctions", "MakeBakeTypeVertexColor");

	Params::UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeVertexColor_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeTexture
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UTexture2D*                  SourceTexture                                                    (ConstParm, ExportObject, BlueprintReadOnly, Net, Config, InstancedReference, SubobjectReference)
// int32                              SourceUVLayer                                                    (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptBakeTypeOptionsReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypeTexture(class UTexture2D* SourceTexture, const struct FGeometryScriptBakeTypeOptions& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBakeFunctions", "MakeBakeTypeTexture");

	Params::UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeTexture_Params Parms{};

	Parms.SourceTexture = SourceTexture;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeTangentNormal
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptBakeTypeOptionsReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypeTangentNormal(const struct FGeometryScriptBakeTypeOptions& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBakeFunctions", "MakeBakeTypeTangentNormal");

	Params::UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeTangentNormal_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypePosition
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptBakeTypeOptionsReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypePosition(const struct FGeometryScriptBakeTypeOptions& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBakeFunctions", "MakeBakeTypePosition");

	Params::UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypePosition_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeObjectNormal
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptBakeTypeOptionsReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypeObjectNormal(const struct FGeometryScriptBakeTypeOptions& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBakeFunctions", "MakeBakeTypeObjectNormal");

	Params::UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeObjectNormal_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeMultiTexture
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class UTexture2D*>          MaterialIDSourceTextures                                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              SourceUVLayer                                                    (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptBakeTypeOptionsReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypeMultiTexture(const struct FGeometryScriptBakeTypeOptions& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBakeFunctions", "MakeBakeTypeMultiTexture");

	Params::UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeMultiTexture_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeMaterialID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptBakeTypeOptionsReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypeMaterialID(const struct FGeometryScriptBakeTypeOptions& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBakeFunctions", "MakeBakeTypeMaterialID");

	Params::UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeMaterialID_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeFaceNormal
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptBakeTypeOptionsReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypeFaceNormal(const struct FGeometryScriptBakeTypeOptions& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBakeFunctions", "MakeBakeTypeFaceNormal");

	Params::UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeFaceNormal_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeCurvature
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EGeometryScriptBakeCurvatureTypeModeCurvatureType                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EGeometryScriptBakeCurvatureColorModeColorMapping                                                     (ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              ColorRangeMultiplier                                             (Edit, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              MinRangeMultiplier                                               (Edit, ConstParm, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EGeometryScriptBakeCurvatureClampModeClamping                                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptBakeTypeOptionsReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

enum class EGeometryScriptBakeCurvatureClampMode UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypeCurvature(const struct FGeometryScriptBakeTypeOptions& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBakeFunctions", "MakeBakeTypeCurvature");

	Params::UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeCurvature_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeBentNormal
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              OcclusionRays                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              MaxDistance                                                      (BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
// float                              SpreadAngle                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptBakeTypeOptionsReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypeBentNormal(const struct FGeometryScriptBakeTypeOptions& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBakeFunctions", "MakeBakeTypeBentNormal");

	Params::UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeBentNormal_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeAmbientOcclusion
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              OcclusionRays                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              MaxDistance                                                      (BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
// float                              SpreadAngle                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              BiasAngle                                                        (Edit, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptBakeTypeOptionsReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypeAmbientOcclusion(const struct FGeometryScriptBakeTypeOptions& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBakeFunctions", "MakeBakeTypeAmbientOcclusion");

	Params::UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeAmbientOcclusion_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.BakeVertex
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  TargetTransform                                                  (Edit, BlueprintVisible, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptBakeTargetMeshOptionsTargetOptions                                                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                SourceMesh                                                       (ConstParm, EditFixedSize, Config, InstancedReference, SubobjectReference)
// struct FTransform                  SourceTransform                                                  (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptBakeSourceMeshOptionsSourceOptions                                                    (ConstParm, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptBakeOutputTypeBakeTypes                                                        (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptBakeVertexOptionsBakeOptions                                                      (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshBakeFunctions::BakeVertex(const struct FTransform& TargetTransform, class UDynamicMesh* SourceMesh, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBakeFunctions", "BakeVertex");

	Params::UGeometryScriptLibrary_MeshBakeFunctions_BakeVertex_Params Parms{};

	Parms.TargetTransform = TargetTransform;
	Parms.SourceMesh = SourceMesh;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.BakeTextureFromRenderCaptures
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  TargetLocalToWorld                                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptBakeTargetMeshOptionsTargetOptions                                                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<class AActor*>              SourceActors                                                     (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptBakeRenderCaptureOptionsBakeOptions                                                      (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// struct FGeometryScriptRenderCaptureTexturesReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshBakeFunctions::BakeTextureFromRenderCaptures(const struct FGeometryScriptRenderCaptureTextures& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBakeFunctions", "BakeTextureFromRenderCaptures");

	Params::UGeometryScriptLibrary_MeshBakeFunctions_BakeTextureFromRenderCaptures_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.BakeTexture
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  TargetTransform                                                  (Edit, BlueprintVisible, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptBakeTargetMeshOptionsTargetOptions                                                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                SourceMesh                                                       (ConstParm, EditFixedSize, Config, InstancedReference, SubobjectReference)
// struct FTransform                  SourceTransform                                                  (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptBakeSourceMeshOptionsSourceOptions                                                    (ConstParm, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FGeometryScriptBakeTypeOptions>BakeTypes                                                        (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptBakeTextureOptionsBakeOptions                                                      (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// TArray<class UTexture2D*>          ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshBakeFunctions::BakeTexture(const struct FTransform& TargetTransform, class UDynamicMesh* SourceMesh, const TArray<class UTexture2D*>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBakeFunctions", "BakeTexture");

	Params::UGeometryScriptLibrary_MeshBakeFunctions_BakeTexture_Params Parms{};

	Parms.TargetTransform = TargetTransform;
	Parms.SourceMesh = SourceMesh;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions
// (None)

class UClass* UGeometryScriptLibrary_MeshBasicEditFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshBasicEditFunctions");

	return Clss;
}


// GeometryScriptLibrary_MeshBasicEditFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_MeshBasicEditFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_MeshBasicEditFunctions* UGeometryScriptLibrary_MeshBasicEditFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_MeshBasicEditFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_MeshBasicEditFunctions*>(UGeometryScriptLibrary_MeshBasicEditFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.SetVertexPosition
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              VertexID                                                         (EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
// struct FVector                     NewPosition                                                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bIsValidVertex                                                   (BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bDeferChangeNotifications                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool UGeometryScriptLibrary_MeshBasicEditFunctions::SetVertexPosition(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBasicEditFunctions", "SetVertexPosition");

	Params::UGeometryScriptLibrary_MeshBasicEditFunctions_SetVertexPosition_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.SetAllMeshVertexPositions
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptVectorList   PositionList                                                     (Edit, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshBasicEditFunctions::SetAllMeshVertexPositions(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBasicEditFunctions", "SetAllMeshVertexPositions");

	Params::UGeometryScriptLibrary_MeshBasicEditFunctions_SetAllMeshVertexPositions_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.DiscardMeshAttributes
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bDeferChangeNotifications                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool UGeometryScriptLibrary_MeshBasicEditFunctions::DiscardMeshAttributes(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBasicEditFunctions", "DiscardMeshAttributes");

	Params::UGeometryScriptLibrary_MeshBasicEditFunctions_DiscardMeshAttributes_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.DeleteVerticesFromMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptIndexList    VertexList                                                       (ConstParm, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
// int32                              NumDeleted                                                       (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bDeferChangeNotifications                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool UGeometryScriptLibrary_MeshBasicEditFunctions::DeleteVerticesFromMesh(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBasicEditFunctions", "DeleteVerticesFromMesh");

	Params::UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteVerticesFromMesh_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.DeleteVertexFromMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              VertexID                                                         (EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
// bool                               bWasVertexDeleted                                                (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bDeferChangeNotifications                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool UGeometryScriptLibrary_MeshBasicEditFunctions::DeleteVertexFromMesh(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBasicEditFunctions", "DeleteVertexFromMesh");

	Params::UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteVertexFromMesh_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.DeleteTrianglesFromMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptIndexList    TriangleList                                                     (Edit, ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              NumDeleted                                                       (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bDeferChangeNotifications                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool UGeometryScriptLibrary_MeshBasicEditFunctions::DeleteTrianglesFromMesh(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBasicEditFunctions", "DeleteTrianglesFromMesh");

	Params::UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteTrianglesFromMesh_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.DeleteTriangleFromMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              TriangleID                                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
// bool                               bWasTriangleDeleted                                              (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bDeferChangeNotifications                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool UGeometryScriptLibrary_MeshBasicEditFunctions::DeleteTriangleFromMesh(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBasicEditFunctions", "DeleteTriangleFromMesh");

	Params::UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteTriangleFromMesh_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.DeleteSelectedTrianglesFromMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              NumDeleted                                                       (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bDeferChangeNotifications                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool UGeometryScriptLibrary_MeshBasicEditFunctions::DeleteSelectedTrianglesFromMesh(struct FGeometryScriptMeshSelection* Selection, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBasicEditFunctions", "DeleteSelectedTrianglesFromMesh");

	Params::UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteSelectedTrianglesFromMesh_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Selection != nullptr)
		*Selection = std::move(Parms.Selection);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AppendMeshTransformed
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                AppendMesh                                                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst)
// TArray<struct FTransform>          AppendTransforms                                                 (Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  ConstantTransform                                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bConstantTransformIsRelative                                     (BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bDeferChangeNotifications                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptAppendMeshOptionsAppendOptions                                                    (BlueprintVisible, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshBasicEditFunctions::AppendMeshTransformed(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBasicEditFunctions", "AppendMeshTransformed");

	Params::UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshTransformed_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AppendMeshRepeated
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                AppendMesh                                                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst)
// struct FTransform                  AppendTransform                                                  (BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              RepeatCount                                                      (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bApplyTransformToFirstInstance                                   (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bDeferChangeNotifications                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptAppendMeshOptionsAppendOptions                                                    (BlueprintVisible, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshBasicEditFunctions::AppendMeshRepeated(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBasicEditFunctions", "AppendMeshRepeated");

	Params::UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshRepeated_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AppendMesh
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                AppendMesh                                                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst)
// struct FTransform                  AppendTransform                                                  (BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bDeferChangeNotifications                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptAppendMeshOptionsAppendOptions                                                    (BlueprintVisible, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshBasicEditFunctions::AppendMesh(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBasicEditFunctions", "AppendMesh");

	Params::UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMesh_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AppendBuffersToMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptSimpleMeshBuffersBuffers                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptIndexList    NewTriangleIndicesList                                           (Edit, ConstParm, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              MaterialID                                                       (Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bDeferChangeNotifications                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshBasicEditFunctions::AppendBuffersToMesh(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBasicEditFunctions", "AppendBuffersToMesh");

	Params::UGeometryScriptLibrary_MeshBasicEditFunctions_AppendBuffersToMesh_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AddVerticesToMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptVectorList   NewPositionsList                                                 (BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptIndexList    NewIndicesList                                                   (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bDeferChangeNotifications                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool UGeometryScriptLibrary_MeshBasicEditFunctions::AddVerticesToMesh(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBasicEditFunctions", "AddVerticesToMesh");

	Params::UGeometryScriptLibrary_MeshBasicEditFunctions_AddVerticesToMesh_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AddVertexToMesh
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     NewPosition                                                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              NewVertexIndex                                                   (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bDeferChangeNotifications                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool UGeometryScriptLibrary_MeshBasicEditFunctions::AddVertexToMesh(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBasicEditFunctions", "AddVertexToMesh");

	Params::UGeometryScriptLibrary_MeshBasicEditFunctions_AddVertexToMesh_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AddTriangleToMesh
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FIntVector                  NewTriangle                                                      (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              NewTriangleIndex                                                 (Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              NewTriangleGroupID                                               (ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bDeferChangeNotifications                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshBasicEditFunctions::AddTriangleToMesh(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBasicEditFunctions", "AddTriangleToMesh");

	Params::UGeometryScriptLibrary_MeshBasicEditFunctions_AddTriangleToMesh_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AddTrianglesToMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptTriangleList NewTrianglesList                                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptIndexList    NewIndicesList                                                   (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              NewTriangleGroupID                                               (ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bDeferChangeNotifications                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshBasicEditFunctions::AddTrianglesToMesh(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBasicEditFunctions", "AddTrianglesToMesh");

	Params::UGeometryScriptLibrary_MeshBasicEditFunctions_AddTrianglesToMesh_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions
// (None)

class UClass* UGeometryScriptLibrary_MeshBoneWeightFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshBoneWeightFunctions");

	return Clss;
}


// GeometryScriptLibrary_MeshBoneWeightFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_MeshBoneWeightFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_MeshBoneWeightFunctions* UGeometryScriptLibrary_MeshBoneWeightFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_MeshBoneWeightFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_MeshBoneWeightFunctions*>(UGeometryScriptLibrary_MeshBoneWeightFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.SetVertexBoneWeights
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              VertexID                                                         (EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
// TArray<struct FGeometryScriptBoneWeight>BoneWeights                                                      (BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// bool                               bIsValidVertexID                                                 (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptBoneWeightProfileProfile                                                          (ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FGeometryScriptBoneWeightProfile UGeometryScriptLibrary_MeshBoneWeightFunctions::SetVertexBoneWeights(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBoneWeightFunctions", "SetVertexBoneWeights");

	Params::UGeometryScriptLibrary_MeshBoneWeightFunctions_SetVertexBoneWeights_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.SetAllVertexBoneWeights
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FGeometryScriptBoneWeight>BoneWeights                                                      (BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// struct FGeometryScriptBoneWeightProfileProfile                                                          (ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FGeometryScriptBoneWeightProfile UGeometryScriptLibrary_MeshBoneWeightFunctions::SetAllVertexBoneWeights(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBoneWeightFunctions", "SetAllVertexBoneWeights");

	Params::UGeometryScriptLibrary_MeshBoneWeightFunctions_SetAllVertexBoneWeights_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.MeshHasBoneWeights
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bHasBoneWeights                                                  (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptBoneWeightProfileProfile                                                          (ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FGeometryScriptBoneWeightProfile UGeometryScriptLibrary_MeshBoneWeightFunctions::MeshHasBoneWeights(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBoneWeightFunctions", "MeshHasBoneWeights");

	Params::UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshHasBoneWeights_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.MeshCreateBoneWeights
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bProfileExisted                                                  (Edit, ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bReplaceExistingProfile                                          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptBoneWeightProfileProfile                                                          (ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FGeometryScriptBoneWeightProfile UGeometryScriptLibrary_MeshBoneWeightFunctions::MeshCreateBoneWeights(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBoneWeightFunctions", "MeshCreateBoneWeights");

	Params::UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshCreateBoneWeights_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.GetVertexBoneWeights
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              VertexID                                                         (EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
// TArray<struct FGeometryScriptBoneWeight>BoneWeights                                                      (BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// bool                               bHasValidBoneWeights                                             (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptBoneWeightProfileProfile                                                          (ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FGeometryScriptBoneWeightProfile UGeometryScriptLibrary_MeshBoneWeightFunctions::GetVertexBoneWeights(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBoneWeightFunctions", "GetVertexBoneWeights");

	Params::UGeometryScriptLibrary_MeshBoneWeightFunctions_GetVertexBoneWeights_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.GetMaxBoneWeightIndex
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bHasBoneWeights                                                  (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              MaxBoneIndex                                                     (ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptBoneWeightProfileProfile                                                          (ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FGeometryScriptBoneWeightProfile UGeometryScriptLibrary_MeshBoneWeightFunctions::GetMaxBoneWeightIndex(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBoneWeightFunctions", "GetMaxBoneWeightIndex");

	Params::UGeometryScriptLibrary_MeshBoneWeightFunctions_GetMaxBoneWeightIndex_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.GetLargestVertexBoneWeight
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              VertexID                                                         (EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
// struct FGeometryScriptBoneWeight   BoneWeight                                                       (ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bHasValidBoneWeights                                             (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptBoneWeightProfileProfile                                                          (ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FGeometryScriptBoneWeightProfile UGeometryScriptLibrary_MeshBoneWeightFunctions::GetLargestVertexBoneWeight(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBoneWeightFunctions", "GetLargestVertexBoneWeight");

	Params::UGeometryScriptLibrary_MeshBoneWeightFunctions_GetLargestVertexBoneWeight_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.ComputeSmoothBoneWeights
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class USkeleton*                   Skeleton                                                         (BlueprintVisible, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, DuplicateTransient)
// struct FGeometryScriptSmoothBoneWeightsOptionsOptions                                                          (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FGeometryScriptBoneWeightProfileProfile                                                          (ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshBoneWeightFunctions::ComputeSmoothBoneWeights(class USkeleton* Skeleton, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBoneWeightFunctions", "ComputeSmoothBoneWeights");

	Params::UGeometryScriptLibrary_MeshBoneWeightFunctions_ComputeSmoothBoneWeights_Params Parms{};

	Parms.Skeleton = Skeleton;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_MeshBooleanFunctions
// (None)

class UClass* UGeometryScriptLibrary_MeshBooleanFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshBooleanFunctions");

	return Clss;
}


// GeometryScriptLibrary_MeshBooleanFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_MeshBooleanFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_MeshBooleanFunctions* UGeometryScriptLibrary_MeshBooleanFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_MeshBooleanFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_MeshBooleanFunctions*>(UGeometryScriptLibrary_MeshBooleanFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBooleanFunctions.ApplyMeshSelfUnion
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelfUnionOptionsOptions                                                          (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshBooleanFunctions::ApplyMeshSelfUnion(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBooleanFunctions", "ApplyMeshSelfUnion");

	Params::UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshSelfUnion_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBooleanFunctions.ApplyMeshPlaneSlice
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  CutFrame                                                         (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshPlaneSliceOptionsOptions                                                          (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshBooleanFunctions::ApplyMeshPlaneSlice(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBooleanFunctions", "ApplyMeshPlaneSlice");

	Params::UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshPlaneSlice_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBooleanFunctions.ApplyMeshPlaneCut
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  CutFrame                                                         (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshPlaneCutOptionsOptions                                                          (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshBooleanFunctions::ApplyMeshPlaneCut(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBooleanFunctions", "ApplyMeshPlaneCut");

	Params::UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshPlaneCut_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBooleanFunctions.ApplyMeshMirror
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  MirrorFrame                                                      (ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshMirrorOptionsOptions                                                          (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshBooleanFunctions::ApplyMeshMirror(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBooleanFunctions", "ApplyMeshMirror");

	Params::UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshMirror_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBooleanFunctions.ApplyMeshBoolean
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  TargetTransform                                                  (Edit, BlueprintVisible, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ToolMesh                                                         (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  ToolTransform                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EGeometryScriptBooleanOperationOperation                                                        (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FGeometryScriptMeshBooleanOptionsOptions                                                          (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshBooleanFunctions::ApplyMeshBoolean(const struct FTransform& TargetTransform, enum class EGeometryScriptBooleanOperation* Operation, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBooleanFunctions", "ApplyMeshBoolean");

	Params::UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshBoolean_Params Parms{};

	Parms.TargetTransform = TargetTransform;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Operation != nullptr)
		*Operation = Parms.Operation;

	return Parms.ReturnValue;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_MeshComparisonFunctions
// (None)

class UClass* UGeometryScriptLibrary_MeshComparisonFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshComparisonFunctions");

	return Clss;
}


// GeometryScriptLibrary_MeshComparisonFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_MeshComparisonFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_MeshComparisonFunctions* UGeometryScriptLibrary_MeshComparisonFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_MeshComparisonFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_MeshComparisonFunctions*>(UGeometryScriptLibrary_MeshComparisonFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshComparisonFunctions.MeasureDistancesBetweenMeshes
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                OtherMesh                                                        (Edit, ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeasureMeshDistanceOptionsOptions                                                          (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             MaxDistance                                                      (BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
// double                             MinDistance                                                      (ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             AverageDistance                                                  (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             RootMeanSqrDeviation                                             (BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshComparisonFunctions::MeasureDistancesBetweenMeshes(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshComparisonFunctions", "MeasureDistancesBetweenMeshes");

	Params::UGeometryScriptLibrary_MeshComparisonFunctions_MeasureDistancesBetweenMeshes_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshComparisonFunctions.IsSameMeshAs
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                OtherMesh                                                        (Edit, ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptIsSameMeshOptionsOptions                                                          (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               bIsSameMesh                                                      (Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshComparisonFunctions::IsSameMeshAs(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshComparisonFunctions", "IsSameMeshAs");

	Params::UGeometryScriptLibrary_MeshComparisonFunctions_IsSameMeshAs_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshComparisonFunctions.IsIntersectingMesh
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  TargetTransform                                                  (Edit, BlueprintVisible, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                OtherMesh                                                        (Edit, ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  OtherTransform                                                   (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bIsIntersecting                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshComparisonFunctions::IsIntersectingMesh(const struct FTransform& TargetTransform, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshComparisonFunctions", "IsIntersectingMesh");

	Params::UGeometryScriptLibrary_MeshComparisonFunctions_IsIntersectingMesh_Params Parms{};

	Parms.TargetTransform = TargetTransform;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions
// (None)

class UClass* UGeometryScriptLibrary_MeshDecompositionFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshDecompositionFunctions");

	return Clss;
}


// GeometryScriptLibrary_MeshDecompositionFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_MeshDecompositionFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_MeshDecompositionFunctions* UGeometryScriptLibrary_MeshDecompositionFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_MeshDecompositionFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_MeshDecompositionFunctions*>(UGeometryScriptLibrary_MeshDecompositionFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions.SplitMeshByPolygroups
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptGroupLayer   GroupLayer                                                       (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<class UDynamicMesh*>        ComponentMeshes                                                  (Edit, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<int32>                      ComponentPolygroups                                              (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMeshPool*            MeshPool                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshDecompositionFunctions::SplitMeshByPolygroups(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshDecompositionFunctions", "SplitMeshByPolygroups");

	Params::UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByPolygroups_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions.SplitMeshByMaterialIDs
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<class UDynamicMesh*>        ComponentMeshes                                                  (Edit, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<int32>                      ComponentMaterialIDs                                             (ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMeshPool*            MeshPool                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshDecompositionFunctions::SplitMeshByMaterialIDs(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshDecompositionFunctions", "SplitMeshByMaterialIDs");

	Params::UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByMaterialIDs_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions.SplitMeshByComponents
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<class UDynamicMesh*>        ComponentMeshes                                                  (Edit, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMeshPool*            MeshPool                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshDecompositionFunctions::SplitMeshByComponents(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshDecompositionFunctions", "SplitMeshByComponents");

	Params::UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByComponents_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions.GetSubMeshFromMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                StoreToSubmesh                                                   (Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptIndexList    TriangleList                                                     (Edit, ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                StoreToSubmeshOut                                                (Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshDecompositionFunctions::GetSubMeshFromMesh(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshDecompositionFunctions", "GetSubMeshFromMesh");

	Params::UGeometryScriptLibrary_MeshDecompositionFunctions_GetSubMeshFromMesh_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions.CopyMeshToMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                CopyFromMesh                                                     (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                CopyToMesh                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                CopyToMeshOut                                                    (Edit, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshDecompositionFunctions::CopyMeshToMesh(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshDecompositionFunctions", "CopyMeshToMesh");

	Params::UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshToMesh_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions.CopyMeshSelectionToMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                StoreToSubmesh                                                   (Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                StoreToSubmeshOut                                                (Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bAppendToExisting                                                (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bPreserveGroupIDs                                                (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshDecompositionFunctions::CopyMeshSelectionToMesh(struct FGeometryScriptMeshSelection* Selection, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshDecompositionFunctions", "CopyMeshSelectionToMesh");

	Params::UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshSelectionToMesh_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Selection != nullptr)
		*Selection = std::move(Parms.Selection);

	return Parms.ReturnValue;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions
// (None)

class UClass* UGeometryScriptLibrary_MeshDeformFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshDeformFunctions");

	return Clss;
}


// GeometryScriptLibrary_MeshDeformFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_MeshDeformFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_MeshDeformFunctions* UGeometryScriptLibrary_MeshDeformFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_MeshDeformFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_MeshDeformFunctions*>(UGeometryScriptLibrary_MeshDeformFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyTwistWarpToMesh
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptTwistWarpOptionsOptions                                                          (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FTransform                  TwistOrientation                                                 (BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              TwistAngle                                                       (ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              TwistExtent                                                      (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshDeformFunctions::ApplyTwistWarpToMesh(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshDeformFunctions", "ApplyTwistWarpToMesh");

	Params::UGeometryScriptLibrary_MeshDeformFunctions_ApplyTwistWarpToMesh_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyPerlinNoiseToMesh
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptPerlinNoiseOptionsOptions                                                          (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshDeformFunctions::ApplyPerlinNoiseToMesh(struct FGeometryScriptMeshSelection* Selection, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshDeformFunctions", "ApplyPerlinNoiseToMesh");

	Params::UGeometryScriptLibrary_MeshDeformFunctions_ApplyPerlinNoiseToMesh_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Selection != nullptr)
		*Selection = std::move(Parms.Selection);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyMathWarpToMesh
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  WarpOrientation                                                  (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EGeometryScriptMathWarpTypeWarpType                                                         (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMathWarpOptionsOptions                                                          (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshDeformFunctions::ApplyMathWarpToMesh(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshDeformFunctions", "ApplyMathWarpToMesh");

	Params::UGeometryScriptLibrary_MeshDeformFunctions_ApplyMathWarpToMesh_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyIterativeSmoothingToMesh
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptIterativeMeshSmoothingOptionsOptions                                                          (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshDeformFunctions::ApplyIterativeSmoothingToMesh(struct FGeometryScriptMeshSelection* Selection, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshDeformFunctions", "ApplyIterativeSmoothingToMesh");

	Params::UGeometryScriptLibrary_MeshDeformFunctions_ApplyIterativeSmoothingToMesh_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Selection != nullptr)
		*Selection = std::move(Parms.Selection);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyFlareWarpToMesh
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptFlareWarpOptionsOptions                                                          (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FTransform                  FlareOrientation                                                 (BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              FlarePercentX                                                    (BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              FlarePercentY                                                    (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              FlareExtent                                                      (Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshDeformFunctions::ApplyFlareWarpToMesh(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshDeformFunctions", "ApplyFlareWarpToMesh");

	Params::UGeometryScriptLibrary_MeshDeformFunctions_ApplyFlareWarpToMesh_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyDisplaceFromTextureMap
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UTexture2D*                  Texture                                                          (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptDisplaceFromTextureOptionsOptions                                                          (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int32                              UVLayer                                                          (ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshDeformFunctions::ApplyDisplaceFromTextureMap(struct FGeometryScriptMeshSelection* Selection, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshDeformFunctions", "ApplyDisplaceFromTextureMap");

	Params::UGeometryScriptLibrary_MeshDeformFunctions_ApplyDisplaceFromTextureMap_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Selection != nullptr)
		*Selection = std::move(Parms.Selection);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyDisplaceFromPerVertexVectors
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptVectorList   VectorList                                                       (Edit, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              Magnitude                                                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshDeformFunctions::ApplyDisplaceFromPerVertexVectors(struct FGeometryScriptMeshSelection* Selection, float Magnitude, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshDeformFunctions", "ApplyDisplaceFromPerVertexVectors");

	Params::UGeometryScriptLibrary_MeshDeformFunctions_ApplyDisplaceFromPerVertexVectors_Params Parms{};

	Parms.Magnitude = Magnitude;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Selection != nullptr)
		*Selection = std::move(Parms.Selection);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyBendWarpToMesh
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptBendWarpOptionsOptions                                                          (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FTransform                  BendOrientation                                                  (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              BendAngle                                                        (ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              BendExtent                                                       (Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshDeformFunctions::ApplyBendWarpToMesh(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshDeformFunctions", "ApplyBendWarpToMesh");

	Params::UGeometryScriptLibrary_MeshDeformFunctions_ApplyBendWarpToMesh_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions
// (None)

class UClass* UGeometryScriptLibrary_MeshMaterialFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshMaterialFunctions");

	return Clss;
}


// GeometryScriptLibrary_MeshMaterialFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_MeshMaterialFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_MeshMaterialFunctions* UGeometryScriptLibrary_MeshMaterialFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_MeshMaterialFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_MeshMaterialFunctions*>(UGeometryScriptLibrary_MeshMaterialFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.SetTriangleMaterialID
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              TriangleID                                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
// int32                              MaterialID                                                       (Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bIsValidTriangle                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bDeferChangeNotifications                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool UGeometryScriptLibrary_MeshMaterialFunctions::SetTriangleMaterialID(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshMaterialFunctions", "SetTriangleMaterialID");

	Params::UGeometryScriptLibrary_MeshMaterialFunctions_SetTriangleMaterialID_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.SetPolygroupMaterialID
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptGroupLayer   GroupLayer                                                       (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              PolygroupID                                                      (ConstParm, BlueprintVisible, ExportObject, Net, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              MaterialID                                                       (Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bIsValidPolygroupID                                              (Edit, ConstParm, Net, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bDeferChangeNotifications                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshMaterialFunctions::SetPolygroupMaterialID(int32 PolygroupID, bool bIsValidPolygroupID, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshMaterialFunctions", "SetPolygroupMaterialID");

	Params::UGeometryScriptLibrary_MeshMaterialFunctions_SetPolygroupMaterialID_Params Parms{};

	Parms.PolygroupID = PolygroupID;
	Parms.bIsValidPolygroupID = bIsValidPolygroupID;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.SetMaterialIDOnTriangles
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptIndexList    TriangleIDList                                                   (Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              MaterialID                                                       (Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bDeferChangeNotifications                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshMaterialFunctions::SetMaterialIDOnTriangles(const struct FGeometryScriptIndexList& TriangleIDList, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshMaterialFunctions", "SetMaterialIDOnTriangles");

	Params::UGeometryScriptLibrary_MeshMaterialFunctions_SetMaterialIDOnTriangles_Params Parms{};

	Parms.TriangleIDList = TriangleIDList;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.SetMaterialIDForMeshSelection
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              MaterialID                                                       (Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bDeferChangeNotifications                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshMaterialFunctions::SetMaterialIDForMeshSelection(struct FGeometryScriptMeshSelection* Selection, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshMaterialFunctions", "SetMaterialIDForMeshSelection");

	Params::UGeometryScriptLibrary_MeshMaterialFunctions_SetMaterialIDForMeshSelection_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Selection != nullptr)
		*Selection = std::move(Parms.Selection);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.SetAllTriangleMaterialIDs
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptIndexList    TriangleMaterialIDList                                           (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bDeferChangeNotifications                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshMaterialFunctions::SetAllTriangleMaterialIDs(const struct FGeometryScriptIndexList& TriangleMaterialIDList, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshMaterialFunctions", "SetAllTriangleMaterialIDs");

	Params::UGeometryScriptLibrary_MeshMaterialFunctions_SetAllTriangleMaterialIDs_Params Parms{};

	Parms.TriangleMaterialIDList = TriangleMaterialIDList;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.RemapMaterialIDs
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              FromMaterialID                                                   (Edit, ConstParm, BlueprintVisible, ExportObject, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ToMaterialID                                                     (ExportObject, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshMaterialFunctions::RemapMaterialIDs(int32 FromMaterialID, int32 ToMaterialID, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshMaterialFunctions", "RemapMaterialIDs");

	Params::UGeometryScriptLibrary_MeshMaterialFunctions_RemapMaterialIDs_Params Parms{};

	Parms.FromMaterialID = FromMaterialID;
	Parms.ToMaterialID = ToMaterialID;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.GetTrianglesByMaterialID
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              MaterialID                                                       (Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptIndexList    TriangleIDList                                                   (Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshMaterialFunctions::GetTrianglesByMaterialID(const struct FGeometryScriptIndexList& TriangleIDList, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshMaterialFunctions", "GetTrianglesByMaterialID");

	Params::UGeometryScriptLibrary_MeshMaterialFunctions_GetTrianglesByMaterialID_Params Parms{};

	Parms.TriangleIDList = TriangleIDList;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.GetTriangleMaterialID
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              TriangleID                                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
// bool                               bIsValidTriangle                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool UGeometryScriptLibrary_MeshMaterialFunctions::GetTriangleMaterialID(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshMaterialFunctions", "GetTriangleMaterialID");

	Params::UGeometryScriptLibrary_MeshMaterialFunctions_GetTriangleMaterialID_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.GetMaxMaterialID
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bHasMaterialIDs                                                  (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool UGeometryScriptLibrary_MeshMaterialFunctions::GetMaxMaterialID(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshMaterialFunctions", "GetMaxMaterialID");

	Params::UGeometryScriptLibrary_MeshMaterialFunctions_GetMaxMaterialID_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.GetMaterialIDsOfTriangles
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptIndexList    TriangleIDList                                                   (Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptIndexList    MaterialIDList                                                   (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshMaterialFunctions::GetMaterialIDsOfTriangles(const struct FGeometryScriptIndexList& TriangleIDList, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshMaterialFunctions", "GetMaterialIDsOfTriangles");

	Params::UGeometryScriptLibrary_MeshMaterialFunctions_GetMaterialIDsOfTriangles_Params Parms{};

	Parms.TriangleIDList = TriangleIDList;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.GetAllTriangleMaterialIDs
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptIndexList    MaterialIDList                                                   (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bHasMaterialIDs                                                  (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool UGeometryScriptLibrary_MeshMaterialFunctions::GetAllTriangleMaterialIDs(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshMaterialFunctions", "GetAllTriangleMaterialIDs");

	Params::UGeometryScriptLibrary_MeshMaterialFunctions_GetAllTriangleMaterialIDs_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.EnableMaterialIDs
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshMaterialFunctions::EnableMaterialIDs(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshMaterialFunctions", "EnableMaterialIDs");

	Params::UGeometryScriptLibrary_MeshMaterialFunctions_EnableMaterialIDs_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.DeleteTrianglesByMaterialID
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              MaterialID                                                       (Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              NumDeleted                                                       (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bDeferChangeNotifications                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshMaterialFunctions::DeleteTrianglesByMaterialID(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshMaterialFunctions", "DeleteTrianglesByMaterialID");

	Params::UGeometryScriptLibrary_MeshMaterialFunctions_DeleteTrianglesByMaterialID_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.CompactMaterialIDs
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<class UMaterialInterface*>  SourceMaterialList                                               (Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<class UMaterialInterface*>  CompactedMaterialList                                            (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshMaterialFunctions::CompactMaterialIDs(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshMaterialFunctions", "CompactMaterialIDs");

	Params::UGeometryScriptLibrary_MeshMaterialFunctions_CompactMaterialIDs_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.ClearMaterialIDs
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ClearValue                                                       (ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, EditConst, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshMaterialFunctions::ClearMaterialIDs(int32* ClearValue, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshMaterialFunctions", "ClearMaterialIDs");

	Params::UGeometryScriptLibrary_MeshMaterialFunctions_ClearMaterialIDs_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ClearValue != nullptr)
		*ClearValue = Parms.ClearValue;

	return Parms.ReturnValue;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions
// (None)

class UClass* UGeometryScriptLibrary_MeshModelingFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshModelingFunctions");

	return Clss;
}


// GeometryScriptLibrary_MeshModelingFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_MeshModelingFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_MeshModelingFunctions* UGeometryScriptLibrary_MeshModelingFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_MeshModelingFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_MeshModelingFunctions*>(UGeometryScriptLibrary_MeshModelingFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshShell
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshOffsetOptionsOptions                                                          (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshShell(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshModelingFunctions", "ApplyMeshShell");

	Params::UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshShell_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshPolygroupBevel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshBevelOptionsOptions                                                          (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshPolygroupBevel(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshModelingFunctions", "ApplyMeshPolygroupBevel");

	Params::UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshPolygroupBevel_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshOffsetFaces
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshOffsetFacesOptionsOptions                                                          (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshOffsetFaces(struct FGeometryScriptMeshSelection* Selection, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshModelingFunctions", "ApplyMeshOffsetFaces");

	Params::UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshOffsetFaces_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Selection != nullptr)
		*Selection = std::move(Parms.Selection);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshOffset
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshOffsetOptionsOptions                                                          (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshOffset(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshModelingFunctions", "ApplyMeshOffset");

	Params::UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshOffset_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshLinearExtrudeFaces
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshLinearExtrudeOptionsOptions                                                          (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshLinearExtrudeFaces(struct FGeometryScriptMeshSelection* Selection, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshModelingFunctions", "ApplyMeshLinearExtrudeFaces");

	Params::UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshLinearExtrudeFaces_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Selection != nullptr)
		*Selection = std::move(Parms.Selection);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshInsetOutsetFaces
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshInsetOutsetFacesOptionsOptions                                                          (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshInsetOutsetFaces(struct FGeometryScriptMeshSelection* Selection, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshModelingFunctions", "ApplyMeshInsetOutsetFaces");

	Params::UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshInsetOutsetFaces_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Selection != nullptr)
		*Selection = std::move(Parms.Selection);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshExtrude_Compatibility_5p0
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshExtrudeOptionsOptions                                                          (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshExtrude_Compatibility_5p0(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshModelingFunctions", "ApplyMeshExtrude_Compatibility_5p0");

	Params::UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshExtrude_Compatibility_5p0_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshDuplicateFaces
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionNewTriangles                                                     (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshEditPolygroupOptionsGroupOptions                                                     (BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshDuplicateFaces(struct FGeometryScriptMeshSelection* Selection, const struct FGeometryScriptMeshSelection& NewTriangles, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshModelingFunctions", "ApplyMeshDuplicateFaces");

	Params::UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshDuplicateFaces_Params Parms{};

	Parms.NewTriangles = NewTriangles;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Selection != nullptr)
		*Selection = std::move(Parms.Selection);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshDisconnectFaces
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// bool                               bAllowBowtiesInOutput                                            (ConstParm, EditFixedSize, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshDisconnectFaces(struct FGeometryScriptMeshSelection* Selection, bool bAllowBowtiesInOutput, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshModelingFunctions", "ApplyMeshDisconnectFaces");

	Params::UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshDisconnectFaces_Params Parms{};

	Parms.bAllowBowtiesInOutput = bAllowBowtiesInOutput;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Selection != nullptr)
		*Selection = std::move(Parms.Selection);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshBevelSelection
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// enum class EGeometryScriptMeshBevelSelectionModeBevelMode                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshBevelSelectionOptionsBevelOptions                                                     (Edit, BlueprintVisible, BlueprintReadOnly, Net, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshBevelSelection(struct FGeometryScriptMeshSelection* Selection, enum class EGeometryScriptMeshBevelSelectionMode BevelMode, const struct FGeometryScriptMeshBevelSelectionOptions& BevelOptions, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshModelingFunctions", "ApplyMeshBevelSelection");

	Params::UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshBevelSelection_Params Parms{};

	Parms.BevelMode = BevelMode;
	Parms.BevelOptions = BevelOptions;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Selection != nullptr)
		*Selection = std::move(Parms.Selection);

	return Parms.ReturnValue;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions
// (None)

class UClass* UGeometryScriptLibrary_MeshNormalsFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshNormalsFunctions");

	return Clss;
}


// GeometryScriptLibrary_MeshNormalsFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_MeshNormalsFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_MeshNormalsFunctions* UGeometryScriptLibrary_MeshNormalsFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_MeshNormalsFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_MeshNormalsFunctions*>(UGeometryScriptLibrary_MeshNormalsFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.UpdateVertexNormal
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              VertexID                                                         (EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
// bool                               bUpdateNormal                                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     NewNormal                                                        (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bUpdateTangents                                                  (BlueprintVisible, ExportObject, EditFixedSize, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     NewTangentX                                                      (Edit, BlueprintVisible, EditFixedSize, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     NewTangentY                                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bIsValidVertex                                                   (BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bMergeSplitValues                                                (BlueprintVisible, BlueprintReadOnly, Net, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bDeferChangeNotifications                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool UGeometryScriptLibrary_MeshNormalsFunctions::UpdateVertexNormal(bool bUpdateNormal, const struct FVector& NewNormal, bool bUpdateTangents, const struct FVector& NewTangentX, const struct FVector& NewTangentY, bool bMergeSplitValues, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshNormalsFunctions", "UpdateVertexNormal");

	Params::UGeometryScriptLibrary_MeshNormalsFunctions_UpdateVertexNormal_Params Parms{};

	Parms.bUpdateNormal = bUpdateNormal;
	Parms.NewNormal = NewNormal;
	Parms.bUpdateTangents = bUpdateTangents;
	Parms.NewTangentX = NewTangentX;
	Parms.NewTangentY = NewTangentY;
	Parms.bMergeSplitValues = bMergeSplitValues;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.SetPerVertexNormals
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshNormalsFunctions::SetPerVertexNormals(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshNormalsFunctions", "SetPerVertexNormals");

	Params::UGeometryScriptLibrary_MeshNormalsFunctions_SetPerVertexNormals_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.SetPerFaceNormals
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshNormalsFunctions::SetPerFaceNormals(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshNormalsFunctions", "SetPerFaceNormals");

	Params::UGeometryScriptLibrary_MeshNormalsFunctions_SetPerFaceNormals_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.SetMeshTriangleNormals
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              TriangleID                                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
// struct FGeometryScriptTriangle     Normals                                                          (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               bIsValidTriangle                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bDeferChangeNotifications                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool UGeometryScriptLibrary_MeshNormalsFunctions::SetMeshTriangleNormals(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshNormalsFunctions", "SetMeshTriangleNormals");

	Params::UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshTriangleNormals_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.SetMeshPerVertexTangents
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptVectorList   TangentXList                                                     (BlueprintVisible, Net, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptVectorList   TangentYList                                                     (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshNormalsFunctions::SetMeshPerVertexTangents(const struct FGeometryScriptVectorList& TangentXList, const struct FGeometryScriptVectorList& TangentYList, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshNormalsFunctions", "SetMeshPerVertexTangents");

	Params::UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshPerVertexTangents_Params Parms{};

	Parms.TangentXList = TangentXList;
	Parms.TangentYList = TangentYList;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.SetMeshPerVertexNormals
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptVectorList   VertexNormalList                                                 (Edit, ConstParm, ExportObject, Net, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshNormalsFunctions::SetMeshPerVertexNormals(const struct FGeometryScriptVectorList& VertexNormalList, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshNormalsFunctions", "SetMeshPerVertexNormals");

	Params::UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshPerVertexNormals_Params Parms{};

	Parms.VertexNormalList = VertexNormalList;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.RecomputeNormals
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptCalculateNormalsOptionsCalculateOptions                                                 (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshNormalsFunctions::RecomputeNormals(const struct FGeometryScriptCalculateNormalsOptions& CalculateOptions, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshNormalsFunctions", "RecomputeNormals");

	Params::UGeometryScriptLibrary_MeshNormalsFunctions_RecomputeNormals_Params Parms{};

	Parms.CalculateOptions = CalculateOptions;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.GetMeshPerVertexTangents
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptVectorList   TangentXList                                                     (BlueprintVisible, Net, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptVectorList   TangentYList                                                     (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bIsValidTangentSet                                               (Edit, ConstParm, BlueprintReadOnly, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bHasVertexIDGaps                                                 (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bAverageSplitVertexValues                                        (BlueprintVisible, ExportObject, Net, EditFixedSize, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshNormalsFunctions::GetMeshPerVertexTangents(const struct FGeometryScriptVectorList& TangentXList, const struct FGeometryScriptVectorList& TangentYList, bool bIsValidTangentSet, bool bHasVertexIDGaps, bool bAverageSplitVertexValues, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshNormalsFunctions", "GetMeshPerVertexTangents");

	Params::UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexTangents_Params Parms{};

	Parms.TangentXList = TangentXList;
	Parms.TangentYList = TangentYList;
	Parms.bIsValidTangentSet = bIsValidTangentSet;
	Parms.bHasVertexIDGaps = bHasVertexIDGaps;
	Parms.bAverageSplitVertexValues = bAverageSplitVertexValues;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.GetMeshPerVertexNormals
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptVectorList   NormalList                                                       (Edit, BlueprintVisible, ExportObject, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bIsValidNormalSet                                                (Edit, ConstParm, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bHasVertexIDGaps                                                 (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bAverageSplitVertexValues                                        (BlueprintVisible, ExportObject, Net, EditFixedSize, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshNormalsFunctions::GetMeshPerVertexNormals(const struct FGeometryScriptVectorList& NormalList, bool bIsValidNormalSet, bool bHasVertexIDGaps, bool bAverageSplitVertexValues, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshNormalsFunctions", "GetMeshPerVertexNormals");

	Params::UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexNormals_Params Parms{};

	Parms.NormalList = NormalList;
	Parms.bIsValidNormalSet = bIsValidNormalSet;
	Parms.bHasVertexIDGaps = bHasVertexIDGaps;
	Parms.bAverageSplitVertexValues = bAverageSplitVertexValues;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.GetMeshHasTangents
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bHasTangents                                                     (Edit, BlueprintVisible, Net, EditFixedSize, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshNormalsFunctions::GetMeshHasTangents(bool bHasTangents, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshNormalsFunctions", "GetMeshHasTangents");

	Params::UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshHasTangents_Params Parms{};

	Parms.bHasTangents = bHasTangents;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.FlipNormals
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshNormalsFunctions::FlipNormals(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshNormalsFunctions", "FlipNormals");

	Params::UGeometryScriptLibrary_MeshNormalsFunctions_FlipNormals_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.DiscardTangents
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshNormalsFunctions::DiscardTangents(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshNormalsFunctions", "DiscardTangents");

	Params::UGeometryScriptLibrary_MeshNormalsFunctions_DiscardTangents_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.ComputeTangents
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptTangentsOptionsOptions                                                          (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshNormalsFunctions::ComputeTangents(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshNormalsFunctions", "ComputeTangents");

	Params::UGeometryScriptLibrary_MeshNormalsFunctions_ComputeTangents_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.ComputeSplitNormals
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptSplitNormalsOptionsSplitOptions                                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptCalculateNormalsOptionsCalculateOptions                                                 (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshNormalsFunctions::ComputeSplitNormals(const struct FGeometryScriptSplitNormalsOptions& SplitOptions, const struct FGeometryScriptCalculateNormalsOptions& CalculateOptions, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshNormalsFunctions", "ComputeSplitNormals");

	Params::UGeometryScriptLibrary_MeshNormalsFunctions_ComputeSplitNormals_Params Parms{};

	Parms.SplitOptions = SplitOptions;
	Parms.CalculateOptions = CalculateOptions;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.AutoRepairNormals
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshNormalsFunctions::AutoRepairNormals(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshNormalsFunctions", "AutoRepairNormals");

	Params::UGeometryScriptLibrary_MeshNormalsFunctions_AutoRepairNormals_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions
// (None)

class UClass* UGeometryScriptLibrary_MeshPolygroupFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshPolygroupFunctions");

	return Clss;
}


// GeometryScriptLibrary_MeshPolygroupFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_MeshPolygroupFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_MeshPolygroupFunctions* UGeometryScriptLibrary_MeshPolygroupFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_MeshPolygroupFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_MeshPolygroupFunctions*>(UGeometryScriptLibrary_MeshPolygroupFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.SetPolygroupForMeshSelection
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptGroupLayer   GroupLayer                                                       (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              SetPolygroupIDOut                                                (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              SetPolygroupID                                                   (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bGenerateNewPolygroup                                            (ExportObject, EditFixedSize, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bDeferChangeNotifications                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool UGeometryScriptLibrary_MeshPolygroupFunctions::SetPolygroupForMeshSelection(struct FGeometryScriptMeshSelection* Selection, int32* SetPolygroupIDOut, int32* SetPolygroupID, bool* bGenerateNewPolygroup, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPolygroupFunctions", "SetPolygroupForMeshSelection");

	Params::UGeometryScriptLibrary_MeshPolygroupFunctions_SetPolygroupForMeshSelection_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Selection != nullptr)
		*Selection = std::move(Parms.Selection);

	if (SetPolygroupIDOut != nullptr)
		*SetPolygroupIDOut = Parms.SetPolygroupIDOut;

	if (SetPolygroupID != nullptr)
		*SetPolygroupID = Parms.SetPolygroupID;

	if (bGenerateNewPolygroup != nullptr)
		*bGenerateNewPolygroup = Parms.bGenerateNewPolygroup;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.SetNumExtendedPolygroupLayers
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              NumLayers                                                        (ConstParm, EditFixedSize, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshPolygroupFunctions::SetNumExtendedPolygroupLayers(int32* NumLayers, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPolygroupFunctions", "SetNumExtendedPolygroupLayers");

	Params::UGeometryScriptLibrary_MeshPolygroupFunctions_SetNumExtendedPolygroupLayers_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NumLayers != nullptr)
		*NumLayers = Parms.NumLayers;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.GetTrianglesInPolygroup
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptGroupLayer   GroupLayer                                                       (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              PolygroupID                                                      (ConstParm, BlueprintVisible, ExportObject, Net, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptIndexList    TriangleIDsOut                                                   (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FGeometryScriptGroupLayer UGeometryScriptLibrary_MeshPolygroupFunctions::GetTrianglesInPolygroup(int32 PolygroupID, struct FGeometryScriptIndexList* TriangleIDsOut, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPolygroupFunctions", "GetTrianglesInPolygroup");

	Params::UGeometryScriptLibrary_MeshPolygroupFunctions_GetTrianglesInPolygroup_Params Parms{};

	Parms.PolygroupID = PolygroupID;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TriangleIDsOut != nullptr)
		*TriangleIDsOut = std::move(Parms.TriangleIDsOut);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.GetTrianglePolygroupID
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptGroupLayer   GroupLayer                                                       (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              TriangleID                                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
// bool                               bIsValidTriangle                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool UGeometryScriptLibrary_MeshPolygroupFunctions::GetTrianglePolygroupID(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPolygroupFunctions", "GetTrianglePolygroupID");

	Params::UGeometryScriptLibrary_MeshPolygroupFunctions_GetTrianglePolygroupID_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.GetPolygroupIDsInMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptGroupLayer   GroupLayer                                                       (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FGeometryScriptIndexList    PolygroupIDsOut                                                  (Edit, BlueprintReadOnly, Net, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FGeometryScriptGroupLayer UGeometryScriptLibrary_MeshPolygroupFunctions::GetPolygroupIDsInMesh(struct FGeometryScriptIndexList* PolygroupIDsOut, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPolygroupFunctions", "GetPolygroupIDsInMesh");

	Params::UGeometryScriptLibrary_MeshPolygroupFunctions_GetPolygroupIDsInMesh_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PolygroupIDsOut != nullptr)
		*PolygroupIDsOut = std::move(Parms.PolygroupIDsOut);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.GetAllTrianglePolygroupIDs
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptGroupLayer   GroupLayer                                                       (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FGeometryScriptIndexList    PolygroupIDsOut                                                  (Edit, BlueprintReadOnly, Net, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FGeometryScriptGroupLayer UGeometryScriptLibrary_MeshPolygroupFunctions::GetAllTrianglePolygroupIDs(struct FGeometryScriptIndexList* PolygroupIDsOut, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPolygroupFunctions", "GetAllTrianglePolygroupIDs");

	Params::UGeometryScriptLibrary_MeshPolygroupFunctions_GetAllTrianglePolygroupIDs_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PolygroupIDsOut != nullptr)
		*PolygroupIDsOut = std::move(Parms.PolygroupIDsOut);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.EnablePolygroups
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshPolygroupFunctions::EnablePolygroups(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPolygroupFunctions", "EnablePolygroups");

	Params::UGeometryScriptLibrary_MeshPolygroupFunctions_EnablePolygroups_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.DeleteTrianglesInPolygroup
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptGroupLayer   GroupLayer                                                       (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              PolygroupID                                                      (ConstParm, BlueprintVisible, ExportObject, Net, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              NumDeleted                                                       (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bDeferChangeNotifications                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshPolygroupFunctions::DeleteTrianglesInPolygroup(int32 PolygroupID, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPolygroupFunctions", "DeleteTrianglesInPolygroup");

	Params::UGeometryScriptLibrary_MeshPolygroupFunctions_DeleteTrianglesInPolygroup_Params Parms{};

	Parms.PolygroupID = PolygroupID;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.CopyPolygroupsLayer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptGroupLayer   FromGroupLayer                                                   (Edit, ExportObject, Net, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptGroupLayer   ToGroupLayer                                                     (ConstParm, Net, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshPolygroupFunctions::CopyPolygroupsLayer(struct FGeometryScriptGroupLayer* FromGroupLayer, struct FGeometryScriptGroupLayer* ToGroupLayer, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPolygroupFunctions", "CopyPolygroupsLayer");

	Params::UGeometryScriptLibrary_MeshPolygroupFunctions_CopyPolygroupsLayer_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (FromGroupLayer != nullptr)
		*FromGroupLayer = std::move(Parms.FromGroupLayer);

	if (ToGroupLayer != nullptr)
		*ToGroupLayer = std::move(Parms.ToGroupLayer);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.ConvertUVIslandsToPolygroups
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptGroupLayer   GroupLayer                                                       (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              UVLayer                                                          (ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshPolygroupFunctions::ConvertUVIslandsToPolygroups(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPolygroupFunctions", "ConvertUVIslandsToPolygroups");

	Params::UGeometryScriptLibrary_MeshPolygroupFunctions_ConvertUVIslandsToPolygroups_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.ConvertComponentsToPolygroups
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptGroupLayer   GroupLayer                                                       (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshPolygroupFunctions::ConvertComponentsToPolygroups(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPolygroupFunctions", "ConvertComponentsToPolygroups");

	Params::UGeometryScriptLibrary_MeshPolygroupFunctions_ConvertComponentsToPolygroups_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.ComputePolygroupsFromPolygonDetection
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptGroupLayer   GroupLayer                                                       (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               bRespectUVSeams                                                  (Edit, ExportObject, BlueprintReadOnly, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bRespectHardNormals                                              (ConstParm, BlueprintVisible, ExportObject, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             QuadAdjacencyWeight                                              (Edit, ConstParm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             QuadMetricClamp                                                  (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              MaxSearchRounds                                                  (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshPolygroupFunctions::ComputePolygroupsFromPolygonDetection(bool* bRespectUVSeams, bool* bRespectHardNormals, double* QuadAdjacencyWeight, double QuadMetricClamp, int32 MaxSearchRounds, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPolygroupFunctions", "ComputePolygroupsFromPolygonDetection");

	Params::UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromPolygonDetection_Params Parms{};

	Parms.QuadMetricClamp = QuadMetricClamp;
	Parms.MaxSearchRounds = MaxSearchRounds;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bRespectUVSeams != nullptr)
		*bRespectUVSeams = Parms.bRespectUVSeams;

	if (bRespectHardNormals != nullptr)
		*bRespectHardNormals = Parms.bRespectHardNormals;

	if (QuadAdjacencyWeight != nullptr)
		*QuadAdjacencyWeight = Parms.QuadAdjacencyWeight;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.ComputePolygroupsFromAngleThreshold
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptGroupLayer   GroupLayer                                                       (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// float                              CreaseAngle                                                      (ConstParm, ExportObject, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              MinGroupSize                                                     (Edit, ConstParm, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshPolygroupFunctions::ComputePolygroupsFromAngleThreshold(float CreaseAngle, int32 MinGroupSize, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPolygroupFunctions", "ComputePolygroupsFromAngleThreshold");

	Params::UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromAngleThreshold_Params Parms{};

	Parms.CreaseAngle = CreaseAngle;
	Parms.MinGroupSize = MinGroupSize;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.ClearPolygroups
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptGroupLayer   GroupLayer                                                       (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              ClearValue                                                       (ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, EditConst, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshPolygroupFunctions::ClearPolygroups(int32* ClearValue, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPolygroupFunctions", "ClearPolygroups");

	Params::UGeometryScriptLibrary_MeshPolygroupFunctions_ClearPolygroups_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ClearValue != nullptr)
		*ClearValue = Parms.ClearValue;

	return Parms.ReturnValue;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions
// (None)

class UClass* UGeometryScriptLibrary_MeshPrimitiveFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshPrimitiveFunctions");

	return Clss;
}


// GeometryScriptLibrary_MeshPrimitiveFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_MeshPrimitiveFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_MeshPrimitiveFunctions* UGeometryScriptLibrary_MeshPrimitiveFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_MeshPrimitiveFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_MeshPrimitiveFunctions*>(UGeometryScriptLibrary_MeshPrimitiveFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendVoronoiDiagram2D
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (BlueprintVisible, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// TArray<struct FVector2D>           VoronoiSites                                                     (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptVoronoiOptionsVoronoiOptions                                                   (ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendVoronoiDiagram2D(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, const TArray<struct FVector2D>& VoronoiSites, const struct FGeometryScriptVoronoiOptions& VoronoiOptions, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendVoronoiDiagram2D");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendVoronoiDiagram2D_Params Parms{};

	Parms.VoronoiSites = VoronoiSites;
	Parms.VoronoiOptions = VoronoiOptions;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PrimitiveOptions != nullptr)
		*PrimitiveOptions = std::move(Parms.PrimitiveOptions);

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendTriangulatedPolygon
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (BlueprintVisible, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// TArray<struct FVector2D>           PolygonVertices                                                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bAllowSelfIntersections                                          (Edit, BlueprintVisible, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendTriangulatedPolygon(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, const TArray<struct FVector2D>& PolygonVertices, bool bAllowSelfIntersections, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendTriangulatedPolygon");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTriangulatedPolygon_Params Parms{};

	Parms.PolygonVertices = PolygonVertices;
	Parms.bAllowSelfIntersections = bAllowSelfIntersections;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PrimitiveOptions != nullptr)
		*PrimitiveOptions = std::move(Parms.PrimitiveOptions);

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendTorus
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (BlueprintVisible, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// struct FGeometryScriptRevolveOptionsRevolveOptions                                                   (BlueprintVisible, ExportObject, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              MajorRadius                                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              MinorRadius                                                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              MajorSteps                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              MinorSteps                                                       (Edit, ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EGeometryScriptPrimitiveOriginModeOrigin                                                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, Config, EditConst, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendTorus(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, const struct FGeometryScriptRevolveOptions& RevolveOptions, float MajorRadius, float MinorRadius, int32 MajorSteps, int32 MinorSteps, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendTorus");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTorus_Params Parms{};

	Parms.RevolveOptions = RevolveOptions;
	Parms.MajorRadius = MajorRadius;
	Parms.MinorRadius = MinorRadius;
	Parms.MajorSteps = MajorSteps;
	Parms.MinorSteps = MinorSteps;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PrimitiveOptions != nullptr)
		*PrimitiveOptions = std::move(Parms.PrimitiveOptions);

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendSweepPolyline
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (BlueprintVisible, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// TArray<struct FVector2D>           PolylineVertices                                                 (ConstParm, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FTransform>          SweepPath                                                        (ConstParm, ExportObject, Net, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<float>                      PolylineTexParamU                                                (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<float>                      SweepPathTexParamV                                               (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bLoop                                                            (Edit, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// float                              StartScale                                                       (Edit, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              EndScale                                                         (ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              RotationAngleDeg                                                 (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendSweepPolyline(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, const TArray<struct FVector2D>& PolylineVertices, const TArray<struct FTransform>& SweepPath, const TArray<float>& PolylineTexParamU, const TArray<float>& SweepPathTexParamV, float RotationAngleDeg, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendSweepPolyline");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolyline_Params Parms{};

	Parms.PolylineVertices = PolylineVertices;
	Parms.SweepPath = SweepPath;
	Parms.PolylineTexParamU = PolylineTexParamU;
	Parms.SweepPathTexParamV = SweepPathTexParamV;
	Parms.RotationAngleDeg = RotationAngleDeg;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PrimitiveOptions != nullptr)
		*PrimitiveOptions = std::move(Parms.PrimitiveOptions);

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendSweepPolygon
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (BlueprintVisible, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// TArray<struct FVector2D>           PolygonVertices                                                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FTransform>          SweepPath                                                        (ConstParm, ExportObject, Net, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bLoop                                                            (Edit, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// bool                               bCapped                                                          (Edit, ConstParm, Net, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              StartScale                                                       (Edit, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              EndScale                                                         (ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              RotationAngleDeg                                                 (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendSweepPolygon(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, const TArray<struct FVector2D>& PolygonVertices, const TArray<struct FTransform>& SweepPath, bool* bCapped, float RotationAngleDeg, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendSweepPolygon");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolygon_Params Parms{};

	Parms.PolygonVertices = PolygonVertices;
	Parms.SweepPath = SweepPath;
	Parms.RotationAngleDeg = RotationAngleDeg;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PrimitiveOptions != nullptr)
		*PrimitiveOptions = std::move(Parms.PrimitiveOptions);

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	if (bCapped != nullptr)
		*bCapped = Parms.bCapped;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendSpiralRevolvePolygon
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (BlueprintVisible, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// TArray<struct FVector2D>           PolygonVertices                                                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptRevolveOptionsRevolveOptions                                                   (BlueprintVisible, ExportObject, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              Radius                                                           (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// int32                              Steps                                                            (ExportObject, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              RisePerRevolution                                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendSpiralRevolvePolygon(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, const TArray<struct FVector2D>& PolygonVertices, const struct FGeometryScriptRevolveOptions& RevolveOptions, float Radius, int32 Steps, float RisePerRevolution, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendSpiralRevolvePolygon");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSpiralRevolvePolygon_Params Parms{};

	Parms.PolygonVertices = PolygonVertices;
	Parms.RevolveOptions = RevolveOptions;
	Parms.Radius = Radius;
	Parms.Steps = Steps;
	Parms.RisePerRevolution = RisePerRevolution;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PrimitiveOptions != nullptr)
		*PrimitiveOptions = std::move(Parms.PrimitiveOptions);

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendSphereLatLong
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (BlueprintVisible, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// float                              Radius                                                           (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// int32                              StepsPhi                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              StepsTheta                                                       (BlueprintReadOnly, Net, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EGeometryScriptPrimitiveOriginModeOrigin                                                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, Config, EditConst, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendSphereLatLong(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, float Radius, int32 StepsPhi, int32 StepsTheta, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendSphereLatLong");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereLatLong_Params Parms{};

	Parms.Radius = Radius;
	Parms.StepsPhi = StepsPhi;
	Parms.StepsTheta = StepsTheta;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PrimitiveOptions != nullptr)
		*PrimitiveOptions = std::move(Parms.PrimitiveOptions);

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendSphereBox
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (BlueprintVisible, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// float                              Radius                                                           (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// int32                              StepsX                                                           (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              StepsY                                                           (ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              StepsZ                                                           (ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EGeometryScriptPrimitiveOriginModeOrigin                                                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, Config, EditConst, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendSphereBox(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, float Radius, int32* StepsX, int32* StepsY, int32* StepsZ, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendSphereBox");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereBox_Params Parms{};

	Parms.Radius = Radius;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PrimitiveOptions != nullptr)
		*PrimitiveOptions = std::move(Parms.PrimitiveOptions);

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	if (StepsX != nullptr)
		*StepsX = Parms.StepsX;

	if (StepsY != nullptr)
		*StepsY = Parms.StepsY;

	if (StepsZ != nullptr)
		*StepsZ = Parms.StepsZ;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendSimpleSweptPolygon
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (BlueprintVisible, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// TArray<struct FVector2D>           PolygonVertices                                                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FVector>             SweepPath                                                        (ConstParm, ExportObject, Net, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bLoop                                                            (Edit, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// bool                               bCapped                                                          (Edit, ConstParm, Net, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              StartScale                                                       (Edit, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              EndScale                                                         (ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendSimpleSweptPolygon(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, const TArray<struct FVector2D>& PolygonVertices, const TArray<struct FVector>& SweepPath, bool* bCapped, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendSimpleSweptPolygon");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleSweptPolygon_Params Parms{};

	Parms.PolygonVertices = PolygonVertices;
	Parms.SweepPath = SweepPath;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PrimitiveOptions != nullptr)
		*PrimitiveOptions = std::move(Parms.PrimitiveOptions);

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	if (bCapped != nullptr)
		*bCapped = Parms.bCapped;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendSimpleExtrudePolygon
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (BlueprintVisible, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// TArray<struct FVector2D>           PolygonVertices                                                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              Height                                                           (BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Config, EditConst)
// int32                              HeightSteps                                                      (ExportObject, Net, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bCapped                                                          (Edit, ConstParm, Net, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EGeometryScriptPrimitiveOriginModeOrigin                                                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, Config, EditConst, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendSimpleExtrudePolygon(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, const TArray<struct FVector2D>& PolygonVertices, float Height, int32* HeightSteps, bool* bCapped, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendSimpleExtrudePolygon");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleExtrudePolygon_Params Parms{};

	Parms.PolygonVertices = PolygonVertices;
	Parms.Height = Height;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PrimitiveOptions != nullptr)
		*PrimitiveOptions = std::move(Parms.PrimitiveOptions);

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	if (HeightSteps != nullptr)
		*HeightSteps = Parms.HeightSteps;

	if (bCapped != nullptr)
		*bCapped = Parms.bCapped;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendRoundRectangleXY
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (BlueprintVisible, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// float                              DimensionX                                                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              DimensionY                                                       (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              CornerRadius                                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
// int32                              StepsWidth                                                       (ConstParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              StepsHeight                                                      (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              StepsRound                                                       (BlueprintVisible, Net, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendRoundRectangleXY(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, float* DimensionX, float* DimensionY, int32 StepsWidth, int32* StepsHeight, int32 StepsRound, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendRoundRectangleXY");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangleXY_Params Parms{};

	Parms.StepsWidth = StepsWidth;
	Parms.StepsRound = StepsRound;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PrimitiveOptions != nullptr)
		*PrimitiveOptions = std::move(Parms.PrimitiveOptions);

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	if (DimensionX != nullptr)
		*DimensionX = Parms.DimensionX;

	if (DimensionY != nullptr)
		*DimensionY = Parms.DimensionY;

	if (StepsHeight != nullptr)
		*StepsHeight = Parms.StepsHeight;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendRoundRectangle_Compatibility_5_0
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (BlueprintVisible, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// float                              DimensionX                                                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              DimensionY                                                       (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              CornerRadius                                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
// int32                              StepsWidth                                                       (ConstParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              StepsHeight                                                      (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              StepsRound                                                       (BlueprintVisible, Net, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendRoundRectangle_Compatibility_5_0(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, float* DimensionX, float* DimensionY, int32 StepsWidth, int32* StepsHeight, int32 StepsRound, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendRoundRectangle_Compatibility_5_0");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangle_Compatibility_5_0_Params Parms{};

	Parms.StepsWidth = StepsWidth;
	Parms.StepsRound = StepsRound;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PrimitiveOptions != nullptr)
		*PrimitiveOptions = std::move(Parms.PrimitiveOptions);

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	if (DimensionX != nullptr)
		*DimensionX = Parms.DimensionX;

	if (DimensionY != nullptr)
		*DimensionY = Parms.DimensionY;

	if (StepsHeight != nullptr)
		*StepsHeight = Parms.StepsHeight;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendRevolvePolygon
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (BlueprintVisible, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// TArray<struct FVector2D>           PolygonVertices                                                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptRevolveOptionsRevolveOptions                                                   (BlueprintVisible, ExportObject, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              Radius                                                           (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// int32                              Steps                                                            (ExportObject, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendRevolvePolygon(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, const TArray<struct FVector2D>& PolygonVertices, const struct FGeometryScriptRevolveOptions& RevolveOptions, float Radius, int32 Steps, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendRevolvePolygon");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePolygon_Params Parms{};

	Parms.PolygonVertices = PolygonVertices;
	Parms.RevolveOptions = RevolveOptions;
	Parms.Radius = Radius;
	Parms.Steps = Steps;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PrimitiveOptions != nullptr)
		*PrimitiveOptions = std::move(Parms.PrimitiveOptions);

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendRevolvePath
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (BlueprintVisible, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// TArray<struct FVector2D>           PathVertices                                                     (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptRevolveOptionsRevolveOptions                                                   (BlueprintVisible, ExportObject, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              Steps                                                            (ExportObject, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bCapped                                                          (Edit, ConstParm, Net, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendRevolvePath(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, const TArray<struct FVector2D>& PathVertices, const struct FGeometryScriptRevolveOptions& RevolveOptions, int32 Steps, bool* bCapped, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendRevolvePath");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePath_Params Parms{};

	Parms.PathVertices = PathVertices;
	Parms.RevolveOptions = RevolveOptions;
	Parms.Steps = Steps;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PrimitiveOptions != nullptr)
		*PrimitiveOptions = std::move(Parms.PrimitiveOptions);

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	if (bCapped != nullptr)
		*bCapped = Parms.bCapped;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendRectangleXY
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (BlueprintVisible, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// float                              DimensionX                                                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              DimensionY                                                       (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              StepsWidth                                                       (ConstParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              StepsHeight                                                      (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendRectangleXY(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, float* DimensionX, float* DimensionY, int32 StepsWidth, int32* StepsHeight, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendRectangleXY");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangleXY_Params Parms{};

	Parms.StepsWidth = StepsWidth;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PrimitiveOptions != nullptr)
		*PrimitiveOptions = std::move(Parms.PrimitiveOptions);

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	if (DimensionX != nullptr)
		*DimensionX = Parms.DimensionX;

	if (DimensionY != nullptr)
		*DimensionY = Parms.DimensionY;

	if (StepsHeight != nullptr)
		*StepsHeight = Parms.StepsHeight;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendRectangle_Compatibility_5_0
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (BlueprintVisible, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// float                              DimensionX                                                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              DimensionY                                                       (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              StepsWidth                                                       (ConstParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              StepsHeight                                                      (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendRectangle_Compatibility_5_0(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, float* DimensionX, float* DimensionY, int32 StepsWidth, int32* StepsHeight, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendRectangle_Compatibility_5_0");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangle_Compatibility_5_0_Params Parms{};

	Parms.StepsWidth = StepsWidth;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PrimitiveOptions != nullptr)
		*PrimitiveOptions = std::move(Parms.PrimitiveOptions);

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	if (DimensionX != nullptr)
		*DimensionX = Parms.DimensionX;

	if (DimensionY != nullptr)
		*DimensionY = Parms.DimensionY;

	if (StepsHeight != nullptr)
		*StepsHeight = Parms.StepsHeight;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendLinearStairs
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (BlueprintVisible, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// float                              StepWidth                                                        (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              StepHeight                                                       (BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              StepDepth                                                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              NumSteps                                                         (Edit, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bFloating                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendLinearStairs(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, float* StepWidth, float* StepHeight, float* StepDepth, int32* NumSteps, bool* bFloating, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendLinearStairs");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendLinearStairs_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PrimitiveOptions != nullptr)
		*PrimitiveOptions = std::move(Parms.PrimitiveOptions);

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	if (StepWidth != nullptr)
		*StepWidth = Parms.StepWidth;

	if (StepHeight != nullptr)
		*StepHeight = Parms.StepHeight;

	if (StepDepth != nullptr)
		*StepDepth = Parms.StepDepth;

	if (NumSteps != nullptr)
		*NumSteps = Parms.NumSteps;

	if (bFloating != nullptr)
		*bFloating = Parms.bFloating;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendDisc
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (BlueprintVisible, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// float                              Radius                                                           (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// int32                              AngleSteps                                                       (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              SpokeSteps                                                       (Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              StartAngle                                                       (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              EndAngle                                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              HoleRadius                                                       (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendDisc(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, float Radius, int32* AngleSteps, int32* SpokeSteps, float* StartAngle, float* EndAngle, float* HoleRadius, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendDisc");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendDisc_Params Parms{};

	Parms.Radius = Radius;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PrimitiveOptions != nullptr)
		*PrimitiveOptions = std::move(Parms.PrimitiveOptions);

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	if (AngleSteps != nullptr)
		*AngleSteps = Parms.AngleSteps;

	if (SpokeSteps != nullptr)
		*SpokeSteps = Parms.SpokeSteps;

	if (StartAngle != nullptr)
		*StartAngle = Parms.StartAngle;

	if (EndAngle != nullptr)
		*EndAngle = Parms.EndAngle;

	if (HoleRadius != nullptr)
		*HoleRadius = Parms.HoleRadius;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendCylinder
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (BlueprintVisible, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// float                              Radius                                                           (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// float                              Height                                                           (BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Config, EditConst)
// int32                              RadialSteps                                                      (Edit, BlueprintVisible, Net, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
// int32                              HeightSteps                                                      (ExportObject, Net, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bCapped                                                          (Edit, ConstParm, Net, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EGeometryScriptPrimitiveOriginModeOrigin                                                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, Config, EditConst, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendCylinder(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, float Radius, float Height, int32 RadialSteps, int32* HeightSteps, bool* bCapped, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendCylinder");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCylinder_Params Parms{};

	Parms.Radius = Radius;
	Parms.Height = Height;
	Parms.RadialSteps = RadialSteps;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PrimitiveOptions != nullptr)
		*PrimitiveOptions = std::move(Parms.PrimitiveOptions);

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	if (HeightSteps != nullptr)
		*HeightSteps = Parms.HeightSteps;

	if (bCapped != nullptr)
		*bCapped = Parms.bCapped;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendCurvedStairs
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (BlueprintVisible, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// float                              StepWidth                                                        (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              StepHeight                                                       (BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              InnerRadius                                                      (Edit, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              CurveAngle                                                       (ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              NumSteps                                                         (Edit, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bFloating                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendCurvedStairs(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, float* StepWidth, float* StepHeight, float* CurveAngle, int32* NumSteps, bool* bFloating, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendCurvedStairs");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCurvedStairs_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PrimitiveOptions != nullptr)
		*PrimitiveOptions = std::move(Parms.PrimitiveOptions);

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	if (StepWidth != nullptr)
		*StepWidth = Parms.StepWidth;

	if (StepHeight != nullptr)
		*StepHeight = Parms.StepHeight;

	if (CurveAngle != nullptr)
		*CurveAngle = Parms.CurveAngle;

	if (NumSteps != nullptr)
		*NumSteps = Parms.NumSteps;

	if (bFloating != nullptr)
		*bFloating = Parms.bFloating;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendCone
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (BlueprintVisible, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// float                              BaseRadius                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              TopRadius                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              Height                                                           (BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Config, EditConst)
// int32                              RadialSteps                                                      (Edit, BlueprintVisible, Net, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
// int32                              HeightSteps                                                      (ExportObject, Net, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bCapped                                                          (Edit, ConstParm, Net, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EGeometryScriptPrimitiveOriginModeOrigin                                                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, Config, EditConst, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendCone(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, float* BaseRadius, float* TopRadius, float Height, int32 RadialSteps, int32* HeightSteps, bool* bCapped, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendCone");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCone_Params Parms{};

	Parms.Height = Height;
	Parms.RadialSteps = RadialSteps;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PrimitiveOptions != nullptr)
		*PrimitiveOptions = std::move(Parms.PrimitiveOptions);

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	if (BaseRadius != nullptr)
		*BaseRadius = Parms.BaseRadius;

	if (TopRadius != nullptr)
		*TopRadius = Parms.TopRadius;

	if (HeightSteps != nullptr)
		*HeightSteps = Parms.HeightSteps;

	if (bCapped != nullptr)
		*bCapped = Parms.bCapped;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendCapsule
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (BlueprintVisible, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// float                              Radius                                                           (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// float                              LineLength                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              HemisphereSteps                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              CircleSteps                                                      (Edit, BlueprintVisible, ExportObject, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EGeometryScriptPrimitiveOriginModeOrigin                                                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, Config, EditConst, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendCapsule(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, float Radius, float* LineLength, int32* HemisphereSteps, int32* CircleSteps, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendCapsule");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCapsule_Params Parms{};

	Parms.Radius = Radius;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PrimitiveOptions != nullptr)
		*PrimitiveOptions = std::move(Parms.PrimitiveOptions);

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	if (LineLength != nullptr)
		*LineLength = Parms.LineLength;

	if (HemisphereSteps != nullptr)
		*HemisphereSteps = Parms.HemisphereSteps;

	if (CircleSteps != nullptr)
		*CircleSteps = Parms.CircleSteps;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendBox
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (BlueprintVisible, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// float                              DimensionX                                                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              DimensionY                                                       (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              DimensionZ                                                       (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              StepsX                                                           (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              StepsY                                                           (ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              StepsZ                                                           (ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EGeometryScriptPrimitiveOriginModeOrigin                                                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, Config, EditConst, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendBox(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, float* DimensionX, float* DimensionY, float* DimensionZ, int32* StepsX, int32* StepsY, int32* StepsZ, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendBox");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendBox_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PrimitiveOptions != nullptr)
		*PrimitiveOptions = std::move(Parms.PrimitiveOptions);

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	if (DimensionX != nullptr)
		*DimensionX = Parms.DimensionX;

	if (DimensionY != nullptr)
		*DimensionY = Parms.DimensionY;

	if (DimensionZ != nullptr)
		*DimensionZ = Parms.DimensionZ;

	if (StepsX != nullptr)
		*StepsX = Parms.StepsX;

	if (StepsY != nullptr)
		*StepsY = Parms.StepsY;

	if (StepsZ != nullptr)
		*StepsZ = Parms.StepsZ;

	return Parms.ReturnValue;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions
// (None)

class UClass* UGeometryScriptLibrary_MeshQueryFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshQueryFunctions");

	return Clss;
}


// GeometryScriptLibrary_MeshQueryFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_MeshQueryFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_MeshQueryFunctions* UGeometryScriptLibrary_MeshQueryFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_MeshQueryFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_MeshQueryFunctions*>(UGeometryScriptLibrary_MeshQueryFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.IsValidVertexID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              VertexID                                                         (EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UGeometryScriptLibrary_MeshQueryFunctions::IsValidVertexID(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "IsValidVertexID");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_IsValidVertexID_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.IsValidTriangleID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              TriangleID                                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UGeometryScriptLibrary_MeshQueryFunctions::IsValidTriangleID(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "IsValidTriangleID");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_IsValidTriangleID_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetVertexPosition
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              VertexID                                                         (EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
// bool                               bIsValidVertex                                                   (BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool UGeometryScriptLibrary_MeshQueryFunctions::GetVertexPosition(const struct FVector& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetVertexPosition");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetVertexPosition_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetVertexCount
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::GetVertexCount(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetVertexCount");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetVertexCount_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetUVSetBoundingBox
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              UvSetIndex                                                       (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bIsValidUVSet                                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bUVSetIsEmpty                                                    (Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FBox2D                      ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UGeometryScriptLibrary_MeshQueryFunctions::GetUVSetBoundingBox(bool* bIsValidUVSet, bool* bUVSetIsEmpty, const struct FBox2D& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetUVSetBoundingBox");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetUVSetBoundingBox_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsValidUVSet != nullptr)
		*bIsValidUVSet = Parms.bIsValidUVSet;

	if (bUVSetIsEmpty != nullptr)
		*bUVSetIsEmpty = Parms.bUVSetIsEmpty;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTriangleVertexColors
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              TriangleID                                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
// struct FLinearColor                Color1                                                           (Edit, ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance)
// struct FLinearColor                Color2                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance)
// struct FLinearColor                Color3                                                           (Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance)
// bool                               bTriHasValidVertexColors                                         (BlueprintVisible, Net, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FLinearColor UGeometryScriptLibrary_MeshQueryFunctions::GetTriangleVertexColors(bool* bTriHasValidVertexColors, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetTriangleVertexColors");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleVertexColors_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bTriHasValidVertexColors != nullptr)
		*bTriHasValidVertexColors = Parms.bTriHasValidVertexColors;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTriangleUVs
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              UvSetIndex                                                       (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              TriangleID                                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
// struct FVector2D                   UV1                                                              (Edit, ConstParm, BlueprintReadOnly, Net, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FVector2D                   UV2                                                              (BlueprintReadOnly, Net, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FVector2D                   UV3                                                              (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               bHaveValidUVs                                                    (Edit, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

struct FVector2D UGeometryScriptLibrary_MeshQueryFunctions::GetTriangleUVs(const struct FVector2D& UV1, const struct FVector2D& UV2, bool* bHaveValidUVs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetTriangleUVs");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleUVs_Params Parms{};

	Parms.UV1 = UV1;
	Parms.UV2 = UV2;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bHaveValidUVs != nullptr)
		*bHaveValidUVs = Parms.bHaveValidUVs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTrianglePositions
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              TriangleID                                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
// bool                               bIsValidTriangle                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     Vertex1                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FVector                     Vertex2                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FVector                     Vertex3                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

bool UGeometryScriptLibrary_MeshQueryFunctions::GetTrianglePositions(const struct FVector& Vertex1, const struct FVector& Vertex2, const struct FVector& Vertex3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetTrianglePositions");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetTrianglePositions_Params Parms{};

	Parms.Vertex1 = Vertex1;
	Parms.Vertex2 = Vertex2;
	Parms.Vertex3 = Vertex3;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTriangleNormalTangents
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              TriangleID                                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
// bool                               bTriHasValidElements                                             (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptTriangle     Normals                                                          (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// struct FGeometryScriptTriangle     Tangents                                                         (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptTriangle     BiTangents                                                       (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FGeometryScriptTriangle UGeometryScriptLibrary_MeshQueryFunctions::GetTriangleNormalTangents(bool bTriHasValidElements, struct FGeometryScriptTriangle* Tangents, struct FGeometryScriptTriangle* BiTangents, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetTriangleNormalTangents");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormalTangents_Params Parms{};

	Parms.bTriHasValidElements = bTriHasValidElements;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Tangents != nullptr)
		*Tangents = std::move(Parms.Tangents);

	if (BiTangents != nullptr)
		*BiTangents = std::move(Parms.BiTangents);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTriangleNormals
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              TriangleID                                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
// struct FVector                     Normal1                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     Normal2                                                          (Edit, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     Normal3                                                          (BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bTriHasValidNormals                                              (Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UGeometryScriptLibrary_MeshQueryFunctions::GetTriangleNormals(struct FVector* Normal1, struct FVector* Normal2, struct FVector* Normal3, bool bTriHasValidNormals, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetTriangleNormals");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormals_Params Parms{};

	Parms.bTriHasValidNormals = bTriHasValidNormals;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Normal1 != nullptr)
		*Normal1 = std::move(Parms.Normal1);

	if (Normal2 != nullptr)
		*Normal2 = std::move(Parms.Normal2);

	if (Normal3 != nullptr)
		*Normal3 = std::move(Parms.Normal3);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTriangleIndices
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              TriangleID                                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
// bool                               bIsValidTriangle                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FIntVector                  ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool UGeometryScriptLibrary_MeshQueryFunctions::GetTriangleIndices(const struct FIntVector& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetTriangleIndices");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleIndices_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTriangleFaceNormal
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              TriangleID                                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
// bool                               bIsValidTriangle                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool UGeometryScriptLibrary_MeshQueryFunctions::GetTriangleFaceNormal(const struct FVector& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetTriangleFaceNormal");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleFaceNormal_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetNumVertexIDs
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::GetNumVertexIDs(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetNumVertexIDs");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetNumVertexIDs_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetNumUVSets
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::GetNumUVSets(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetNumUVSets");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetNumUVSets_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetNumTriangleIDs
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::GetNumTriangleIDs(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetNumTriangleIDs");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetNumTriangleIDs_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetNumOpenBorderLoops
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bAmbiguousTopologyFound                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::GetNumOpenBorderLoops(bool* bAmbiguousTopologyFound, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetNumOpenBorderLoops");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetNumOpenBorderLoops_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bAmbiguousTopologyFound != nullptr)
		*bAmbiguousTopologyFound = Parms.bAmbiguousTopologyFound;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetNumOpenBorderEdges
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::GetNumOpenBorderEdges(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetNumOpenBorderEdges");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetNumOpenBorderEdges_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetNumExtendedPolygroupLayers
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::GetNumExtendedPolygroupLayers(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetNumExtendedPolygroupLayers");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetNumExtendedPolygroupLayers_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetNumConnectedComponents
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::GetNumConnectedComponents(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetNumConnectedComponents");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetNumConnectedComponents_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetMeshVolumeArea
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              SurfaceArea                                                      (ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              Volume                                                           (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config)

class UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::GetMeshVolumeArea(float* SurfaceArea, float* Volume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetMeshVolumeArea");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetMeshVolumeArea_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SurfaceArea != nullptr)
		*SurfaceArea = Parms.SurfaceArea;

	if (Volume != nullptr)
		*Volume = Parms.Volume;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetMeshInfoString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FString                      ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::GetMeshInfoString(const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetMeshInfoString");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetMeshInfoString_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetMeshHasAttributeSet
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::GetMeshHasAttributeSet(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetMeshHasAttributeSet");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetMeshHasAttributeSet_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetMeshBoundingBox
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FBox                        ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::GetMeshBoundingBox(const struct FBox& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetMeshBoundingBox");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetMeshBoundingBox_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetIsDenseMesh
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::GetIsDenseMesh(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetIsDenseMesh");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetIsDenseMesh_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetIsClosedMesh
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::GetIsClosedMesh(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetIsClosedMesh");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetIsClosedMesh_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetInterpolatedTriangleVertexColor
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              TriangleID                                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
// struct FVector                     BarycentricCoords                                                (Edit, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FLinearColor                DefaultColor                                                     (Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bTriHasValidVertexColors                                         (BlueprintVisible, Net, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FLinearColor                InterpolatedColor                                                (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UGeometryScriptLibrary_MeshQueryFunctions::GetInterpolatedTriangleVertexColor(const struct FVector& BarycentricCoords, struct FLinearColor* DefaultColor, bool* bTriHasValidVertexColors, struct FLinearColor* InterpolatedColor, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetInterpolatedTriangleVertexColor");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleVertexColor_Params Parms{};

	Parms.BarycentricCoords = BarycentricCoords;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (DefaultColor != nullptr)
		*DefaultColor = std::move(Parms.DefaultColor);

	if (bTriHasValidVertexColors != nullptr)
		*bTriHasValidVertexColors = Parms.bTriHasValidVertexColors;

	if (InterpolatedColor != nullptr)
		*InterpolatedColor = std::move(Parms.InterpolatedColor);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetInterpolatedTriangleUV
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              UvSetIndex                                                       (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              TriangleID                                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
// struct FVector                     BarycentricCoords                                                (Edit, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bTriHasValidUVs                                                  (Edit, BlueprintReadOnly, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector2D                   InterpolatedUV                                                   (Edit, ExportObject, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UGeometryScriptLibrary_MeshQueryFunctions::GetInterpolatedTriangleUV(const struct FVector& BarycentricCoords, bool* bTriHasValidUVs, struct FVector2D* InterpolatedUV, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetInterpolatedTriangleUV");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleUV_Params Parms{};

	Parms.BarycentricCoords = BarycentricCoords;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bTriHasValidUVs != nullptr)
		*bTriHasValidUVs = Parms.bTriHasValidUVs;

	if (InterpolatedUV != nullptr)
		*InterpolatedUV = std::move(Parms.InterpolatedUV);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetInterpolatedTrianglePosition
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              TriangleID                                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
// struct FVector                     BarycentricCoords                                                (Edit, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bIsValidTriangle                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     InterpolatedPosition                                             (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool UGeometryScriptLibrary_MeshQueryFunctions::GetInterpolatedTrianglePosition(const struct FVector& BarycentricCoords, const struct FVector& InterpolatedPosition, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetInterpolatedTrianglePosition");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTrianglePosition_Params Parms{};

	Parms.BarycentricCoords = BarycentricCoords;
	Parms.InterpolatedPosition = InterpolatedPosition;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetInterpolatedTriangleNormalTangents
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              TriangleID                                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
// struct FVector                     BarycentricCoords                                                (Edit, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bTriHasValidElements                                             (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     InterpolatedNormal                                               (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     InterpolatedTangent                                              (ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     InterpolatedBiTangent                                            (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UGeometryScriptLibrary_MeshQueryFunctions::GetInterpolatedTriangleNormalTangents(const struct FVector& BarycentricCoords, bool bTriHasValidElements, const struct FVector& InterpolatedNormal, const struct FVector& InterpolatedTangent, const struct FVector& InterpolatedBiTangent, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetInterpolatedTriangleNormalTangents");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormalTangents_Params Parms{};

	Parms.BarycentricCoords = BarycentricCoords;
	Parms.bTriHasValidElements = bTriHasValidElements;
	Parms.InterpolatedNormal = InterpolatedNormal;
	Parms.InterpolatedTangent = InterpolatedTangent;
	Parms.InterpolatedBiTangent = InterpolatedBiTangent;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetInterpolatedTriangleNormal
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              TriangleID                                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
// struct FVector                     BarycentricCoords                                                (Edit, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bTriHasValidNormals                                              (Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     InterpolatedNormal                                               (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UGeometryScriptLibrary_MeshQueryFunctions::GetInterpolatedTriangleNormal(const struct FVector& BarycentricCoords, bool bTriHasValidNormals, const struct FVector& InterpolatedNormal, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetInterpolatedTriangleNormal");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormal_Params Parms{};

	Parms.BarycentricCoords = BarycentricCoords;
	Parms.bTriHasValidNormals = bTriHasValidNormals;
	Parms.InterpolatedNormal = InterpolatedNormal;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetHasVertexIDGaps
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::GetHasVertexIDGaps(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetHasVertexIDGaps");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetHasVertexIDGaps_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetHasVertexColors
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::GetHasVertexColors(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetHasVertexColors");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetHasVertexColors_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetHasTriangleNormals
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::GetHasTriangleNormals(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetHasTriangleNormals");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetHasTriangleNormals_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetHasTriangleIDGaps
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::GetHasTriangleIDGaps(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetHasTriangleIDGaps");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetHasTriangleIDGaps_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetHasPolygroups
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::GetHasPolygroups(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetHasPolygroups");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetHasPolygroups_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetHasMaterialIDs
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::GetHasMaterialIDs(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetHasMaterialIDs");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetHasMaterialIDs_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetAllVertexPositions
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptVectorList   PositionList                                                     (Edit, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bSkipGaps                                                        (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bHasVertexIDGaps                                                 (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FGeometryScriptVectorList UGeometryScriptLibrary_MeshQueryFunctions::GetAllVertexPositions(bool bSkipGaps, bool bHasVertexIDGaps, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetAllVertexPositions");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexPositions_Params Parms{};

	Parms.bSkipGaps = bSkipGaps;
	Parms.bHasVertexIDGaps = bHasVertexIDGaps;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetAllVertexIDs
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptIndexList    VertexIDList                                                     (EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bHasVertexIDGaps                                                 (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::GetAllVertexIDs(const struct FGeometryScriptIndexList& VertexIDList, bool bHasVertexIDGaps, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetAllVertexIDs");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexIDs_Params Parms{};

	Parms.VertexIDList = VertexIDList;
	Parms.bHasVertexIDGaps = bHasVertexIDGaps;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetAllTriangleIndices
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptTriangleList TriangleList                                                     (Edit, ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bSkipGaps                                                        (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bHasTriangleIDGaps                                               (BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FGeometryScriptTriangleList UGeometryScriptLibrary_MeshQueryFunctions::GetAllTriangleIndices(bool bSkipGaps, bool bHasTriangleIDGaps, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetAllTriangleIndices");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetAllTriangleIndices_Params Parms{};

	Parms.bSkipGaps = bSkipGaps;
	Parms.bHasTriangleIDGaps = bHasTriangleIDGaps;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetAllTriangleIDs
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptIndexList    TriangleIDList                                                   (Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bHasTriangleIDGaps                                               (BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::GetAllTriangleIDs(const struct FGeometryScriptIndexList& TriangleIDList, bool bHasTriangleIDGaps, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetAllTriangleIDs");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetAllTriangleIDs_Params Parms{};

	Parms.TriangleIDList = TriangleIDList;
	Parms.bHasTriangleIDGaps = bHasTriangleIDGaps;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.ComputeTriangleBarycentricCoords
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              TriangleID                                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
// bool                               bIsValidTriangle                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     Point                                                            (ConstParm, Parm, ReturnParm)
// struct FVector                     Vertex1                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FVector                     Vertex2                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FVector                     Vertex3                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     BarycentricCoords                                                (Edit, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector UGeometryScriptLibrary_MeshQueryFunctions::ComputeTriangleBarycentricCoords(const struct FVector& Vertex1, const struct FVector& Vertex2, const struct FVector& Vertex3, const struct FVector& BarycentricCoords, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "ComputeTriangleBarycentricCoords");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_ComputeTriangleBarycentricCoords_Params Parms{};

	Parms.Vertex1 = Vertex1;
	Parms.Vertex2 = Vertex2;
	Parms.Vertex3 = Vertex3;
	Parms.BarycentricCoords = BarycentricCoords;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_RemeshingFunctions
// (None)

class UClass* UGeometryScriptLibrary_RemeshingFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_RemeshingFunctions");

	return Clss;
}


// GeometryScriptLibrary_RemeshingFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_RemeshingFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_RemeshingFunctions* UGeometryScriptLibrary_RemeshingFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_RemeshingFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_RemeshingFunctions*>(UGeometryScriptLibrary_RemeshingFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_RemeshingFunctions.ApplyUniformRemesh
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptRemeshOptionsRemeshOptions                                                    (Edit, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptUniformRemeshOptionsUniformOptions                                                   (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_RemeshingFunctions::ApplyUniformRemesh(struct FGeometryScriptRemeshOptions* RemeshOptions, struct FGeometryScriptUniformRemeshOptions* UniformOptions, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_RemeshingFunctions", "ApplyUniformRemesh");

	Params::UGeometryScriptLibrary_RemeshingFunctions_ApplyUniformRemesh_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (RemeshOptions != nullptr)
		*RemeshOptions = std::move(Parms.RemeshOptions);

	if (UniformOptions != nullptr)
		*UniformOptions = std::move(Parms.UniformOptions);

	return Parms.ReturnValue;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions
// (None)

class UClass* UGeometryScriptLibrary_MeshRepairFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshRepairFunctions");

	return Clss;
}


// GeometryScriptLibrary_MeshRepairFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_MeshRepairFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_MeshRepairFunctions* UGeometryScriptLibrary_MeshRepairFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_MeshRepairFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_MeshRepairFunctions*>(UGeometryScriptLibrary_MeshRepairFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.WeldMeshEdges
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptWeldEdgesOptionsWeldOptions                                                      (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshRepairFunctions::WeldMeshEdges(struct FGeometryScriptWeldEdgesOptions* WeldOptions, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshRepairFunctions", "WeldMeshEdges");

	Params::UGeometryScriptLibrary_MeshRepairFunctions_WeldMeshEdges_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WeldOptions != nullptr)
		*WeldOptions = std::move(Parms.WeldOptions);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.SplitMeshBowties
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bMeshBowties                                                     (BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bAttributeBowties                                                (ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshRepairFunctions::SplitMeshBowties(bool* bMeshBowties, bool* bAttributeBowties, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshRepairFunctions", "SplitMeshBowties");

	Params::UGeometryScriptLibrary_MeshRepairFunctions_SplitMeshBowties_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bMeshBowties != nullptr)
		*bMeshBowties = Parms.bMeshBowties;

	if (bAttributeBowties != nullptr)
		*bAttributeBowties = Parms.bAttributeBowties;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.ResolveMeshTJunctions
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptResolveTJunctionOptionsResolveOptions                                                   (ConstParm, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshRepairFunctions::ResolveMeshTJunctions(struct FGeometryScriptResolveTJunctionOptions* ResolveOptions, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshRepairFunctions", "ResolveMeshTJunctions");

	Params::UGeometryScriptLibrary_MeshRepairFunctions_ResolveMeshTJunctions_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ResolveOptions != nullptr)
		*ResolveOptions = std::move(Parms.ResolveOptions);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.RepairMeshDegenerateGeometry
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptDegenerateTriangleOptionsOptions                                                          (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshRepairFunctions::RepairMeshDegenerateGeometry(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshRepairFunctions", "RepairMeshDegenerateGeometry");

	Params::UGeometryScriptLibrary_MeshRepairFunctions_RepairMeshDegenerateGeometry_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.RemoveSmallComponents
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptRemoveSmallComponentOptionsOptions                                                          (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshRepairFunctions::RemoveSmallComponents(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshRepairFunctions", "RemoveSmallComponents");

	Params::UGeometryScriptLibrary_MeshRepairFunctions_RemoveSmallComponents_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.RemoveHiddenTriangles
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptRemoveHiddenTrianglesOptionsOptions                                                          (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshRepairFunctions::RemoveHiddenTriangles(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshRepairFunctions", "RemoveHiddenTriangles");

	Params::UGeometryScriptLibrary_MeshRepairFunctions_RemoveHiddenTriangles_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.FillAllMeshHoles
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptFillHolesOptionsFillOptions                                                      (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              NumFilledHoles                                                   (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              NumFailedHoleFills                                               (Edit, ExportObject, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshRepairFunctions::FillAllMeshHoles(struct FGeometryScriptFillHolesOptions* FillOptions, int32* NumFilledHoles, int32* NumFailedHoleFills, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshRepairFunctions", "FillAllMeshHoles");

	Params::UGeometryScriptLibrary_MeshRepairFunctions_FillAllMeshHoles_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (FillOptions != nullptr)
		*FillOptions = std::move(Parms.FillOptions);

	if (NumFilledHoles != nullptr)
		*NumFilledHoles = Parms.NumFilledHoles;

	if (NumFailedHoleFills != nullptr)
		*NumFailedHoleFills = Parms.NumFailedHoleFills;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.CompactMesh
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshRepairFunctions::CompactMesh(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshRepairFunctions", "CompactMesh");

	Params::UGeometryScriptLibrary_MeshRepairFunctions_CompactMesh_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_MeshSamplingFunctions
// (None)

class UClass* UGeometryScriptLibrary_MeshSamplingFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshSamplingFunctions");

	return Clss;
}


// GeometryScriptLibrary_MeshSamplingFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_MeshSamplingFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_MeshSamplingFunctions* UGeometryScriptLibrary_MeshSamplingFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_MeshSamplingFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_MeshSamplingFunctions*>(UGeometryScriptLibrary_MeshSamplingFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSamplingFunctions.ComputeVertexWeightedPointSampling
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshPointSamplingOptionsOptions                                                          (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FGeometryScriptNonUniformPointSamplingOptionsNonUniformOptions                                                (BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptScalarList   VertexWeights                                                    (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FTransform>          Samples                                                          (ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// TArray<double>                     SampleRadii                                                      (Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptIndexList    TriangleIDs                                                      (ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshSamplingFunctions::ComputeVertexWeightedPointSampling(struct FGeometryScriptNonUniformPointSamplingOptions* NonUniformOptions, struct FGeometryScriptScalarList* VertexWeights, TArray<double>* SampleRadii, struct FGeometryScriptIndexList* TriangleIDs, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSamplingFunctions", "ComputeVertexWeightedPointSampling");

	Params::UGeometryScriptLibrary_MeshSamplingFunctions_ComputeVertexWeightedPointSampling_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NonUniformOptions != nullptr)
		*NonUniformOptions = std::move(Parms.NonUniformOptions);

	if (VertexWeights != nullptr)
		*VertexWeights = std::move(Parms.VertexWeights);

	if (SampleRadii != nullptr)
		*SampleRadii = std::move(Parms.SampleRadii);

	if (TriangleIDs != nullptr)
		*TriangleIDs = std::move(Parms.TriangleIDs);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSamplingFunctions.ComputePointSampling
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshPointSamplingOptionsOptions                                                          (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// TArray<struct FTransform>          Samples                                                          (ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FGeometryScriptIndexList    TriangleIDs                                                      (ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshSamplingFunctions::ComputePointSampling(struct FGeometryScriptIndexList* TriangleIDs, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSamplingFunctions", "ComputePointSampling");

	Params::UGeometryScriptLibrary_MeshSamplingFunctions_ComputePointSampling_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TriangleIDs != nullptr)
		*TriangleIDs = std::move(Parms.TriangleIDs);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSamplingFunctions.ComputeNonUniformPointSampling
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshPointSamplingOptionsOptions                                                          (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FGeometryScriptNonUniformPointSamplingOptionsNonUniformOptions                                                (BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FTransform>          Samples                                                          (ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// TArray<double>                     SampleRadii                                                      (Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptIndexList    TriangleIDs                                                      (ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshSamplingFunctions::ComputeNonUniformPointSampling(struct FGeometryScriptNonUniformPointSamplingOptions* NonUniformOptions, TArray<double>* SampleRadii, struct FGeometryScriptIndexList* TriangleIDs, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSamplingFunctions", "ComputeNonUniformPointSampling");

	Params::UGeometryScriptLibrary_MeshSamplingFunctions_ComputeNonUniformPointSampling_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NonUniformOptions != nullptr)
		*NonUniformOptions = std::move(Parms.NonUniformOptions);

	if (SampleRadii != nullptr)
		*SampleRadii = std::move(Parms.SampleRadii);

	if (TriangleIDs != nullptr)
		*TriangleIDs = std::move(Parms.TriangleIDs);

	return Parms.ReturnValue;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions
// (None)

class UClass* UGeometryScriptLibrary_MeshSelectionFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshSelectionFunctions");

	return Clss;
}


// GeometryScriptLibrary_MeshSelectionFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_MeshSelectionFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_MeshSelectionFunctions* UGeometryScriptLibrary_MeshSelectionFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_MeshSelectionFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_MeshSelectionFunctions*>(UGeometryScriptLibrary_MeshSelectionFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.SelectMeshElementsWithPlane
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FVector                     PlaneOrigin                                                      (Edit, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     PlaneNormal                                                      (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class EGeometryScriptMeshSelectionTypeSelectionType                                                    (ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               bInvert                                                          (ConstParm, BlueprintVisible, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              MinNumTrianglePoints                                             (ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshElementsWithPlane(struct FGeometryScriptMeshSelection* Selection, bool bInvert, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionFunctions", "SelectMeshElementsWithPlane");

	Params::UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsWithPlane_Params Parms{};

	Parms.bInvert = bInvert;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Selection != nullptr)
		*Selection = std::move(Parms.Selection);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.SelectMeshElementsInSphere
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FVector                     SphereOrigin                                                     (ConstParm, BlueprintVisible, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             SphereRadius                                                     (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class EGeometryScriptMeshSelectionTypeSelectionType                                                    (ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               bInvert                                                          (ConstParm, BlueprintVisible, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              MinNumTrianglePoints                                             (ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshElementsInSphere(struct FGeometryScriptMeshSelection* Selection, bool bInvert, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionFunctions", "SelectMeshElementsInSphere");

	Params::UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInSphere_Params Parms{};

	Parms.bInvert = bInvert;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Selection != nullptr)
		*Selection = std::move(Parms.Selection);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.SelectMeshElementsInsideMesh
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                SelectionMesh                                                    (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FTransform                  SelectionMeshTransform                                           (ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EGeometryScriptMeshSelectionTypeSelectionType                                                    (ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               bInvert                                                          (ConstParm, BlueprintVisible, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             ShellDistance                                                    (ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             WindingThreshold                                                 (Edit, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              MinNumTrianglePoints                                             (ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshElementsInsideMesh(struct FGeometryScriptMeshSelection* Selection, bool bInvert, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionFunctions", "SelectMeshElementsInsideMesh");

	Params::UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInsideMesh_Params Parms{};

	Parms.bInvert = bInvert;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Selection != nullptr)
		*Selection = std::move(Parms.Selection);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.SelectMeshElementsInBox
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FBox                        Box                                                              (Edit, ConstParm, ExportObject, OutParm)
// enum class EGeometryScriptMeshSelectionTypeSelectionType                                                    (ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               bInvert                                                          (ConstParm, BlueprintVisible, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              MinNumTrianglePoints                                             (ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshElementsInBox(struct FGeometryScriptMeshSelection* Selection, struct FBox* Box, bool bInvert, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionFunctions", "SelectMeshElementsInBox");

	Params::UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInBox_Params Parms{};

	Parms.bInvert = bInvert;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Selection != nullptr)
		*Selection = std::move(Parms.Selection);

	if (Box != nullptr)
		*Box = std::move(Parms.Box);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.SelectMeshElementsByNormalAngle
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FVector                     Normal                                                           (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst)
// double                             MaxAngleDeg                                                      (Edit, ConstParm, Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EGeometryScriptMeshSelectionTypeSelectionType                                                    (ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               bInvert                                                          (ConstParm, BlueprintVisible, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              MinNumTrianglePoints                                             (ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshElementsByNormalAngle(struct FGeometryScriptMeshSelection* Selection, bool bInvert, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionFunctions", "SelectMeshElementsByNormalAngle");

	Params::UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsByNormalAngle_Params Parms{};

	Parms.bInvert = bInvert;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Selection != nullptr)
		*Selection = std::move(Parms.Selection);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.InvertMeshSelection
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionNewSelection                                                     (Edit, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bOnlyToConnected                                                 (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool UGeometryScriptLibrary_MeshSelectionFunctions::InvertMeshSelection(struct FGeometryScriptMeshSelection* Selection, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionFunctions", "InvertMeshSelection");

	Params::UGeometryScriptLibrary_MeshSelectionFunctions_InvertMeshSelection_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Selection != nullptr)
		*Selection = std::move(Parms.Selection);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.GetMeshSelectionInfo
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// enum class EGeometryScriptMeshSelectionTypeSelectionType                                                    (ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int32                              NumSelected                                                      (ExportObject, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

int32 UGeometryScriptLibrary_MeshSelectionFunctions::GetMeshSelectionInfo(struct FGeometryScriptMeshSelection* Selection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionFunctions", "GetMeshSelectionInfo");

	Params::UGeometryScriptLibrary_MeshSelectionFunctions_GetMeshSelectionInfo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Selection != nullptr)
		*Selection = std::move(Parms.Selection);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ExpandMeshSelectionToConnected
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionNewSelection                                                     (Edit, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EGeometryScriptTopologyConnectionTypeConnectionType                                                   (BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FGeometryScriptMeshSelection UGeometryScriptLibrary_MeshSelectionFunctions::ExpandMeshSelectionToConnected(struct FGeometryScriptMeshSelection* Selection, enum class EGeometryScriptTopologyConnectionType ConnectionType, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionFunctions", "ExpandMeshSelectionToConnected");

	Params::UGeometryScriptLibrary_MeshSelectionFunctions_ExpandMeshSelectionToConnected_Params Parms{};

	Parms.ConnectionType = ConnectionType;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Selection != nullptr)
		*Selection = std::move(Parms.Selection);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ExpandContractMeshSelection
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionNewSelection                                                     (Edit, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              Iterations                                                       (Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
// bool                               bContract                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bOnlyExpandToFaceNeighbours                                      (BlueprintVisible, ExportObject, Net, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool UGeometryScriptLibrary_MeshSelectionFunctions::ExpandContractMeshSelection(struct FGeometryScriptMeshSelection* Selection, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionFunctions", "ExpandContractMeshSelection");

	Params::UGeometryScriptLibrary_MeshSelectionFunctions_ExpandContractMeshSelection_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Selection != nullptr)
		*Selection = std::move(Parms.Selection);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.DebugPrintMeshSelection
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// bool                               bDisable                                                         (Edit, ConstParm, BlueprintVisible, Net, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

bool UGeometryScriptLibrary_MeshSelectionFunctions::DebugPrintMeshSelection(struct FGeometryScriptMeshSelection* Selection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionFunctions", "DebugPrintMeshSelection");

	Params::UGeometryScriptLibrary_MeshSelectionFunctions_DebugPrintMeshSelection_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Selection != nullptr)
		*Selection = std::move(Parms.Selection);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.CreateSelectAllMeshSelection
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// enum class EGeometryScriptMeshSelectionTypeSelectionType                                                    (ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

enum class EGeometryScriptMeshSelectionType UGeometryScriptLibrary_MeshSelectionFunctions::CreateSelectAllMeshSelection(struct FGeometryScriptMeshSelection* Selection, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionFunctions", "CreateSelectAllMeshSelection");

	Params::UGeometryScriptLibrary_MeshSelectionFunctions_CreateSelectAllMeshSelection_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Selection != nullptr)
		*Selection = std::move(Parms.Selection);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ConvertMeshSelectionToIndexList
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptIndexList    IndexList                                                        (BlueprintVisible, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EGeometryScriptIndexTypeResultListType                                                   (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EGeometryScriptIndexTypeConvertToType                                                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

enum class EGeometryScriptIndexType UGeometryScriptLibrary_MeshSelectionFunctions::ConvertMeshSelectionToIndexList(struct FGeometryScriptMeshSelection* Selection, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionFunctions", "ConvertMeshSelectionToIndexList");

	Params::UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelectionToIndexList_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Selection != nullptr)
		*Selection = std::move(Parms.Selection);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ConvertMeshSelectionToIndexArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// TArray<int32>                      IndexArray                                                       (Edit, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EGeometryScriptMeshSelectionTypeSelectionType                                                    (ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

enum class EGeometryScriptMeshSelectionType UGeometryScriptLibrary_MeshSelectionFunctions::ConvertMeshSelectionToIndexArray(struct FGeometryScriptMeshSelection* Selection, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionFunctions", "ConvertMeshSelectionToIndexArray");

	Params::UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelectionToIndexArray_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Selection != nullptr)
		*Selection = std::move(Parms.Selection);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ConvertMeshSelection
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionFromSelection                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionToSelection                                                      (ExportObject, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EGeometryScriptMeshSelectionTypeNewType                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               bAllowPartialInclusion                                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FGeometryScriptMeshSelection UGeometryScriptLibrary_MeshSelectionFunctions::ConvertMeshSelection(enum class EGeometryScriptMeshSelectionType* NewType, bool* bAllowPartialInclusion, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionFunctions", "ConvertMeshSelection");

	Params::UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelection_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NewType != nullptr)
		*NewType = Parms.NewType;

	if (bAllowPartialInclusion != nullptr)
		*bAllowPartialInclusion = Parms.bAllowPartialInclusion;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ConvertIndexSetToMeshSelection
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TSet<int32>                        IndexSet                                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EGeometryScriptMeshSelectionTypeSelectionType                                                    (ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

enum class EGeometryScriptMeshSelectionType UGeometryScriptLibrary_MeshSelectionFunctions::ConvertIndexSetToMeshSelection(TSet<int32>* IndexSet, struct FGeometryScriptMeshSelection* Selection, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionFunctions", "ConvertIndexSetToMeshSelection");

	Params::UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexSetToMeshSelection_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (IndexSet != nullptr)
		*IndexSet = Parms.IndexSet;

	if (Selection != nullptr)
		*Selection = std::move(Parms.Selection);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ConvertIndexListToMeshSelection
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptIndexList    IndexList                                                        (BlueprintVisible, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EGeometryScriptMeshSelectionTypeSelectionType                                                    (ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

enum class EGeometryScriptMeshSelectionType UGeometryScriptLibrary_MeshSelectionFunctions::ConvertIndexListToMeshSelection(struct FGeometryScriptMeshSelection* Selection, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionFunctions", "ConvertIndexListToMeshSelection");

	Params::UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexListToMeshSelection_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Selection != nullptr)
		*Selection = std::move(Parms.Selection);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ConvertIndexArrayToMeshSelection
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<int32>                      IndexArray                                                       (Edit, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EGeometryScriptMeshSelectionTypeSelectionType                                                    (ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

enum class EGeometryScriptMeshSelectionType UGeometryScriptLibrary_MeshSelectionFunctions::ConvertIndexArrayToMeshSelection(struct FGeometryScriptMeshSelection* Selection, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionFunctions", "ConvertIndexArrayToMeshSelection");

	Params::UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexArrayToMeshSelection_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Selection != nullptr)
		*Selection = std::move(Parms.Selection);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.CombineMeshSelections
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptMeshSelectionSelectionA                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelectionB                                                       (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionResultSelection                                                  (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EGeometryScriptCombineSelectionModeCombineMode                                                      (ConstParm, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

enum class EGeometryScriptCombineSelectionMode UGeometryScriptLibrary_MeshSelectionFunctions::CombineMeshSelections(struct FGeometryScriptMeshSelection* SelectionA, struct FGeometryScriptMeshSelection* SelectionB, struct FGeometryScriptMeshSelection* ResultSelection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionFunctions", "CombineMeshSelections");

	Params::UGeometryScriptLibrary_MeshSelectionFunctions_CombineMeshSelections_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SelectionA != nullptr)
		*SelectionA = std::move(Parms.SelectionA);

	if (SelectionB != nullptr)
		*SelectionB = std::move(Parms.SelectionB);

	if (ResultSelection != nullptr)
		*ResultSelection = std::move(Parms.ResultSelection);

	return Parms.ReturnValue;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionQueryFunctions
// (None)

class UClass* UGeometryScriptLibrary_MeshSelectionQueryFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshSelectionQueryFunctions");

	return Clss;
}


// GeometryScriptLibrary_MeshSelectionQueryFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_MeshSelectionQueryFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_MeshSelectionQueryFunctions* UGeometryScriptLibrary_MeshSelectionQueryFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_MeshSelectionQueryFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_MeshSelectionQueryFunctions*>(UGeometryScriptLibrary_MeshSelectionQueryFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionQueryFunctions.GetMeshSelectionBoundingBox
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FBox                        SelectionBounds                                                  (ConstParm, ExportObject, Net, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bIsEmpty                                                         (Edit, BlueprintVisible, Net, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshSelectionQueryFunctions::GetMeshSelectionBoundingBox(struct FGeometryScriptMeshSelection* Selection, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionQueryFunctions", "GetMeshSelectionBoundingBox");

	Params::UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundingBox_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Selection != nullptr)
		*Selection = std::move(Parms.Selection);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionQueryFunctions.GetMeshSelectionBoundaryLoops
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// TArray<struct FGeometryScriptIndexList>IndexLoops                                                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FGeometryScriptPolyPath>PathLoops                                                        (Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              NumLoops                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bFoundErrors                                                     (Edit, BlueprintVisible, ExportObject, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshSelectionQueryFunctions::GetMeshSelectionBoundaryLoops(struct FGeometryScriptMeshSelection* Selection, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionQueryFunctions", "GetMeshSelectionBoundaryLoops");

	Params::UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundaryLoops_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Selection != nullptr)
		*Selection = std::move(Parms.Selection);

	return Parms.ReturnValue;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_MeshSimplifyFunctions
// (None)

class UClass* UGeometryScriptLibrary_MeshSimplifyFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshSimplifyFunctions");

	return Clss;
}


// GeometryScriptLibrary_MeshSimplifyFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_MeshSimplifyFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_MeshSimplifyFunctions* UGeometryScriptLibrary_MeshSimplifyFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_MeshSimplifyFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_MeshSimplifyFunctions*>(UGeometryScriptLibrary_MeshSimplifyFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSimplifyFunctions.ApplySimplifyToVertexCount
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              Vertexcount                                                      (Edit, ConstParm, ExportObject, Parm, ZeroConstructor, Transient, Config)
// struct FGeometryScriptSimplifyMeshOptionsOptions                                                          (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshSimplifyFunctions::ApplySimplifyToVertexCount(int32 Vertexcount, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSimplifyFunctions", "ApplySimplifyToVertexCount");

	Params::UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToVertexCount_Params Parms{};

	Parms.Vertexcount = Vertexcount;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSimplifyFunctions.ApplySimplifyToTriangleCount
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              TriangleCount                                                    (ExportObject, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptSimplifyMeshOptionsOptions                                                          (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshSimplifyFunctions::ApplySimplifyToTriangleCount(int32* TriangleCount, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSimplifyFunctions", "ApplySimplifyToTriangleCount");

	Params::UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToTriangleCount_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TriangleCount != nullptr)
		*TriangleCount = Parms.TriangleCount;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSimplifyFunctions.ApplySimplifyToTolerance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              Tolerance                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FGeometryScriptSimplifyMeshOptionsOptions                                                          (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshSimplifyFunctions::ApplySimplifyToTolerance(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSimplifyFunctions", "ApplySimplifyToTolerance");

	Params::UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToTolerance_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSimplifyFunctions.ApplySimplifyToPolygroupTopology
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptPolygroupSimplifyOptionsOptions                                                          (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FGeometryScriptGroupLayer   GroupLayer                                                       (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshSimplifyFunctions::ApplySimplifyToPolygroupTopology(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSimplifyFunctions", "ApplySimplifyToPolygroupTopology");

	Params::UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToPolygroupTopology_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSimplifyFunctions.ApplySimplifyToPlanar
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptPlanarSimplifyOptionsOptions                                                          (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshSimplifyFunctions::ApplySimplifyToPlanar(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSimplifyFunctions", "ApplySimplifyToPlanar");

	Params::UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToPlanar_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial
// (None)

class UClass* UGeometryScriptLibrary_MeshSpatial::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshSpatial");

	return Clss;
}


// GeometryScriptLibrary_MeshSpatial GeometryScriptingCore.Default__GeometryScriptLibrary_MeshSpatial
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_MeshSpatial* UGeometryScriptLibrary_MeshSpatial::GetDefaultObj()
{
	static class UGeometryScriptLibrary_MeshSpatial* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_MeshSpatial*>(UGeometryScriptLibrary_MeshSpatial::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial.ResetBVH
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptDynamicMeshBVHResetBVH                                                         (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst)

void UGeometryScriptLibrary_MeshSpatial::ResetBVH(struct FGeometryScriptDynamicMeshBVH* ResetBVH)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSpatial", "ResetBVH");

	Params::UGeometryScriptLibrary_MeshSpatial_ResetBVH_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ResetBVH != nullptr)
		*ResetBVH = std::move(Parms.ResetBVH);

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial.RebuildBVHForMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptDynamicMeshBVHUpdateBVH                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bOnlyIfInvalid                                                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshSpatial::RebuildBVHForMesh(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSpatial", "RebuildBVHForMesh");

	Params::UGeometryScriptLibrary_MeshSpatial_RebuildBVHForMesh_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial.IsPointInsideMesh
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptDynamicMeshBVHQueryBVH                                                         (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     QueryPoint                                                       (Edit, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptSpatialQueryOptionsOptions                                                          (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               bIsInside                                                        (Edit, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EGeometryScriptContainmentOutcomePinsOutcome                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshSpatial::IsPointInsideMesh(enum class EGeometryScriptContainmentOutcomePins* Outcome, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSpatial", "IsPointInsideMesh");

	Params::UGeometryScriptLibrary_MeshSpatial_IsPointInsideMesh_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Outcome != nullptr)
		*Outcome = Parms.Outcome;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial.IsBVHValidForMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptDynamicMeshBVHTestBVH                                                          (BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bIsValid                                                         (ExportObject, OutParm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshSpatial::IsBVHValidForMesh(bool* bIsValid, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSpatial", "IsBVHValidForMesh");

	Params::UGeometryScriptLibrary_MeshSpatial_IsBVHValidForMesh_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsValid != nullptr)
		*bIsValid = Parms.bIsValid;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial.FindNearestRayIntersectionWithMesh
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptDynamicMeshBVHQueryBVH                                                         (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     RayOrigin                                                        (ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FVector                     RayDirection                                                     (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptSpatialQueryOptionsOptions                                                          (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FGeometryScriptRayHitResult HitResult                                                        (BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Transient, EditConst)
// enum class EGeometryScriptSearchOutcomePinsOutcome                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshSpatial::FindNearestRayIntersectionWithMesh(const struct FGeometryScriptRayHitResult& HitResult, enum class EGeometryScriptSearchOutcomePins* Outcome, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSpatial", "FindNearestRayIntersectionWithMesh");

	Params::UGeometryScriptLibrary_MeshSpatial_FindNearestRayIntersectionWithMesh_Params Parms{};

	Parms.HitResult = HitResult;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Outcome != nullptr)
		*Outcome = Parms.Outcome;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial.FindNearestPointOnMesh
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptDynamicMeshBVHQueryBVH                                                         (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     QueryPoint                                                       (Edit, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptSpatialQueryOptionsOptions                                                          (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FGeometryScriptTrianglePointNearestResult                                                    (Edit, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EGeometryScriptSearchOutcomePinsOutcome                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshSpatial::FindNearestPointOnMesh(enum class EGeometryScriptSearchOutcomePins* Outcome, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSpatial", "FindNearestPointOnMesh");

	Params::UGeometryScriptLibrary_MeshSpatial_FindNearestPointOnMesh_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Outcome != nullptr)
		*Outcome = Parms.Outcome;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial.BuildBVHForMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptDynamicMeshBVHOutputBVH                                                        (Edit, ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshSpatial::BuildBVHForMesh(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSpatial", "BuildBVHForMesh");

	Params::UGeometryScriptLibrary_MeshSpatial_BuildBVHForMesh_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_MeshSubdivideFunctions
// (None)

class UClass* UGeometryScriptLibrary_MeshSubdivideFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshSubdivideFunctions");

	return Clss;
}


// GeometryScriptLibrary_MeshSubdivideFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_MeshSubdivideFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_MeshSubdivideFunctions* UGeometryScriptLibrary_MeshSubdivideFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_MeshSubdivideFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_MeshSubdivideFunctions*>(UGeometryScriptLibrary_MeshSubdivideFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSubdivideFunctions.ApplyUniformTessellation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              TessellationLevel                                                (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshSubdivideFunctions::ApplyUniformTessellation(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSubdivideFunctions", "ApplyUniformTessellation");

	Params::UGeometryScriptLibrary_MeshSubdivideFunctions_ApplyUniformTessellation_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSubdivideFunctions.ApplySelectiveTessellation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptSelectiveTessellateOptionsOptions                                                          (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int32                              TessellationLevel                                                (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class ESelectiveTessellatePatternTypePatternType                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshSubdivideFunctions::ApplySelectiveTessellation(struct FGeometryScriptMeshSelection* Selection, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSubdivideFunctions", "ApplySelectiveTessellation");

	Params::UGeometryScriptLibrary_MeshSubdivideFunctions_ApplySelectiveTessellation_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Selection != nullptr)
		*Selection = std::move(Parms.Selection);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSubdivideFunctions.ApplyPNTessellation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptPNTessellateOptionsOptions                                                          (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int32                              TessellationLevel                                                (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshSubdivideFunctions::ApplyPNTessellation(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSubdivideFunctions", "ApplyPNTessellation");

	Params::UGeometryScriptLibrary_MeshSubdivideFunctions_ApplyPNTessellation_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions
// (None)

class UClass* UGeometryScriptLibrary_MeshTransformFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshTransformFunctions");

	return Clss;
}


// GeometryScriptLibrary_MeshTransformFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_MeshTransformFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_MeshTransformFunctions* UGeometryScriptLibrary_MeshTransformFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_MeshTransformFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_MeshTransformFunctions*>(UGeometryScriptLibrary_MeshTransformFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.TranslatePivotToLocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     PivotLocation                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshTransformFunctions::TranslatePivotToLocation(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshTransformFunctions", "TranslatePivotToLocation");

	Params::UGeometryScriptLibrary_MeshTransformFunctions_TranslatePivotToLocation_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.TranslateMeshSelection
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FVector                     Translation                                                      (ConstParm, Parm, ZeroConstructor, Transient, Config)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshTransformFunctions::TranslateMeshSelection(struct FGeometryScriptMeshSelection* Selection, const struct FVector& Translation, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshTransformFunctions", "TranslateMeshSelection");

	Params::UGeometryScriptLibrary_MeshTransformFunctions_TranslateMeshSelection_Params Parms{};

	Parms.Translation = Translation;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Selection != nullptr)
		*Selection = std::move(Parms.Selection);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.TranslateMesh
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     Translation                                                      (ConstParm, Parm, ZeroConstructor, Transient, Config)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshTransformFunctions::TranslateMesh(const struct FVector& Translation, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshTransformFunctions", "TranslateMesh");

	Params::UGeometryScriptLibrary_MeshTransformFunctions_TranslateMesh_Params Parms{};

	Parms.Translation = Translation;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.TransformMeshSelection
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshTransformFunctions::TransformMeshSelection(struct FGeometryScriptMeshSelection* Selection, struct FTransform* Transform, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshTransformFunctions", "TransformMeshSelection");

	Params::UGeometryScriptLibrary_MeshTransformFunctions_TransformMeshSelection_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Selection != nullptr)
		*Selection = std::move(Parms.Selection);

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.TransformMesh
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// bool                               bFixOrientationForNegativeScale                                  (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshTransformFunctions::TransformMesh(struct FTransform* Transform, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshTransformFunctions", "TransformMesh");

	Params::UGeometryScriptLibrary_MeshTransformFunctions_TransformMesh_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.ScaleMeshSelection
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FVector                     Scale                                                            (Edit, ExportObject, Parm, ZeroConstructor, Transient, Config)
// struct FVector                     ScaleOrigin                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshTransformFunctions::ScaleMeshSelection(struct FGeometryScriptMeshSelection* Selection, const struct FVector& Scale, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshTransformFunctions", "ScaleMeshSelection");

	Params::UGeometryScriptLibrary_MeshTransformFunctions_ScaleMeshSelection_Params Parms{};

	Parms.Scale = Scale;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Selection != nullptr)
		*Selection = std::move(Parms.Selection);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.ScaleMesh
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     Scale                                                            (Edit, ExportObject, Parm, ZeroConstructor, Transient, Config)
// struct FVector                     ScaleOrigin                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bFixOrientationForNegativeScale                                  (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshTransformFunctions::ScaleMesh(const struct FVector& Scale, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshTransformFunctions", "ScaleMesh");

	Params::UGeometryScriptLibrary_MeshTransformFunctions_ScaleMesh_Params Parms{};

	Parms.Scale = Scale;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.RotateMeshSelection
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FRotator                    Rotation                                                         (BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
// struct FVector                     RotationOrigin                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshTransformFunctions::RotateMeshSelection(struct FGeometryScriptMeshSelection* Selection, struct FRotator* Rotation, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshTransformFunctions", "RotateMeshSelection");

	Params::UGeometryScriptLibrary_MeshTransformFunctions_RotateMeshSelection_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Selection != nullptr)
		*Selection = std::move(Parms.Selection);

	if (Rotation != nullptr)
		*Rotation = std::move(Parms.Rotation);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.RotateMesh
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FRotator                    Rotation                                                         (BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
// struct FVector                     RotationOrigin                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshTransformFunctions::RotateMesh(struct FRotator* Rotation, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshTransformFunctions", "RotateMesh");

	Params::UGeometryScriptLibrary_MeshTransformFunctions_RotateMesh_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Rotation != nullptr)
		*Rotation = std::move(Parms.Rotation);

	return Parms.ReturnValue;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions
// (None)

class UClass* UGeometryScriptLibrary_MeshUVFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshUVFunctions");

	return Clss;
}


// GeometryScriptLibrary_MeshUVFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_MeshUVFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_MeshUVFunctions* UGeometryScriptLibrary_MeshUVFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_MeshUVFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_MeshUVFunctions*>(UGeometryScriptLibrary_MeshUVFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.TranslateMeshUVs
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              UvSetIndex                                                       (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector2D                   Translation                                                      (ConstParm, Parm, ZeroConstructor, Transient, Config)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshUVFunctions::TranslateMeshUVs(const struct FVector2D& Translation, struct FGeometryScriptMeshSelection* Selection, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "TranslateMeshUVs");

	Params::UGeometryScriptLibrary_MeshUVFunctions_TranslateMeshUVs_Params Parms{};

	Parms.Translation = Translation;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Selection != nullptr)
		*Selection = std::move(Parms.Selection);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.SetNumUVSets
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              NumUVSets                                                        (ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshUVFunctions::SetNumUVSets(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "SetNumUVSets");

	Params::UGeometryScriptLibrary_MeshUVFunctions_SetNumUVSets_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.SetMeshUVsFromPlanarProjection
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              UvSetIndex                                                       (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  PlaneTransform                                                   (ConstParm, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshUVFunctions::SetMeshUVsFromPlanarProjection(const struct FTransform& PlaneTransform, struct FGeometryScriptMeshSelection* Selection, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "SetMeshUVsFromPlanarProjection");

	Params::UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromPlanarProjection_Params Parms{};

	Parms.PlaneTransform = PlaneTransform;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Selection != nullptr)
		*Selection = std::move(Parms.Selection);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.SetMeshUVsFromCylinderProjection
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              UvSetIndex                                                       (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  CylinderTransform                                                (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// float                              SplitAngle                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshUVFunctions::SetMeshUVsFromCylinderProjection(struct FGeometryScriptMeshSelection* Selection, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "SetMeshUVsFromCylinderProjection");

	Params::UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromCylinderProjection_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Selection != nullptr)
		*Selection = std::move(Parms.Selection);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.SetMeshUVsFromBoxProjection
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              UvSetIndex                                                       (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  BoxTransform                                                     (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              MinIslandTriCount                                                (Edit, BlueprintVisible, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshUVFunctions::SetMeshUVsFromBoxProjection(struct FGeometryScriptMeshSelection* Selection, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "SetMeshUVsFromBoxProjection");

	Params::UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromBoxProjection_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Selection != nullptr)
		*Selection = std::move(Parms.Selection);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.SetMeshTriangleUVs
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              UvSetIndex                                                       (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              TriangleID                                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
// struct FGeometryScriptUVTriangle   UVs                                                              (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, Config, EditConst)
// bool                               bIsValidTriangle                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bDeferChangeNotifications                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool UGeometryScriptLibrary_MeshUVFunctions::SetMeshTriangleUVs(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "SetMeshTriangleUVs");

	Params::UGeometryScriptLibrary_MeshUVFunctions_SetMeshTriangleUVs_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.ScaleMeshUVs
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              UvSetIndex                                                       (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector2D                   Scale                                                            (Edit, ExportObject, Parm, ZeroConstructor, Transient, Config)
// struct FVector2D                   ScaleOrigin                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshUVFunctions::ScaleMeshUVs(const struct FVector2D& Scale, struct FGeometryScriptMeshSelection* Selection, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "ScaleMeshUVs");

	Params::UGeometryScriptLibrary_MeshUVFunctions_ScaleMeshUVs_Params Parms{};

	Parms.Scale = Scale;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Selection != nullptr)
		*Selection = std::move(Parms.Selection);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.RotateMeshUVs
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              UvSetIndex                                                       (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              RotationAngle                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector2D                   RotationOrigin                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshUVFunctions::RotateMeshUVs(struct FGeometryScriptMeshSelection* Selection, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "RotateMeshUVs");

	Params::UGeometryScriptLibrary_MeshUVFunctions_RotateMeshUVs_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Selection != nullptr)
		*Selection = std::move(Parms.Selection);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.RepackMeshUVs
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              UvSetIndex                                                       (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptRepackUVsOptionsRepackOptions                                                    (Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshUVFunctions::RepackMeshUVs(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "RepackMeshUVs");

	Params::UGeometryScriptLibrary_MeshUVFunctions_RepackMeshUVs_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.RecomputeMeshUVs
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              UvSetIndex                                                       (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptRecomputeUVsOptionsOptions                                                          (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshUVFunctions::RecomputeMeshUVs(struct FGeometryScriptMeshSelection* Selection, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "RecomputeMeshUVs");

	Params::UGeometryScriptLibrary_MeshUVFunctions_RecomputeMeshUVs_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Selection != nullptr)
		*Selection = std::move(Parms.Selection);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.GetMeshUVSizeInfo
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              UvSetIndex                                                       (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// double                             MeshArea                                                         (BlueprintReadOnly, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             UVArea                                                           (BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FBox                        MeshBounds                                                       (ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FBox2D                      UVBounds                                                         (Edit, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bIsValidUVSet                                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bFoundUnsetUVs                                                   (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bOnlyIncludeValidUVTris                                          (BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshUVFunctions::GetMeshUVSizeInfo(struct FGeometryScriptMeshSelection* Selection, bool* bIsValidUVSet, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "GetMeshUVSizeInfo");

	Params::UGeometryScriptLibrary_MeshUVFunctions_GetMeshUVSizeInfo_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Selection != nullptr)
		*Selection = std::move(Parms.Selection);

	if (bIsValidUVSet != nullptr)
		*bIsValidUVSet = Parms.bIsValidUVSet;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.GetMeshPerVertexUVs
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              UvSetIndex                                                       (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptUVList       UVList                                                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bIsValidUVSet                                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bHasVertexIDGaps                                                 (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bHasSplitUVs                                                     (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshUVFunctions::GetMeshPerVertexUVs(bool* bIsValidUVSet, bool bHasVertexIDGaps, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "GetMeshPerVertexUVs");

	Params::UGeometryScriptLibrary_MeshUVFunctions_GetMeshPerVertexUVs_Params Parms{};

	Parms.bHasVertexIDGaps = bHasVertexIDGaps;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsValidUVSet != nullptr)
		*bIsValidUVSet = Parms.bIsValidUVSet;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.CopyUVSet
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              FromUVSet                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ToUVSet                                                          (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshUVFunctions::CopyUVSet(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "CopyUVSet");

	Params::UGeometryScriptLibrary_MeshUVFunctions_CopyUVSet_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.CopyMeshUVLayerToMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                CopyFromMesh                                                     (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              UvSetIndex                                                       (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                CopyToUVMesh                                                     (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                CopyToUVMeshOut                                                  (ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bInvalidTopology                                                 (Edit, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bIsValidUVSet                                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshUVFunctions::CopyMeshUVLayerToMesh(bool* bIsValidUVSet, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "CopyMeshUVLayerToMesh");

	Params::UGeometryScriptLibrary_MeshUVFunctions_CopyMeshUVLayerToMesh_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsValidUVSet != nullptr)
		*bIsValidUVSet = Parms.bIsValidUVSet;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.CopyMeshToMeshUVLayer
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                CopyFromUVMesh                                                   (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ToUVSetIndex                                                     (ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                CopyToMesh                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                CopyToMeshOut                                                    (Edit, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bFoundTopologyErrors                                             (Edit, ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bIsValidUVSet                                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bOnlyUVPositions                                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshUVFunctions::CopyMeshToMeshUVLayer(bool* bIsValidUVSet, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "CopyMeshToMeshUVLayer");

	Params::UGeometryScriptLibrary_MeshUVFunctions_CopyMeshToMeshUVLayer_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsValidUVSet != nullptr)
		*bIsValidUVSet = Parms.bIsValidUVSet;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.AutoGenerateXAtlasMeshUVs
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              UvSetIndex                                                       (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptXAtlasOptionsOptions                                                          (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshUVFunctions::AutoGenerateXAtlasMeshUVs(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "AutoGenerateXAtlasMeshUVs");

	Params::UGeometryScriptLibrary_MeshUVFunctions_AutoGenerateXAtlasMeshUVs_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.AutoGeneratePatchBuilderMeshUVs
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              UvSetIndex                                                       (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptPatchBuilderOptionsOptions                                                          (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshUVFunctions::AutoGeneratePatchBuilderMeshUVs(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "AutoGeneratePatchBuilderMeshUVs");

	Params::UGeometryScriptLibrary_MeshUVFunctions_AutoGeneratePatchBuilderMeshUVs_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions
// (None)

class UClass* UGeometryScriptLibrary_MeshVertexColorFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshVertexColorFunctions");

	return Clss;
}


// GeometryScriptLibrary_MeshVertexColorFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_MeshVertexColorFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_MeshVertexColorFunctions* UGeometryScriptLibrary_MeshVertexColorFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_MeshVertexColorFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_MeshVertexColorFunctions*>(UGeometryScriptLibrary_MeshVertexColorFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions.SetMeshSelectionVertexColor
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FLinearColor                Color                                                            (Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
// struct FGeometryScriptColorFlags   Flags                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance)
// bool                               bCreateColorSeam                                                 (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshVertexColorFunctions::SetMeshSelectionVertexColor(struct FGeometryScriptMeshSelection* Selection, struct FLinearColor* Color, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshVertexColorFunctions", "SetMeshSelectionVertexColor");

	Params::UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshSelectionVertexColor_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Selection != nullptr)
		*Selection = std::move(Parms.Selection);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions.SetMeshPerVertexColors
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptColorList    VertexColorList                                                  (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshVertexColorFunctions::SetMeshPerVertexColors(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshVertexColorFunctions", "SetMeshPerVertexColors");

	Params::UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshPerVertexColors_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions.SetMeshConstantVertexColor
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FLinearColor                Color                                                            (Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
// struct FGeometryScriptColorFlags   Flags                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance)
// bool                               bClearExisting                                                   (ConstParm, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshVertexColorFunctions::SetMeshConstantVertexColor(struct FLinearColor* Color, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshVertexColorFunctions", "SetMeshConstantVertexColor");

	Params::UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshConstantVertexColor_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions.GetMeshPerVertexColors
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptColorList    ColorList                                                        (ConstParm, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bIsValidColorSet                                                 (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bHasVertexIDGaps                                                 (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bBlendSplitVertexValues                                          (BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool UGeometryScriptLibrary_MeshVertexColorFunctions::GetMeshPerVertexColors(bool bHasVertexIDGaps, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshVertexColorFunctions", "GetMeshPerVertexColors");

	Params::UGeometryScriptLibrary_MeshVertexColorFunctions_GetMeshPerVertexColors_Params Parms{};

	Parms.bHasVertexIDGaps = bHasVertexIDGaps;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions.ConvertMeshVertexColorsSRGBToLinear
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshVertexColorFunctions::ConvertMeshVertexColorsSRGBToLinear(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshVertexColorFunctions", "ConvertMeshVertexColorsSRGBToLinear");

	Params::UGeometryScriptLibrary_MeshVertexColorFunctions_ConvertMeshVertexColorsSRGBToLinear_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions.ConvertMeshVertexColorsLinearToSRGB
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshVertexColorFunctions::ConvertMeshVertexColorsLinearToSRGB(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshVertexColorFunctions", "ConvertMeshVertexColorsLinearToSRGB");

	Params::UGeometryScriptLibrary_MeshVertexColorFunctions_ConvertMeshVertexColorsLinearToSRGB_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_MeshVoxelFunctions
// (None)

class UClass* UGeometryScriptLibrary_MeshVoxelFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshVoxelFunctions");

	return Clss;
}


// GeometryScriptLibrary_MeshVoxelFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_MeshVoxelFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_MeshVoxelFunctions* UGeometryScriptLibrary_MeshVoxelFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_MeshVoxelFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_MeshVoxelFunctions*>(UGeometryScriptLibrary_MeshVoxelFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshVoxelFunctions.ApplyMeshSolidify
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptSolidifyOptionsOptions                                                          (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshVoxelFunctions::ApplyMeshSolidify(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshVoxelFunctions", "ApplyMeshSolidify");

	Params::UGeometryScriptLibrary_MeshVoxelFunctions_ApplyMeshSolidify_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshVoxelFunctions.ApplyMeshMorphology
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMorphologyOptionsOptions                                                          (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshVoxelFunctions::ApplyMeshMorphology(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshVoxelFunctions", "ApplyMeshMorphology");

	Params::UGeometryScriptLibrary_MeshVoxelFunctions_ApplyMeshMorphology_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions
// (None)

class UClass* UGeometryScriptLibrary_PolyPathFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_PolyPathFunctions");

	return Clss;
}


// GeometryScriptLibrary_PolyPathFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_PolyPathFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_PolyPathFunctions* UGeometryScriptLibrary_PolyPathFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_PolyPathFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_PolyPathFunctions*>(UGeometryScriptLibrary_PolyPathFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.SampleSplineToTransforms
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class USplineComponent*            Spline                                                           (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config)
// TArray<struct FTransform>          Frames                                                           (BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// TArray<double>                     FrameTimes                                                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptSplineSamplingOptionsSamplingOptions                                                  (ExportObject, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  RelativeTransform                                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               bIncludeScale                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

bool UGeometryScriptLibrary_PolyPathFunctions::SampleSplineToTransforms(class USplineComponent** Spline, const TArray<struct FTransform>& Frames, struct FTransform* RelativeTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "SampleSplineToTransforms");

	Params::UGeometryScriptLibrary_PolyPathFunctions_SampleSplineToTransforms_Params Parms{};

	Parms.Frames = Frames;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Spline != nullptr)
		*Spline = Parms.Spline;

	if (RelativeTransform != nullptr)
		*RelativeTransform = std::move(Parms.RelativeTransform);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.GetPolyPathVertex
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptPolyPath     PolyPath                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// bool                               bIsValidIndex                                                    (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool UGeometryScriptLibrary_PolyPathFunctions::GetPolyPathVertex(const struct FVector& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "GetPolyPathVertex");

	Params::UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathVertex_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.GetPolyPathTangent
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptPolyPath     PolyPath                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// bool                               bIsValidIndex                                                    (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool UGeometryScriptLibrary_PolyPathFunctions::GetPolyPathTangent(const struct FVector& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "GetPolyPathTangent");

	Params::UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathTangent_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.GetPolyPathNumVertices
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptPolyPath     PolyPath                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FGeometryScriptPolyPath UGeometryScriptLibrary_PolyPathFunctions::GetPolyPathNumVertices(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "GetPolyPathNumVertices");

	Params::UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathNumVertices_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.GetPolyPathLastIndex
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptPolyPath     PolyPath                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FGeometryScriptPolyPath UGeometryScriptLibrary_PolyPathFunctions::GetPolyPathLastIndex(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "GetPolyPathLastIndex");

	Params::UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathLastIndex_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.GetPolyPathArcLength
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGeometryScriptPolyPath     PolyPath                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FGeometryScriptPolyPath UGeometryScriptLibrary_PolyPathFunctions::GetPolyPathArcLength(double ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "GetPolyPathArcLength");

	Params::UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathArcLength_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.GetNearestVertexIndex
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGeometryScriptPolyPath     PolyPath                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     Point                                                            (ConstParm, Parm, ReturnParm)
// int32                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector UGeometryScriptLibrary_PolyPathFunctions::GetNearestVertexIndex(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "GetNearestVertexIndex");

	Params::UGeometryScriptLibrary_PolyPathFunctions_GetNearestVertexIndex_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.FlattenTo2DOnAxis
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGeometryScriptPolyPath     PolyPath                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EGeometryScriptAxis     DropAxis                                                         (Edit, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptPolyPath     ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

enum class EGeometryScriptAxis UGeometryScriptLibrary_PolyPathFunctions::FlattenTo2DOnAxis(const struct FGeometryScriptPolyPath& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "FlattenTo2DOnAxis");

	Params::UGeometryScriptLibrary_PolyPathFunctions_FlattenTo2DOnAxis_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.CreateCirclePath3D
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// float                              Radius                                                           (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// int32                              NumPoints                                                        (Edit, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FGeometryScriptPolyPath     ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UGeometryScriptLibrary_PolyPathFunctions::CreateCirclePath3D(struct FTransform* Transform, float Radius, int32* NumPoints, const struct FGeometryScriptPolyPath& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "CreateCirclePath3D");

	Params::UGeometryScriptLibrary_PolyPathFunctions_CreateCirclePath3D_Params Parms{};

	Parms.Radius = Radius;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	if (NumPoints != nullptr)
		*NumPoints = Parms.NumPoints;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.CreateCirclePath2D
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   Center                                                           (Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
// float                              Radius                                                           (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// int32                              NumPoints                                                        (Edit, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FGeometryScriptPolyPath     ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector2D UGeometryScriptLibrary_PolyPathFunctions::CreateCirclePath2D(float Radius, int32* NumPoints, const struct FGeometryScriptPolyPath& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "CreateCirclePath2D");

	Params::UGeometryScriptLibrary_PolyPathFunctions_CreateCirclePath2D_Params Parms{};

	Parms.Radius = Radius;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NumPoints != nullptr)
		*NumPoints = Parms.NumPoints;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.CreateArcPath3D
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// float                              Radius                                                           (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// int32                              NumPoints                                                        (Edit, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// float                              StartAngle                                                       (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              EndAngle                                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptPolyPath     ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UGeometryScriptLibrary_PolyPathFunctions::CreateArcPath3D(struct FTransform* Transform, float Radius, int32* NumPoints, float* StartAngle, float* EndAngle, const struct FGeometryScriptPolyPath& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "CreateArcPath3D");

	Params::UGeometryScriptLibrary_PolyPathFunctions_CreateArcPath3D_Params Parms{};

	Parms.Radius = Radius;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	if (NumPoints != nullptr)
		*NumPoints = Parms.NumPoints;

	if (StartAngle != nullptr)
		*StartAngle = Parms.StartAngle;

	if (EndAngle != nullptr)
		*EndAngle = Parms.EndAngle;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.CreateArcPath2D
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   Center                                                           (Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
// float                              Radius                                                           (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// int32                              NumPoints                                                        (Edit, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// float                              StartAngle                                                       (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              EndAngle                                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptPolyPath     ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector2D UGeometryScriptLibrary_PolyPathFunctions::CreateArcPath2D(float Radius, int32* NumPoints, float* StartAngle, float* EndAngle, const struct FGeometryScriptPolyPath& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "CreateArcPath2D");

	Params::UGeometryScriptLibrary_PolyPathFunctions_CreateArcPath2D_Params Parms{};

	Parms.Radius = Radius;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NumPoints != nullptr)
		*NumPoints = Parms.NumPoints;

	if (StartAngle != nullptr)
		*StartAngle = Parms.StartAngle;

	if (EndAngle != nullptr)
		*EndAngle = Parms.EndAngle;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.ConvertSplineToPolyPath
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class USplineComponent*            Spline                                                           (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config)
// struct FGeometryScriptPolyPath     PolyPath                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptSplineSamplingOptionsSamplingOptions                                                  (ExportObject, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

struct FGeometryScriptSplineSamplingOptions UGeometryScriptLibrary_PolyPathFunctions::ConvertSplineToPolyPath(class USplineComponent** Spline)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "ConvertSplineToPolyPath");

	Params::UGeometryScriptLibrary_PolyPathFunctions_ConvertSplineToPolyPath_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Spline != nullptr)
		*Spline = Parms.Spline;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.ConvertPolyPathToArrayOfVector2D
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptPolyPath     PolyPath                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FVector2D>           VertexArray                                                      (Edit, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

TArray<struct FVector2D> UGeometryScriptLibrary_PolyPathFunctions::ConvertPolyPathToArrayOfVector2D()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "ConvertPolyPathToArrayOfVector2D");

	Params::UGeometryScriptLibrary_PolyPathFunctions_ConvertPolyPathToArrayOfVector2D_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.ConvertPolyPathToArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptPolyPath     PolyPath                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FVector>             VertexArray                                                      (Edit, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

TArray<struct FVector> UGeometryScriptLibrary_PolyPathFunctions::ConvertPolyPathToArray()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "ConvertPolyPathToArray");

	Params::UGeometryScriptLibrary_PolyPathFunctions_ConvertPolyPathToArray_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.ConvertArrayToPolyPath
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FVector>             VertexArray                                                      (Edit, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptPolyPath     PolyPath                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

struct FGeometryScriptPolyPath UGeometryScriptLibrary_PolyPathFunctions::ConvertArrayToPolyPath()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "ConvertArrayToPolyPath");

	Params::UGeometryScriptLibrary_PolyPathFunctions_ConvertArrayToPolyPath_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.ConvertArrayOfVector2DToPolyPath
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FVector2D>           VertexArray                                                      (Edit, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptPolyPath     PolyPath                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

struct FGeometryScriptPolyPath UGeometryScriptLibrary_PolyPathFunctions::ConvertArrayOfVector2DToPolyPath()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "ConvertArrayOfVector2DToPolyPath");

	Params::UGeometryScriptLibrary_PolyPathFunctions_ConvertArrayOfVector2DToPolyPath_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.Conv_GeometryScriptPolyPathToArrayOfVector2D
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptPolyPath     PolyPath                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FVector2D>           ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FGeometryScriptPolyPath UGeometryScriptLibrary_PolyPathFunctions::Conv_GeometryScriptPolyPathToArrayOfVector2D(const TArray<struct FVector2D>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "Conv_GeometryScriptPolyPathToArrayOfVector2D");

	Params::UGeometryScriptLibrary_PolyPathFunctions_Conv_GeometryScriptPolyPathToArrayOfVector2D_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.Conv_GeometryScriptPolyPathToArray
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptPolyPath     PolyPath                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FVector>             ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FGeometryScriptPolyPath UGeometryScriptLibrary_PolyPathFunctions::Conv_GeometryScriptPolyPathToArray(const TArray<struct FVector>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "Conv_GeometryScriptPolyPathToArray");

	Params::UGeometryScriptLibrary_PolyPathFunctions_Conv_GeometryScriptPolyPathToArray_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.Conv_ArrayToGeometryScriptPolyPath
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FVector>             PathVertices                                                     (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptPolyPath     ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UGeometryScriptLibrary_PolyPathFunctions::Conv_ArrayToGeometryScriptPolyPath(const TArray<struct FVector>& PathVertices, const struct FGeometryScriptPolyPath& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "Conv_ArrayToGeometryScriptPolyPath");

	Params::UGeometryScriptLibrary_PolyPathFunctions_Conv_ArrayToGeometryScriptPolyPath_Params Parms{};

	Parms.PathVertices = PathVertices;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.Conv_ArrayOfVector2DToGeometryScriptPolyPath
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FVector2D>           PathVertices                                                     (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptPolyPath     ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UGeometryScriptLibrary_PolyPathFunctions::Conv_ArrayOfVector2DToGeometryScriptPolyPath(const TArray<struct FVector2D>& PathVertices, const struct FGeometryScriptPolyPath& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "Conv_ArrayOfVector2DToGeometryScriptPolyPath");

	Params::UGeometryScriptLibrary_PolyPathFunctions_Conv_ArrayOfVector2DToGeometryScriptPolyPath_Params Parms{};

	Parms.PathVertices = PathVertices;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_SceneUtilityFunctions
// (None)

class UClass* UGeometryScriptLibrary_SceneUtilityFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_SceneUtilityFunctions");

	return Clss;
}


// GeometryScriptLibrary_SceneUtilityFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_SceneUtilityFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_SceneUtilityFunctions* UGeometryScriptLibrary_SceneUtilityFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_SceneUtilityFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_SceneUtilityFunctions*>(UGeometryScriptLibrary_SceneUtilityFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_SceneUtilityFunctions.SetComponentMaterialList
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*         Component                                                        (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// TArray<class UMaterialInterface*>  MaterialList                                                     (ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_SceneUtilityFunctions::SetComponentMaterialList(class UPrimitiveComponent** Component)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_SceneUtilityFunctions", "SetComponentMaterialList");

	Params::UGeometryScriptLibrary_SceneUtilityFunctions_SetComponentMaterialList_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Component != nullptr)
		*Component = Parms.Component;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_SceneUtilityFunctions.CreateDynamicMeshPool
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMeshPool*            ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UGeometryScriptLibrary_SceneUtilityFunctions::CreateDynamicMeshPool(class UDynamicMeshPool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_SceneUtilityFunctions", "CreateDynamicMeshPool");

	Params::UGeometryScriptLibrary_SceneUtilityFunctions_CreateDynamicMeshPool_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_SceneUtilityFunctions.CopyMeshFromComponent
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class USceneComponent*             Component                                                        (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class UDynamicMesh*                ToDynamicMesh                                                    (ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptCopyMeshFromComponentOptionsOptions                                                          (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               bTransformToWorld                                                (ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  LocalToWorld                                                     (ConstParm, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// enum class EGeometryScriptOutcomePinsOutcome                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_SceneUtilityFunctions::CopyMeshFromComponent(class USceneComponent** Component, struct FTransform* LocalToWorld, enum class EGeometryScriptOutcomePins* Outcome, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_SceneUtilityFunctions", "CopyMeshFromComponent");

	Params::UGeometryScriptLibrary_SceneUtilityFunctions_CopyMeshFromComponent_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Component != nullptr)
		*Component = Parms.Component;

	if (LocalToWorld != nullptr)
		*LocalToWorld = std::move(Parms.LocalToWorld);

	if (Outcome != nullptr)
		*Outcome = Parms.Outcome;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_SceneUtilityFunctions.CopyCollisionMeshesFromObject
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     FromObject                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ToDynamicMesh                                                    (ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bTransformToWorld                                                (ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  LocalToWorld                                                     (ConstParm, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// enum class EGeometryScriptOutcomePinsOutcome                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bUseComplexCollision                                             (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              SphereResolution                                                 (BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_SceneUtilityFunctions::CopyCollisionMeshesFromObject(class UObject* FromObject, struct FTransform* LocalToWorld, enum class EGeometryScriptOutcomePins* Outcome, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_SceneUtilityFunctions", "CopyCollisionMeshesFromObject");

	Params::UGeometryScriptLibrary_SceneUtilityFunctions_CopyCollisionMeshesFromObject_Params Parms{};

	Parms.FromObject = FromObject;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (LocalToWorld != nullptr)
		*LocalToWorld = std::move(Parms.LocalToWorld);

	if (Outcome != nullptr)
		*Outcome = Parms.Outcome;

	return Parms.ReturnValue;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_TransformFunctions
// (None)

class UClass* UGeometryScriptLibrary_TransformFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_TransformFunctions");

	return Clss;
}


// GeometryScriptLibrary_TransformFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_TransformFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_TransformFunctions* UGeometryScriptLibrary_TransformFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_TransformFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_TransformFunctions*>(UGeometryScriptLibrary_TransformFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_TransformFunctions.MakeTransformFromZAxis
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     Location                                                         (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
// struct FVector                     ZAxis                                                            (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FTransform                  ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UGeometryScriptLibrary_TransformFunctions::MakeTransformFromZAxis(struct FVector* Location, struct FVector* ZAxis, const struct FTransform& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_TransformFunctions", "MakeTransformFromZAxis");

	Params::UGeometryScriptLibrary_TransformFunctions_MakeTransformFromZAxis_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

	if (ZAxis != nullptr)
		*ZAxis = std::move(Parms.ZAxis);

}


// Function GeometryScriptingCore.GeometryScriptLibrary_TransformFunctions.MakeTransformFromAxes
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     Location                                                         (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
// struct FVector                     ZAxis                                                            (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     TangentAxis                                                      (Edit, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bTangentIsX                                                      (ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool UGeometryScriptLibrary_TransformFunctions::MakeTransformFromAxes(struct FVector* Location, struct FVector* ZAxis, const struct FTransform& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_TransformFunctions", "MakeTransformFromAxes");

	Params::UGeometryScriptLibrary_TransformFunctions_MakeTransformFromAxes_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

	if (ZAxis != nullptr)
		*ZAxis = std::move(Parms.ZAxis);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_TransformFunctions.GetTransformAxisVector
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// enum class EGeometryScriptAxis     Axis                                                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config)
// struct FVector                     ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UGeometryScriptLibrary_TransformFunctions::GetTransformAxisVector(struct FTransform* Transform, enum class EGeometryScriptAxis Axis, const struct FVector& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_TransformFunctions", "GetTransformAxisVector");

	Params::UGeometryScriptLibrary_TransformFunctions_GetTransformAxisVector_Params Parms{};

	Parms.Axis = Axis;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

}


// Function GeometryScriptingCore.GeometryScriptLibrary_TransformFunctions.GetTransformAxisRay
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// enum class EGeometryScriptAxis     Axis                                                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config)
// struct FRay                        ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UGeometryScriptLibrary_TransformFunctions::GetTransformAxisRay(struct FTransform* Transform, enum class EGeometryScriptAxis Axis, const struct FRay& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_TransformFunctions", "GetTransformAxisRay");

	Params::UGeometryScriptLibrary_TransformFunctions_GetTransformAxisRay_Params Parms{};

	Parms.Axis = Axis;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

}


// Function GeometryScriptingCore.GeometryScriptLibrary_TransformFunctions.GetTransformAxisPlane
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// enum class EGeometryScriptAxis     Axis                                                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config)
// struct FPlane                      ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UGeometryScriptLibrary_TransformFunctions::GetTransformAxisPlane(struct FTransform* Transform, enum class EGeometryScriptAxis Axis, const struct FPlane& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_TransformFunctions", "GetTransformAxisPlane");

	Params::UGeometryScriptLibrary_TransformFunctions_GetTransformAxisPlane_Params Parms{};

	Parms.Axis = Axis;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

}


// Class GeometryScriptingCore.GeometryScriptLibrary_RayFunctions
// (None)

class UClass* UGeometryScriptLibrary_RayFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_RayFunctions");

	return Clss;
}


// GeometryScriptLibrary_RayFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_RayFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_RayFunctions* UGeometryScriptLibrary_RayFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_RayFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_RayFunctions*>(UGeometryScriptLibrary_RayFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.MakeRayFromPoints
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     A                                                                (Edit, ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config)
// struct FVector                     B                                                                (Edit, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config)
// struct FRay                        ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector UGeometryScriptLibrary_RayFunctions::MakeRayFromPoints(const struct FRay& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_RayFunctions", "MakeRayFromPoints");

	Params::UGeometryScriptLibrary_RayFunctions_MakeRayFromPoints_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.MakeRayFromPointDirection
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     Origin                                                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, Config, EditConst, SubobjectReference)
// struct FVector                     Direction                                                        (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               bDirectionIsNormalized                                           (Edit, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FRay                        ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool UGeometryScriptLibrary_RayFunctions::MakeRayFromPointDirection(const struct FRay& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_RayFunctions", "MakeRayFromPointDirection");

	Params::UGeometryScriptLibrary_RayFunctions_MakeRayFromPointDirection_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetTransformedRay
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRay                        Ray                                                              (ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// bool                               bInvert                                                          (ConstParm, BlueprintVisible, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FRay                        ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UGeometryScriptLibrary_RayFunctions::GetTransformedRay(const struct FRay& Ray, struct FTransform* Transform, bool bInvert, const struct FRay& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_RayFunctions", "GetTransformedRay");

	Params::UGeometryScriptLibrary_RayFunctions_GetTransformedRay_Params Parms{};

	Parms.Ray = Ray;
	Parms.bInvert = bInvert;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

}


// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayStartEnd
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRay                        Ray                                                              (ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor)
// double                             StartDistance                                                    (Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             EndDistance                                                      (ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     StartPoint                                                       (BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     EndPoint                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

struct FVector UGeometryScriptLibrary_RayFunctions::GetRayStartEnd(const struct FRay& Ray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_RayFunctions", "GetRayStartEnd");

	Params::UGeometryScriptLibrary_RayFunctions_GetRayStartEnd_Params Parms{};

	Parms.Ray = Ray;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRaySphereIntersection
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRay                        Ray                                                              (ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor)
// struct FVector                     SphereCenter                                                     (ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             SphereRadius                                                     (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// double                             Distance1                                                        (ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             Distance2                                                        (BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

double UGeometryScriptLibrary_RayFunctions::GetRaySphereIntersection(const struct FRay& Ray, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_RayFunctions", "GetRaySphereIntersection");

	Params::UGeometryScriptLibrary_RayFunctions_GetRaySphereIntersection_Params Parms{};

	Parms.Ray = Ray;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRaySegmentClosestPoint
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRay                        Ray                                                              (ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor)
// struct FVector                     SegStartPoint                                                    (BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     SegEndPoint                                                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             RayParameter                                                     (BlueprintVisible, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FVector                     RayPoint                                                         (Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     SegPoint                                                         (ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector UGeometryScriptLibrary_RayFunctions::GetRaySegmentClosestPoint(const struct FRay& Ray, double* RayParameter, double ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_RayFunctions", "GetRaySegmentClosestPoint");

	Params::UGeometryScriptLibrary_RayFunctions_GetRaySegmentClosestPoint_Params Parms{};

	Parms.Ray = Ray;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (RayParameter != nullptr)
		*RayParameter = Parms.RayParameter;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayPointDistance
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRay                        Ray                                                              (ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor)
// struct FVector                     Point                                                            (ConstParm, Parm, ReturnParm)
// double                             ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector UGeometryScriptLibrary_RayFunctions::GetRayPointDistance(const struct FRay& Ray, double ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_RayFunctions", "GetRayPointDistance");

	Params::UGeometryScriptLibrary_RayFunctions_GetRayPointDistance_Params Parms{};

	Parms.Ray = Ray;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayPoint
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRay                        Ray                                                              (ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor)
// double                             Distance                                                         (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UGeometryScriptLibrary_RayFunctions::GetRayPoint(const struct FRay& Ray, double* Distance, const struct FVector& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_RayFunctions", "GetRayPoint");

	Params::UGeometryScriptLibrary_RayFunctions_GetRayPoint_Params Parms{};

	Parms.Ray = Ray;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Distance != nullptr)
		*Distance = Parms.Distance;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayPlaneIntersection
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRay                        Ray                                                              (ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor)
// struct FPlane                      Plane                                                            (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm)
// double                             HitDistance                                                      (BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

double UGeometryScriptLibrary_RayFunctions::GetRayPlaneIntersection(const struct FRay& Ray, struct FPlane* Plane, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_RayFunctions", "GetRayPlaneIntersection");

	Params::UGeometryScriptLibrary_RayFunctions_GetRayPlaneIntersection_Params Parms{};

	Parms.Ray = Ray;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Plane != nullptr)
		*Plane = std::move(Parms.Plane);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayParameter
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRay                        Ray                                                              (ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor)
// struct FVector                     Point                                                            (ConstParm, Parm, ReturnParm)
// double                             ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector UGeometryScriptLibrary_RayFunctions::GetRayParameter(const struct FRay& Ray, double ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_RayFunctions", "GetRayParameter");

	Params::UGeometryScriptLibrary_RayFunctions_GetRayParameter_Params Parms{};

	Parms.Ray = Ray;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayLineClosestPoint
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRay                        Ray                                                              (ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor)
// struct FVector                     LineOrigin                                                       (ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     LineDirection                                                    (ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             RayParameter                                                     (BlueprintVisible, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FVector                     RayPoint                                                         (Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             LineParameter                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     LinePoint                                                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector UGeometryScriptLibrary_RayFunctions::GetRayLineClosestPoint(const struct FRay& Ray, double* RayParameter, double ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_RayFunctions", "GetRayLineClosestPoint");

	Params::UGeometryScriptLibrary_RayFunctions_GetRayLineClosestPoint_Params Parms{};

	Parms.Ray = Ray;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (RayParameter != nullptr)
		*RayParameter = Parms.RayParameter;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayClosestPoint
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRay                        Ray                                                              (ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor)
// struct FVector                     Point                                                            (ConstParm, Parm, ReturnParm)
// struct FVector                     ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector UGeometryScriptLibrary_RayFunctions::GetRayClosestPoint(const struct FRay& Ray, const struct FVector& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_RayFunctions", "GetRayClosestPoint");

	Params::UGeometryScriptLibrary_RayFunctions_GetRayClosestPoint_Params Parms{};

	Parms.Ray = Ray;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayBoxIntersection
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRay                        Ray                                                              (ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor)
// struct FBox                        Box                                                              (Edit, ConstParm, ExportObject, OutParm)
// double                             HitDistance                                                      (BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

double UGeometryScriptLibrary_RayFunctions::GetRayBoxIntersection(const struct FRay& Ray, struct FBox* Box, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_RayFunctions", "GetRayBoxIntersection");

	Params::UGeometryScriptLibrary_RayFunctions_GetRayBoxIntersection_Params Parms{};

	Parms.Ray = Ray;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Box != nullptr)
		*Box = std::move(Parms.Box);

	return Parms.ReturnValue;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions
// (None)

class UClass* UGeometryScriptLibrary_BoxFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_BoxFunctions");

	return Clss;
}


// GeometryScriptLibrary_BoxFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_BoxFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_BoxFunctions* UGeometryScriptLibrary_BoxFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_BoxFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_BoxFunctions*>(UGeometryScriptLibrary_BoxFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.TestPointInsideBox
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBox                        Box                                                              (Edit, ConstParm, ExportObject, OutParm)
// struct FVector                     Point                                                            (ConstParm, Parm, ReturnParm)
// bool                               bConsiderOnBoxAsInside                                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool UGeometryScriptLibrary_BoxFunctions::TestPointInsideBox(struct FBox* Box, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_BoxFunctions", "TestPointInsideBox");

	Params::UGeometryScriptLibrary_BoxFunctions_TestPointInsideBox_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Box != nullptr)
		*Box = std::move(Parms.Box);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.TestBoxSphereIntersection
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBox                        Box                                                              (Edit, ConstParm, ExportObject, OutParm)
// struct FVector                     SphereCenter                                                     (ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             SphereRadius                                                     (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

double UGeometryScriptLibrary_BoxFunctions::TestBoxSphereIntersection(struct FBox* Box, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_BoxFunctions", "TestBoxSphereIntersection");

	Params::UGeometryScriptLibrary_BoxFunctions_TestBoxSphereIntersection_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Box != nullptr)
		*Box = std::move(Parms.Box);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.TestBoxBoxIntersection
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBox                        Box1                                                             (ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FBox                        Box2                                                             (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FBox UGeometryScriptLibrary_BoxFunctions::TestBoxBoxIntersection(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_BoxFunctions", "TestBoxBoxIntersection");

	Params::UGeometryScriptLibrary_BoxFunctions_TestBoxBoxIntersection_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.MakeBoxFromCenterSize
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     Center                                                           (Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
// struct FVector                     Dimensions                                                       (Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, DuplicateTransient)
// struct FBox                        ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector UGeometryScriptLibrary_BoxFunctions::MakeBoxFromCenterSize(const struct FBox& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_BoxFunctions", "MakeBoxFromCenterSize");

	Params::UGeometryScriptLibrary_BoxFunctions_MakeBoxFromCenterSize_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.MakeBoxFromCenterExtents
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     Center                                                           (Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
// struct FVector                     Extents                                                          (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config)
// struct FBox                        ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector UGeometryScriptLibrary_BoxFunctions::MakeBoxFromCenterExtents(const struct FBox& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_BoxFunctions", "MakeBoxFromCenterExtents");

	Params::UGeometryScriptLibrary_BoxFunctions_MakeBoxFromCenterExtents_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetTransformedBox
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBox                        Box                                                              (Edit, ConstParm, ExportObject, OutParm)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// struct FBox                        ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UGeometryScriptLibrary_BoxFunctions::GetTransformedBox(struct FBox* Box, struct FTransform* Transform, const struct FBox& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_BoxFunctions", "GetTransformedBox");

	Params::UGeometryScriptLibrary_BoxFunctions_GetTransformedBox_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Box != nullptr)
		*Box = std::move(Parms.Box);

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

}


// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetExpandedBox
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBox                        Box                                                              (Edit, ConstParm, ExportObject, OutParm)
// struct FVector                     ExpandBy                                                         (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FBox                        ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector UGeometryScriptLibrary_BoxFunctions::GetExpandedBox(struct FBox* Box, const struct FBox& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_BoxFunctions", "GetExpandedBox");

	Params::UGeometryScriptLibrary_BoxFunctions_GetExpandedBox_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Box != nullptr)
		*Box = std::move(Parms.Box);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetBoxVolumeArea
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBox                        Box                                                              (Edit, ConstParm, ExportObject, OutParm)
// double                             Volume                                                           (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config)
// double                             SurfaceArea                                                      (ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UGeometryScriptLibrary_BoxFunctions::GetBoxVolumeArea(struct FBox* Box, double* Volume, double* SurfaceArea)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_BoxFunctions", "GetBoxVolumeArea");

	Params::UGeometryScriptLibrary_BoxFunctions_GetBoxVolumeArea_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Box != nullptr)
		*Box = std::move(Parms.Box);

	if (Volume != nullptr)
		*Volume = Parms.Volume;

	if (SurfaceArea != nullptr)
		*SurfaceArea = Parms.SurfaceArea;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetBoxPointDistance
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBox                        Box                                                              (Edit, ConstParm, ExportObject, OutParm)
// struct FVector                     Point                                                            (ConstParm, Parm, ReturnParm)
// double                             ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector UGeometryScriptLibrary_BoxFunctions::GetBoxPointDistance(struct FBox* Box, double ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_BoxFunctions", "GetBoxPointDistance");

	Params::UGeometryScriptLibrary_BoxFunctions_GetBoxPointDistance_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Box != nullptr)
		*Box = std::move(Parms.Box);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetBoxFaceCenter
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBox                        Box                                                              (Edit, ConstParm, ExportObject, OutParm)
// int32                              FaceIndex                                                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     FaceNormal                                                       (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector UGeometryScriptLibrary_BoxFunctions::GetBoxFaceCenter(struct FBox* Box, int32* FaceIndex, const struct FVector& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_BoxFunctions", "GetBoxFaceCenter");

	Params::UGeometryScriptLibrary_BoxFunctions_GetBoxFaceCenter_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Box != nullptr)
		*Box = std::move(Parms.Box);

	if (FaceIndex != nullptr)
		*FaceIndex = Parms.FaceIndex;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetBoxCorner
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBox                        Box                                                              (Edit, ConstParm, ExportObject, OutParm)
// int32                              CornerIndex                                                      (Edit, ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UGeometryScriptLibrary_BoxFunctions::GetBoxCorner(struct FBox* Box, const struct FVector& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_BoxFunctions", "GetBoxCorner");

	Params::UGeometryScriptLibrary_BoxFunctions_GetBoxCorner_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Box != nullptr)
		*Box = std::move(Parms.Box);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetBoxCenterSize
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBox                        Box                                                              (Edit, ConstParm, ExportObject, OutParm)
// struct FVector                     Center                                                           (Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
// struct FVector                     Dimensions                                                       (Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, DuplicateTransient)

struct FVector UGeometryScriptLibrary_BoxFunctions::GetBoxCenterSize(struct FBox* Box)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_BoxFunctions", "GetBoxCenterSize");

	Params::UGeometryScriptLibrary_BoxFunctions_GetBoxCenterSize_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Box != nullptr)
		*Box = std::move(Parms.Box);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetBoxBoxDistance
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBox                        Box1                                                             (ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FBox                        Box2                                                             (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FBox UGeometryScriptLibrary_BoxFunctions::GetBoxBoxDistance(double ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_BoxFunctions", "GetBoxBoxDistance");

	Params::UGeometryScriptLibrary_BoxFunctions_GetBoxBoxDistance_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.FindClosestPointOnBox
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBox                        Box                                                              (Edit, ConstParm, ExportObject, OutParm)
// struct FVector                     Point                                                            (ConstParm, Parm, ReturnParm)
// bool                               bIsInside                                                        (Edit, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool UGeometryScriptLibrary_BoxFunctions::FindClosestPointOnBox(struct FBox* Box, const struct FVector& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_BoxFunctions", "FindClosestPointOnBox");

	Params::UGeometryScriptLibrary_BoxFunctions_FindClosestPointOnBox_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Box != nullptr)
		*Box = std::move(Parms.Box);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.FindBoxBoxIntersection
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBox                        Box1                                                             (ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FBox                        Box2                                                             (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bIsIntersecting                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FBox                        ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool UGeometryScriptLibrary_BoxFunctions::FindBoxBoxIntersection(const struct FBox& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_BoxFunctions", "FindBoxBoxIntersection");

	Params::UGeometryScriptLibrary_BoxFunctions_FindBoxBoxIntersection_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_TextureMapFunctions
// (None)

class UClass* UGeometryScriptLibrary_TextureMapFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_TextureMapFunctions");

	return Clss;
}


// GeometryScriptLibrary_TextureMapFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_TextureMapFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_TextureMapFunctions* UGeometryScriptLibrary_TextureMapFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_TextureMapFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_TextureMapFunctions*>(UGeometryScriptLibrary_TextureMapFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_TextureMapFunctions.SampleTextureRenderTarget2DAtUVPositions
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptUVList       UVList                                                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UTextureRenderTarget2D*      Texture                                                          (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst)
// struct FGeometryScriptSampleTextureOptionsSampleOptions                                                    (Edit, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptColorList    ColorList                                                        (ConstParm, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_TextureMapFunctions::SampleTextureRenderTarget2DAtUVPositions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_TextureMapFunctions", "SampleTextureRenderTarget2DAtUVPositions");

	Params::UGeometryScriptLibrary_TextureMapFunctions_SampleTextureRenderTarget2DAtUVPositions_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_TextureMapFunctions.SampleTexture2DAtUVPositions
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptUVList       UVList                                                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UTexture2D*                  Texture                                                          (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst)
// struct FGeometryScriptSampleTextureOptionsSampleOptions                                                    (Edit, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptColorList    ColorList                                                        (ConstParm, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_TextureMapFunctions::SampleTexture2DAtUVPositions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_TextureMapFunctions", "SampleTexture2DAtUVPositions");

	Params::UGeometryScriptLibrary_TextureMapFunctions_SampleTexture2DAtUVPositions_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions
// (None)

class UClass* UGeometryScriptLibrary_VectorMathFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_VectorMathFunctions");

	return Clss;
}


// GeometryScriptLibrary_VectorMathFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_VectorMathFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_VectorMathFunctions* UGeometryScriptLibrary_VectorMathFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_VectorMathFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_VectorMathFunctions*>(UGeometryScriptLibrary_VectorMathFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.VectorToScalar
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGeometryScriptVectorList   VectorList                                                       (Edit, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             ConstantX                                                        (ConstParm, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// double                             ConstantY                                                        (Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// double                             ConstantZ                                                        (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptScalarList   ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

double UGeometryScriptLibrary_VectorMathFunctions::VectorToScalar(const struct FGeometryScriptScalarList& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_VectorMathFunctions", "VectorToScalar");

	Params::UGeometryScriptLibrary_VectorMathFunctions_VectorToScalar_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.VectorNormalizeInPlace
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGeometryScriptVectorList   VectorList                                                       (Edit, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     SetOnFailure                                                     (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

struct FVector UGeometryScriptLibrary_VectorMathFunctions::VectorNormalizeInPlace()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_VectorMathFunctions", "VectorNormalizeInPlace");

	Params::UGeometryScriptLibrary_VectorMathFunctions_VectorNormalizeInPlace_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.VectorLength
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGeometryScriptVectorList   VectorList                                                       (Edit, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptScalarList   ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FGeometryScriptVectorList UGeometryScriptLibrary_VectorMathFunctions::VectorLength(const struct FGeometryScriptScalarList& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_VectorMathFunctions", "VectorLength");

	Params::UGeometryScriptLibrary_VectorMathFunctions_VectorLength_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.VectorDot
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGeometryScriptVectorList   VectorListA                                                      (BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptVectorList   VectorListB                                                      (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptScalarList   ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FGeometryScriptVectorList UGeometryScriptLibrary_VectorMathFunctions::VectorDot(const struct FGeometryScriptScalarList& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_VectorMathFunctions", "VectorDot");

	Params::UGeometryScriptLibrary_VectorMathFunctions_VectorDot_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.VectorCross
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGeometryScriptVectorList   VectorListA                                                      (BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptVectorList   VectorListB                                                      (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptVectorList   ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FGeometryScriptVectorList UGeometryScriptLibrary_VectorMathFunctions::VectorCross(const struct FGeometryScriptVectorList& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_VectorMathFunctions", "VectorCross");

	Params::UGeometryScriptLibrary_VectorMathFunctions_VectorCross_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.VectorBlendInPlace
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptVectorList   VectorListA                                                      (BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptVectorList   VectorListB                                                      (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             ConstantA                                                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             ConstantB                                                        (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

double UGeometryScriptLibrary_VectorMathFunctions::VectorBlendInPlace()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_VectorMathFunctions", "VectorBlendInPlace");

	Params::UGeometryScriptLibrary_VectorMathFunctions_VectorBlendInPlace_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.VectorBlend
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGeometryScriptVectorList   VectorListA                                                      (BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptVectorList   VectorListB                                                      (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             ConstantA                                                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             ConstantB                                                        (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptVectorList   ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

double UGeometryScriptLibrary_VectorMathFunctions::VectorBlend(const struct FGeometryScriptVectorList& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_VectorMathFunctions", "VectorBlend");

	Params::UGeometryScriptLibrary_VectorMathFunctions_VectorBlend_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarVectorMultiplyInPlace
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptScalarList   ScalarList                                                       (ConstParm, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptVectorList   VectorList                                                       (Edit, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             ScalarMultiplier                                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

double UGeometryScriptLibrary_VectorMathFunctions::ScalarVectorMultiplyInPlace()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_VectorMathFunctions", "ScalarVectorMultiplyInPlace");

	Params::UGeometryScriptLibrary_VectorMathFunctions_ScalarVectorMultiplyInPlace_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarVectorMultiply
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGeometryScriptScalarList   ScalarList                                                       (ConstParm, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptVectorList   VectorList                                                       (Edit, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             ScalarMultiplier                                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptVectorList   ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

double UGeometryScriptLibrary_VectorMathFunctions::ScalarVectorMultiply(const struct FGeometryScriptVectorList& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_VectorMathFunctions", "ScalarVectorMultiply");

	Params::UGeometryScriptLibrary_VectorMathFunctions_ScalarVectorMultiply_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarMultiplyInPlace
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptScalarList   ScalarListA                                                      (BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptScalarList   ScalarListB                                                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             ConstantMultiplier                                               (ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

double UGeometryScriptLibrary_VectorMathFunctions::ScalarMultiplyInPlace()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_VectorMathFunctions", "ScalarMultiplyInPlace");

	Params::UGeometryScriptLibrary_VectorMathFunctions_ScalarMultiplyInPlace_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarMultiply
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGeometryScriptScalarList   ScalarListA                                                      (BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptScalarList   ScalarListB                                                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             ConstantMultiplier                                               (ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptScalarList   ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

double UGeometryScriptLibrary_VectorMathFunctions::ScalarMultiply(const struct FGeometryScriptScalarList& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_VectorMathFunctions", "ScalarMultiply");

	Params::UGeometryScriptLibrary_VectorMathFunctions_ScalarMultiply_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarInvertInPlace
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptScalarList   ScalarList                                                       (ConstParm, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             Numerator                                                        (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// double                             SetOnFailure                                                     (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             Epsilon                                                          (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

double UGeometryScriptLibrary_VectorMathFunctions::ScalarInvertInPlace()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_VectorMathFunctions", "ScalarInvertInPlace");

	Params::UGeometryScriptLibrary_VectorMathFunctions_ScalarInvertInPlace_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarInvert
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGeometryScriptScalarList   ScalarList                                                       (ConstParm, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             Numerator                                                        (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// double                             SetOnFailure                                                     (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             Epsilon                                                          (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FGeometryScriptScalarList   ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

double UGeometryScriptLibrary_VectorMathFunctions::ScalarInvert(const struct FGeometryScriptScalarList& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_VectorMathFunctions", "ScalarInvert");

	Params::UGeometryScriptLibrary_VectorMathFunctions_ScalarInvert_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarBlendInPlace
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptScalarList   ScalarListA                                                      (BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptScalarList   ScalarListB                                                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             ConstantA                                                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             ConstantB                                                        (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

double UGeometryScriptLibrary_VectorMathFunctions::ScalarBlendInPlace()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_VectorMathFunctions", "ScalarBlendInPlace");

	Params::UGeometryScriptLibrary_VectorMathFunctions_ScalarBlendInPlace_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarBlend
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGeometryScriptScalarList   ScalarListA                                                      (BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptScalarList   ScalarListB                                                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             ConstantA                                                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             ConstantB                                                        (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptScalarList   ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

double UGeometryScriptLibrary_VectorMathFunctions::ScalarBlend(const struct FGeometryScriptScalarList& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_VectorMathFunctions", "ScalarBlend");

	Params::UGeometryScriptLibrary_VectorMathFunctions_ScalarBlend_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ConstantVectorMultiplyInPlace
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// double                             Constant                                                         (OutParm, Transient, Config, EditConst)
// struct FGeometryScriptVectorList   VectorList                                                       (Edit, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

struct FGeometryScriptVectorList UGeometryScriptLibrary_VectorMathFunctions::ConstantVectorMultiplyInPlace(double* Constant)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_VectorMathFunctions", "ConstantVectorMultiplyInPlace");

	Params::UGeometryScriptLibrary_VectorMathFunctions_ConstantVectorMultiplyInPlace_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Constant != nullptr)
		*Constant = Parms.Constant;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ConstantVectorMultiply
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// double                             Constant                                                         (OutParm, Transient, Config, EditConst)
// struct FGeometryScriptVectorList   VectorList                                                       (Edit, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptVectorList   ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FGeometryScriptVectorList UGeometryScriptLibrary_VectorMathFunctions::ConstantVectorMultiply(double* Constant, const struct FGeometryScriptVectorList& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_VectorMathFunctions", "ConstantVectorMultiply");

	Params::UGeometryScriptLibrary_VectorMathFunctions_ConstantVectorMultiply_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Constant != nullptr)
		*Constant = Parms.Constant;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ConstantScalarMultiplyInPlace
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// double                             Constant                                                         (OutParm, Transient, Config, EditConst)
// struct FGeometryScriptScalarList   ScalarList                                                       (ConstParm, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

struct FGeometryScriptScalarList UGeometryScriptLibrary_VectorMathFunctions::ConstantScalarMultiplyInPlace(double* Constant)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_VectorMathFunctions", "ConstantScalarMultiplyInPlace");

	Params::UGeometryScriptLibrary_VectorMathFunctions_ConstantScalarMultiplyInPlace_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Constant != nullptr)
		*Constant = Parms.Constant;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ConstantScalarMultiply
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// double                             Constant                                                         (OutParm, Transient, Config, EditConst)
// struct FGeometryScriptScalarList   ScalarList                                                       (ConstParm, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptScalarList   ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FGeometryScriptScalarList UGeometryScriptLibrary_VectorMathFunctions::ConstantScalarMultiply(double* Constant, const struct FGeometryScriptScalarList& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_VectorMathFunctions", "ConstantScalarMultiply");

	Params::UGeometryScriptLibrary_VectorMathFunctions_ConstantScalarMultiply_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Constant != nullptr)
		*Constant = Parms.Constant;

	return Parms.ReturnValue;

}

}



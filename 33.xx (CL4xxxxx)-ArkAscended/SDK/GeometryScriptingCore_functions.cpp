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
// class UDynamicMesh*                FromDynamicMesh                                                  (Edit, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UStaticMesh*                 ToStaticMeshAsset                                                (ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptCollisionFromMeshOptionsOptions                                                          (Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class UStaticMesh*                 StaticMeshAsset                                                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UPrimitiveComponent*         SourceComponent                                                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FGeometryScriptSetSimpleCollisionOptionsOptions                                                          (Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)

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
// class UDynamicMesh*                FromDynamicMesh                                                  (Edit, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UDynamicMeshComponent*       ToDynamicMeshComponent                                           (Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptCollisionFromMeshOptionsOptions                                                          (Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class UDynamicMeshComponent*       Component                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)
// bool                               bEmitTransaction                                                 (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_CollisionFunctions::ResetDynamicMeshCollision(class UDynamicMeshComponent* Component, bool bEmitTransaction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_CollisionFunctions", "ResetDynamicMeshCollision");

	Params::UGeometryScriptLibrary_CollisionFunctions_ResetDynamicMeshCollision_Params Parms{};

	Parms.Component = Component;
	Parms.bEmitTransaction = bEmitTransaction;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                CopyToMesh                                                       (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                CopyToMeshOut                                                    (BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FTransform                  ProjectionFrame                                                  (ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptSweptHullOptionsOptions                                                          (Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                CopyToMesh                                                       (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                CopyToMeshOut                                                    (BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FGeometryScriptConvexHullOptionsOptions                                                          (Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_ContainmentFunctions::ComputeMeshConvexHull(class UDynamicMesh* ReturnValue)
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

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ContainmentFunctions.ComputeMeshConvexDecomposition
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                CopyToMesh                                                       (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                CopyToMeshOut                                                    (BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptConvexDecompositionOptionsOptions                                                          (Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// struct FGeometryScriptVectorList   VectorList                                                       (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              Index                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
// struct FVector                     NewValue                                                         (ConstParm, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               bIsValidIndex                                                    (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

bool UGeometryScriptLibrary_ListUtilityFunctions::SetVectorListItem(int32* Index, struct FVector* NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "SetVectorListItem");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_SetVectorListItem_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Index != nullptr)
		*Index = Parms.Index;

	if (NewValue != nullptr)
		*NewValue = std::move(Parms.NewValue);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.SetUVListItem
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGeometryScriptUVList       UVList                                                           (ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              Index                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
// struct FVector2D                   NewUV                                                            (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// bool                               bIsValidIndex                                                    (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

bool UGeometryScriptLibrary_ListUtilityFunctions::SetUVListItem(int32* Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "SetUVListItem");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_SetUVListItem_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Index != nullptr)
		*Index = Parms.Index;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.SetScalarListItem
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptScalarList   ScalarList                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              Index                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
// double                             NewValue                                                         (ConstParm, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               bIsValidIndex                                                    (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

bool UGeometryScriptLibrary_ListUtilityFunctions::SetScalarListItem(int32* Index, double* NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "SetScalarListItem");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_SetScalarListItem_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Index != nullptr)
		*Index = Parms.Index;

	if (NewValue != nullptr)
		*NewValue = Parms.NewValue;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.SetIndexListItem
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptIndexList    IndexList                                                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              Index                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
// int32                              NewValue                                                         (ConstParm, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               bIsValidIndex                                                    (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

bool UGeometryScriptLibrary_ListUtilityFunctions::SetIndexListItem(int32* Index, int32* NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "SetIndexListItem");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_SetIndexListItem_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Index != nullptr)
		*Index = Parms.Index;

	if (NewValue != nullptr)
		*NewValue = Parms.NewValue;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.SetColorListItem
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGeometryScriptColorList    ColorList                                                        (Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              Index                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
// struct FLinearColor                NewColor                                                         (ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// bool                               bIsValidIndex                                                    (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

bool UGeometryScriptLibrary_ListUtilityFunctions::SetColorListItem(int32* Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "SetColorListItem");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_SetColorListItem_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Index != nullptr)
		*Index = Parms.Index;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetVectorListLength
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptVectorList   VectorList                                                       (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// struct FGeometryScriptVectorList   VectorList                                                       (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// struct FGeometryScriptVectorList   VectorList                                                       (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              Index                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
// bool                               bIsValidIndex                                                    (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FVector                     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UGeometryScriptLibrary_ListUtilityFunctions::GetVectorListItem(int32* Index, const struct FVector& ReturnValue)
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

	if (Index != nullptr)
		*Index = Parms.Index;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetUVListLength
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptUVList       UVList                                                           (ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// struct FGeometryScriptUVList       UVList                                                           (ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// struct FGeometryScriptUVList       UVList                                                           (ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              Index                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
// bool                               bIsValidIndex                                                    (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FVector2D                   ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UGeometryScriptLibrary_ListUtilityFunctions::GetUVListItem(int32* Index, const struct FVector2D& ReturnValue)
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

	if (Index != nullptr)
		*Index = Parms.Index;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetTriangleListLength
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptTriangleList TriangleList                                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// struct FGeometryScriptTriangleList TriangleList                                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// struct FGeometryScriptTriangleList TriangleList                                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              Triangle                                                         (EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config)
// bool                               bIsValidTriangle                                                 (Edit, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FIntVector                  ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// struct FGeometryScriptScalarList   ScalarList                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// struct FGeometryScriptScalarList   ScalarList                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// struct FGeometryScriptScalarList   ScalarList                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              Index                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
// bool                               bIsValidIndex                                                    (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// double                             ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UGeometryScriptLibrary_ListUtilityFunctions::GetScalarListItem(int32* Index, double ReturnValue)
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

	if (Index != nullptr)
		*Index = Parms.Index;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetIndexListLength
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptIndexList    IndexList                                                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// struct FGeometryScriptIndexList    IndexList                                                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// struct FGeometryScriptIndexList    IndexList                                                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              Index                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
// bool                               bIsValidIndex                                                    (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UGeometryScriptLibrary_ListUtilityFunctions::GetIndexListItem(int32* Index, int32 ReturnValue)
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

	if (Index != nullptr)
		*Index = Parms.Index;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetColorListLength
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptColorList    ColorList                                                        (Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// struct FGeometryScriptColorList    ColorList                                                        (Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// struct FGeometryScriptColorList    ColorList                                                        (Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              Index                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
// bool                               bIsValidIndex                                                    (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FLinearColor                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UGeometryScriptLibrary_ListUtilityFunctions::GetColorListItem(int32* Index, const struct FLinearColor& ReturnValue)
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

	if (Index != nullptr)
		*Index = Parms.Index;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ExtractColorListChannels
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptColorList    ColorList                                                        (Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptVectorList   VectorList                                                       (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              XChannelIndex                                                    (Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              YChannelIndex                                                    (Edit, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              ZChannelIndex                                                    (Edit, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

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
// struct FGeometryScriptColorList    ColorList                                                        (Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptScalarList   ScalarList                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              ChannelIndex                                                     (ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

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
// struct FGeometryScriptVectorList   VectorList                                                       (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptVectorList   DuplicateList                                                    (Edit, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

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
// struct FGeometryScriptUVList       UVList                                                           (ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptUVList       DuplicateList                                                    (Edit, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

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
// struct FGeometryScriptScalarList   ScalarList                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptScalarList   DuplicateList                                                    (Edit, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

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
// struct FGeometryScriptIndexList    IndexList                                                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptIndexList    DuplicateList                                                    (Edit, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

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
// struct FGeometryScriptColorList    ColorList                                                        (Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptColorList    DuplicateList                                                    (Edit, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

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
// struct FGeometryScriptVectorList   VectorList                                                       (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// TArray<struct FVector>             VectorArray                                                      (ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

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
// struct FGeometryScriptUVList       UVList                                                           (ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// TArray<struct FVector2D>           UVArray                                                          (Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

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
// struct FGeometryScriptTriangleList TriangleList                                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// TArray<struct FIntVector>          TriangleArray                                                    (Edit, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

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
// struct FGeometryScriptScalarList   ScalarList                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// TArray<double>                     ScalarArray                                                      (ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

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
// struct FGeometryScriptIndexList    IndexList                                                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// TArray<int32>                      IndexArray                                                       (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

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
// struct FGeometryScriptColorList    ColorList                                                        (Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// TArray<struct FLinearColor>        ColorArray                                                       (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

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
// TArray<struct FVector>             VectorArray                                                      (ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FGeometryScriptVectorList   VectorList                                                       (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

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
// TArray<struct FVector2D>           UVArray                                                          (Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptUVList       UVList                                                           (ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

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
// TArray<struct FIntVector>          TriangleArray                                                    (Edit, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptTriangleList TriangleList                                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

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
// TArray<double>                     VectorArray                                                      (ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FGeometryScriptScalarList   ScalarList                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

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
// TArray<int32>                      IndexArray                                                       (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptIndexList    IndexList                                                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// enum class EGeometryScriptIndexTypeIndexType                                                        (BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

enum class EGeometryScriptIndexType UGeometryScriptLibrary_ListUtilityFunctions::ConvertArrayToIndexList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "ConvertArrayToIndexList");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToIndexList_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertArrayToColorList
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FLinearColor>        ColorArray                                                       (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptColorList    ColorList                                                        (Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

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
// struct FGeometryScriptVectorList   VectorList                                                       (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FVector                     ClearValue                                                       (ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)

struct FGeometryScriptVectorList UGeometryScriptLibrary_ListUtilityFunctions::ClearVectorList(const struct FVector& ClearValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "ClearVectorList");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_ClearVectorList_Params Parms{};

	Parms.ClearValue = ClearValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ClearUVList
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGeometryScriptUVList       UVList                                                           (ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FVector2D                   ClearUV                                                          (Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

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
// struct FGeometryScriptScalarList   ScalarList                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// double                             ClearValue                                                       (ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)

struct FGeometryScriptScalarList UGeometryScriptLibrary_ListUtilityFunctions::ClearScalarList(double ClearValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "ClearScalarList");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_ClearScalarList_Params Parms{};

	Parms.ClearValue = ClearValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ClearIndexList
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptIndexList    IndexList                                                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              ClearValue                                                       (ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)

struct FGeometryScriptIndexList UGeometryScriptLibrary_ListUtilityFunctions::ClearIndexList(int32 ClearValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "ClearIndexList");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_ClearIndexList_Params Parms{};

	Parms.ClearValue = ClearValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ClearColorList
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGeometryScriptColorList    ColorList                                                        (Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FLinearColor                ClearColor                                                       (ConstParm, BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, GlobalConfig)

struct FLinearColor UGeometryScriptLibrary_ListUtilityFunctions::ClearColorList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "ClearColorList");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_ClearColorList_Params Parms{};


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
// class UStaticMesh*                 FromStaticMeshAsset                                              (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshReadLOD  RequestedLOD                                                     (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<class UMaterialInterface*>  MaterialList                                                     (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// TArray<int32>                      MaterialIndex                                                    (Edit, ConstParm, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// enum class EGeometryScriptOutcomePinsOutcome                                                          (Edit, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_StaticMeshFunctions::GetSectionMaterialListFromStaticMesh(struct FGeometryScriptMeshReadLOD* RequestedLOD, const TArray<int32>& MaterialIndex, enum class EGeometryScriptOutcomePins* Outcome)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_StaticMeshFunctions", "GetSectionMaterialListFromStaticMesh");

	Params::UGeometryScriptLibrary_StaticMeshFunctions_GetSectionMaterialListFromStaticMesh_Params Parms{};

	Parms.MaterialIndex = MaterialIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (RequestedLOD != nullptr)
		*RequestedLOD = std::move(Parms.RequestedLOD);

	if (Outcome != nullptr)
		*Outcome = Parms.Outcome;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_StaticMeshFunctions.CopyMeshToStaticMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                FromDynamicMesh                                                  (Edit, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UStaticMesh*                 ToStaticMeshAsset                                                (ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptCopyMeshToAssetOptionsOptions                                                          (Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// struct FGeometryScriptMeshWriteLOD TargetLod                                                        (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// enum class EGeometryScriptOutcomePinsOutcome                                                          (Edit, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_StaticMeshFunctions::CopyMeshToStaticMesh(enum class EGeometryScriptOutcomePins* Outcome, class UDynamicMesh* ReturnValue)
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

	if (Outcome != nullptr)
		*Outcome = Parms.Outcome;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_StaticMeshFunctions.CopyMeshToSkeletalMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                FromDynamicMesh                                                  (Edit, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class USkeletalMesh*               ToSkeletalMeshAsset                                              (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptCopyMeshToAssetOptionsOptions                                                          (Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// struct FGeometryScriptMeshWriteLOD TargetLod                                                        (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// enum class EGeometryScriptOutcomePinsOutcome                                                          (Edit, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_StaticMeshFunctions::CopyMeshToSkeletalMesh(enum class EGeometryScriptOutcomePins* Outcome, class UDynamicMesh* ReturnValue)
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

	if (Outcome != nullptr)
		*Outcome = Parms.Outcome;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_StaticMeshFunctions.CopyMeshFromStaticMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UStaticMesh*                 FromStaticMeshAsset                                              (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ToDynamicMesh                                                    (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptCopyMeshFromAssetOptionsAssetOptions                                                     (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FGeometryScriptMeshReadLOD  RequestedLOD                                                     (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// enum class EGeometryScriptOutcomePinsOutcome                                                          (Edit, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_StaticMeshFunctions::CopyMeshFromStaticMesh(const struct FGeometryScriptCopyMeshFromAssetOptions& AssetOptions, struct FGeometryScriptMeshReadLOD* RequestedLOD, enum class EGeometryScriptOutcomePins* Outcome, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_StaticMeshFunctions", "CopyMeshFromStaticMesh");

	Params::UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshFromStaticMesh_Params Parms{};

	Parms.AssetOptions = AssetOptions;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (RequestedLOD != nullptr)
		*RequestedLOD = std::move(Parms.RequestedLOD);

	if (Outcome != nullptr)
		*Outcome = Parms.Outcome;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_StaticMeshFunctions.CopyMeshFromSkeletalMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class USkeletalMesh*               FromSkeletalMeshAsset                                            (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ToDynamicMesh                                                    (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptCopyMeshFromAssetOptionsAssetOptions                                                     (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FGeometryScriptMeshReadLOD  RequestedLOD                                                     (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// enum class EGeometryScriptOutcomePinsOutcome                                                          (Edit, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_StaticMeshFunctions::CopyMeshFromSkeletalMesh(const struct FGeometryScriptCopyMeshFromAssetOptions& AssetOptions, struct FGeometryScriptMeshReadLOD* RequestedLOD, enum class EGeometryScriptOutcomePins* Outcome, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_StaticMeshFunctions", "CopyMeshFromSkeletalMesh");

	Params::UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshFromSkeletalMesh_Params Parms{};

	Parms.AssetOptions = AssetOptions;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (RequestedLOD != nullptr)
		*RequestedLOD = std::move(Parms.RequestedLOD);

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
// struct FGeometryScriptBakeTypeOptionsReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class UTexture2D*                  SourceTexture                                                    (ExportObject, BlueprintReadOnly, Net, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              SourceUVLayer                                                    (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptBakeTypeOptionsReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

int32 UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypeTexture(class UTexture2D** SourceTexture, const struct FGeometryScriptBakeTypeOptions& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBakeFunctions", "MakeBakeTypeTexture");

	Params::UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeTexture_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SourceTexture != nullptr)
		*SourceTexture = Parms.SourceTexture;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeTangentNormal
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptBakeTypeOptionsReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// struct FGeometryScriptBakeTypeOptionsReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// struct FGeometryScriptBakeTypeOptionsReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// TArray<class UTexture2D*>          MaterialIDSourceTextures                                         (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              SourceUVLayer                                                    (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptBakeTypeOptionsReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// struct FGeometryScriptBakeTypeOptionsReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// struct FGeometryScriptBakeTypeOptionsReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// enum class EGeometryScriptBakeCurvatureTypeModeCurvatureType                                                    (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// enum class EGeometryScriptBakeCurvatureColorModeColorMapping                                                     (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// float                              ColorRangeMultiplier                                             (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// float                              MinRangeMultiplier                                               (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// enum class EGeometryScriptBakeCurvatureClampModeClamping                                                         (Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptBakeTypeOptionsReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// int32                              OcclusionRays                                                    (Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// float                              MaxDistance                                                      (BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance)
// float                              SpreadAngle                                                      (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptBakeTypeOptionsReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypeBentNormal(float MaxDistance, const struct FGeometryScriptBakeTypeOptions& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBakeFunctions", "MakeBakeTypeBentNormal");

	Params::UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeBentNormal_Params Parms{};

	Parms.MaxDistance = MaxDistance;
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
// int32                              OcclusionRays                                                    (Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// float                              MaxDistance                                                      (BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance)
// float                              SpreadAngle                                                      (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// float                              BiasAngle                                                        (BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptBakeTypeOptionsReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypeAmbientOcclusion(float MaxDistance, const struct FGeometryScriptBakeTypeOptions& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBakeFunctions", "MakeBakeTypeAmbientOcclusion");

	Params::UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeAmbientOcclusion_Params Parms{};

	Parms.MaxDistance = MaxDistance;
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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FTransform                  TargetTransform                                                  (Edit, ConstParm, BlueprintVisible, Net, ReturnParm, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptBakeTargetMeshOptionsTargetOptions                                                    (ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                SourceMesh                                                       (EditFixedSize, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FTransform                  SourceTransform                                                  (Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptBakeSourceMeshOptionsSourceOptions                                                    (Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptBakeOutputTypeBakeTypes                                                        (Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptBakeVertexOptionsBakeOptions                                                      (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshBakeFunctions::BakeVertex(class UDynamicMesh** SourceMesh, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBakeFunctions", "BakeVertex");

	Params::UGeometryScriptLibrary_MeshBakeFunctions_BakeVertex_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SourceMesh != nullptr)
		*SourceMesh = Parms.SourceMesh;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.BakeTextureFromRenderCaptures
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FTransform                  TargetLocalToWorld                                               (ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptBakeTargetMeshOptionsTargetOptions                                                    (ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// TArray<class AActor*>              SourceActors                                                     (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// struct FGeometryScriptBakeRenderCaptureOptionsBakeOptions                                                      (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FGeometryScriptRenderCaptureTexturesReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshBakeFunctions::BakeTextureFromRenderCaptures(TArray<class AActor*>* SourceActors, const struct FGeometryScriptRenderCaptureTextures& ReturnValue)
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

	if (SourceActors != nullptr)
		*SourceActors = std::move(Parms.SourceActors);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.BakeTexture
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FTransform                  TargetTransform                                                  (Edit, ConstParm, BlueprintVisible, Net, ReturnParm, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptBakeTargetMeshOptionsTargetOptions                                                    (ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                SourceMesh                                                       (EditFixedSize, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FTransform                  SourceTransform                                                  (Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptBakeSourceMeshOptionsSourceOptions                                                    (Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// TArray<struct FGeometryScriptBakeTypeOptions>BakeTypes                                                        (Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptBakeTextureOptionsBakeOptions                                                      (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<class UTexture2D*>          ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshBakeFunctions::BakeTexture(class UDynamicMesh** SourceMesh, const TArray<class UTexture2D*>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBakeFunctions", "BakeTexture");

	Params::UGeometryScriptLibrary_MeshBakeFunctions_BakeTexture_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SourceMesh != nullptr)
		*SourceMesh = Parms.SourceMesh;

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              VertexID                                                         (Edit, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FVector                     NewPosition                                                      (ExportObject, EditFixedSize, Config, InstancedReference, SubobjectReference)
// bool                               bIsValidVertex                                                   (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Config, InstancedReference, SubobjectReference)
// bool                               bDeferChangeNotifications                                        (Edit, ConstParm, BlueprintVisible, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshBasicEditFunctions::SetVertexPosition(int32* VertexID, const struct FVector& NewPosition, bool bIsValidVertex, bool bDeferChangeNotifications, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBasicEditFunctions", "SetVertexPosition");

	Params::UGeometryScriptLibrary_MeshBasicEditFunctions_SetVertexPosition_Params Parms{};

	Parms.NewPosition = NewPosition;
	Parms.bIsValidVertex = bIsValidVertex;
	Parms.bDeferChangeNotifications = bDeferChangeNotifications;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VertexID != nullptr)
		*VertexID = Parms.VertexID;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.SetAllMeshVertexPositions
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptVectorList   PositionList                                                     (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshBasicEditFunctions::SetAllMeshVertexPositions(const struct FGeometryScriptVectorList& PositionList, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBasicEditFunctions", "SetAllMeshVertexPositions");

	Params::UGeometryScriptLibrary_MeshBasicEditFunctions_SetAllMeshVertexPositions_Params Parms{};

	Parms.PositionList = PositionList;
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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// bool                               bDeferChangeNotifications                                        (Edit, ConstParm, BlueprintVisible, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshBasicEditFunctions::DiscardMeshAttributes(bool bDeferChangeNotifications, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBasicEditFunctions", "DiscardMeshAttributes");

	Params::UGeometryScriptLibrary_MeshBasicEditFunctions_DiscardMeshAttributes_Params Parms{};

	Parms.bDeferChangeNotifications = bDeferChangeNotifications;
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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptIndexList    VertexList                                                       (ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              NumDeleted                                                       (Edit, ExportObject, BlueprintReadOnly, Net, Parm, Config, InstancedReference, SubobjectReference)
// bool                               bDeferChangeNotifications                                        (Edit, ConstParm, BlueprintVisible, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FGeometryScriptIndexList UGeometryScriptLibrary_MeshBasicEditFunctions::DeleteVerticesFromMesh(int32 NumDeleted, bool bDeferChangeNotifications, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBasicEditFunctions", "DeleteVerticesFromMesh");

	Params::UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteVerticesFromMesh_Params Parms{};

	Parms.NumDeleted = NumDeleted;
	Parms.bDeferChangeNotifications = bDeferChangeNotifications;
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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              VertexID                                                         (Edit, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// bool                               bWasVertexDeleted                                                (ConstParm, ExportObject, EditFixedSize, Parm, Config, InstancedReference, SubobjectReference)
// bool                               bDeferChangeNotifications                                        (Edit, ConstParm, BlueprintVisible, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshBasicEditFunctions::DeleteVertexFromMesh(int32* VertexID, bool bWasVertexDeleted, bool bDeferChangeNotifications, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBasicEditFunctions", "DeleteVertexFromMesh");

	Params::UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteVertexFromMesh_Params Parms{};

	Parms.bWasVertexDeleted = bWasVertexDeleted;
	Parms.bDeferChangeNotifications = bDeferChangeNotifications;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VertexID != nullptr)
		*VertexID = Parms.VertexID;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.DeleteTrianglesFromMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptIndexList    TriangleList                                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              NumDeleted                                                       (Edit, ExportObject, BlueprintReadOnly, Net, Parm, Config, InstancedReference, SubobjectReference)
// bool                               bDeferChangeNotifications                                        (Edit, ConstParm, BlueprintVisible, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FGeometryScriptIndexList UGeometryScriptLibrary_MeshBasicEditFunctions::DeleteTrianglesFromMesh(int32 NumDeleted, bool bDeferChangeNotifications, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBasicEditFunctions", "DeleteTrianglesFromMesh");

	Params::UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteTrianglesFromMesh_Params Parms{};

	Parms.NumDeleted = NumDeleted;
	Parms.bDeferChangeNotifications = bDeferChangeNotifications;
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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              TriangleID                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// bool                               bWasTriangleDeleted                                              (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, Config, InstancedReference, SubobjectReference)
// bool                               bDeferChangeNotifications                                        (Edit, ConstParm, BlueprintVisible, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshBasicEditFunctions::DeleteTriangleFromMesh(int32* TriangleID, bool bWasTriangleDeleted, bool bDeferChangeNotifications, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBasicEditFunctions", "DeleteTriangleFromMesh");

	Params::UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteTriangleFromMesh_Params Parms{};

	Parms.bWasTriangleDeleted = bWasTriangleDeleted;
	Parms.bDeferChangeNotifications = bDeferChangeNotifications;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TriangleID != nullptr)
		*TriangleID = Parms.TriangleID;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.DeleteSelectedTrianglesFromMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              NumDeleted                                                       (Edit, ExportObject, BlueprintReadOnly, Net, Parm, Config, InstancedReference, SubobjectReference)
// bool                               bDeferChangeNotifications                                        (Edit, ConstParm, BlueprintVisible, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FGeometryScriptMeshSelection UGeometryScriptLibrary_MeshBasicEditFunctions::DeleteSelectedTrianglesFromMesh(int32 NumDeleted, bool bDeferChangeNotifications, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBasicEditFunctions", "DeleteSelectedTrianglesFromMesh");

	Params::UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteSelectedTrianglesFromMesh_Params Parms{};

	Parms.NumDeleted = NumDeleted;
	Parms.bDeferChangeNotifications = bDeferChangeNotifications;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AppendMeshTransformed
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                AppendMesh                                                       (ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
// TArray<struct FTransform>          AppendTransforms                                                 (BlueprintReadOnly, Net, Parm, Config, InstancedReference, SubobjectReference)
// struct FTransform                  ConstantTransform                                                (ConstParm, BlueprintVisible, Net, Parm, Config, InstancedReference, SubobjectReference)
// bool                               bConstantTransformIsRelative                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, Config, InstancedReference, SubobjectReference)
// bool                               bDeferChangeNotifications                                        (Edit, ConstParm, BlueprintVisible, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptAppendMeshOptionsAppendOptions                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshBasicEditFunctions::AppendMeshTransformed(class UDynamicMesh** AppendMesh, const TArray<struct FTransform>& AppendTransforms, const struct FTransform& ConstantTransform, bool bConstantTransformIsRelative, bool bDeferChangeNotifications, const struct FGeometryScriptAppendMeshOptions& AppendOptions, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBasicEditFunctions", "AppendMeshTransformed");

	Params::UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshTransformed_Params Parms{};

	Parms.AppendTransforms = AppendTransforms;
	Parms.ConstantTransform = ConstantTransform;
	Parms.bConstantTransformIsRelative = bConstantTransformIsRelative;
	Parms.bDeferChangeNotifications = bDeferChangeNotifications;
	Parms.AppendOptions = AppendOptions;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AppendMesh != nullptr)
		*AppendMesh = Parms.AppendMesh;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AppendMeshRepeated
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                AppendMesh                                                       (ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
// struct FTransform                  AppendTransform                                                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Config, InstancedReference, SubobjectReference)
// int32                              RepeatCount                                                      (BlueprintReadOnly, Parm, Config, InstancedReference, SubobjectReference)
// bool                               bApplyTransformToFirstInstance                                   (Parm, Config, InstancedReference, SubobjectReference)
// bool                               bDeferChangeNotifications                                        (Edit, ConstParm, BlueprintVisible, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptAppendMeshOptionsAppendOptions                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshBasicEditFunctions::AppendMeshRepeated(class UDynamicMesh** AppendMesh, const struct FTransform& AppendTransform, int32 RepeatCount, bool bApplyTransformToFirstInstance, bool bDeferChangeNotifications, const struct FGeometryScriptAppendMeshOptions& AppendOptions, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBasicEditFunctions", "AppendMeshRepeated");

	Params::UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshRepeated_Params Parms{};

	Parms.AppendTransform = AppendTransform;
	Parms.RepeatCount = RepeatCount;
	Parms.bApplyTransformToFirstInstance = bApplyTransformToFirstInstance;
	Parms.bDeferChangeNotifications = bDeferChangeNotifications;
	Parms.AppendOptions = AppendOptions;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AppendMesh != nullptr)
		*AppendMesh = Parms.AppendMesh;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AppendMesh
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                AppendMesh                                                       (ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
// struct FTransform                  AppendTransform                                                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Config, InstancedReference, SubobjectReference)
// bool                               bDeferChangeNotifications                                        (Edit, ConstParm, BlueprintVisible, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptAppendMeshOptionsAppendOptions                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshBasicEditFunctions::AppendMesh(class UDynamicMesh** AppendMesh, const struct FTransform& AppendTransform, bool bDeferChangeNotifications, const struct FGeometryScriptAppendMeshOptions& AppendOptions, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBasicEditFunctions", "AppendMesh");

	Params::UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMesh_Params Parms{};

	Parms.AppendTransform = AppendTransform;
	Parms.bDeferChangeNotifications = bDeferChangeNotifications;
	Parms.AppendOptions = AppendOptions;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AppendMesh != nullptr)
		*AppendMesh = Parms.AppendMesh;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AppendBuffersToMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptSimpleMeshBuffersBuffers                                                          (ConstParm, ExportObject, Net, EditFixedSize, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptIndexList    NewTriangleIndicesList                                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Config, InstancedReference, SubobjectReference)
// int32                              MaterialID                                                       (ExportObject, BlueprintReadOnly, EditFixedSize, Config, InstancedReference, SubobjectReference)
// bool                               bDeferChangeNotifications                                        (Edit, ConstParm, BlueprintVisible, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshBasicEditFunctions::AppendBuffersToMesh(const struct FGeometryScriptSimpleMeshBuffers& Buffers, const struct FGeometryScriptIndexList& NewTriangleIndicesList, int32 MaterialID, bool bDeferChangeNotifications, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBasicEditFunctions", "AppendBuffersToMesh");

	Params::UGeometryScriptLibrary_MeshBasicEditFunctions_AppendBuffersToMesh_Params Parms{};

	Parms.Buffers = Buffers;
	Parms.NewTriangleIndicesList = NewTriangleIndicesList;
	Parms.MaterialID = MaterialID;
	Parms.bDeferChangeNotifications = bDeferChangeNotifications;
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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptVectorList   NewPositionsList                                                 (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptIndexList    NewIndicesList                                                   (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, InstancedReference, SubobjectReference)
// bool                               bDeferChangeNotifications                                        (Edit, ConstParm, BlueprintVisible, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshBasicEditFunctions::AddVerticesToMesh(const struct FGeometryScriptVectorList& NewPositionsList, const struct FGeometryScriptIndexList& NewIndicesList, bool bDeferChangeNotifications, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBasicEditFunctions", "AddVerticesToMesh");

	Params::UGeometryScriptLibrary_MeshBasicEditFunctions_AddVerticesToMesh_Params Parms{};

	Parms.NewPositionsList = NewPositionsList;
	Parms.NewIndicesList = NewIndicesList;
	Parms.bDeferChangeNotifications = bDeferChangeNotifications;
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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FVector                     NewPosition                                                      (ExportObject, EditFixedSize, Config, InstancedReference, SubobjectReference)
// int32                              NewVertexIndex                                                   (EditFixedSize, Config, InstancedReference, SubobjectReference)
// bool                               bDeferChangeNotifications                                        (Edit, ConstParm, BlueprintVisible, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshBasicEditFunctions::AddVertexToMesh(const struct FVector& NewPosition, int32 NewVertexIndex, bool bDeferChangeNotifications, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBasicEditFunctions", "AddVertexToMesh");

	Params::UGeometryScriptLibrary_MeshBasicEditFunctions_AddVertexToMesh_Params Parms{};

	Parms.NewPosition = NewPosition;
	Parms.NewVertexIndex = NewVertexIndex;
	Parms.bDeferChangeNotifications = bDeferChangeNotifications;
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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FIntVector                  NewTriangle                                                      (Edit, ExportObject, BlueprintReadOnly, Net, Config, InstancedReference, SubobjectReference)
// int32                              NewTriangleIndex                                                 (BlueprintReadOnly, Net, Config, InstancedReference, SubobjectReference)
// int32                              NewTriangleGroupID                                               (Edit, BlueprintVisible, BlueprintReadOnly, Config, InstancedReference, SubobjectReference)
// bool                               bDeferChangeNotifications                                        (Edit, ConstParm, BlueprintVisible, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshBasicEditFunctions::AddTriangleToMesh(const struct FIntVector& NewTriangle, int32 NewTriangleIndex, int32 NewTriangleGroupID, bool bDeferChangeNotifications, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBasicEditFunctions", "AddTriangleToMesh");

	Params::UGeometryScriptLibrary_MeshBasicEditFunctions_AddTriangleToMesh_Params Parms{};

	Parms.NewTriangle = NewTriangle;
	Parms.NewTriangleIndex = NewTriangleIndex;
	Parms.NewTriangleGroupID = NewTriangleGroupID;
	Parms.bDeferChangeNotifications = bDeferChangeNotifications;
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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptTriangleList NewTrianglesList                                                 (Edit, ConstParm, BlueprintVisible, Net, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptIndexList    NewIndicesList                                                   (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, InstancedReference, SubobjectReference)
// int32                              NewTriangleGroupID                                               (Edit, BlueprintVisible, BlueprintReadOnly, Config, InstancedReference, SubobjectReference)
// bool                               bDeferChangeNotifications                                        (Edit, ConstParm, BlueprintVisible, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshBasicEditFunctions::AddTrianglesToMesh(const struct FGeometryScriptTriangleList& NewTrianglesList, const struct FGeometryScriptIndexList& NewIndicesList, int32 NewTriangleGroupID, bool bDeferChangeNotifications, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBasicEditFunctions", "AddTrianglesToMesh");

	Params::UGeometryScriptLibrary_MeshBasicEditFunctions_AddTrianglesToMesh_Params Parms{};

	Parms.NewTrianglesList = NewTrianglesList;
	Parms.NewIndicesList = NewIndicesList;
	Parms.NewTriangleGroupID = NewTriangleGroupID;
	Parms.bDeferChangeNotifications = bDeferChangeNotifications;
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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              VertexID                                                         (Edit, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FGeometryScriptBoneWeight>BoneWeights                                                      (ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance)
// bool                               bIsValidVertexID                                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptBoneWeightProfileProfile                                                          (Edit, ConstParm, Net, EditFixedSize, Parm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshBoneWeightFunctions::SetVertexBoneWeights(int32* VertexID, const TArray<struct FGeometryScriptBoneWeight>& BoneWeights, bool* bIsValidVertexID, const struct FGeometryScriptBoneWeightProfile& Profile, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBoneWeightFunctions", "SetVertexBoneWeights");

	Params::UGeometryScriptLibrary_MeshBoneWeightFunctions_SetVertexBoneWeights_Params Parms{};

	Parms.BoneWeights = BoneWeights;
	Parms.Profile = Profile;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VertexID != nullptr)
		*VertexID = Parms.VertexID;

	if (bIsValidVertexID != nullptr)
		*bIsValidVertexID = Parms.bIsValidVertexID;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.SetAllVertexBoneWeights
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// TArray<struct FGeometryScriptBoneWeight>BoneWeights                                                      (ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance)
// struct FGeometryScriptBoneWeightProfileProfile                                                          (Edit, ConstParm, Net, EditFixedSize, Parm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshBoneWeightFunctions::SetAllVertexBoneWeights(const TArray<struct FGeometryScriptBoneWeight>& BoneWeights, const struct FGeometryScriptBoneWeightProfile& Profile, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBoneWeightFunctions", "SetAllVertexBoneWeights");

	Params::UGeometryScriptLibrary_MeshBoneWeightFunctions_SetAllVertexBoneWeights_Params Parms{};

	Parms.BoneWeights = BoneWeights;
	Parms.Profile = Profile;
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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// bool                               bHasBoneWeights                                                  (OutParm, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptBoneWeightProfileProfile                                                          (Edit, ConstParm, Net, EditFixedSize, Parm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshBoneWeightFunctions::MeshHasBoneWeights(bool* bHasBoneWeights, const struct FGeometryScriptBoneWeightProfile& Profile, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBoneWeightFunctions", "MeshHasBoneWeights");

	Params::UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshHasBoneWeights_Params Parms{};

	Parms.Profile = Profile;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bHasBoneWeights != nullptr)
		*bHasBoneWeights = Parms.bHasBoneWeights;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.MeshCreateBoneWeights
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// bool                               bProfileExisted                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, Config, InstancedReference, SubobjectReference)
// bool                               bReplaceExistingProfile                                          (Edit, ExportObject, OutParm, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptBoneWeightProfileProfile                                                          (Edit, ConstParm, Net, EditFixedSize, Parm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshBoneWeightFunctions::MeshCreateBoneWeights(bool* bProfileExisted, bool* bReplaceExistingProfile, const struct FGeometryScriptBoneWeightProfile& Profile, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBoneWeightFunctions", "MeshCreateBoneWeights");

	Params::UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshCreateBoneWeights_Params Parms{};

	Parms.Profile = Profile;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bProfileExisted != nullptr)
		*bProfileExisted = Parms.bProfileExisted;

	if (bReplaceExistingProfile != nullptr)
		*bReplaceExistingProfile = Parms.bReplaceExistingProfile;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.GetVertexBoneWeights
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              VertexID                                                         (Edit, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FGeometryScriptBoneWeight>BoneWeights                                                      (ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance)
// bool                               bHasValidBoneWeights                                             (ExportObject, Net, EditFixedSize, Parm, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptBoneWeightProfileProfile                                                          (Edit, ConstParm, Net, EditFixedSize, Parm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshBoneWeightFunctions::GetVertexBoneWeights(int32* VertexID, const TArray<struct FGeometryScriptBoneWeight>& BoneWeights, bool bHasValidBoneWeights, const struct FGeometryScriptBoneWeightProfile& Profile, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBoneWeightFunctions", "GetVertexBoneWeights");

	Params::UGeometryScriptLibrary_MeshBoneWeightFunctions_GetVertexBoneWeights_Params Parms{};

	Parms.BoneWeights = BoneWeights;
	Parms.bHasValidBoneWeights = bHasValidBoneWeights;
	Parms.Profile = Profile;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VertexID != nullptr)
		*VertexID = Parms.VertexID;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.GetMaxBoneWeightIndex
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// bool                               bHasBoneWeights                                                  (OutParm, Config, InstancedReference, SubobjectReference)
// int32                              MaxBoneIndex                                                     (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptBoneWeightProfileProfile                                                          (Edit, ConstParm, Net, EditFixedSize, Parm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshBoneWeightFunctions::GetMaxBoneWeightIndex(bool* bHasBoneWeights, int32 MaxBoneIndex, const struct FGeometryScriptBoneWeightProfile& Profile, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBoneWeightFunctions", "GetMaxBoneWeightIndex");

	Params::UGeometryScriptLibrary_MeshBoneWeightFunctions_GetMaxBoneWeightIndex_Params Parms{};

	Parms.MaxBoneIndex = MaxBoneIndex;
	Parms.Profile = Profile;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bHasBoneWeights != nullptr)
		*bHasBoneWeights = Parms.bHasBoneWeights;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.GetLargestVertexBoneWeight
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              VertexID                                                         (Edit, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FGeometryScriptBoneWeight   BoneWeight                                                       (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, InstancedReference, SubobjectReference)
// bool                               bHasValidBoneWeights                                             (ExportObject, Net, EditFixedSize, Parm, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptBoneWeightProfileProfile                                                          (Edit, ConstParm, Net, EditFixedSize, Parm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshBoneWeightFunctions::GetLargestVertexBoneWeight(int32* VertexID, const struct FGeometryScriptBoneWeight& BoneWeight, bool bHasValidBoneWeights, const struct FGeometryScriptBoneWeightProfile& Profile, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBoneWeightFunctions", "GetLargestVertexBoneWeight");

	Params::UGeometryScriptLibrary_MeshBoneWeightFunctions_GetLargestVertexBoneWeight_Params Parms{};

	Parms.BoneWeight = BoneWeight;
	Parms.bHasValidBoneWeights = bHasValidBoneWeights;
	Parms.Profile = Profile;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VertexID != nullptr)
		*VertexID = Parms.VertexID;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.ComputeSmoothBoneWeights
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class USkeleton*                   Skeleton                                                         (ExportObject, Net, EditFixedSize, Transient, EditConst, GlobalConfig, DuplicateTransient)
// struct FGeometryScriptSmoothBoneWeightsOptionsOptions                                                          (Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// struct FGeometryScriptBoneWeightProfileProfile                                                          (Edit, ConstParm, Net, EditFixedSize, Parm, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshBoneWeightFunctions::ComputeSmoothBoneWeights(class USkeleton* Skeleton, const struct FGeometryScriptBoneWeightProfile& Profile, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBoneWeightFunctions", "ComputeSmoothBoneWeights");

	Params::UGeometryScriptLibrary_MeshBoneWeightFunctions_ComputeSmoothBoneWeights_Params Parms{};

	Parms.Skeleton = Skeleton;
	Parms.Profile = Profile;
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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelfUnionOptionsOptions                                                          (Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FTransform                  CutFrame                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshPlaneSliceOptionsOptions                                                          (Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshBooleanFunctions::ApplyMeshPlaneSlice(struct FTransform* CutFrame, class UDynamicMesh* ReturnValue)
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

	if (CutFrame != nullptr)
		*CutFrame = std::move(Parms.CutFrame);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBooleanFunctions.ApplyMeshPlaneCut
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FTransform                  CutFrame                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshPlaneCutOptionsOptions                                                          (Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshBooleanFunctions::ApplyMeshPlaneCut(struct FTransform* CutFrame, class UDynamicMesh* ReturnValue)
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

	if (CutFrame != nullptr)
		*CutFrame = std::move(Parms.CutFrame);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBooleanFunctions.ApplyMeshMirror
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FTransform                  MirrorFrame                                                      (Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshMirrorOptionsOptions                                                          (Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshBooleanFunctions::ApplyMeshMirror(struct FTransform* MirrorFrame, class UDynamicMesh* ReturnValue)
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

	if (MirrorFrame != nullptr)
		*MirrorFrame = std::move(Parms.MirrorFrame);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBooleanFunctions.ApplyMeshBoolean
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FTransform                  TargetTransform                                                  (Edit, ConstParm, BlueprintVisible, Net, ReturnParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ToolMesh                                                         (BlueprintReadOnly, Net, OutParm, Config, InstancedReference, SubobjectReference)
// struct FTransform                  ToolTransform                                                    (ExportObject, Net, OutParm, Config, InstancedReference, SubobjectReference)
// enum class EGeometryScriptBooleanOperationOperation                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, GlobalConfig, SubobjectReference)
// struct FGeometryScriptMeshBooleanOptionsOptions                                                          (Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshBooleanFunctions::ApplyMeshBoolean(class UDynamicMesh** ToolMesh, struct FTransform* ToolTransform, enum class EGeometryScriptBooleanOperation Operation, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBooleanFunctions", "ApplyMeshBoolean");

	Params::UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshBoolean_Params Parms{};

	Parms.Operation = Operation;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ToolMesh != nullptr)
		*ToolMesh = Parms.ToolMesh;

	if (ToolTransform != nullptr)
		*ToolTransform = std::move(Parms.ToolTransform);

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                OtherMesh                                                        (ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeasureMeshDistanceOptionsOptions                                                          (Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// double                             MaxDistance                                                      (BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance)
// double                             MinDistance                                                      (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// double                             AverageDistance                                                  (ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// double                             RootMeanSqrDeviation                                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshComparisonFunctions::MeasureDistancesBetweenMeshes(class UDynamicMesh** OtherMesh, double MaxDistance, double* MinDistance, double* AverageDistance, double* RootMeanSqrDeviation, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshComparisonFunctions", "MeasureDistancesBetweenMeshes");

	Params::UGeometryScriptLibrary_MeshComparisonFunctions_MeasureDistancesBetweenMeshes_Params Parms{};

	Parms.MaxDistance = MaxDistance;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OtherMesh != nullptr)
		*OtherMesh = Parms.OtherMesh;

	if (MinDistance != nullptr)
		*MinDistance = Parms.MinDistance;

	if (AverageDistance != nullptr)
		*AverageDistance = Parms.AverageDistance;

	if (RootMeanSqrDeviation != nullptr)
		*RootMeanSqrDeviation = Parms.RootMeanSqrDeviation;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshComparisonFunctions.IsSameMeshAs
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                OtherMesh                                                        (ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptIsSameMeshOptionsOptions                                                          (Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// bool                               bIsSameMesh                                                      (ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshComparisonFunctions::IsSameMeshAs(class UDynamicMesh** OtherMesh, bool* bIsSameMesh, class UDynamicMesh* ReturnValue)
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

	if (OtherMesh != nullptr)
		*OtherMesh = Parms.OtherMesh;

	if (bIsSameMesh != nullptr)
		*bIsSameMesh = Parms.bIsSameMesh;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshComparisonFunctions.IsIntersectingMesh
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FTransform                  TargetTransform                                                  (Edit, ConstParm, BlueprintVisible, Net, ReturnParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                OtherMesh                                                        (ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// struct FTransform                  OtherTransform                                                   (ConstParm, ExportObject, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// bool                               bIsIntersecting                                                  (Edit, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshComparisonFunctions::IsIntersectingMesh(class UDynamicMesh** OtherMesh, struct FTransform* OtherTransform, bool* bIsIntersecting, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshComparisonFunctions", "IsIntersectingMesh");

	Params::UGeometryScriptLibrary_MeshComparisonFunctions_IsIntersectingMesh_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OtherMesh != nullptr)
		*OtherMesh = Parms.OtherMesh;

	if (OtherTransform != nullptr)
		*OtherTransform = std::move(Parms.OtherTransform);

	if (bIsIntersecting != nullptr)
		*bIsIntersecting = Parms.bIsIntersecting;

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptGroupLayer   GroupLayer                                                       (Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<class UDynamicMesh*>        ComponentMeshes                                                  (BlueprintVisible, ExportObject, Net, Parm, OutParm, Config, InstancedReference, SubobjectReference)
// TArray<int32>                      ComponentPolygroups                                              (EditFixedSize, Parm, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMeshPool*            MeshPool                                                         (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshDecompositionFunctions::SplitMeshByPolygroups(TArray<class UDynamicMesh*>* ComponentMeshes, TArray<int32>* ComponentPolygroups, class UDynamicMeshPool** MeshPool, class UDynamicMesh* ReturnValue)
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

	if (ComponentMeshes != nullptr)
		*ComponentMeshes = std::move(Parms.ComponentMeshes);

	if (ComponentPolygroups != nullptr)
		*ComponentPolygroups = std::move(Parms.ComponentPolygroups);

	if (MeshPool != nullptr)
		*MeshPool = Parms.MeshPool;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions.SplitMeshByMaterialIDs
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// TArray<class UDynamicMesh*>        ComponentMeshes                                                  (BlueprintVisible, ExportObject, Net, Parm, OutParm, Config, InstancedReference, SubobjectReference)
// TArray<int32>                      ComponentMaterialIDs                                             (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMeshPool*            MeshPool                                                         (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshDecompositionFunctions::SplitMeshByMaterialIDs(TArray<class UDynamicMesh*>* ComponentMeshes, TArray<int32>* ComponentMaterialIDs, class UDynamicMeshPool** MeshPool, class UDynamicMesh* ReturnValue)
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

	if (ComponentMeshes != nullptr)
		*ComponentMeshes = std::move(Parms.ComponentMeshes);

	if (ComponentMaterialIDs != nullptr)
		*ComponentMaterialIDs = std::move(Parms.ComponentMaterialIDs);

	if (MeshPool != nullptr)
		*MeshPool = Parms.MeshPool;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions.SplitMeshByComponents
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// TArray<class UDynamicMesh*>        ComponentMeshes                                                  (BlueprintVisible, ExportObject, Net, Parm, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMeshPool*            MeshPool                                                         (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshDecompositionFunctions::SplitMeshByComponents(TArray<class UDynamicMesh*>* ComponentMeshes, class UDynamicMeshPool** MeshPool, class UDynamicMesh* ReturnValue)
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

	if (ComponentMeshes != nullptr)
		*ComponentMeshes = std::move(Parms.ComponentMeshes);

	if (MeshPool != nullptr)
		*MeshPool = Parms.MeshPool;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions.GetSubMeshFromMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                StoreToSubmesh                                                   (ExportObject, BlueprintReadOnly, Parm, OutParm, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptIndexList    TriangleList                                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                StoreToSubmeshOut                                                (ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshDecompositionFunctions::GetSubMeshFromMesh(class UDynamicMesh** StoreToSubmesh, class UDynamicMesh** StoreToSubmeshOut, class UDynamicMesh* ReturnValue)
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

	if (StoreToSubmesh != nullptr)
		*StoreToSubmesh = Parms.StoreToSubmesh;

	if (StoreToSubmeshOut != nullptr)
		*StoreToSubmeshOut = Parms.StoreToSubmeshOut;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions.CopyMeshToMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                CopyFromMesh                                                     (Net, Parm, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                CopyToMesh                                                       (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                CopyToMeshOut                                                    (BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshDecompositionFunctions::CopyMeshToMesh(class UDynamicMesh** CopyFromMesh, class UDynamicMesh* ReturnValue)
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

	if (CopyFromMesh != nullptr)
		*CopyFromMesh = Parms.CopyFromMesh;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions.CopyMeshSelectionToMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                StoreToSubmesh                                                   (ExportObject, BlueprintReadOnly, Parm, OutParm, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                StoreToSubmeshOut                                                (ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Config, InstancedReference, SubobjectReference)
// bool                               bAppendToExisting                                                (BlueprintVisible, Parm, OutParm, Config, InstancedReference, SubobjectReference)
// bool                               bPreserveGroupIDs                                                (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshDecompositionFunctions::CopyMeshSelectionToMesh(class UDynamicMesh** StoreToSubmesh, class UDynamicMesh** StoreToSubmeshOut, bool* bAppendToExisting, bool* bPreserveGroupIDs, class UDynamicMesh* ReturnValue)
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

	if (StoreToSubmesh != nullptr)
		*StoreToSubmesh = Parms.StoreToSubmesh;

	if (StoreToSubmeshOut != nullptr)
		*StoreToSubmeshOut = Parms.StoreToSubmeshOut;

	if (bAppendToExisting != nullptr)
		*bAppendToExisting = Parms.bAppendToExisting;

	if (bPreserveGroupIDs != nullptr)
		*bPreserveGroupIDs = Parms.bPreserveGroupIDs;

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptTwistWarpOptionsOptions                                                          (Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// struct FTransform                  TwistOrientation                                                 (Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// float                              TwistAngle                                                       (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// float                              TwistExtent                                                      (ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshDeformFunctions::ApplyTwistWarpToMesh(const struct FTransform& TwistOrientation, float TwistAngle, float TwistExtent, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshDeformFunctions", "ApplyTwistWarpToMesh");

	Params::UGeometryScriptLibrary_MeshDeformFunctions_ApplyTwistWarpToMesh_Params Parms{};

	Parms.TwistOrientation = TwistOrientation;
	Parms.TwistAngle = TwistAngle;
	Parms.TwistExtent = TwistExtent;
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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FGeometryScriptPerlinNoiseOptionsOptions                                                          (Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshDeformFunctions::ApplyPerlinNoiseToMesh(class UDynamicMesh* ReturnValue)
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

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyMathWarpToMesh
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FTransform                  WarpOrientation                                                  (Edit, BlueprintVisible, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// enum class EGeometryScriptMathWarpTypeWarpType                                                         (ZeroConstructor, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptMathWarpOptionsOptions                                                          (Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshDeformFunctions::ApplyMathWarpToMesh(const struct FTransform& WarpOrientation, enum class EGeometryScriptMathWarpType WarpType, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshDeformFunctions", "ApplyMathWarpToMesh");

	Params::UGeometryScriptLibrary_MeshDeformFunctions_ApplyMathWarpToMesh_Params Parms{};

	Parms.WarpOrientation = WarpOrientation;
	Parms.WarpType = WarpType;
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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FGeometryScriptIterativeMeshSmoothingOptionsOptions                                                          (Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshDeformFunctions::ApplyIterativeSmoothingToMesh(class UDynamicMesh* ReturnValue)
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

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyFlareWarpToMesh
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptFlareWarpOptionsOptions                                                          (Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// struct FTransform                  FlareOrientation                                                 (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, InstancedReference, SubobjectReference)
// float                              FlarePercentX                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Config, InstancedReference, SubobjectReference)
// float                              FlarePercentY                                                    (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, Config, InstancedReference, SubobjectReference)
// float                              FlareExtent                                                      (Net, EditFixedSize, Parm, OutParm, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshDeformFunctions::ApplyFlareWarpToMesh(struct FTransform* FlareOrientation, float* FlarePercentX, float* FlarePercentY, float* FlareExtent, class UDynamicMesh* ReturnValue)
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

	if (FlareOrientation != nullptr)
		*FlareOrientation = std::move(Parms.FlareOrientation);

	if (FlarePercentX != nullptr)
		*FlarePercentX = Parms.FlarePercentX;

	if (FlarePercentY != nullptr)
		*FlarePercentY = Parms.FlarePercentY;

	if (FlareExtent != nullptr)
		*FlareExtent = Parms.FlareExtent;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyDisplaceFromTextureMap
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UTexture2D*                  Texture                                                          (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FGeometryScriptDisplaceFromTextureOptionsOptions                                                          (Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// int32                              UVLayer                                                          (BlueprintVisible, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshDeformFunctions::ApplyDisplaceFromTextureMap(class UTexture2D** Texture, class UDynamicMesh* ReturnValue)
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

	if (Texture != nullptr)
		*Texture = Parms.Texture;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyDisplaceFromPerVertexVectors
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FGeometryScriptVectorList   VectorList                                                       (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// float                              Magnitude                                                        (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshDeformFunctions::ApplyDisplaceFromPerVertexVectors(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshDeformFunctions", "ApplyDisplaceFromPerVertexVectors");

	Params::UGeometryScriptLibrary_MeshDeformFunctions_ApplyDisplaceFromPerVertexVectors_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyBendWarpToMesh
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptBendWarpOptionsOptions                                                          (Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// struct FTransform                  BendOrientation                                                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, InstancedReference, SubobjectReference)
// float                              BendAngle                                                        (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, InstancedReference, SubobjectReference)
// float                              BendExtent                                                       (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshDeformFunctions::ApplyBendWarpToMesh(struct FTransform* BendOrientation, float* BendAngle, float* BendExtent, class UDynamicMesh* ReturnValue)
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

	if (BendOrientation != nullptr)
		*BendOrientation = std::move(Parms.BendOrientation);

	if (BendAngle != nullptr)
		*BendAngle = Parms.BendAngle;

	if (BendExtent != nullptr)
		*BendExtent = Parms.BendExtent;

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              TriangleID                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// int32                              MaterialID                                                       (ExportObject, BlueprintReadOnly, EditFixedSize, Config, InstancedReference, SubobjectReference)
// bool                               bIsValidTriangle                                                 (Edit, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// bool                               bDeferChangeNotifications                                        (Edit, ConstParm, BlueprintVisible, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UGeometryScriptLibrary_MeshMaterialFunctions::SetTriangleMaterialID(int32* TriangleID, int32 MaterialID, bool bDeferChangeNotifications, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshMaterialFunctions", "SetTriangleMaterialID");

	Params::UGeometryScriptLibrary_MeshMaterialFunctions_SetTriangleMaterialID_Params Parms{};

	Parms.MaterialID = MaterialID;
	Parms.bDeferChangeNotifications = bDeferChangeNotifications;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TriangleID != nullptr)
		*TriangleID = Parms.TriangleID;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.SetPolygroupMaterialID
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptGroupLayer   GroupLayer                                                       (Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              PolygroupID                                                      (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// int32                              MaterialID                                                       (ExportObject, BlueprintReadOnly, EditFixedSize, Config, InstancedReference, SubobjectReference)
// bool                               bIsValidPolygroupID                                              (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// bool                               bDeferChangeNotifications                                        (Edit, ConstParm, BlueprintVisible, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshMaterialFunctions::SetPolygroupMaterialID(int32 PolygroupID, int32 MaterialID, bool bIsValidPolygroupID, bool bDeferChangeNotifications, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshMaterialFunctions", "SetPolygroupMaterialID");

	Params::UGeometryScriptLibrary_MeshMaterialFunctions_SetPolygroupMaterialID_Params Parms{};

	Parms.PolygroupID = PolygroupID;
	Parms.MaterialID = MaterialID;
	Parms.bIsValidPolygroupID = bIsValidPolygroupID;
	Parms.bDeferChangeNotifications = bDeferChangeNotifications;
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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptIndexList    TriangleIDList                                                   (Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// int32                              MaterialID                                                       (ExportObject, BlueprintReadOnly, EditFixedSize, Config, InstancedReference, SubobjectReference)
// bool                               bDeferChangeNotifications                                        (Edit, ConstParm, BlueprintVisible, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshMaterialFunctions::SetMaterialIDOnTriangles(const struct FGeometryScriptIndexList& TriangleIDList, int32 MaterialID, bool bDeferChangeNotifications, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshMaterialFunctions", "SetMaterialIDOnTriangles");

	Params::UGeometryScriptLibrary_MeshMaterialFunctions_SetMaterialIDOnTriangles_Params Parms{};

	Parms.TriangleIDList = TriangleIDList;
	Parms.MaterialID = MaterialID;
	Parms.bDeferChangeNotifications = bDeferChangeNotifications;
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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              MaterialID                                                       (ExportObject, BlueprintReadOnly, EditFixedSize, Config, InstancedReference, SubobjectReference)
// bool                               bDeferChangeNotifications                                        (Edit, ConstParm, BlueprintVisible, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshMaterialFunctions::SetMaterialIDForMeshSelection(int32 MaterialID, bool bDeferChangeNotifications, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshMaterialFunctions", "SetMaterialIDForMeshSelection");

	Params::UGeometryScriptLibrary_MeshMaterialFunctions_SetMaterialIDForMeshSelection_Params Parms{};

	Parms.MaterialID = MaterialID;
	Parms.bDeferChangeNotifications = bDeferChangeNotifications;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.SetAllTriangleMaterialIDs
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptIndexList    TriangleMaterialIDList                                           (ConstParm, Net, EditFixedSize, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// bool                               bDeferChangeNotifications                                        (Edit, ConstParm, BlueprintVisible, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshMaterialFunctions::SetAllTriangleMaterialIDs(const struct FGeometryScriptIndexList& TriangleMaterialIDList, bool bDeferChangeNotifications, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshMaterialFunctions", "SetAllTriangleMaterialIDs");

	Params::UGeometryScriptLibrary_MeshMaterialFunctions_SetAllTriangleMaterialIDs_Params Parms{};

	Parms.TriangleMaterialIDList = TriangleMaterialIDList;
	Parms.bDeferChangeNotifications = bDeferChangeNotifications;
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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              FromMaterialID                                                   (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// int32                              ToMaterialID                                                     (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              MaterialID                                                       (ExportObject, BlueprintReadOnly, EditFixedSize, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptIndexList    TriangleIDList                                                   (Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshMaterialFunctions::GetTrianglesByMaterialID(int32 MaterialID, const struct FGeometryScriptIndexList& TriangleIDList, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshMaterialFunctions", "GetTrianglesByMaterialID");

	Params::UGeometryScriptLibrary_MeshMaterialFunctions_GetTrianglesByMaterialID_Params Parms{};

	Parms.MaterialID = MaterialID;
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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              TriangleID                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// bool                               bIsValidTriangle                                                 (Edit, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UGeometryScriptLibrary_MeshMaterialFunctions::GetTriangleMaterialID(int32* TriangleID, int32 ReturnValue)
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

	if (TriangleID != nullptr)
		*TriangleID = Parms.TriangleID;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.GetMaxMaterialID
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// bool                               bHasMaterialIDs                                                  (ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshMaterialFunctions::GetMaxMaterialID(bool bHasMaterialIDs, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshMaterialFunctions", "GetMaxMaterialID");

	Params::UGeometryScriptLibrary_MeshMaterialFunctions_GetMaxMaterialID_Params Parms{};

	Parms.bHasMaterialIDs = bHasMaterialIDs;
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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptIndexList    TriangleIDList                                                   (Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptIndexList    MaterialIDList                                                   (Edit, ConstParm, EditFixedSize, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshMaterialFunctions::GetMaterialIDsOfTriangles(const struct FGeometryScriptIndexList& TriangleIDList, const struct FGeometryScriptIndexList& MaterialIDList, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshMaterialFunctions", "GetMaterialIDsOfTriangles");

	Params::UGeometryScriptLibrary_MeshMaterialFunctions_GetMaterialIDsOfTriangles_Params Parms{};

	Parms.TriangleIDList = TriangleIDList;
	Parms.MaterialIDList = MaterialIDList;
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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptIndexList    MaterialIDList                                                   (Edit, ConstParm, EditFixedSize, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// bool                               bHasMaterialIDs                                                  (ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshMaterialFunctions::GetAllTriangleMaterialIDs(const struct FGeometryScriptIndexList& MaterialIDList, bool bHasMaterialIDs, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshMaterialFunctions", "GetAllTriangleMaterialIDs");

	Params::UGeometryScriptLibrary_MeshMaterialFunctions_GetAllTriangleMaterialIDs_Params Parms{};

	Parms.MaterialIDList = MaterialIDList;
	Parms.bHasMaterialIDs = bHasMaterialIDs;
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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              MaterialID                                                       (ExportObject, BlueprintReadOnly, EditFixedSize, Config, InstancedReference, SubobjectReference)
// int32                              NumDeleted                                                       (Edit, ExportObject, BlueprintReadOnly, Net, Parm, Config, InstancedReference, SubobjectReference)
// bool                               bDeferChangeNotifications                                        (Edit, ConstParm, BlueprintVisible, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshMaterialFunctions::DeleteTrianglesByMaterialID(int32 MaterialID, int32 NumDeleted, bool bDeferChangeNotifications, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshMaterialFunctions", "DeleteTrianglesByMaterialID");

	Params::UGeometryScriptLibrary_MeshMaterialFunctions_DeleteTrianglesByMaterialID_Params Parms{};

	Parms.MaterialID = MaterialID;
	Parms.NumDeleted = NumDeleted;
	Parms.bDeferChangeNotifications = bDeferChangeNotifications;
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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// TArray<class UMaterialInterface*>  SourceMaterialList                                               (BlueprintReadOnly, Net, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// TArray<class UMaterialInterface*>  CompactedMaterialList                                            (BlueprintVisible, Net, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshMaterialFunctions::CompactMaterialIDs(const TArray<class UMaterialInterface*>& SourceMaterialList, const TArray<class UMaterialInterface*>& CompactedMaterialList, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshMaterialFunctions", "CompactMaterialIDs");

	Params::UGeometryScriptLibrary_MeshMaterialFunctions_CompactMaterialIDs_Params Parms{};

	Parms.SourceMaterialList = SourceMaterialList;
	Parms.CompactedMaterialList = CompactedMaterialList;
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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              ClearValue                                                       (ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshMaterialFunctions::ClearMaterialIDs(int32 ClearValue, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshMaterialFunctions", "ClearMaterialIDs");

	Params::UGeometryScriptLibrary_MeshMaterialFunctions_ClearMaterialIDs_Params Parms{};

	Parms.ClearValue = ClearValue;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshOffsetOptionsOptions                                                          (Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshBevelOptionsOptions                                                          (Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshOffsetFacesOptionsOptions                                                          (Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshOffsetFaces(class UDynamicMesh* ReturnValue)
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

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshOffset
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshOffsetOptionsOptions                                                          (Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshLinearExtrudeOptionsOptions                                                          (Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshLinearExtrudeFaces(class UDynamicMesh* ReturnValue)
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

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshInsetOutsetFaces
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshInsetOutsetFacesOptionsOptions                                                          (Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshInsetOutsetFaces(class UDynamicMesh* ReturnValue)
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

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshExtrude_Compatibility_5p0
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshExtrudeOptionsOptions                                                          (Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FGeometryScriptMeshSelectionNewTriangles                                                     (Edit, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshEditPolygroupOptionsGroupOptions                                                     (ConstParm, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshDuplicateFaces(const struct FGeometryScriptMeshSelection& NewTriangles, class UDynamicMesh* ReturnValue)
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

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshDisconnectFaces
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               bAllowBowtiesInOutput                                            (Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshDisconnectFaces(bool bAllowBowtiesInOutput, class UDynamicMesh* ReturnValue)
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

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshBevelSelection
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// enum class EGeometryScriptMeshBevelSelectionModeBevelMode                                                        (Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshBevelSelectionOptionsBevelOptions                                                     (Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshBevelSelection(enum class EGeometryScriptMeshBevelSelectionMode BevelMode, const struct FGeometryScriptMeshBevelSelectionOptions& BevelOptions, class UDynamicMesh* ReturnValue)
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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              VertexID                                                         (Edit, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// bool                               bUpdateNormal                                                    (ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// struct FVector                     NewNormal                                                        (Net, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// bool                               bUpdateTangents                                                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// struct FVector                     NewTangentX                                                      (BlueprintReadOnly, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// struct FVector                     NewTangentY                                                      (Edit, ExportObject, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// bool                               bIsValidVertex                                                   (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Config, InstancedReference, SubobjectReference)
// bool                               bMergeSplitValues                                                (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// bool                               bDeferChangeNotifications                                        (Edit, ConstParm, BlueprintVisible, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshNormalsFunctions::UpdateVertexNormal(int32* VertexID, bool* bUpdateNormal, struct FVector* NewNormal, bool* bUpdateTangents, struct FVector* NewTangentX, struct FVector* NewTangentY, bool bIsValidVertex, bool bMergeSplitValues, bool bDeferChangeNotifications, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshNormalsFunctions", "UpdateVertexNormal");

	Params::UGeometryScriptLibrary_MeshNormalsFunctions_UpdateVertexNormal_Params Parms{};

	Parms.bIsValidVertex = bIsValidVertex;
	Parms.bMergeSplitValues = bMergeSplitValues;
	Parms.bDeferChangeNotifications = bDeferChangeNotifications;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VertexID != nullptr)
		*VertexID = Parms.VertexID;

	if (bUpdateNormal != nullptr)
		*bUpdateNormal = Parms.bUpdateNormal;

	if (NewNormal != nullptr)
		*NewNormal = std::move(Parms.NewNormal);

	if (bUpdateTangents != nullptr)
		*bUpdateTangents = Parms.bUpdateTangents;

	if (NewTangentX != nullptr)
		*NewTangentX = std::move(Parms.NewTangentX);

	if (NewTangentY != nullptr)
		*NewTangentY = std::move(Parms.NewTangentY);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.SetPerVertexNormals
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              TriangleID                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FGeometryScriptTriangle     Normals                                                          (ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
// bool                               bIsValidTriangle                                                 (Edit, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// bool                               bDeferChangeNotifications                                        (Edit, ConstParm, BlueprintVisible, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UGeometryScriptLibrary_MeshNormalsFunctions::SetMeshTriangleNormals(int32* TriangleID, bool bDeferChangeNotifications, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshNormalsFunctions", "SetMeshTriangleNormals");

	Params::UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshTriangleNormals_Params Parms{};

	Parms.bDeferChangeNotifications = bDeferChangeNotifications;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TriangleID != nullptr)
		*TriangleID = Parms.TriangleID;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.SetMeshPerVertexTangents
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptVectorList   TangentXList                                                     (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptVectorList   TangentYList                                                     (ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptVectorList   VertexNormalList                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptCalculateNormalsOptionsCalculateOptions                                                 (Net, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptVectorList   TangentXList                                                     (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptVectorList   TangentYList                                                     (ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// bool                               bIsValidTangentSet                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// bool                               bHasVertexIDGaps                                                 (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// bool                               bAverageSplitVertexValues                                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptVectorList   NormalList                                                       (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// bool                               bIsValidNormalSet                                                (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// bool                               bHasVertexIDGaps                                                 (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// bool                               bAverageSplitVertexValues                                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// bool                               bHasTangents                                                     (BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptTangentsOptionsOptions                                                          (Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptSplitNormalsOptionsSplitOptions                                                     (Edit, ExportObject, Net, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptCalculateNormalsOptionsCalculateOptions                                                 (Net, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptGroupLayer   GroupLayer                                                       (Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              SetPolygroupIDOut                                                (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// int32                              SetPolygroupID                                                   (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// bool                               bGenerateNewPolygroup                                            (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// bool                               bDeferChangeNotifications                                        (Edit, ConstParm, BlueprintVisible, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FGeometryScriptMeshSelection UGeometryScriptLibrary_MeshPolygroupFunctions::SetPolygroupForMeshSelection(int32* SetPolygroupIDOut, int32* SetPolygroupID, bool* bGenerateNewPolygroup, bool bDeferChangeNotifications, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPolygroupFunctions", "SetPolygroupForMeshSelection");

	Params::UGeometryScriptLibrary_MeshPolygroupFunctions_SetPolygroupForMeshSelection_Params Parms{};

	Parms.bDeferChangeNotifications = bDeferChangeNotifications;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              NumLayers                                                        (Edit, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptGroupLayer   GroupLayer                                                       (Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              PolygroupID                                                      (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptIndexList    TriangleIDsOut                                                   (Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptGroupLayer   GroupLayer                                                       (Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              TriangleID                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// bool                               bIsValidTriangle                                                 (Edit, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UGeometryScriptLibrary_MeshPolygroupFunctions::GetTrianglePolygroupID(int32* TriangleID, int32 ReturnValue)
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

	if (TriangleID != nullptr)
		*TriangleID = Parms.TriangleID;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.GetPolygroupIDsInMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptGroupLayer   GroupLayer                                                       (Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FGeometryScriptIndexList    PolygroupIDsOut                                                  (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptGroupLayer   GroupLayer                                                       (Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FGeometryScriptIndexList    PolygroupIDsOut                                                  (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptGroupLayer   GroupLayer                                                       (Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              PolygroupID                                                      (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// int32                              NumDeleted                                                       (Edit, ExportObject, BlueprintReadOnly, Net, Parm, Config, InstancedReference, SubobjectReference)
// bool                               bDeferChangeNotifications                                        (Edit, ConstParm, BlueprintVisible, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshPolygroupFunctions::DeleteTrianglesInPolygroup(int32 PolygroupID, int32 NumDeleted, bool bDeferChangeNotifications, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPolygroupFunctions", "DeleteTrianglesInPolygroup");

	Params::UGeometryScriptLibrary_MeshPolygroupFunctions_DeleteTrianglesInPolygroup_Params Parms{};

	Parms.PolygroupID = PolygroupID;
	Parms.NumDeleted = NumDeleted;
	Parms.bDeferChangeNotifications = bDeferChangeNotifications;
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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptGroupLayer   FromGroupLayer                                                   (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptGroupLayer   ToGroupLayer                                                     (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptGroupLayer   GroupLayer                                                       (Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              UVLayer                                                          (BlueprintVisible, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptGroupLayer   GroupLayer                                                       (Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptGroupLayer   GroupLayer                                                       (Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               bRespectUVSeams                                                  (BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// bool                               bRespectHardNormals                                              (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// double                             QuadAdjacencyWeight                                              (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// double                             QuadMetricClamp                                                  (Edit, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// int32                              MaxSearchRounds                                                  (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshPolygroupFunctions::ComputePolygroupsFromPolygonDetection(bool* bRespectUVSeams, bool* bRespectHardNormals, double* QuadAdjacencyWeight, double* QuadMetricClamp, int32* MaxSearchRounds, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPolygroupFunctions", "ComputePolygroupsFromPolygonDetection");

	Params::UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromPolygonDetection_Params Parms{};

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

	if (QuadMetricClamp != nullptr)
		*QuadMetricClamp = Parms.QuadMetricClamp;

	if (MaxSearchRounds != nullptr)
		*MaxSearchRounds = Parms.MaxSearchRounds;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.ComputePolygroupsFromAngleThreshold
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptGroupLayer   GroupLayer                                                       (Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// float                              CreaseAngle                                                      (Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// int32                              MinGroupSize                                                     (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshPolygroupFunctions::ComputePolygroupsFromAngleThreshold(float* CreaseAngle, int32* MinGroupSize, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPolygroupFunctions", "ComputePolygroupsFromAngleThreshold");

	Params::UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromAngleThreshold_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (CreaseAngle != nullptr)
		*CreaseAngle = Parms.CreaseAngle;

	if (MinGroupSize != nullptr)
		*MinGroupSize = Parms.MinGroupSize;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.ClearPolygroups
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptGroupLayer   GroupLayer                                                       (Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              ClearValue                                                       (ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshPolygroupFunctions::ClearPolygroups(int32 ClearValue, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPolygroupFunctions", "ClearPolygroups");

	Params::UGeometryScriptLibrary_MeshPolygroupFunctions_ClearPolygroups_Params Parms{};

	Parms.ClearValue = ClearValue;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// TArray<struct FVector2D>           VoronoiSites                                                     (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptVoronoiOptionsVoronoiOptions                                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendVoronoiDiagram2D(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendVoronoiDiagram2D");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendVoronoiDiagram2D_Params Parms{};

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// TArray<struct FVector2D>           PolygonVertices                                                  (ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, Config, InstancedReference, SubobjectReference)
// bool                               bAllowSelfIntersections                                          (BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendTriangulatedPolygon(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendTriangulatedPolygon");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTriangulatedPolygon_Params Parms{};

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// struct FGeometryScriptRevolveOptionsRevolveOptions                                                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, InstancedReference, SubobjectReference)
// float                              MajorRadius                                                      (Edit, ExportObject, EditFixedSize, Parm, ReturnParm, Config, InstancedReference, SubobjectReference)
// float                              MinorRadius                                                      (ConstParm, EditFixedSize, Parm, ReturnParm, Config, InstancedReference, SubobjectReference)
// int32                              MajorSteps                                                       (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Config, InstancedReference, SubobjectReference)
// int32                              MinorSteps                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, Config, InstancedReference, SubobjectReference)
// enum class EGeometryScriptPrimitiveOriginModeOrigin                                                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendTorus(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendTorus");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTorus_Params Parms{};

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// TArray<struct FVector2D>           PolylineVertices                                                 (Edit, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Config, InstancedReference, SubobjectReference)
// TArray<struct FTransform>          SweepPath                                                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, InstancedReference, SubobjectReference)
// TArray<float>                      PolylineTexParamU                                                (Edit, ConstParm, Net, Parm, ReturnParm, Config, InstancedReference, SubobjectReference)
// TArray<float>                      SweepPathTexParamV                                               (Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, InstancedReference, SubobjectReference)
// bool                               bLoop                                                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// float                              StartScale                                                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// float                              EndScale                                                         (BlueprintReadOnly, Net, EditFixedSize, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// float                              RotationAngleDeg                                                 (BlueprintReadOnly, Parm, ReturnParm, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendSweepPolyline(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, float StartScale, float EndScale, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendSweepPolyline");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolyline_Params Parms{};

	Parms.StartScale = StartScale;
	Parms.EndScale = EndScale;
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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// TArray<struct FVector2D>           PolygonVertices                                                  (ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, Config, InstancedReference, SubobjectReference)
// TArray<struct FTransform>          SweepPath                                                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, InstancedReference, SubobjectReference)
// bool                               bLoop                                                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               bCapped                                                          (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// float                              StartScale                                                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// float                              EndScale                                                         (BlueprintReadOnly, Net, EditFixedSize, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// float                              RotationAngleDeg                                                 (BlueprintReadOnly, Parm, ReturnParm, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendSweepPolygon(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, bool* bCapped, float StartScale, float EndScale, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendSweepPolygon");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolygon_Params Parms{};

	Parms.StartScale = StartScale;
	Parms.EndScale = EndScale;
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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// TArray<struct FVector2D>           PolygonVertices                                                  (ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptRevolveOptionsRevolveOptions                                                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, InstancedReference, SubobjectReference)
// float                              Radius                                                           (ConstParm, ExportObject, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              Steps                                                            (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, InstancedReference, SubobjectReference)
// float                              RisePerRevolution                                                (ConstParm, BlueprintVisible, Parm, ReturnParm, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendSpiralRevolvePolygon(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, float* Radius, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendSpiralRevolvePolygon");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSpiralRevolvePolygon_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PrimitiveOptions != nullptr)
		*PrimitiveOptions = std::move(Parms.PrimitiveOptions);

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	if (Radius != nullptr)
		*Radius = Parms.Radius;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendSphereLatLong
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// float                              Radius                                                           (ConstParm, ExportObject, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              StepsPhi                                                         (Edit, Parm, ReturnParm, Config, InstancedReference, SubobjectReference)
// int32                              StepsTheta                                                       (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, InstancedReference, SubobjectReference)
// enum class EGeometryScriptPrimitiveOriginModeOrigin                                                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendSphereLatLong(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, float* Radius, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendSphereLatLong");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereLatLong_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PrimitiveOptions != nullptr)
		*PrimitiveOptions = std::move(Parms.PrimitiveOptions);

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	if (Radius != nullptr)
		*Radius = Parms.Radius;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendSphereBox
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// float                              Radius                                                           (ConstParm, ExportObject, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              StepsX                                                           (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// int32                              StepsY                                                           (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// int32                              StepsZ                                                           (Edit, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// enum class EGeometryScriptPrimitiveOriginModeOrigin                                                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendSphereBox(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, float* Radius, int32* StepsX, int32* StepsY, int32* StepsZ, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendSphereBox");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereBox_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PrimitiveOptions != nullptr)
		*PrimitiveOptions = std::move(Parms.PrimitiveOptions);

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	if (Radius != nullptr)
		*Radius = Parms.Radius;

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// TArray<struct FVector2D>           PolygonVertices                                                  (ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, Config, InstancedReference, SubobjectReference)
// TArray<struct FVector>             SweepPath                                                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, InstancedReference, SubobjectReference)
// bool                               bLoop                                                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               bCapped                                                          (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// float                              StartScale                                                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// float                              EndScale                                                         (BlueprintReadOnly, Net, EditFixedSize, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendSimpleSweptPolygon(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, bool* bCapped, float StartScale, float EndScale, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendSimpleSweptPolygon");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleSweptPolygon_Params Parms{};

	Parms.StartScale = StartScale;
	Parms.EndScale = EndScale;
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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// TArray<struct FVector2D>           PolygonVertices                                                  (ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, Config, InstancedReference, SubobjectReference)
// float                              Height                                                           (ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst)
// int32                              HeightSteps                                                      (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// bool                               bCapped                                                          (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// enum class EGeometryScriptPrimitiveOriginModeOrigin                                                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendSimpleExtrudePolygon(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, int32* HeightSteps, bool* bCapped, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendSimpleExtrudePolygon");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleExtrudePolygon_Params Parms{};

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// float                              DimensionX                                                       (Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// float                              DimensionY                                                       (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// float                              CornerRadius                                                     (ConstParm, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance)
// int32                              StepsWidth                                                       (Edit, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Config, InstancedReference, SubobjectReference)
// int32                              StepsHeight                                                      (ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Config, InstancedReference, SubobjectReference)
// int32                              StepsRound                                                       (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendRoundRectangleXY(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, float* DimensionX, float* DimensionY, float CornerRadius, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendRoundRectangleXY");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangleXY_Params Parms{};

	Parms.CornerRadius = CornerRadius;
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

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendRoundRectangle_Compatibility_5_0
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// float                              DimensionX                                                       (Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// float                              DimensionY                                                       (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// float                              CornerRadius                                                     (ConstParm, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance)
// int32                              StepsWidth                                                       (Edit, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Config, InstancedReference, SubobjectReference)
// int32                              StepsHeight                                                      (ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Config, InstancedReference, SubobjectReference)
// int32                              StepsRound                                                       (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendRoundRectangle_Compatibility_5_0(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, float* DimensionX, float* DimensionY, float CornerRadius, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendRoundRectangle_Compatibility_5_0");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangle_Compatibility_5_0_Params Parms{};

	Parms.CornerRadius = CornerRadius;
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

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendRevolvePolygon
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// TArray<struct FVector2D>           PolygonVertices                                                  (ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptRevolveOptionsRevolveOptions                                                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, InstancedReference, SubobjectReference)
// float                              Radius                                                           (ConstParm, ExportObject, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              Steps                                                            (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendRevolvePolygon(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, float* Radius, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendRevolvePolygon");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePolygon_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PrimitiveOptions != nullptr)
		*PrimitiveOptions = std::move(Parms.PrimitiveOptions);

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	if (Radius != nullptr)
		*Radius = Parms.Radius;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendRevolvePath
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// TArray<struct FVector2D>           PathVertices                                                     (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptRevolveOptionsRevolveOptions                                                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, InstancedReference, SubobjectReference)
// int32                              Steps                                                            (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, InstancedReference, SubobjectReference)
// bool                               bCapped                                                          (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendRevolvePath(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, bool* bCapped, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendRevolvePath");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePath_Params Parms{};

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// float                              DimensionX                                                       (Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// float                              DimensionY                                                       (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// int32                              StepsWidth                                                       (Edit, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Config, InstancedReference, SubobjectReference)
// int32                              StepsHeight                                                      (ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendRectangleXY(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, float* DimensionX, float* DimensionY, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendRectangleXY");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangleXY_Params Parms{};

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

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendRectangle_Compatibility_5_0
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// float                              DimensionX                                                       (Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// float                              DimensionY                                                       (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// int32                              StepsWidth                                                       (Edit, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Config, InstancedReference, SubobjectReference)
// int32                              StepsHeight                                                      (ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendRectangle_Compatibility_5_0(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, float* DimensionX, float* DimensionY, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendRectangle_Compatibility_5_0");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangle_Compatibility_5_0_Params Parms{};

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

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendLinearStairs
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// float                              StepWidth                                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Config, InstancedReference, SubobjectReference)
// float                              StepHeight                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, Config, InstancedReference, SubobjectReference)
// float                              StepDepth                                                        (EditFixedSize, ReturnParm, Config, InstancedReference, SubobjectReference)
// int32                              NumSteps                                                         (BlueprintVisible, ExportObject, ReturnParm, Config, InstancedReference, SubobjectReference)
// bool                               bFloating                                                        (ConstParm, BlueprintVisible, ReturnParm, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendLinearStairs(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, class UDynamicMesh* ReturnValue)
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

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendDisc
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// float                              Radius                                                           (ConstParm, ExportObject, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              AngleSteps                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, InstancedReference, SubobjectReference)
// int32                              SpokeSteps                                                       (BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Config, InstancedReference, SubobjectReference)
// float                              StartAngle                                                       (ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, Config, InstancedReference, SubobjectReference)
// float                              EndAngle                                                         (Edit, ExportObject, Net, ReturnParm, Config, InstancedReference, SubobjectReference)
// float                              HoleRadius                                                       (Edit, ConstParm, Net, ReturnParm, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendDisc(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, float* Radius, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendDisc");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendDisc_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PrimitiveOptions != nullptr)
		*PrimitiveOptions = std::move(Parms.PrimitiveOptions);

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	if (Radius != nullptr)
		*Radius = Parms.Radius;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendCylinder
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// float                              Radius                                                           (ConstParm, ExportObject, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// float                              Height                                                           (ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst)
// int32                              RadialSteps                                                      (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              HeightSteps                                                      (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// bool                               bCapped                                                          (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// enum class EGeometryScriptPrimitiveOriginModeOrigin                                                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendCylinder(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, float* Radius, int32* RadialSteps, int32* HeightSteps, bool* bCapped, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendCylinder");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCylinder_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PrimitiveOptions != nullptr)
		*PrimitiveOptions = std::move(Parms.PrimitiveOptions);

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	if (Radius != nullptr)
		*Radius = Parms.Radius;

	if (RadialSteps != nullptr)
		*RadialSteps = Parms.RadialSteps;

	if (HeightSteps != nullptr)
		*HeightSteps = Parms.HeightSteps;

	if (bCapped != nullptr)
		*bCapped = Parms.bCapped;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendCurvedStairs
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// float                              StepWidth                                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Config, InstancedReference, SubobjectReference)
// float                              StepHeight                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, Config, InstancedReference, SubobjectReference)
// float                              InnerRadius                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// float                              CurveAngle                                                       (Edit, BlueprintReadOnly, ReturnParm, Config, InstancedReference, SubobjectReference)
// int32                              NumSteps                                                         (BlueprintVisible, ExportObject, ReturnParm, Config, InstancedReference, SubobjectReference)
// bool                               bFloating                                                        (ConstParm, BlueprintVisible, ReturnParm, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendCurvedStairs(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, float InnerRadius, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendCurvedStairs");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCurvedStairs_Params Parms{};

	Parms.InnerRadius = InnerRadius;
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


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendCone
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// float                              BaseRadius                                                       (ReturnParm, Config, InstancedReference, SubobjectReference)
// float                              TopRadius                                                        (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// float                              Height                                                           (ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst)
// int32                              RadialSteps                                                      (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              HeightSteps                                                      (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// bool                               bCapped                                                          (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// enum class EGeometryScriptPrimitiveOriginModeOrigin                                                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendCone(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, float* TopRadius, int32* RadialSteps, int32* HeightSteps, bool* bCapped, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendCone");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCone_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PrimitiveOptions != nullptr)
		*PrimitiveOptions = std::move(Parms.PrimitiveOptions);

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	if (TopRadius != nullptr)
		*TopRadius = Parms.TopRadius;

	if (RadialSteps != nullptr)
		*RadialSteps = Parms.RadialSteps;

	if (HeightSteps != nullptr)
		*HeightSteps = Parms.HeightSteps;

	if (bCapped != nullptr)
		*bCapped = Parms.bCapped;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendCapsule
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// float                              Radius                                                           (ConstParm, ExportObject, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// float                              LineLength                                                       (ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// int32                              HemisphereSteps                                                  (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// int32                              CircleSteps                                                      (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// enum class EGeometryScriptPrimitiveOriginModeOrigin                                                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendCapsule(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, float* Radius, float* LineLength, int32* HemisphereSteps, int32* CircleSteps, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendCapsule");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCapsule_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PrimitiveOptions != nullptr)
		*PrimitiveOptions = std::move(Parms.PrimitiveOptions);

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	if (Radius != nullptr)
		*Radius = Parms.Radius;

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// float                              DimensionX                                                       (Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// float                              DimensionY                                                       (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// float                              DimensionZ                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// int32                              StepsX                                                           (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// int32                              StepsY                                                           (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// int32                              StepsZ                                                           (Edit, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// enum class EGeometryScriptPrimitiveOriginModeOrigin                                                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              VertexID                                                         (Edit, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::IsValidVertexID(int32* VertexID, bool ReturnValue)
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

	if (VertexID != nullptr)
		*VertexID = Parms.VertexID;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.IsValidTriangleID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              TriangleID                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::IsValidTriangleID(int32* TriangleID, bool ReturnValue)
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

	if (TriangleID != nullptr)
		*TriangleID = Parms.TriangleID;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetVertexPosition
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              VertexID                                                         (Edit, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// bool                               bIsValidVertex                                                   (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Config, InstancedReference, SubobjectReference)
// struct FVector                     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::GetVertexPosition(int32* VertexID, bool bIsValidVertex, const struct FVector& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetVertexPosition");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetVertexPosition_Params Parms{};

	Parms.bIsValidVertex = bIsValidVertex;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VertexID != nullptr)
		*VertexID = Parms.VertexID;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetVertexCount
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              UvSetIndex                                                       (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// bool                               bIsValidUVSet                                                    (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
// bool                               bUVSetIsEmpty                                                    (BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
// struct FBox2D                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UGeometryScriptLibrary_MeshQueryFunctions::GetUVSetBoundingBox(int32 UvSetIndex, const struct FBox2D& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetUVSetBoundingBox");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetUVSetBoundingBox_Params Parms{};

	Parms.UvSetIndex = UvSetIndex;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTriangleVertexColors
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              TriangleID                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FLinearColor                Color1                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, DisableEditOnInstance)
// struct FLinearColor                Color2                                                           (Edit, ConstParm, BlueprintReadOnly, OutParm, DisableEditOnTemplate, DisableEditOnInstance)
// struct FLinearColor                Color3                                                           (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, DisableEditOnTemplate, DisableEditOnInstance)
// bool                               bTriHasValidVertexColors                                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UGeometryScriptLibrary_MeshQueryFunctions::GetTriangleVertexColors(int32* TriangleID, struct FLinearColor* Color1, struct FLinearColor* Color2, struct FLinearColor* Color3, class UDynamicMesh* ReturnValue)
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

	if (TriangleID != nullptr)
		*TriangleID = Parms.TriangleID;

	if (Color1 != nullptr)
		*Color1 = std::move(Parms.Color1);

	if (Color2 != nullptr)
		*Color2 = std::move(Parms.Color2);

	if (Color3 != nullptr)
		*Color3 = std::move(Parms.Color3);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTriangleUVs
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              UvSetIndex                                                       (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// int32                              TriangleID                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FVector2D                   UV1                                                              (Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FVector2D                   UV2                                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FVector2D                   UV3                                                              (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               bHaveValidUVs                                                    (BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)

bool UGeometryScriptLibrary_MeshQueryFunctions::GetTriangleUVs(int32 UvSetIndex, int32* TriangleID, struct FVector2D* UV3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetTriangleUVs");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleUVs_Params Parms{};

	Parms.UvSetIndex = UvSetIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TriangleID != nullptr)
		*TriangleID = Parms.TriangleID;

	if (UV3 != nullptr)
		*UV3 = std::move(Parms.UV3);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTrianglePositions
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              TriangleID                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// bool                               bIsValidTriangle                                                 (Edit, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FVector                     Vertex1                                                          (ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FVector                     Vertex2                                                          (Edit, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FVector                     Vertex3                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, InstancedReference, SubobjectReference)

struct FVector UGeometryScriptLibrary_MeshQueryFunctions::GetTrianglePositions(int32* TriangleID, struct FVector* Vertex1, struct FVector* Vertex2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetTrianglePositions");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetTrianglePositions_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TriangleID != nullptr)
		*TriangleID = Parms.TriangleID;

	if (Vertex1 != nullptr)
		*Vertex1 = std::move(Parms.Vertex1);

	if (Vertex2 != nullptr)
		*Vertex2 = std::move(Parms.Vertex2);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTriangleNormalTangents
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              TriangleID                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// bool                               bTriHasValidElements                                             (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptTriangle     Normals                                                          (ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
// struct FGeometryScriptTriangle     Tangents                                                         (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FGeometryScriptTriangle     BiTangents                                                       (ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FGeometryScriptTriangle UGeometryScriptLibrary_MeshQueryFunctions::GetTriangleNormalTangents(int32* TriangleID, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetTriangleNormalTangents");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormalTangents_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TriangleID != nullptr)
		*TriangleID = Parms.TriangleID;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTriangleNormals
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              TriangleID                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FVector                     Normal1                                                          (Edit, Net, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
// struct FVector                     Normal2                                                          (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
// struct FVector                     Normal3                                                          (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
// bool                               bTriHasValidNormals                                              (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UGeometryScriptLibrary_MeshQueryFunctions::GetTriangleNormals(int32* TriangleID, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetTriangleNormals");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormals_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TriangleID != nullptr)
		*TriangleID = Parms.TriangleID;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTriangleIndices
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              TriangleID                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// bool                               bIsValidTriangle                                                 (Edit, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FIntVector                  ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UGeometryScriptLibrary_MeshQueryFunctions::GetTriangleIndices(int32* TriangleID, const struct FIntVector& ReturnValue)
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

	if (TriangleID != nullptr)
		*TriangleID = Parms.TriangleID;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTriangleFaceNormal
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              TriangleID                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// bool                               bIsValidTriangle                                                 (Edit, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FVector                     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UGeometryScriptLibrary_MeshQueryFunctions::GetTriangleFaceNormal(int32* TriangleID, const struct FVector& ReturnValue)
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

	if (TriangleID != nullptr)
		*TriangleID = Parms.TriangleID;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetNumVertexIDs
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// bool                               bAmbiguousTopologyFound                                          (ConstParm, ExportObject, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UGeometryScriptLibrary_MeshQueryFunctions::GetNumOpenBorderLoops(int32 ReturnValue)
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

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetNumOpenBorderEdges
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// float                              SurfaceArea                                                      (Edit, ConstParm, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
// float                              Volume                                                           (ConstParm, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, Config)

float UGeometryScriptLibrary_MeshQueryFunctions::GetMeshVolumeArea()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetMeshVolumeArea");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetMeshVolumeArea_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetMeshInfoString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class FString                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FBox                        ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              TriangleID                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FVector                     BarycentricCoords                                                (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Config, InstancedReference, SubobjectReference)
// struct FLinearColor                DefaultColor                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
// bool                               bTriHasValidVertexColors                                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
// struct FLinearColor                InterpolatedColor                                                (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FLinearColor UGeometryScriptLibrary_MeshQueryFunctions::GetInterpolatedTriangleVertexColor(int32* TriangleID, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetInterpolatedTriangleVertexColor");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleVertexColor_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TriangleID != nullptr)
		*TriangleID = Parms.TriangleID;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetInterpolatedTriangleUV
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              UvSetIndex                                                       (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// int32                              TriangleID                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FVector                     BarycentricCoords                                                (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Config, InstancedReference, SubobjectReference)
// bool                               bTriHasValidUVs                                                  (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
// struct FVector2D                   InterpolatedUV                                                   (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FVector2D UGeometryScriptLibrary_MeshQueryFunctions::GetInterpolatedTriangleUV(int32 UvSetIndex, int32* TriangleID, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetInterpolatedTriangleUV");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleUV_Params Parms{};

	Parms.UvSetIndex = UvSetIndex;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TriangleID != nullptr)
		*TriangleID = Parms.TriangleID;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetInterpolatedTrianglePosition
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              TriangleID                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FVector                     BarycentricCoords                                                (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Config, InstancedReference, SubobjectReference)
// bool                               bIsValidTriangle                                                 (Edit, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FVector                     InterpolatedPosition                                             (Edit, ExportObject, EditFixedSize, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FVector UGeometryScriptLibrary_MeshQueryFunctions::GetInterpolatedTrianglePosition(int32* TriangleID, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetInterpolatedTrianglePosition");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTrianglePosition_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TriangleID != nullptr)
		*TriangleID = Parms.TriangleID;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetInterpolatedTriangleNormalTangents
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              TriangleID                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FVector                     BarycentricCoords                                                (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Config, InstancedReference, SubobjectReference)
// bool                               bTriHasValidElements                                             (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
// struct FVector                     InterpolatedNormal                                               (ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
// struct FVector                     InterpolatedTangent                                              (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
// struct FVector                     InterpolatedBiTangent                                            (Edit, ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FVector UGeometryScriptLibrary_MeshQueryFunctions::GetInterpolatedTriangleNormalTangents(int32* TriangleID, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetInterpolatedTriangleNormalTangents");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormalTangents_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TriangleID != nullptr)
		*TriangleID = Parms.TriangleID;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetInterpolatedTriangleNormal
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              TriangleID                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FVector                     BarycentricCoords                                                (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Config, InstancedReference, SubobjectReference)
// bool                               bTriHasValidNormals                                              (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
// struct FVector                     InterpolatedNormal                                               (ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FVector UGeometryScriptLibrary_MeshQueryFunctions::GetInterpolatedTriangleNormal(int32* TriangleID, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetInterpolatedTriangleNormal");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormal_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TriangleID != nullptr)
		*TriangleID = Parms.TriangleID;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetHasVertexIDGaps
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptVectorList   PositionList                                                     (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, Config, InstancedReference, SubobjectReference)
// bool                               bSkipGaps                                                        (Edit, BlueprintVisible, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
// bool                               bHasVertexIDGaps                                                 (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UGeometryScriptLibrary_MeshQueryFunctions::GetAllVertexPositions(const struct FGeometryScriptVectorList& PositionList, bool bHasVertexIDGaps, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetAllVertexPositions");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexPositions_Params Parms{};

	Parms.PositionList = PositionList;
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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptIndexList    VertexIDList                                                     (Edit, ConstParm, ExportObject, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
// bool                               bHasVertexIDGaps                                                 (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FGeometryScriptIndexList UGeometryScriptLibrary_MeshQueryFunctions::GetAllVertexIDs(bool bHasVertexIDGaps, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetAllVertexIDs");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexIDs_Params Parms{};

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptTriangleList TriangleList                                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// bool                               bSkipGaps                                                        (Edit, BlueprintVisible, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
// bool                               bHasTriangleIDGaps                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UGeometryScriptLibrary_MeshQueryFunctions::GetAllTriangleIndices(class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetAllTriangleIndices");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetAllTriangleIndices_Params Parms{};

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptIndexList    TriangleIDList                                                   (Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// bool                               bHasTriangleIDGaps                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UGeometryScriptLibrary_MeshQueryFunctions::GetAllTriangleIDs(const struct FGeometryScriptIndexList& TriangleIDList, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetAllTriangleIDs");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetAllTriangleIDs_Params Parms{};

	Parms.TriangleIDList = TriangleIDList;
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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              TriangleID                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// bool                               bIsValidTriangle                                                 (Edit, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FVector                     Point                                                            (ConstParm, Parm, ReturnParm)
// struct FVector                     Vertex1                                                          (ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FVector                     Vertex2                                                          (Edit, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FVector                     Vertex3                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, InstancedReference, SubobjectReference)
// struct FVector                     BarycentricCoords                                                (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FVector UGeometryScriptLibrary_MeshQueryFunctions::ComputeTriangleBarycentricCoords(int32* TriangleID, struct FVector* Vertex1, struct FVector* Vertex2, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "ComputeTriangleBarycentricCoords");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_ComputeTriangleBarycentricCoords_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TriangleID != nullptr)
		*TriangleID = Parms.TriangleID;

	if (Vertex1 != nullptr)
		*Vertex1 = std::move(Parms.Vertex1);

	if (Vertex2 != nullptr)
		*Vertex2 = std::move(Parms.Vertex2);

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptRemeshOptionsRemeshOptions                                                    (BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptUniformRemeshOptionsUniformOptions                                                   (BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_RemeshingFunctions::ApplyUniformRemesh(class UDynamicMesh* ReturnValue)
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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptWeldEdgesOptionsWeldOptions                                                      (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshRepairFunctions::WeldMeshEdges(class UDynamicMesh* ReturnValue)
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

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.SplitMeshBowties
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// bool                               bMeshBowties                                                     (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
// bool                               bAttributeBowties                                                (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshRepairFunctions::SplitMeshBowties(class UDynamicMesh* ReturnValue)
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

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.ResolveMeshTJunctions
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptResolveTJunctionOptionsResolveOptions                                                   (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshRepairFunctions::ResolveMeshTJunctions(class UDynamicMesh* ReturnValue)
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

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.RepairMeshDegenerateGeometry
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptDegenerateTriangleOptionsOptions                                                          (Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptRemoveSmallComponentOptionsOptions                                                          (Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptRemoveHiddenTrianglesOptionsOptions                                                          (Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptFillHolesOptionsFillOptions                                                      (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
// int32                              NumFilledHoles                                                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
// int32                              NumFailedHoleFills                                               (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshRepairFunctions::FillAllMeshHoles(class UDynamicMesh* ReturnValue)
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

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.CompactMesh
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshPointSamplingOptionsOptions                                                          (Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// struct FGeometryScriptNonUniformPointSamplingOptionsNonUniformOptions                                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptScalarList   VertexWeights                                                    (Edit, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// TArray<struct FTransform>          Samples                                                          (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// TArray<double>                     SampleRadii                                                      (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptIndexList    TriangleIDs                                                      (Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshSamplingFunctions::ComputeVertexWeightedPointSampling(class UDynamicMesh* ReturnValue)
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

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSamplingFunctions.ComputePointSampling
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshPointSamplingOptionsOptions                                                          (Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// TArray<struct FTransform>          Samples                                                          (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// struct FGeometryScriptIndexList    TriangleIDs                                                      (Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshSamplingFunctions::ComputePointSampling(class UDynamicMesh* ReturnValue)
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

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSamplingFunctions.ComputeNonUniformPointSampling
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshPointSamplingOptionsOptions                                                          (Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// struct FGeometryScriptNonUniformPointSamplingOptionsNonUniformOptions                                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// TArray<struct FTransform>          Samples                                                          (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// TArray<double>                     SampleRadii                                                      (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptIndexList    TriangleIDs                                                      (Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshSamplingFunctions::ComputeNonUniformPointSampling(class UDynamicMesh* ReturnValue)
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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FVector                     PlaneOrigin                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, EditConst, SubobjectReference)
// struct FVector                     PlaneNormal                                                      (ExportObject, OutParm, ReturnParm, Config, EditConst, SubobjectReference)
// enum class EGeometryScriptMeshSelectionTypeSelectionType                                                    (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
// bool                               bInvert                                                          (ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              MinNumTrianglePoints                                             (Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

int32 UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshElementsWithPlane(enum class EGeometryScriptMeshSelectionType* SelectionType, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionFunctions", "SelectMeshElementsWithPlane");

	Params::UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsWithPlane_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SelectionType != nullptr)
		*SelectionType = Parms.SelectionType;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.SelectMeshElementsInSphere
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FVector                     SphereOrigin                                                     (Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// double                             SphereRadius                                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)
// enum class EGeometryScriptMeshSelectionTypeSelectionType                                                    (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
// bool                               bInvert                                                          (ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              MinNumTrianglePoints                                             (Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

int32 UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshElementsInSphere(double SphereRadius, enum class EGeometryScriptMeshSelectionType* SelectionType, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionFunctions", "SelectMeshElementsInSphere");

	Params::UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInSphere_Params Parms{};

	Parms.SphereRadius = SphereRadius;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SelectionType != nullptr)
		*SelectionType = Parms.SelectionType;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.SelectMeshElementsInsideMesh
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                SelectionMesh                                                    (Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FTransform                  SelectionMeshTransform                                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// enum class EGeometryScriptMeshSelectionTypeSelectionType                                                    (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
// bool                               bInvert                                                          (ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// double                             ShellDistance                                                    (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// double                             WindingThreshold                                                 (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              MinNumTrianglePoints                                             (Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

int32 UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshElementsInsideMesh(enum class EGeometryScriptMeshSelectionType* SelectionType, double* WindingThreshold, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionFunctions", "SelectMeshElementsInsideMesh");

	Params::UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInsideMesh_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SelectionType != nullptr)
		*SelectionType = Parms.SelectionType;

	if (WindingThreshold != nullptr)
		*WindingThreshold = Parms.WindingThreshold;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.SelectMeshElementsInBox
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FBox                        Box                                                              (Edit, ConstParm, ExportObject, OutParm)
// enum class EGeometryScriptMeshSelectionTypeSelectionType                                                    (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
// bool                               bInvert                                                          (ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              MinNumTrianglePoints                                             (Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

int32 UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshElementsInBox(struct FBox* Box, enum class EGeometryScriptMeshSelectionType* SelectionType, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionFunctions", "SelectMeshElementsInBox");

	Params::UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInBox_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Box != nullptr)
		*Box = std::move(Parms.Box);

	if (SelectionType != nullptr)
		*SelectionType = Parms.SelectionType;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.SelectMeshElementsByNormalAngle
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FVector                     Normal                                                           (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// double                             MaxAngleDeg                                                      (ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// enum class EGeometryScriptMeshSelectionTypeSelectionType                                                    (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
// bool                               bInvert                                                          (ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              MinNumTrianglePoints                                             (Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

int32 UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshElementsByNormalAngle(struct FVector* Normal, enum class EGeometryScriptMeshSelectionType* SelectionType, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionFunctions", "SelectMeshElementsByNormalAngle");

	Params::UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsByNormalAngle_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Normal != nullptr)
		*Normal = std::move(Parms.Normal);

	if (SelectionType != nullptr)
		*SelectionType = Parms.SelectionType;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.InvertMeshSelection
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FGeometryScriptMeshSelectionNewSelection                                                     (BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// bool                               bOnlyToConnected                                                 (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UGeometryScriptLibrary_MeshSelectionFunctions::InvertMeshSelection(class UDynamicMesh* ReturnValue)
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

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.GetMeshSelectionInfo
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// enum class EGeometryScriptMeshSelectionTypeSelectionType                                                    (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
// int32                              NumSelected                                                      (Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)

int32 UGeometryScriptLibrary_MeshSelectionFunctions::GetMeshSelectionInfo(enum class EGeometryScriptMeshSelectionType* SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionFunctions", "GetMeshSelectionInfo");

	Params::UGeometryScriptLibrary_MeshSelectionFunctions_GetMeshSelectionInfo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SelectionType != nullptr)
		*SelectionType = Parms.SelectionType;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ExpandMeshSelectionToConnected
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FGeometryScriptMeshSelectionNewSelection                                                     (BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// enum class EGeometryScriptTopologyConnectionTypeConnectionType                                                   (Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FGeometryScriptMeshSelection UGeometryScriptLibrary_MeshSelectionFunctions::ExpandMeshSelectionToConnected(enum class EGeometryScriptTopologyConnectionType* ConnectionType, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionFunctions", "ExpandMeshSelectionToConnected");

	Params::UGeometryScriptLibrary_MeshSelectionFunctions_ExpandMeshSelectionToConnected_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ConnectionType != nullptr)
		*ConnectionType = Parms.ConnectionType;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ExpandContractMeshSelection
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FGeometryScriptMeshSelectionNewSelection                                                     (BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// int32                              Iterations                                                       (Edit, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               bContract                                                        (ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// bool                               bOnlyExpandToFaceNeighbours                                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UGeometryScriptLibrary_MeshSelectionFunctions::ExpandContractMeshSelection(class UDynamicMesh* ReturnValue)
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

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.DebugPrintMeshSelection
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               bDisable                                                         (ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)

bool UGeometryScriptLibrary_MeshSelectionFunctions::DebugPrintMeshSelection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionFunctions", "DebugPrintMeshSelection");

	Params::UGeometryScriptLibrary_MeshSelectionFunctions_DebugPrintMeshSelection_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.CreateSelectAllMeshSelection
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// enum class EGeometryScriptMeshSelectionTypeSelectionType                                                    (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FGeometryScriptMeshSelection UGeometryScriptLibrary_MeshSelectionFunctions::CreateSelectAllMeshSelection(enum class EGeometryScriptMeshSelectionType* SelectionType, class UDynamicMesh* ReturnValue)
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

	if (SelectionType != nullptr)
		*SelectionType = Parms.SelectionType;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ConvertMeshSelectionToIndexList
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FGeometryScriptIndexList    IndexList                                                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// enum class EGeometryScriptIndexTypeResultListType                                                   (ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// enum class EGeometryScriptIndexTypeConvertToType                                                    (ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

enum class EGeometryScriptIndexType UGeometryScriptLibrary_MeshSelectionFunctions::ConvertMeshSelectionToIndexList(class UDynamicMesh* ReturnValue)
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

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ConvertMeshSelectionToIndexArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<int32>                      IndexArray                                                       (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// enum class EGeometryScriptMeshSelectionTypeSelectionType                                                    (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<int32> UGeometryScriptLibrary_MeshSelectionFunctions::ConvertMeshSelectionToIndexArray(enum class EGeometryScriptMeshSelectionType* SelectionType, class UDynamicMesh* ReturnValue)
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

	if (SelectionType != nullptr)
		*SelectionType = Parms.SelectionType;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ConvertMeshSelection
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionFromSelection                                                    (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionToSelection                                                      (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// enum class EGeometryScriptMeshSelectionTypeNewType                                                          (ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, Transient, Config, GlobalConfig, SubobjectReference)
// bool                               bAllowPartialInclusion                                           (Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UGeometryScriptLibrary_MeshSelectionFunctions::ConvertMeshSelection(enum class EGeometryScriptMeshSelectionType NewType, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionFunctions", "ConvertMeshSelection");

	Params::UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelection_Params Parms{};

	Parms.NewType = NewType;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ConvertIndexSetToMeshSelection
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// TSet<int32>                        IndexSet                                                         (ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// enum class EGeometryScriptMeshSelectionTypeSelectionType                                                    (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FGeometryScriptMeshSelection UGeometryScriptLibrary_MeshSelectionFunctions::ConvertIndexSetToMeshSelection(enum class EGeometryScriptMeshSelectionType* SelectionType, class UDynamicMesh* ReturnValue)
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

	if (SelectionType != nullptr)
		*SelectionType = Parms.SelectionType;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ConvertIndexListToMeshSelection
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptIndexList    IndexList                                                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// enum class EGeometryScriptMeshSelectionTypeSelectionType                                                    (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FGeometryScriptMeshSelection UGeometryScriptLibrary_MeshSelectionFunctions::ConvertIndexListToMeshSelection(enum class EGeometryScriptMeshSelectionType* SelectionType, class UDynamicMesh* ReturnValue)
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

	if (SelectionType != nullptr)
		*SelectionType = Parms.SelectionType;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ConvertIndexArrayToMeshSelection
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// TArray<int32>                      IndexArray                                                       (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// enum class EGeometryScriptMeshSelectionTypeSelectionType                                                    (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FGeometryScriptMeshSelection UGeometryScriptLibrary_MeshSelectionFunctions::ConvertIndexArrayToMeshSelection(enum class EGeometryScriptMeshSelectionType* SelectionType, class UDynamicMesh* ReturnValue)
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

	if (SelectionType != nullptr)
		*SelectionType = Parms.SelectionType;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.CombineMeshSelections
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptMeshSelectionSelectionA                                                       (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelectionB                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionResultSelection                                                  (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// enum class EGeometryScriptCombineSelectionModeCombineMode                                                      (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

struct FGeometryScriptMeshSelection UGeometryScriptLibrary_MeshSelectionFunctions::CombineMeshSelections(enum class EGeometryScriptCombineSelectionMode* CombineMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionFunctions", "CombineMeshSelections");

	Params::UGeometryScriptLibrary_MeshSelectionFunctions_CombineMeshSelections_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (CombineMode != nullptr)
		*CombineMode = Parms.CombineMode;

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FBox                        SelectionBounds                                                  (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// bool                               bIsEmpty                                                         (BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshSelectionQueryFunctions::GetMeshSelectionBoundingBox(class UDynamicMesh* ReturnValue)
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

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionQueryFunctions.GetMeshSelectionBoundaryLoops
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FGeometryScriptIndexList>IndexLoops                                                       (ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// TArray<struct FGeometryScriptPolyPath>PathLoops                                                        (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// int32                              NumLoops                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// bool                               bFoundErrors                                                     (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshSelectionQueryFunctions::GetMeshSelectionBoundaryLoops(class UDynamicMesh* ReturnValue)
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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              Vertexcount                                                      (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config)
// struct FGeometryScriptSimplifyMeshOptionsOptions                                                          (Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshSimplifyFunctions::ApplySimplifyToVertexCount(int32* Vertexcount, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSimplifyFunctions", "ApplySimplifyToVertexCount");

	Params::UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToVertexCount_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Vertexcount != nullptr)
		*Vertexcount = Parms.Vertexcount;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSimplifyFunctions.ApplySimplifyToTriangleCount
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              TriangleCount                                                    (ConstParm, BlueprintVisible, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FGeometryScriptSimplifyMeshOptionsOptions                                                          (Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshSimplifyFunctions::ApplySimplifyToTriangleCount(class UDynamicMesh* ReturnValue)
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

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSimplifyFunctions.ApplySimplifyToTolerance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// float                              Tolerance                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, GlobalConfig, SubobjectReference)
// struct FGeometryScriptSimplifyMeshOptionsOptions                                                          (Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptPolygroupSimplifyOptionsOptions                                                          (Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// struct FGeometryScriptGroupLayer   GroupLayer                                                       (Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptPlanarSimplifyOptionsOptions                                                          (Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// struct FGeometryScriptDynamicMeshBVHResetBVH                                                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst)

struct FGeometryScriptDynamicMeshBVH UGeometryScriptLibrary_MeshSpatial::ResetBVH()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSpatial", "ResetBVH");

	Params::UGeometryScriptLibrary_MeshSpatial_ResetBVH_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial.RebuildBVHForMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptDynamicMeshBVHUpdateBVH                                                        (ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// bool                               bOnlyIfInvalid                                                   (ConstParm, Net, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptDynamicMeshBVHQueryBVH                                                         (ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// struct FVector                     QueryPoint                                                       (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptSpatialQueryOptionsOptions                                                          (Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// bool                               bIsInside                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// enum class EGeometryScriptContainmentOutcomePinsOutcome                                                          (Edit, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptDynamicMeshBVHTestBVH                                                          (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// bool                               bIsValid                                                         (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshSpatial::IsBVHValidForMesh(class UDynamicMesh* ReturnValue)
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

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial.FindNearestRayIntersectionWithMesh
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptDynamicMeshBVHQueryBVH                                                         (ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// struct FVector                     RayOrigin                                                        (BlueprintVisible, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FVector                     RayDirection                                                     (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FGeometryScriptSpatialQueryOptionsOptions                                                          (Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// struct FGeometryScriptRayHitResult HitResult                                                        (Edit, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
// enum class EGeometryScriptSearchOutcomePinsOutcome                                                          (Edit, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshSpatial::FindNearestRayIntersectionWithMesh(enum class EGeometryScriptSearchOutcomePins* Outcome, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSpatial", "FindNearestRayIntersectionWithMesh");

	Params::UGeometryScriptLibrary_MeshSpatial_FindNearestRayIntersectionWithMesh_Params Parms{};

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptDynamicMeshBVHQueryBVH                                                         (ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// struct FVector                     QueryPoint                                                       (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptSpatialQueryOptionsOptions                                                          (Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// struct FGeometryScriptTrianglePointNearestResult                                                    (BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// enum class EGeometryScriptSearchOutcomePinsOutcome                                                          (Edit, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptDynamicMeshBVHOutputBVH                                                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              TessellationLevel                                                (BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FGeometryScriptSelectiveTessellateOptionsOptions                                                          (Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// int32                              TessellationLevel                                                (BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// enum class ESelectiveTessellatePatternTypePatternType                                                      (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshSubdivideFunctions::ApplySelectiveTessellation(class UDynamicMesh* ReturnValue)
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

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSubdivideFunctions.ApplyPNTessellation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptPNTessellateOptionsOptions                                                          (Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// int32                              TessellationLevel                                                (BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FVector                     PivotLocation                                                    (Edit, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FVector                     Translation                                                      (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshTransformFunctions::TranslateMeshSelection(struct FVector* Translation, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshTransformFunctions", "TranslateMeshSelection");

	Params::UGeometryScriptLibrary_MeshTransformFunctions_TranslateMeshSelection_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Translation != nullptr)
		*Translation = std::move(Parms.Translation);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.TranslateMesh
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FVector                     Translation                                                      (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshTransformFunctions::TranslateMesh(struct FVector* Translation, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshTransformFunctions", "TranslateMesh");

	Params::UGeometryScriptLibrary_MeshTransformFunctions_TranslateMesh_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Translation != nullptr)
		*Translation = std::move(Parms.Translation);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.TransformMeshSelection
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshTransformFunctions::TransformMeshSelection(struct FTransform* Transform, class UDynamicMesh* ReturnValue)
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

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.TransformMesh
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// bool                               bFixOrientationForNegativeScale                                  (Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FVector                     Scale                                                            (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config)
// struct FVector                     ScaleOrigin                                                      (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshTransformFunctions::ScaleMeshSelection(struct FVector* Scale, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshTransformFunctions", "ScaleMeshSelection");

	Params::UGeometryScriptLibrary_MeshTransformFunctions_ScaleMeshSelection_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Scale != nullptr)
		*Scale = std::move(Parms.Scale);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.ScaleMesh
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FVector                     Scale                                                            (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config)
// struct FVector                     ScaleOrigin                                                      (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// bool                               bFixOrientationForNegativeScale                                  (Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshTransformFunctions::ScaleMesh(struct FVector* Scale, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshTransformFunctions", "ScaleMesh");

	Params::UGeometryScriptLibrary_MeshTransformFunctions_ScaleMesh_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Scale != nullptr)
		*Scale = std::move(Parms.Scale);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.RotateMeshSelection
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FRotator                    Rotation                                                         (BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
// struct FVector                     RotationOrigin                                                   (Edit, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshTransformFunctions::RotateMeshSelection(struct FRotator* Rotation, class UDynamicMesh* ReturnValue)
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

	if (Rotation != nullptr)
		*Rotation = std::move(Parms.Rotation);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.RotateMesh
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FRotator                    Rotation                                                         (BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
// struct FVector                     RotationOrigin                                                   (Edit, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              UvSetIndex                                                       (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// struct FVector2D                   Translation                                                      (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshUVFunctions::TranslateMeshUVs(int32 UvSetIndex, struct FVector2D* Translation, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "TranslateMeshUVs");

	Params::UGeometryScriptLibrary_MeshUVFunctions_TranslateMeshUVs_Params Parms{};

	Parms.UvSetIndex = UvSetIndex;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Translation != nullptr)
		*Translation = std::move(Parms.Translation);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.SetNumUVSets
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              NumUVSets                                                        (Edit, BlueprintReadOnly, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshUVFunctions::SetNumUVSets(int32 NumUVSets, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "SetNumUVSets");

	Params::UGeometryScriptLibrary_MeshUVFunctions_SetNumUVSets_Params Parms{};

	Parms.NumUVSets = NumUVSets;
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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              UvSetIndex                                                       (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// struct FTransform                  PlaneTransform                                                   (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshUVFunctions::SetMeshUVsFromPlanarProjection(int32 UvSetIndex, struct FTransform* PlaneTransform, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "SetMeshUVsFromPlanarProjection");

	Params::UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromPlanarProjection_Params Parms{};

	Parms.UvSetIndex = UvSetIndex;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PlaneTransform != nullptr)
		*PlaneTransform = std::move(Parms.PlaneTransform);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.SetMeshUVsFromCylinderProjection
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              UvSetIndex                                                       (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// struct FTransform                  CylinderTransform                                                (Edit, ConstParm, BlueprintVisible, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// float                              SplitAngle                                                       (Edit, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshUVFunctions::SetMeshUVsFromCylinderProjection(int32 UvSetIndex, const struct FTransform& CylinderTransform, float SplitAngle, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "SetMeshUVsFromCylinderProjection");

	Params::UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromCylinderProjection_Params Parms{};

	Parms.UvSetIndex = UvSetIndex;
	Parms.CylinderTransform = CylinderTransform;
	Parms.SplitAngle = SplitAngle;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.SetMeshUVsFromBoxProjection
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              UvSetIndex                                                       (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// struct FTransform                  BoxTransform                                                     (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              MinIslandTriCount                                                (BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshUVFunctions::SetMeshUVsFromBoxProjection(int32 UvSetIndex, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "SetMeshUVsFromBoxProjection");

	Params::UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromBoxProjection_Params Parms{};

	Parms.UvSetIndex = UvSetIndex;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.SetMeshTriangleUVs
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              UvSetIndex                                                       (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// int32                              TriangleID                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FGeometryScriptUVTriangle   UVs                                                              (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// bool                               bIsValidTriangle                                                 (Edit, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// bool                               bDeferChangeNotifications                                        (Edit, ConstParm, BlueprintVisible, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UGeometryScriptLibrary_MeshUVFunctions::SetMeshTriangleUVs(int32 UvSetIndex, int32* TriangleID, struct FGeometryScriptUVTriangle* UVs, bool bDeferChangeNotifications, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "SetMeshTriangleUVs");

	Params::UGeometryScriptLibrary_MeshUVFunctions_SetMeshTriangleUVs_Params Parms{};

	Parms.UvSetIndex = UvSetIndex;
	Parms.bDeferChangeNotifications = bDeferChangeNotifications;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TriangleID != nullptr)
		*TriangleID = Parms.TriangleID;

	if (UVs != nullptr)
		*UVs = std::move(Parms.UVs);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.ScaleMeshUVs
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              UvSetIndex                                                       (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// struct FVector2D                   Scale                                                            (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config)
// struct FVector2D                   ScaleOrigin                                                      (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshUVFunctions::ScaleMeshUVs(int32 UvSetIndex, struct FVector2D* Scale, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "ScaleMeshUVs");

	Params::UGeometryScriptLibrary_MeshUVFunctions_ScaleMeshUVs_Params Parms{};

	Parms.UvSetIndex = UvSetIndex;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Scale != nullptr)
		*Scale = std::move(Parms.Scale);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.RotateMeshUVs
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              UvSetIndex                                                       (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// float                              RotationAngle                                                    (ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// struct FVector2D                   RotationOrigin                                                   (Edit, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshUVFunctions::RotateMeshUVs(int32 UvSetIndex, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "RotateMeshUVs");

	Params::UGeometryScriptLibrary_MeshUVFunctions_RotateMeshUVs_Params Parms{};

	Parms.UvSetIndex = UvSetIndex;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.RepackMeshUVs
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              UvSetIndex                                                       (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// struct FGeometryScriptRepackUVsOptionsRepackOptions                                                    (Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshUVFunctions::RepackMeshUVs(int32 UvSetIndex, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "RepackMeshUVs");

	Params::UGeometryScriptLibrary_MeshUVFunctions_RepackMeshUVs_Params Parms{};

	Parms.UvSetIndex = UvSetIndex;
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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              UvSetIndex                                                       (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// struct FGeometryScriptRecomputeUVsOptionsOptions                                                          (Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshUVFunctions::RecomputeMeshUVs(int32 UvSetIndex, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "RecomputeMeshUVs");

	Params::UGeometryScriptLibrary_MeshUVFunctions_RecomputeMeshUVs_Params Parms{};

	Parms.UvSetIndex = UvSetIndex;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.GetMeshUVSizeInfo
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              UvSetIndex                                                       (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// double                             MeshArea                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// double                             UVArea                                                           (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// struct FBox                        MeshBounds                                                       (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// struct FBox2D                      UVBounds                                                         (BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// bool                               bIsValidUVSet                                                    (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
// bool                               bFoundUnsetUVs                                                   (BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// bool                               bOnlyIncludeValidUVTris                                          (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshUVFunctions::GetMeshUVSizeInfo(int32 UvSetIndex, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "GetMeshUVSizeInfo");

	Params::UGeometryScriptLibrary_MeshUVFunctions_GetMeshUVSizeInfo_Params Parms{};

	Parms.UvSetIndex = UvSetIndex;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.GetMeshPerVertexUVs
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              UvSetIndex                                                       (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// struct FGeometryScriptUVList       UVList                                                           (ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// bool                               bIsValidUVSet                                                    (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
// bool                               bHasVertexIDGaps                                                 (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// bool                               bHasSplitUVs                                                     (BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshUVFunctions::GetMeshPerVertexUVs(int32 UvSetIndex, bool bHasVertexIDGaps, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "GetMeshPerVertexUVs");

	Params::UGeometryScriptLibrary_MeshUVFunctions_GetMeshPerVertexUVs_Params Parms{};

	Parms.UvSetIndex = UvSetIndex;
	Parms.bHasVertexIDGaps = bHasVertexIDGaps;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.CopyUVSet
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              FromUVSet                                                        (ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// int32                              ToUVSet                                                          (Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class UDynamicMesh*                CopyFromMesh                                                     (Net, Parm, OutParm, Config, InstancedReference, SubobjectReference)
// int32                              UvSetIndex                                                       (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// class UDynamicMesh*                CopyToUVMesh                                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                CopyToUVMeshOut                                                  (Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// bool                               bInvalidTopology                                                 (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// bool                               bIsValidUVSet                                                    (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshUVFunctions::CopyMeshUVLayerToMesh(class UDynamicMesh** CopyFromMesh, int32 UvSetIndex, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "CopyMeshUVLayerToMesh");

	Params::UGeometryScriptLibrary_MeshUVFunctions_CopyMeshUVLayerToMesh_Params Parms{};

	Parms.UvSetIndex = UvSetIndex;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (CopyFromMesh != nullptr)
		*CopyFromMesh = Parms.CopyFromMesh;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.CopyMeshToMeshUVLayer
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                CopyFromUVMesh                                                   (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// int32                              ToUVSetIndex                                                     (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                CopyToMesh                                                       (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                CopyToMeshOut                                                    (BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// bool                               bFoundTopologyErrors                                             (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// bool                               bIsValidUVSet                                                    (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
// bool                               bOnlyUVPositions                                                 (Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshUVFunctions::CopyMeshToMeshUVLayer(class UDynamicMesh* ReturnValue)
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

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.AutoGenerateXAtlasMeshUVs
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              UvSetIndex                                                       (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// struct FGeometryScriptXAtlasOptionsOptions                                                          (Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshUVFunctions::AutoGenerateXAtlasMeshUVs(int32 UvSetIndex, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "AutoGenerateXAtlasMeshUVs");

	Params::UGeometryScriptLibrary_MeshUVFunctions_AutoGenerateXAtlasMeshUVs_Params Parms{};

	Parms.UvSetIndex = UvSetIndex;
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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              UvSetIndex                                                       (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// struct FGeometryScriptPatchBuilderOptionsOptions                                                          (Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshUVFunctions::AutoGeneratePatchBuilderMeshUVs(int32 UvSetIndex, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "AutoGeneratePatchBuilderMeshUVs");

	Params::UGeometryScriptLibrary_MeshUVFunctions_AutoGeneratePatchBuilderMeshUVs_Params Parms{};

	Parms.UvSetIndex = UvSetIndex;
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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FLinearColor                Color                                                            (Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
// struct FGeometryScriptColorFlags   Flags                                                            (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// bool                               bCreateColorSeam                                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshVertexColorFunctions::SetMeshSelectionVertexColor(struct FLinearColor* Color, bool bCreateColorSeam, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshVertexColorFunctions", "SetMeshSelectionVertexColor");

	Params::UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshSelectionVertexColor_Params Parms{};

	Parms.bCreateColorSeam = bCreateColorSeam;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions.SetMeshPerVertexColors
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptColorList    VertexColorList                                                  (Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshVertexColorFunctions::SetMeshPerVertexColors(const struct FGeometryScriptColorList& VertexColorList, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshVertexColorFunctions", "SetMeshPerVertexColors");

	Params::UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshPerVertexColors_Params Parms{};

	Parms.VertexColorList = VertexColorList;
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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FLinearColor                Color                                                            (Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
// struct FGeometryScriptColorFlags   Flags                                                            (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// bool                               bClearExisting                                                   (Edit, BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_MeshVertexColorFunctions::SetMeshConstantVertexColor(struct FLinearColor* Color, bool bClearExisting, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshVertexColorFunctions", "SetMeshConstantVertexColor");

	Params::UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshConstantVertexColor_Params Parms{};

	Parms.bClearExisting = bClearExisting;
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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptColorList    ColorList                                                        (Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// bool                               bIsValidColorSet                                                 (BlueprintVisible, Net, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// bool                               bHasVertexIDGaps                                                 (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// bool                               bBlendSplitVertexValues                                          (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FGeometryScriptColorList UGeometryScriptLibrary_MeshVertexColorFunctions::GetMeshPerVertexColors(bool bIsValidColorSet, bool bHasVertexIDGaps, bool bBlendSplitVertexValues, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshVertexColorFunctions", "GetMeshPerVertexColors");

	Params::UGeometryScriptLibrary_MeshVertexColorFunctions_GetMeshPerVertexColors_Params Parms{};

	Parms.bIsValidColorSet = bIsValidColorSet;
	Parms.bHasVertexIDGaps = bHasVertexIDGaps;
	Parms.bBlendSplitVertexValues = bBlendSplitVertexValues;
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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptSolidifyOptionsOptions                                                          (Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class UDynamicMesh*                TargetMesh                                                       (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptMorphologyOptionsOptions                                                          (Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class USplineComponent*            Spline                                                           (Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, Transient, Config)
// TArray<struct FTransform>          Frames                                                           (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// TArray<double>                     FrameTimes                                                       (Edit, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptSplineSamplingOptionsSamplingOptions                                                  (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FTransform                  RelativeTransform                                                (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               bIncludeScale                                                    (Edit, Net, EditFixedSize, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

struct FTransform UGeometryScriptLibrary_PolyPathFunctions::SampleSplineToTransforms(const TArray<double>& FrameTimes, const struct FGeometryScriptSplineSamplingOptions& SamplingOptions, bool bIncludeScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "SampleSplineToTransforms");

	Params::UGeometryScriptLibrary_PolyPathFunctions_SampleSplineToTransforms_Params Parms{};

	Parms.FrameTimes = FrameTimes;
	Parms.SamplingOptions = SamplingOptions;
	Parms.bIncludeScale = bIncludeScale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.GetPolyPathVertex
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptPolyPath     PolyPath                                                         (Edit, ConstParm, BlueprintVisible, EditFixedSize, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              Index                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
// bool                               bIsValidIndex                                                    (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FVector                     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UGeometryScriptLibrary_PolyPathFunctions::GetPolyPathVertex(const struct FGeometryScriptPolyPath& PolyPath, int32* Index, const struct FVector& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "GetPolyPathVertex");

	Params::UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathVertex_Params Parms{};

	Parms.PolyPath = PolyPath;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Index != nullptr)
		*Index = Parms.Index;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.GetPolyPathTangent
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptPolyPath     PolyPath                                                         (Edit, ConstParm, BlueprintVisible, EditFixedSize, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              Index                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
// bool                               bIsValidIndex                                                    (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FVector                     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UGeometryScriptLibrary_PolyPathFunctions::GetPolyPathTangent(const struct FGeometryScriptPolyPath& PolyPath, int32* Index, const struct FVector& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "GetPolyPathTangent");

	Params::UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathTangent_Params Parms{};

	Parms.PolyPath = PolyPath;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Index != nullptr)
		*Index = Parms.Index;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.GetPolyPathNumVertices
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptPolyPath     PolyPath                                                         (Edit, ConstParm, BlueprintVisible, EditFixedSize, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UGeometryScriptLibrary_PolyPathFunctions::GetPolyPathNumVertices(const struct FGeometryScriptPolyPath& PolyPath, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "GetPolyPathNumVertices");

	Params::UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathNumVertices_Params Parms{};

	Parms.PolyPath = PolyPath;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.GetPolyPathLastIndex
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptPolyPath     PolyPath                                                         (Edit, ConstParm, BlueprintVisible, EditFixedSize, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UGeometryScriptLibrary_PolyPathFunctions::GetPolyPathLastIndex(const struct FGeometryScriptPolyPath& PolyPath, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "GetPolyPathLastIndex");

	Params::UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathLastIndex_Params Parms{};

	Parms.PolyPath = PolyPath;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.GetPolyPathArcLength
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGeometryScriptPolyPath     PolyPath                                                         (Edit, ConstParm, BlueprintVisible, EditFixedSize, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// double                             ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UGeometryScriptLibrary_PolyPathFunctions::GetPolyPathArcLength(const struct FGeometryScriptPolyPath& PolyPath, double ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "GetPolyPathArcLength");

	Params::UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathArcLength_Params Parms{};

	Parms.PolyPath = PolyPath;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.GetNearestVertexIndex
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGeometryScriptPolyPath     PolyPath                                                         (Edit, ConstParm, BlueprintVisible, EditFixedSize, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FVector                     Point                                                            (ConstParm, Parm, ReturnParm)
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FVector UGeometryScriptLibrary_PolyPathFunctions::GetNearestVertexIndex(const struct FGeometryScriptPolyPath& PolyPath, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "GetNearestVertexIndex");

	Params::UGeometryScriptLibrary_PolyPathFunctions_GetNearestVertexIndex_Params Parms{};

	Parms.PolyPath = PolyPath;
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
// struct FGeometryScriptPolyPath     PolyPath                                                         (Edit, ConstParm, BlueprintVisible, EditFixedSize, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// enum class EGeometryScriptAxis     DropAxis                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptPolyPath     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UGeometryScriptLibrary_PolyPathFunctions::FlattenTo2DOnAxis(const struct FGeometryScriptPolyPath& PolyPath, enum class EGeometryScriptAxis DropAxis, const struct FGeometryScriptPolyPath& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "FlattenTo2DOnAxis");

	Params::UGeometryScriptLibrary_PolyPathFunctions_FlattenTo2DOnAxis_Params Parms{};

	Parms.PolyPath = PolyPath;
	Parms.DropAxis = DropAxis;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.CreateCirclePath3D
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// float                              Radius                                                           (ConstParm, ExportObject, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              NumPoints                                                        (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FGeometryScriptPolyPath     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UGeometryScriptLibrary_PolyPathFunctions::CreateCirclePath3D(struct FTransform* Transform, float* Radius, int32 NumPoints, const struct FGeometryScriptPolyPath& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "CreateCirclePath3D");

	Params::UGeometryScriptLibrary_PolyPathFunctions_CreateCirclePath3D_Params Parms{};

	Parms.NumPoints = NumPoints;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	if (Radius != nullptr)
		*Radius = Parms.Radius;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.CreateCirclePath2D
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   Center                                                           (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// float                              Radius                                                           (ConstParm, ExportObject, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              NumPoints                                                        (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FGeometryScriptPolyPath     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UGeometryScriptLibrary_PolyPathFunctions::CreateCirclePath2D(struct FVector2D* Center, float* Radius, int32 NumPoints, const struct FGeometryScriptPolyPath& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "CreateCirclePath2D");

	Params::UGeometryScriptLibrary_PolyPathFunctions_CreateCirclePath2D_Params Parms{};

	Parms.NumPoints = NumPoints;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Center != nullptr)
		*Center = std::move(Parms.Center);

	if (Radius != nullptr)
		*Radius = Parms.Radius;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.CreateArcPath3D
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// float                              Radius                                                           (ConstParm, ExportObject, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              NumPoints                                                        (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// float                              StartAngle                                                       (ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, Config, InstancedReference, SubobjectReference)
// float                              EndAngle                                                         (Edit, ExportObject, Net, ReturnParm, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptPolyPath     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float UGeometryScriptLibrary_PolyPathFunctions::CreateArcPath3D(struct FTransform* Transform, float* Radius, int32 NumPoints, const struct FGeometryScriptPolyPath& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "CreateArcPath3D");

	Params::UGeometryScriptLibrary_PolyPathFunctions_CreateArcPath3D_Params Parms{};

	Parms.NumPoints = NumPoints;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	if (Radius != nullptr)
		*Radius = Parms.Radius;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.CreateArcPath2D
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   Center                                                           (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// float                              Radius                                                           (ConstParm, ExportObject, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              NumPoints                                                        (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// float                              StartAngle                                                       (ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, Config, InstancedReference, SubobjectReference)
// float                              EndAngle                                                         (Edit, ExportObject, Net, ReturnParm, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptPolyPath     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float UGeometryScriptLibrary_PolyPathFunctions::CreateArcPath2D(struct FVector2D* Center, float* Radius, int32 NumPoints, const struct FGeometryScriptPolyPath& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "CreateArcPath2D");

	Params::UGeometryScriptLibrary_PolyPathFunctions_CreateArcPath2D_Params Parms{};

	Parms.NumPoints = NumPoints;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Center != nullptr)
		*Center = std::move(Parms.Center);

	if (Radius != nullptr)
		*Radius = Parms.Radius;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.ConvertSplineToPolyPath
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class USplineComponent*            Spline                                                           (Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, Transient, Config)
// struct FGeometryScriptPolyPath     PolyPath                                                         (Edit, ConstParm, BlueprintVisible, EditFixedSize, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptSplineSamplingOptionsSamplingOptions                                                  (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

class USplineComponent* UGeometryScriptLibrary_PolyPathFunctions::ConvertSplineToPolyPath(const struct FGeometryScriptPolyPath& PolyPath, const struct FGeometryScriptSplineSamplingOptions& SamplingOptions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "ConvertSplineToPolyPath");

	Params::UGeometryScriptLibrary_PolyPathFunctions_ConvertSplineToPolyPath_Params Parms{};

	Parms.PolyPath = PolyPath;
	Parms.SamplingOptions = SamplingOptions;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.ConvertPolyPathToArrayOfVector2D
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptPolyPath     PolyPath                                                         (Edit, ConstParm, BlueprintVisible, EditFixedSize, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// TArray<struct FVector2D>           VertexArray                                                      (BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

void UGeometryScriptLibrary_PolyPathFunctions::ConvertPolyPathToArrayOfVector2D(const struct FGeometryScriptPolyPath& PolyPath, const TArray<struct FVector2D>& VertexArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "ConvertPolyPathToArrayOfVector2D");

	Params::UGeometryScriptLibrary_PolyPathFunctions_ConvertPolyPathToArrayOfVector2D_Params Parms{};

	Parms.PolyPath = PolyPath;
	Parms.VertexArray = VertexArray;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.ConvertPolyPathToArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptPolyPath     PolyPath                                                         (Edit, ConstParm, BlueprintVisible, EditFixedSize, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// TArray<struct FVector>             VertexArray                                                      (BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

void UGeometryScriptLibrary_PolyPathFunctions::ConvertPolyPathToArray(const struct FGeometryScriptPolyPath& PolyPath, const TArray<struct FVector>& VertexArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "ConvertPolyPathToArray");

	Params::UGeometryScriptLibrary_PolyPathFunctions_ConvertPolyPathToArray_Params Parms{};

	Parms.PolyPath = PolyPath;
	Parms.VertexArray = VertexArray;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.ConvertArrayToPolyPath
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FVector>             VertexArray                                                      (BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptPolyPath     PolyPath                                                         (Edit, ConstParm, BlueprintVisible, EditFixedSize, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

void UGeometryScriptLibrary_PolyPathFunctions::ConvertArrayToPolyPath(const TArray<struct FVector>& VertexArray, const struct FGeometryScriptPolyPath& PolyPath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "ConvertArrayToPolyPath");

	Params::UGeometryScriptLibrary_PolyPathFunctions_ConvertArrayToPolyPath_Params Parms{};

	Parms.VertexArray = VertexArray;
	Parms.PolyPath = PolyPath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.ConvertArrayOfVector2DToPolyPath
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FVector2D>           VertexArray                                                      (BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptPolyPath     PolyPath                                                         (Edit, ConstParm, BlueprintVisible, EditFixedSize, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

void UGeometryScriptLibrary_PolyPathFunctions::ConvertArrayOfVector2DToPolyPath(const TArray<struct FVector2D>& VertexArray, const struct FGeometryScriptPolyPath& PolyPath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "ConvertArrayOfVector2DToPolyPath");

	Params::UGeometryScriptLibrary_PolyPathFunctions_ConvertArrayOfVector2DToPolyPath_Params Parms{};

	Parms.VertexArray = VertexArray;
	Parms.PolyPath = PolyPath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.Conv_GeometryScriptPolyPathToArrayOfVector2D
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptPolyPath     PolyPath                                                         (Edit, ConstParm, BlueprintVisible, EditFixedSize, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// TArray<struct FVector2D>           ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UGeometryScriptLibrary_PolyPathFunctions::Conv_GeometryScriptPolyPathToArrayOfVector2D(const struct FGeometryScriptPolyPath& PolyPath, const TArray<struct FVector2D>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "Conv_GeometryScriptPolyPathToArrayOfVector2D");

	Params::UGeometryScriptLibrary_PolyPathFunctions_Conv_GeometryScriptPolyPathToArrayOfVector2D_Params Parms{};

	Parms.PolyPath = PolyPath;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.Conv_GeometryScriptPolyPathToArray
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptPolyPath     PolyPath                                                         (Edit, ConstParm, BlueprintVisible, EditFixedSize, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// TArray<struct FVector>             ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UGeometryScriptLibrary_PolyPathFunctions::Conv_GeometryScriptPolyPathToArray(const struct FGeometryScriptPolyPath& PolyPath, const TArray<struct FVector>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "Conv_GeometryScriptPolyPathToArray");

	Params::UGeometryScriptLibrary_PolyPathFunctions_Conv_GeometryScriptPolyPathToArray_Params Parms{};

	Parms.PolyPath = PolyPath;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.Conv_ArrayToGeometryScriptPolyPath
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FVector>             PathVertices                                                     (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptPolyPath     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<struct FVector> UGeometryScriptLibrary_PolyPathFunctions::Conv_ArrayToGeometryScriptPolyPath(const struct FGeometryScriptPolyPath& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "Conv_ArrayToGeometryScriptPolyPath");

	Params::UGeometryScriptLibrary_PolyPathFunctions_Conv_ArrayToGeometryScriptPolyPath_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.Conv_ArrayOfVector2DToGeometryScriptPolyPath
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FVector2D>           PathVertices                                                     (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptPolyPath     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<struct FVector2D> UGeometryScriptLibrary_PolyPathFunctions::Conv_ArrayOfVector2DToGeometryScriptPolyPath(const struct FGeometryScriptPolyPath& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "Conv_ArrayOfVector2DToGeometryScriptPolyPath");

	Params::UGeometryScriptLibrary_PolyPathFunctions_Conv_ArrayOfVector2DToGeometryScriptPolyPath_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

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
// class UPrimitiveComponent*         Component                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)
// TArray<class UMaterialInterface*>  MaterialList                                                     (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_SceneUtilityFunctions::SetComponentMaterialList(class UPrimitiveComponent* Component)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_SceneUtilityFunctions", "SetComponentMaterialList");

	Params::UGeometryScriptLibrary_SceneUtilityFunctions_SetComponentMaterialList_Params Parms{};

	Parms.Component = Component;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_SceneUtilityFunctions.CreateDynamicMeshPool
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMeshPool*            ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// class USceneComponent*             Component                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)
// class UDynamicMesh*                ToDynamicMesh                                                    (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptCopyMeshFromComponentOptionsOptions                                                          (Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// bool                               bTransformToWorld                                                (Edit, ConstParm, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FTransform                  LocalToWorld                                                     (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// enum class EGeometryScriptOutcomePinsOutcome                                                          (Edit, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_SceneUtilityFunctions::CopyMeshFromComponent(class USceneComponent* Component, bool bTransformToWorld, enum class EGeometryScriptOutcomePins* Outcome, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_SceneUtilityFunctions", "CopyMeshFromComponent");

	Params::UGeometryScriptLibrary_SceneUtilityFunctions_CopyMeshFromComponent_Params Parms{};

	Parms.Component = Component;
	Parms.bTransformToWorld = bTransformToWorld;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Outcome != nullptr)
		*Outcome = Parms.Outcome;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_SceneUtilityFunctions.CopyCollisionMeshesFromObject
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     FromObject                                                       (ConstParm, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ToDynamicMesh                                                    (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// bool                               bTransformToWorld                                                (Edit, ConstParm, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FTransform                  LocalToWorld                                                     (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// enum class EGeometryScriptOutcomePinsOutcome                                                          (Edit, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// bool                               bUseComplexCollision                                             (ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              SphereResolution                                                 (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_SceneUtilityFunctions::CopyCollisionMeshesFromObject(class UObject** FromObject, bool bTransformToWorld, enum class EGeometryScriptOutcomePins* Outcome, bool bUseComplexCollision, int32 SphereResolution, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_SceneUtilityFunctions", "CopyCollisionMeshesFromObject");

	Params::UGeometryScriptLibrary_SceneUtilityFunctions_CopyCollisionMeshesFromObject_Params Parms{};

	Parms.bTransformToWorld = bTransformToWorld;
	Parms.bUseComplexCollision = bUseComplexCollision;
	Parms.SphereResolution = SphereResolution;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (FromObject != nullptr)
		*FromObject = Parms.FromObject;

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
// struct FVector                     ZAxis                                                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, SubobjectReference)
// struct FTransform                  ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FVector UGeometryScriptLibrary_TransformFunctions::MakeTransformFromZAxis(struct FVector* Location, const struct FTransform& ReturnValue)
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

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_TransformFunctions.MakeTransformFromAxes
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     Location                                                         (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
// struct FVector                     ZAxis                                                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, SubobjectReference)
// struct FVector                     TangentAxis                                                      (BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// bool                               bTangentIsX                                                      (Edit, BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FTransform                  ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FVector UGeometryScriptLibrary_TransformFunctions::MakeTransformFromAxes(struct FVector* Location, const struct FVector& TangentAxis, bool bTangentIsX, const struct FTransform& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_TransformFunctions", "MakeTransformFromAxes");

	Params::UGeometryScriptLibrary_TransformFunctions_MakeTransformFromAxes_Params Parms{};

	Parms.TangentAxis = TangentAxis;
	Parms.bTangentIsX = bTangentIsX;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_TransformFunctions.GetTransformAxisVector
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// enum class EGeometryScriptAxis     Axis                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config)
// struct FVector                     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UGeometryScriptLibrary_TransformFunctions::GetTransformAxisVector(struct FTransform* Transform, enum class EGeometryScriptAxis* Axis, const struct FVector& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_TransformFunctions", "GetTransformAxisVector");

	Params::UGeometryScriptLibrary_TransformFunctions_GetTransformAxisVector_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	if (Axis != nullptr)
		*Axis = Parms.Axis;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_TransformFunctions.GetTransformAxisRay
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// enum class EGeometryScriptAxis     Axis                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config)
// struct FRay                        ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UGeometryScriptLibrary_TransformFunctions::GetTransformAxisRay(struct FTransform* Transform, enum class EGeometryScriptAxis* Axis, const struct FRay& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_TransformFunctions", "GetTransformAxisRay");

	Params::UGeometryScriptLibrary_TransformFunctions_GetTransformAxisRay_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	if (Axis != nullptr)
		*Axis = Parms.Axis;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_TransformFunctions.GetTransformAxisPlane
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// enum class EGeometryScriptAxis     Axis                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config)
// struct FPlane                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UGeometryScriptLibrary_TransformFunctions::GetTransformAxisPlane(struct FTransform* Transform, enum class EGeometryScriptAxis* Axis, const struct FPlane& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_TransformFunctions", "GetTransformAxisPlane");

	Params::UGeometryScriptLibrary_TransformFunctions_GetTransformAxisPlane_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	if (Axis != nullptr)
		*Axis = Parms.Axis;

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
// struct FVector                     A                                                                (Edit, Parm, OutParm, ReturnParm, Transient, Config)
// struct FVector                     B                                                                (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config)
// struct FRay                        ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// struct FVector                     Origin                                                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     Direction                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               bDirectionIsNormalized                                           (BlueprintVisible, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FRay                        ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FVector UGeometryScriptLibrary_RayFunctions::MakeRayFromPointDirection(bool* bDirectionIsNormalized, const struct FRay& ReturnValue)
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

	if (bDirectionIsNormalized != nullptr)
		*bDirectionIsNormalized = Parms.bDirectionIsNormalized;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetTransformedRay
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRay                        Ray                                                              (ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// bool                               bInvert                                                          (ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FRay                        ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UGeometryScriptLibrary_RayFunctions::GetTransformedRay(const struct FRay& Ray, struct FTransform* Transform, const struct FRay& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_RayFunctions", "GetTransformedRay");

	Params::UGeometryScriptLibrary_RayFunctions_GetTransformedRay_Params Parms{};

	Parms.Ray = Ray;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayStartEnd
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRay                        Ray                                                              (ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor)
// double                             StartDistance                                                    (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// double                             EndDistance                                                      (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FVector                     StartPoint                                                       (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FVector                     EndPoint                                                         (ConstParm, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

void UGeometryScriptLibrary_RayFunctions::GetRayStartEnd(const struct FRay& Ray, double StartDistance, double EndDistance, const struct FVector& StartPoint, const struct FVector& EndPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_RayFunctions", "GetRayStartEnd");

	Params::UGeometryScriptLibrary_RayFunctions_GetRayStartEnd_Params Parms{};

	Parms.Ray = Ray;
	Parms.StartDistance = StartDistance;
	Parms.EndDistance = EndDistance;
	Parms.StartPoint = StartPoint;
	Parms.EndPoint = EndPoint;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRaySphereIntersection
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRay                        Ray                                                              (ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor)
// struct FVector                     SphereCenter                                                     (Edit, ConstParm, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// double                             SphereRadius                                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)
// double                             Distance1                                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// double                             Distance2                                                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UGeometryScriptLibrary_RayFunctions::GetRaySphereIntersection(const struct FRay& Ray, const struct FVector& SphereCenter, double SphereRadius, double Distance1, double Distance2, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_RayFunctions", "GetRaySphereIntersection");

	Params::UGeometryScriptLibrary_RayFunctions_GetRaySphereIntersection_Params Parms{};

	Parms.Ray = Ray;
	Parms.SphereCenter = SphereCenter;
	Parms.SphereRadius = SphereRadius;
	Parms.Distance1 = Distance1;
	Parms.Distance2 = Distance2;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRaySegmentClosestPoint
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRay                        Ray                                                              (ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor)
// struct FVector                     SegStartPoint                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FVector                     SegEndPoint                                                      (ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// double                             RayParameter                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FVector                     RayPoint                                                         (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FVector                     SegPoint                                                         (Edit, ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// double                             ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

double UGeometryScriptLibrary_RayFunctions::GetRaySegmentClosestPoint(const struct FRay& Ray, const struct FVector& SegStartPoint, const struct FVector& SegEndPoint, const struct FVector& RayPoint, const struct FVector& SegPoint, double ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_RayFunctions", "GetRaySegmentClosestPoint");

	Params::UGeometryScriptLibrary_RayFunctions_GetRaySegmentClosestPoint_Params Parms{};

	Parms.Ray = Ray;
	Parms.SegStartPoint = SegStartPoint;
	Parms.SegEndPoint = SegEndPoint;
	Parms.RayPoint = RayPoint;
	Parms.SegPoint = SegPoint;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayPointDistance
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRay                        Ray                                                              (ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor)
// struct FVector                     Point                                                            (ConstParm, Parm, ReturnParm)
// double                             ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// double                             Distance                                                         (ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// struct FVector                     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

double UGeometryScriptLibrary_RayFunctions::GetRayPoint(const struct FRay& Ray, const struct FVector& ReturnValue)
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

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayPlaneIntersection
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRay                        Ray                                                              (ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor)
// struct FPlane                      Plane                                                            (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm)
// double                             HitDistance                                                      (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UGeometryScriptLibrary_RayFunctions::GetRayPlaneIntersection(const struct FRay& Ray, struct FPlane* Plane, double HitDistance, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_RayFunctions", "GetRayPlaneIntersection");

	Params::UGeometryScriptLibrary_RayFunctions_GetRayPlaneIntersection_Params Parms{};

	Parms.Ray = Ray;
	Parms.HitDistance = HitDistance;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Plane != nullptr)
		*Plane = std::move(Parms.Plane);

}


// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayParameter
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRay                        Ray                                                              (ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor)
// struct FVector                     Point                                                            (ConstParm, Parm, ReturnParm)
// double                             ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// struct FVector                     LineOrigin                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FVector                     LineDirection                                                    (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// double                             RayParameter                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FVector                     RayPoint                                                         (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// double                             LineParameter                                                    (ExportObject, Net, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FVector                     LinePoint                                                        (ConstParm, Net, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// double                             ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

double UGeometryScriptLibrary_RayFunctions::GetRayLineClosestPoint(const struct FRay& Ray, const struct FVector& LineOrigin, const struct FVector& LineDirection, const struct FVector& RayPoint, double LineParameter, const struct FVector& LinePoint, double ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_RayFunctions", "GetRayLineClosestPoint");

	Params::UGeometryScriptLibrary_RayFunctions_GetRayLineClosestPoint_Params Parms{};

	Parms.Ray = Ray;
	Parms.LineOrigin = LineOrigin;
	Parms.LineDirection = LineDirection;
	Parms.RayPoint = RayPoint;
	Parms.LineParameter = LineParameter;
	Parms.LinePoint = LinePoint;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayClosestPoint
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRay                        Ray                                                              (ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor)
// struct FVector                     Point                                                            (ConstParm, Parm, ReturnParm)
// struct FVector                     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// double                             HitDistance                                                      (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UGeometryScriptLibrary_RayFunctions::GetRayBoxIntersection(const struct FRay& Ray, struct FBox* Box, double HitDistance, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_RayFunctions", "GetRayBoxIntersection");

	Params::UGeometryScriptLibrary_RayFunctions_GetRayBoxIntersection_Params Parms{};

	Parms.Ray = Ray;
	Parms.HitDistance = HitDistance;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Box != nullptr)
		*Box = std::move(Parms.Box);

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
// bool                               bConsiderOnBoxAsInside                                           (ExportObject, Net, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FVector UGeometryScriptLibrary_BoxFunctions::TestPointInsideBox(struct FBox* Box, bool* bConsiderOnBoxAsInside, bool ReturnValue)
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

	if (bConsiderOnBoxAsInside != nullptr)
		*bConsiderOnBoxAsInside = Parms.bConsiderOnBoxAsInside;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.TestBoxSphereIntersection
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBox                        Box                                                              (Edit, ConstParm, ExportObject, OutParm)
// struct FVector                     SphereCenter                                                     (Edit, ConstParm, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// double                             SphereRadius                                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UGeometryScriptLibrary_BoxFunctions::TestBoxSphereIntersection(struct FBox* Box, const struct FVector& SphereCenter, double SphereRadius, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_BoxFunctions", "TestBoxSphereIntersection");

	Params::UGeometryScriptLibrary_BoxFunctions_TestBoxSphereIntersection_Params Parms{};

	Parms.SphereCenter = SphereCenter;
	Parms.SphereRadius = SphereRadius;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Box != nullptr)
		*Box = std::move(Parms.Box);

}


// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.TestBoxBoxIntersection
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBox                        Box1                                                             (Edit, ConstParm, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FBox                        Box2                                                             (BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UGeometryScriptLibrary_BoxFunctions::TestBoxBoxIntersection(struct FBox* Box1, struct FBox* Box2, bool ReturnValue)
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

	if (Box1 != nullptr)
		*Box1 = std::move(Parms.Box1);

	if (Box2 != nullptr)
		*Box2 = std::move(Parms.Box2);

}


// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.MakeBoxFromCenterSize
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     Center                                                           (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FVector                     Dimensions                                                       (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, DuplicateTransient)
// struct FBox                        ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UGeometryScriptLibrary_BoxFunctions::MakeBoxFromCenterSize(struct FVector* Center, struct FVector* Dimensions, const struct FBox& ReturnValue)
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

	if (Center != nullptr)
		*Center = std::move(Parms.Center);

	if (Dimensions != nullptr)
		*Dimensions = std::move(Parms.Dimensions);

}


// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.MakeBoxFromCenterExtents
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     Center                                                           (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FVector                     Extents                                                          (ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, Transient, Config)
// struct FBox                        ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FVector UGeometryScriptLibrary_BoxFunctions::MakeBoxFromCenterExtents(struct FVector* Center, const struct FBox& ReturnValue)
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

	if (Center != nullptr)
		*Center = std::move(Parms.Center);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetTransformedBox
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBox                        Box                                                              (Edit, ConstParm, ExportObject, OutParm)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// struct FBox                        ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// struct FVector                     ExpandBy                                                         (Edit, ConstParm, Net, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FBox                        ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UGeometryScriptLibrary_BoxFunctions::GetExpandedBox(struct FBox* Box, struct FVector* ExpandBy, const struct FBox& ReturnValue)
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

	if (ExpandBy != nullptr)
		*ExpandBy = std::move(Parms.ExpandBy);

}


// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetBoxVolumeArea
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBox                        Box                                                              (Edit, ConstParm, ExportObject, OutParm)
// double                             Volume                                                           (ConstParm, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, Config)
// double                             SurfaceArea                                                      (Edit, ConstParm, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)

double UGeometryScriptLibrary_BoxFunctions::GetBoxVolumeArea(struct FBox* Box)
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

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetBoxPointDistance
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBox                        Box                                                              (Edit, ConstParm, ExportObject, OutParm)
// struct FVector                     Point                                                            (ConstParm, Parm, ReturnParm)
// double                             ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// int32                              FaceIndex                                                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// struct FVector                     FaceNormal                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FVector                     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

int32 UGeometryScriptLibrary_BoxFunctions::GetBoxFaceCenter(struct FBox* Box, struct FVector* FaceNormal, const struct FVector& ReturnValue)
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

	if (FaceNormal != nullptr)
		*FaceNormal = std::move(Parms.FaceNormal);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetBoxCorner
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBox                        Box                                                              (Edit, ConstParm, ExportObject, OutParm)
// int32                              CornerIndex                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FVector                     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UGeometryScriptLibrary_BoxFunctions::GetBoxCorner(struct FBox* Box, int32* CornerIndex, const struct FVector& ReturnValue)
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

	if (CornerIndex != nullptr)
		*CornerIndex = Parms.CornerIndex;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetBoxCenterSize
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBox                        Box                                                              (Edit, ConstParm, ExportObject, OutParm)
// struct FVector                     Center                                                           (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FVector                     Dimensions                                                       (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, DuplicateTransient)

void UGeometryScriptLibrary_BoxFunctions::GetBoxCenterSize(struct FBox* Box, struct FVector* Center, struct FVector* Dimensions)
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

	if (Center != nullptr)
		*Center = std::move(Parms.Center);

	if (Dimensions != nullptr)
		*Dimensions = std::move(Parms.Dimensions);

}


// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetBoxBoxDistance
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBox                        Box1                                                             (Edit, ConstParm, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FBox                        Box2                                                             (BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// double                             ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UGeometryScriptLibrary_BoxFunctions::GetBoxBoxDistance(struct FBox* Box1, struct FBox* Box2, double ReturnValue)
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

	if (Box1 != nullptr)
		*Box1 = std::move(Parms.Box1);

	if (Box2 != nullptr)
		*Box2 = std::move(Parms.Box2);

}


// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.FindClosestPointOnBox
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBox                        Box                                                              (Edit, ConstParm, ExportObject, OutParm)
// struct FVector                     Point                                                            (ConstParm, Parm, ReturnParm)
// bool                               bIsInside                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// struct FVector                     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// struct FBox                        Box1                                                             (Edit, ConstParm, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FBox                        Box2                                                             (BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// bool                               bIsIntersecting                                                  (Edit, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// struct FBox                        ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UGeometryScriptLibrary_BoxFunctions::FindBoxBoxIntersection(struct FBox* Box1, struct FBox* Box2, bool* bIsIntersecting, const struct FBox& ReturnValue)
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

	if (Box1 != nullptr)
		*Box1 = std::move(Parms.Box1);

	if (Box2 != nullptr)
		*Box2 = std::move(Parms.Box2);

	if (bIsIntersecting != nullptr)
		*bIsIntersecting = Parms.bIsIntersecting;

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
// struct FGeometryScriptUVList       UVList                                                           (ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UTextureRenderTarget2D*      Texture                                                          (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst)
// struct FGeometryScriptSampleTextureOptionsSampleOptions                                                    (BlueprintVisible, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptColorList    ColorList                                                        (Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_TextureMapFunctions::SampleTextureRenderTarget2DAtUVPositions(class UTextureRenderTarget2D** Texture, struct FGeometryScriptSampleTextureOptions* SampleOptions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_TextureMapFunctions", "SampleTextureRenderTarget2DAtUVPositions");

	Params::UGeometryScriptLibrary_TextureMapFunctions_SampleTextureRenderTarget2DAtUVPositions_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Texture != nullptr)
		*Texture = Parms.Texture;

	if (SampleOptions != nullptr)
		*SampleOptions = std::move(Parms.SampleOptions);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_TextureMapFunctions.SampleTexture2DAtUVPositions
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptUVList       UVList                                                           (ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UTexture2D*                  Texture                                                          (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst)
// struct FGeometryScriptSampleTextureOptionsSampleOptions                                                    (BlueprintVisible, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptColorList    ColorList                                                        (Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)

class UGeometryScriptDebug* UGeometryScriptLibrary_TextureMapFunctions::SampleTexture2DAtUVPositions(class UTexture2D** Texture, struct FGeometryScriptSampleTextureOptions* SampleOptions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_TextureMapFunctions", "SampleTexture2DAtUVPositions");

	Params::UGeometryScriptLibrary_TextureMapFunctions_SampleTexture2DAtUVPositions_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Texture != nullptr)
		*Texture = Parms.Texture;

	if (SampleOptions != nullptr)
		*SampleOptions = std::move(Parms.SampleOptions);

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
// struct FGeometryScriptVectorList   VectorList                                                       (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// double                             ConstantX                                                        (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
// double                             ConstantY                                                        (Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
// double                             ConstantZ                                                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptScalarList   ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

double UGeometryScriptLibrary_VectorMathFunctions::VectorToScalar(double* ConstantZ, const struct FGeometryScriptScalarList& ReturnValue)
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

	if (ConstantZ != nullptr)
		*ConstantZ = Parms.ConstantZ;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.VectorNormalizeInPlace
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGeometryScriptVectorList   VectorList                                                       (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FVector                     SetOnFailure                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

struct FGeometryScriptVectorList UGeometryScriptLibrary_VectorMathFunctions::VectorNormalizeInPlace(struct FVector* SetOnFailure)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_VectorMathFunctions", "VectorNormalizeInPlace");

	Params::UGeometryScriptLibrary_VectorMathFunctions_VectorNormalizeInPlace_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SetOnFailure != nullptr)
		*SetOnFailure = std::move(Parms.SetOnFailure);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.VectorLength
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGeometryScriptVectorList   VectorList                                                       (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptScalarList   ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// struct FGeometryScriptVectorList   VectorListA                                                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptVectorList   VectorListB                                                      (BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptScalarList   ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UGeometryScriptLibrary_VectorMathFunctions::VectorDot(struct FGeometryScriptVectorList* VectorListA, struct FGeometryScriptVectorList* VectorListB, const struct FGeometryScriptScalarList& ReturnValue)
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

	if (VectorListA != nullptr)
		*VectorListA = std::move(Parms.VectorListA);

	if (VectorListB != nullptr)
		*VectorListB = std::move(Parms.VectorListB);

}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.VectorCross
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGeometryScriptVectorList   VectorListA                                                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptVectorList   VectorListB                                                      (BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptVectorList   ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UGeometryScriptLibrary_VectorMathFunctions::VectorCross(struct FGeometryScriptVectorList* VectorListA, struct FGeometryScriptVectorList* VectorListB, const struct FGeometryScriptVectorList& ReturnValue)
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

	if (VectorListA != nullptr)
		*VectorListA = std::move(Parms.VectorListA);

	if (VectorListB != nullptr)
		*VectorListB = std::move(Parms.VectorListB);

}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.VectorBlendInPlace
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptVectorList   VectorListA                                                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptVectorList   VectorListB                                                      (BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// double                             ConstantA                                                        (ConstParm, EditFixedSize, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// double                             ConstantB                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

void UGeometryScriptLibrary_VectorMathFunctions::VectorBlendInPlace(struct FGeometryScriptVectorList* VectorListA, struct FGeometryScriptVectorList* VectorListB, double* ConstantA, double* ConstantB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_VectorMathFunctions", "VectorBlendInPlace");

	Params::UGeometryScriptLibrary_VectorMathFunctions_VectorBlendInPlace_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VectorListA != nullptr)
		*VectorListA = std::move(Parms.VectorListA);

	if (VectorListB != nullptr)
		*VectorListB = std::move(Parms.VectorListB);

	if (ConstantA != nullptr)
		*ConstantA = Parms.ConstantA;

	if (ConstantB != nullptr)
		*ConstantB = Parms.ConstantB;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.VectorBlend
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGeometryScriptVectorList   VectorListA                                                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptVectorList   VectorListB                                                      (BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// double                             ConstantA                                                        (ConstParm, EditFixedSize, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// double                             ConstantB                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptVectorList   ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UGeometryScriptLibrary_VectorMathFunctions::VectorBlend(struct FGeometryScriptVectorList* VectorListA, struct FGeometryScriptVectorList* VectorListB, double* ConstantA, double* ConstantB, const struct FGeometryScriptVectorList& ReturnValue)
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

	if (VectorListA != nullptr)
		*VectorListA = std::move(Parms.VectorListA);

	if (VectorListB != nullptr)
		*VectorListB = std::move(Parms.VectorListB);

	if (ConstantA != nullptr)
		*ConstantA = Parms.ConstantA;

	if (ConstantB != nullptr)
		*ConstantB = Parms.ConstantB;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarVectorMultiplyInPlace
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptScalarList   ScalarList                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptVectorList   VectorList                                                       (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// double                             ScalarMultiplier                                                 (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

struct FGeometryScriptVectorList UGeometryScriptLibrary_VectorMathFunctions::ScalarVectorMultiplyInPlace(double* ScalarMultiplier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_VectorMathFunctions", "ScalarVectorMultiplyInPlace");

	Params::UGeometryScriptLibrary_VectorMathFunctions_ScalarVectorMultiplyInPlace_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ScalarMultiplier != nullptr)
		*ScalarMultiplier = Parms.ScalarMultiplier;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarVectorMultiply
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGeometryScriptScalarList   ScalarList                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptVectorList   VectorList                                                       (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// double                             ScalarMultiplier                                                 (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptVectorList   ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FGeometryScriptVectorList UGeometryScriptLibrary_VectorMathFunctions::ScalarVectorMultiply(double* ScalarMultiplier, const struct FGeometryScriptVectorList& ReturnValue)
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

	if (ScalarMultiplier != nullptr)
		*ScalarMultiplier = Parms.ScalarMultiplier;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarMultiplyInPlace
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptScalarList   ScalarListA                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptScalarList   ScalarListB                                                      (ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// double                             ConstantMultiplier                                               (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

void UGeometryScriptLibrary_VectorMathFunctions::ScalarMultiplyInPlace(struct FGeometryScriptScalarList* ScalarListA, struct FGeometryScriptScalarList* ScalarListB, double* ConstantMultiplier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_VectorMathFunctions", "ScalarMultiplyInPlace");

	Params::UGeometryScriptLibrary_VectorMathFunctions_ScalarMultiplyInPlace_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ScalarListA != nullptr)
		*ScalarListA = std::move(Parms.ScalarListA);

	if (ScalarListB != nullptr)
		*ScalarListB = std::move(Parms.ScalarListB);

	if (ConstantMultiplier != nullptr)
		*ConstantMultiplier = Parms.ConstantMultiplier;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarMultiply
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGeometryScriptScalarList   ScalarListA                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptScalarList   ScalarListB                                                      (ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// double                             ConstantMultiplier                                               (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptScalarList   ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UGeometryScriptLibrary_VectorMathFunctions::ScalarMultiply(struct FGeometryScriptScalarList* ScalarListA, struct FGeometryScriptScalarList* ScalarListB, double* ConstantMultiplier, const struct FGeometryScriptScalarList& ReturnValue)
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

	if (ScalarListA != nullptr)
		*ScalarListA = std::move(Parms.ScalarListA);

	if (ScalarListB != nullptr)
		*ScalarListB = std::move(Parms.ScalarListB);

	if (ConstantMultiplier != nullptr)
		*ConstantMultiplier = Parms.ConstantMultiplier;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarInvertInPlace
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptScalarList   ScalarList                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// double                             Numerator                                                        (Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// double                             SetOnFailure                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// double                             Epsilon                                                          (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

struct FGeometryScriptScalarList UGeometryScriptLibrary_VectorMathFunctions::ScalarInvertInPlace(double* Numerator, double* SetOnFailure, double* Epsilon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_VectorMathFunctions", "ScalarInvertInPlace");

	Params::UGeometryScriptLibrary_VectorMathFunctions_ScalarInvertInPlace_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Numerator != nullptr)
		*Numerator = Parms.Numerator;

	if (SetOnFailure != nullptr)
		*SetOnFailure = Parms.SetOnFailure;

	if (Epsilon != nullptr)
		*Epsilon = Parms.Epsilon;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarInvert
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGeometryScriptScalarList   ScalarList                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// double                             Numerator                                                        (Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// double                             SetOnFailure                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// double                             Epsilon                                                          (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FGeometryScriptScalarList   ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FGeometryScriptScalarList UGeometryScriptLibrary_VectorMathFunctions::ScalarInvert(double* Numerator, double* SetOnFailure, double* Epsilon, const struct FGeometryScriptScalarList& ReturnValue)
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

	if (Numerator != nullptr)
		*Numerator = Parms.Numerator;

	if (SetOnFailure != nullptr)
		*SetOnFailure = Parms.SetOnFailure;

	if (Epsilon != nullptr)
		*Epsilon = Parms.Epsilon;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarBlendInPlace
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptScalarList   ScalarListA                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptScalarList   ScalarListB                                                      (ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// double                             ConstantA                                                        (ConstParm, EditFixedSize, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// double                             ConstantB                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

void UGeometryScriptLibrary_VectorMathFunctions::ScalarBlendInPlace(struct FGeometryScriptScalarList* ScalarListA, struct FGeometryScriptScalarList* ScalarListB, double* ConstantA, double* ConstantB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_VectorMathFunctions", "ScalarBlendInPlace");

	Params::UGeometryScriptLibrary_VectorMathFunctions_ScalarBlendInPlace_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ScalarListA != nullptr)
		*ScalarListA = std::move(Parms.ScalarListA);

	if (ScalarListB != nullptr)
		*ScalarListB = std::move(Parms.ScalarListB);

	if (ConstantA != nullptr)
		*ConstantA = Parms.ConstantA;

	if (ConstantB != nullptr)
		*ConstantB = Parms.ConstantB;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarBlend
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGeometryScriptScalarList   ScalarListA                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptScalarList   ScalarListB                                                      (ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// double                             ConstantA                                                        (ConstParm, EditFixedSize, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// double                             ConstantB                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptScalarList   ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UGeometryScriptLibrary_VectorMathFunctions::ScalarBlend(struct FGeometryScriptScalarList* ScalarListA, struct FGeometryScriptScalarList* ScalarListB, double* ConstantA, double* ConstantB, const struct FGeometryScriptScalarList& ReturnValue)
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

	if (ScalarListA != nullptr)
		*ScalarListA = std::move(Parms.ScalarListA);

	if (ScalarListB != nullptr)
		*ScalarListB = std::move(Parms.ScalarListB);

	if (ConstantA != nullptr)
		*ConstantA = Parms.ConstantA;

	if (ConstantB != nullptr)
		*ConstantB = Parms.ConstantB;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ConstantVectorMultiplyInPlace
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// double                             Constant                                                         (ConstParm, BlueprintVisible, OutParm, ReturnParm, Transient, Config, EditConst)
// struct FGeometryScriptVectorList   VectorList                                                       (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

struct FGeometryScriptVectorList UGeometryScriptLibrary_VectorMathFunctions::ConstantVectorMultiplyInPlace()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_VectorMathFunctions", "ConstantVectorMultiplyInPlace");

	Params::UGeometryScriptLibrary_VectorMathFunctions_ConstantVectorMultiplyInPlace_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ConstantVectorMultiply
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// double                             Constant                                                         (ConstParm, BlueprintVisible, OutParm, ReturnParm, Transient, Config, EditConst)
// struct FGeometryScriptVectorList   VectorList                                                       (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptVectorList   ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FGeometryScriptVectorList UGeometryScriptLibrary_VectorMathFunctions::ConstantVectorMultiply(const struct FGeometryScriptVectorList& ReturnValue)
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

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ConstantScalarMultiplyInPlace
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// double                             Constant                                                         (ConstParm, BlueprintVisible, OutParm, ReturnParm, Transient, Config, EditConst)
// struct FGeometryScriptScalarList   ScalarList                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

struct FGeometryScriptScalarList UGeometryScriptLibrary_VectorMathFunctions::ConstantScalarMultiplyInPlace()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_VectorMathFunctions", "ConstantScalarMultiplyInPlace");

	Params::UGeometryScriptLibrary_VectorMathFunctions_ConstantScalarMultiplyInPlace_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ConstantScalarMultiply
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// double                             Constant                                                         (ConstParm, BlueprintVisible, OutParm, ReturnParm, Transient, Config, EditConst)
// struct FGeometryScriptScalarList   ScalarList                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptScalarList   ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FGeometryScriptScalarList UGeometryScriptLibrary_VectorMathFunctions::ConstantScalarMultiply(const struct FGeometryScriptScalarList& ReturnValue)
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

	return Parms.ReturnValue;

}

}



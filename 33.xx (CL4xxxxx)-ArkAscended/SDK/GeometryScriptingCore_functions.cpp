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
// class UDynamicMesh*                FromDynamicMesh                                                  (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UStaticMesh*                 ToStaticMeshAsset                                                (ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptCollisionFromMeshOptionsOptions                                                          (ConstParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_CollisionFunctions::SetStaticMeshCollisionFromMesh(class UDynamicMesh* FromDynamicMesh, class UStaticMesh* ToStaticMeshAsset, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_CollisionFunctions", "SetStaticMeshCollisionFromMesh");

	Params::UGeometryScriptLibrary_CollisionFunctions_SetStaticMeshCollisionFromMesh_Params Parms{};

	Parms.FromDynamicMesh = FromDynamicMesh;
	Parms.ToStaticMeshAsset = ToStaticMeshAsset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions.SetStaticMeshCollisionFromComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UStaticMesh*                 StaticMeshAsset                                                  (ConstParm, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UPrimitiveComponent*         SourceComponent                                                  (Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FGeometryScriptSetSimpleCollisionOptionsOptions                                                          (ConstParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)

struct FGeometryScriptSetSimpleCollisionOptions UGeometryScriptLibrary_CollisionFunctions::SetStaticMeshCollisionFromComponent(class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_CollisionFunctions", "SetStaticMeshCollisionFromComponent");

	Params::UGeometryScriptLibrary_CollisionFunctions_SetStaticMeshCollisionFromComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions.SetDynamicMeshCollisionFromMesh
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                FromDynamicMesh                                                  (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMeshComponent*       ToDynamicMeshComponent                                           (Edit, ConstParm, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptCollisionFromMeshOptionsOptions                                                          (ConstParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_CollisionFunctions::SetDynamicMeshCollisionFromMesh(class UDynamicMesh* FromDynamicMesh, class UDynamicMeshComponent* ToDynamicMeshComponent, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_CollisionFunctions", "SetDynamicMeshCollisionFromMesh");

	Params::UGeometryScriptLibrary_CollisionFunctions_SetDynamicMeshCollisionFromMesh_Params Parms{};

	Parms.FromDynamicMesh = FromDynamicMesh;
	Parms.ToDynamicMeshComponent = ToDynamicMeshComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions.ResetDynamicMeshCollision
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMeshComponent*       Component                                                        (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               bEmitTransaction                                                 (Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)

bool UGeometryScriptLibrary_CollisionFunctions::ResetDynamicMeshCollision(class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_CollisionFunctions", "ResetDynamicMeshCollision");

	Params::UGeometryScriptLibrary_CollisionFunctions_ResetDynamicMeshCollision_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

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
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                CopyToMesh                                                       (ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                CopyToMeshOut                                                    (ConstParm, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  ProjectionFrame                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptSweptHullOptionsOptions                                                          (ConstParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_ContainmentFunctions::ComputeMeshSweptHull(class UDynamicMesh* TargetMesh, class UDynamicMesh* CopyToMesh, class UDynamicMesh* CopyToMeshOut, const struct FTransform& ProjectionFrame, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ContainmentFunctions", "ComputeMeshSweptHull");

	Params::UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshSweptHull_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.CopyToMesh = CopyToMesh;
	Parms.CopyToMeshOut = CopyToMeshOut;
	Parms.ProjectionFrame = ProjectionFrame;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ContainmentFunctions.ComputeMeshConvexHull
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                CopyToMesh                                                       (ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                CopyToMeshOut                                                    (ConstParm, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (ConstParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptConvexHullOptionsOptions                                                          (ConstParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_ContainmentFunctions::ComputeMeshConvexHull(class UDynamicMesh* TargetMesh, class UDynamicMesh* CopyToMesh, class UDynamicMesh* CopyToMeshOut, const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ContainmentFunctions", "ComputeMeshConvexHull");

	Params::UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexHull_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.CopyToMesh = CopyToMesh;
	Parms.CopyToMeshOut = CopyToMeshOut;
	Parms.Selection = Selection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ContainmentFunctions.ComputeMeshConvexDecomposition
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                CopyToMesh                                                       (ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                CopyToMeshOut                                                    (ConstParm, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptConvexDecompositionOptionsOptions                                                          (ConstParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_ContainmentFunctions::ComputeMeshConvexDecomposition(class UDynamicMesh* TargetMesh, class UDynamicMesh* CopyToMesh, class UDynamicMesh* CopyToMeshOut, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ContainmentFunctions", "ComputeMeshConvexDecomposition");

	Params::UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexDecomposition_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.CopyToMesh = CopyToMesh;
	Parms.CopyToMeshOut = CopyToMeshOut;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

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
// struct FGeometryScriptVectorList   VectorList                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// struct FVector                     NewValue                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               bIsValidIndex                                                    (Edit, ConstParm, BlueprintVisible, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

int32 UGeometryScriptLibrary_ListUtilityFunctions::SetVectorListItem(const struct FGeometryScriptVectorList& VectorList, const struct FVector& NewValue, bool* bIsValidIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "SetVectorListItem");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_SetVectorListItem_Params Parms{};

	Parms.VectorList = VectorList;
	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsValidIndex != nullptr)
		*bIsValidIndex = Parms.bIsValidIndex;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.SetUVListItem
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGeometryScriptUVList       UVList                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// struct FVector2D                   NewUV                                                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bIsValidIndex                                                    (Edit, ConstParm, BlueprintVisible, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

int32 UGeometryScriptLibrary_ListUtilityFunctions::SetUVListItem(const struct FGeometryScriptUVList& UVList, struct FVector2D* NewUV, bool* bIsValidIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "SetUVListItem");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_SetUVListItem_Params Parms{};

	Parms.UVList = UVList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NewUV != nullptr)
		*NewUV = std::move(Parms.NewUV);

	if (bIsValidIndex != nullptr)
		*bIsValidIndex = Parms.bIsValidIndex;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.SetScalarListItem
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptScalarList   ScalarList                                                       (Edit, ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// double                             NewValue                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               bIsValidIndex                                                    (Edit, ConstParm, BlueprintVisible, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

int32 UGeometryScriptLibrary_ListUtilityFunctions::SetScalarListItem(const struct FGeometryScriptScalarList& ScalarList, double NewValue, bool* bIsValidIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "SetScalarListItem");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_SetScalarListItem_Params Parms{};

	Parms.ScalarList = ScalarList;
	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsValidIndex != nullptr)
		*bIsValidIndex = Parms.bIsValidIndex;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.SetIndexListItem
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptIndexList    IndexList                                                        (Edit, BlueprintVisible, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// int32                              NewValue                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               bIsValidIndex                                                    (Edit, ConstParm, BlueprintVisible, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

int32 UGeometryScriptLibrary_ListUtilityFunctions::SetIndexListItem(const struct FGeometryScriptIndexList& IndexList, int32 NewValue, bool* bIsValidIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "SetIndexListItem");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_SetIndexListItem_Params Parms{};

	Parms.IndexList = IndexList;
	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsValidIndex != nullptr)
		*bIsValidIndex = Parms.bIsValidIndex;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.SetColorListItem
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGeometryScriptColorList    ColorList                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// struct FLinearColor                NewColor                                                         (ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bIsValidIndex                                                    (Edit, ConstParm, BlueprintVisible, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

int32 UGeometryScriptLibrary_ListUtilityFunctions::SetColorListItem(const struct FGeometryScriptColorList& ColorList, struct FLinearColor* NewColor, bool* bIsValidIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "SetColorListItem");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_SetColorListItem_Params Parms{};

	Parms.ColorList = ColorList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NewColor != nullptr)
		*NewColor = std::move(Parms.NewColor);

	if (bIsValidIndex != nullptr)
		*bIsValidIndex = Parms.bIsValidIndex;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetVectorListLength
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptVectorList   VectorList                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UGeometryScriptLibrary_ListUtilityFunctions::GetVectorListLength(const struct FGeometryScriptVectorList& VectorList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "GetVectorListLength");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLength_Params Parms{};

	Parms.VectorList = VectorList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetVectorListLastIndex
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptVectorList   VectorList                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UGeometryScriptLibrary_ListUtilityFunctions::GetVectorListLastIndex(const struct FGeometryScriptVectorList& VectorList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "GetVectorListLastIndex");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLastIndex_Params Parms{};

	Parms.VectorList = VectorList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetVectorListItem
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptVectorList   VectorList                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// bool                               bIsValidIndex                                                    (Edit, ConstParm, BlueprintVisible, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector UGeometryScriptLibrary_ListUtilityFunctions::GetVectorListItem(const struct FGeometryScriptVectorList& VectorList, bool* bIsValidIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "GetVectorListItem");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListItem_Params Parms{};

	Parms.VectorList = VectorList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsValidIndex != nullptr)
		*bIsValidIndex = Parms.bIsValidIndex;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetUVListLength
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptUVList       UVList                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UGeometryScriptLibrary_ListUtilityFunctions::GetUVListLength(const struct FGeometryScriptUVList& UVList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "GetUVListLength");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLength_Params Parms{};

	Parms.UVList = UVList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetUVListLastIndex
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptUVList       UVList                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UGeometryScriptLibrary_ListUtilityFunctions::GetUVListLastIndex(const struct FGeometryScriptUVList& UVList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "GetUVListLastIndex");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLastIndex_Params Parms{};

	Parms.UVList = UVList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetUVListItem
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptUVList       UVList                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// bool                               bIsValidIndex                                                    (Edit, ConstParm, BlueprintVisible, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector2D                   ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector2D UGeometryScriptLibrary_ListUtilityFunctions::GetUVListItem(const struct FGeometryScriptUVList& UVList, bool* bIsValidIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "GetUVListItem");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_GetUVListItem_Params Parms{};

	Parms.UVList = UVList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsValidIndex != nullptr)
		*bIsValidIndex = Parms.bIsValidIndex;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetTriangleListLength
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptTriangleList TriangleList                                                     (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UGeometryScriptLibrary_ListUtilityFunctions::GetTriangleListLength(const struct FGeometryScriptTriangleList& TriangleList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "GetTriangleListLength");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLength_Params Parms{};

	Parms.TriangleList = TriangleList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetTriangleListLastTriangle
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptTriangleList TriangleList                                                     (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UGeometryScriptLibrary_ListUtilityFunctions::GetTriangleListLastTriangle(const struct FGeometryScriptTriangleList& TriangleList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "GetTriangleListLastTriangle");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLastTriangle_Params Parms{};

	Parms.TriangleList = TriangleList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetTriangleListItem
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptTriangleList TriangleList                                                     (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              Triangle                                                         (ConstParm, BlueprintVisible, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config)
// bool                               bIsValidTriangle                                                 (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FIntVector                  ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FIntVector UGeometryScriptLibrary_ListUtilityFunctions::GetTriangleListItem(const struct FGeometryScriptTriangleList& TriangleList, bool* bIsValidTriangle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "GetTriangleListItem");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListItem_Params Parms{};

	Parms.TriangleList = TriangleList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsValidTriangle != nullptr)
		*bIsValidTriangle = Parms.bIsValidTriangle;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetScalarListLength
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptScalarList   ScalarList                                                       (Edit, ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UGeometryScriptLibrary_ListUtilityFunctions::GetScalarListLength(const struct FGeometryScriptScalarList& ScalarList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "GetScalarListLength");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLength_Params Parms{};

	Parms.ScalarList = ScalarList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetScalarListLastIndex
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptScalarList   ScalarList                                                       (Edit, ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UGeometryScriptLibrary_ListUtilityFunctions::GetScalarListLastIndex(const struct FGeometryScriptScalarList& ScalarList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "GetScalarListLastIndex");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLastIndex_Params Parms{};

	Parms.ScalarList = ScalarList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetScalarListItem
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptScalarList   ScalarList                                                       (Edit, ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// bool                               bIsValidIndex                                                    (Edit, ConstParm, BlueprintVisible, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

double UGeometryScriptLibrary_ListUtilityFunctions::GetScalarListItem(const struct FGeometryScriptScalarList& ScalarList, bool* bIsValidIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "GetScalarListItem");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListItem_Params Parms{};

	Parms.ScalarList = ScalarList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsValidIndex != nullptr)
		*bIsValidIndex = Parms.bIsValidIndex;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetIndexListLength
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptIndexList    IndexList                                                        (Edit, BlueprintVisible, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UGeometryScriptLibrary_ListUtilityFunctions::GetIndexListLength(const struct FGeometryScriptIndexList& IndexList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "GetIndexListLength");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLength_Params Parms{};

	Parms.IndexList = IndexList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetIndexListLastIndex
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptIndexList    IndexList                                                        (Edit, BlueprintVisible, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UGeometryScriptLibrary_ListUtilityFunctions::GetIndexListLastIndex(const struct FGeometryScriptIndexList& IndexList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "GetIndexListLastIndex");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLastIndex_Params Parms{};

	Parms.IndexList = IndexList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetIndexListItem
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptIndexList    IndexList                                                        (Edit, BlueprintVisible, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// bool                               bIsValidIndex                                                    (Edit, ConstParm, BlueprintVisible, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UGeometryScriptLibrary_ListUtilityFunctions::GetIndexListItem(const struct FGeometryScriptIndexList& IndexList, bool* bIsValidIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "GetIndexListItem");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListItem_Params Parms{};

	Parms.IndexList = IndexList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsValidIndex != nullptr)
		*bIsValidIndex = Parms.bIsValidIndex;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetColorListLength
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptColorList    ColorList                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UGeometryScriptLibrary_ListUtilityFunctions::GetColorListLength(const struct FGeometryScriptColorList& ColorList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "GetColorListLength");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLength_Params Parms{};

	Parms.ColorList = ColorList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetColorListLastIndex
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptColorList    ColorList                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UGeometryScriptLibrary_ListUtilityFunctions::GetColorListLastIndex(const struct FGeometryScriptColorList& ColorList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "GetColorListLastIndex");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLastIndex_Params Parms{};

	Parms.ColorList = ColorList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetColorListItem
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptColorList    ColorList                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// bool                               bIsValidIndex                                                    (Edit, ConstParm, BlueprintVisible, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FLinearColor                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FLinearColor UGeometryScriptLibrary_ListUtilityFunctions::GetColorListItem(const struct FGeometryScriptColorList& ColorList, bool* bIsValidIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "GetColorListItem");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_GetColorListItem_Params Parms{};

	Parms.ColorList = ColorList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsValidIndex != nullptr)
		*bIsValidIndex = Parms.bIsValidIndex;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ExtractColorListChannels
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptColorList    ColorList                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptVectorList   VectorList                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              XChannelIndex                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              YChannelIndex                                                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ZChannelIndex                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UGeometryScriptLibrary_ListUtilityFunctions::ExtractColorListChannels(const struct FGeometryScriptColorList& ColorList, const struct FGeometryScriptVectorList& VectorList, int32* XChannelIndex, int32* YChannelIndex, int32* ZChannelIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "ExtractColorListChannels");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannels_Params Parms{};

	Parms.ColorList = ColorList;
	Parms.VectorList = VectorList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (XChannelIndex != nullptr)
		*XChannelIndex = Parms.XChannelIndex;

	if (YChannelIndex != nullptr)
		*YChannelIndex = Parms.YChannelIndex;

	if (ZChannelIndex != nullptr)
		*ZChannelIndex = Parms.ZChannelIndex;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ExtractColorListChannel
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptColorList    ColorList                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptScalarList   ScalarList                                                       (Edit, ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ChannelIndex                                                     (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)

int32 UGeometryScriptLibrary_ListUtilityFunctions::ExtractColorListChannel(const struct FGeometryScriptColorList& ColorList, const struct FGeometryScriptScalarList& ScalarList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "ExtractColorListChannel");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannel_Params Parms{};

	Parms.ColorList = ColorList;
	Parms.ScalarList = ScalarList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.DuplicateVectorList
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptVectorList   VectorList                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptVectorList   DuplicateList                                                    (Edit, ConstParm, BlueprintVisible, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UGeometryScriptLibrary_ListUtilityFunctions::DuplicateVectorList(const struct FGeometryScriptVectorList& VectorList, struct FGeometryScriptVectorList* DuplicateList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "DuplicateVectorList");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_DuplicateVectorList_Params Parms{};

	Parms.VectorList = VectorList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (DuplicateList != nullptr)
		*DuplicateList = std::move(Parms.DuplicateList);

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.DuplicateUVList
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptUVList       UVList                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptUVList       DuplicateList                                                    (Edit, ConstParm, BlueprintVisible, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UGeometryScriptLibrary_ListUtilityFunctions::DuplicateUVList(const struct FGeometryScriptUVList& UVList, struct FGeometryScriptUVList* DuplicateList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "DuplicateUVList");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_DuplicateUVList_Params Parms{};

	Parms.UVList = UVList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (DuplicateList != nullptr)
		*DuplicateList = std::move(Parms.DuplicateList);

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.DuplicateScalarList
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptScalarList   ScalarList                                                       (Edit, ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptScalarList   DuplicateList                                                    (Edit, ConstParm, BlueprintVisible, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UGeometryScriptLibrary_ListUtilityFunctions::DuplicateScalarList(const struct FGeometryScriptScalarList& ScalarList, struct FGeometryScriptScalarList* DuplicateList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "DuplicateScalarList");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_DuplicateScalarList_Params Parms{};

	Parms.ScalarList = ScalarList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (DuplicateList != nullptr)
		*DuplicateList = std::move(Parms.DuplicateList);

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.DuplicateIndexList
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptIndexList    IndexList                                                        (Edit, BlueprintVisible, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptIndexList    DuplicateList                                                    (Edit, ConstParm, BlueprintVisible, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UGeometryScriptLibrary_ListUtilityFunctions::DuplicateIndexList(const struct FGeometryScriptIndexList& IndexList, struct FGeometryScriptIndexList* DuplicateList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "DuplicateIndexList");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_DuplicateIndexList_Params Parms{};

	Parms.IndexList = IndexList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (DuplicateList != nullptr)
		*DuplicateList = std::move(Parms.DuplicateList);

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.DuplicateColorList
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptColorList    ColorList                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptColorList    DuplicateList                                                    (Edit, ConstParm, BlueprintVisible, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UGeometryScriptLibrary_ListUtilityFunctions::DuplicateColorList(const struct FGeometryScriptColorList& ColorList, struct FGeometryScriptColorList* DuplicateList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "DuplicateColorList");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_DuplicateColorList_Params Parms{};

	Parms.ColorList = ColorList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (DuplicateList != nullptr)
		*DuplicateList = std::move(Parms.DuplicateList);

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertVectorListToArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptVectorList   VectorList                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FVector>             VectorArray                                                      (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UGeometryScriptLibrary_ListUtilityFunctions::ConvertVectorListToArray(const struct FGeometryScriptVectorList& VectorList, TArray<struct FVector>* VectorArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "ConvertVectorListToArray");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_ConvertVectorListToArray_Params Parms{};

	Parms.VectorList = VectorList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VectorArray != nullptr)
		*VectorArray = std::move(Parms.VectorArray);

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertUVListToArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptUVList       UVList                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FVector2D>           UVArray                                                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UGeometryScriptLibrary_ListUtilityFunctions::ConvertUVListToArray(const struct FGeometryScriptUVList& UVList, const TArray<struct FVector2D>& UVArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "ConvertUVListToArray");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_ConvertUVListToArray_Params Parms{};

	Parms.UVList = UVList;
	Parms.UVArray = UVArray;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertTriangleListToArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptTriangleList TriangleList                                                     (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FIntVector>          TriangleArray                                                    (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UGeometryScriptLibrary_ListUtilityFunctions::ConvertTriangleListToArray(const struct FGeometryScriptTriangleList& TriangleList, const TArray<struct FIntVector>& TriangleArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "ConvertTriangleListToArray");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_ConvertTriangleListToArray_Params Parms{};

	Parms.TriangleList = TriangleList;
	Parms.TriangleArray = TriangleArray;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertScalarListToArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptScalarList   ScalarList                                                       (Edit, ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<double>                     ScalarArray                                                      (OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UGeometryScriptLibrary_ListUtilityFunctions::ConvertScalarListToArray(const struct FGeometryScriptScalarList& ScalarList, TArray<double>* ScalarArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "ConvertScalarListToArray");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_ConvertScalarListToArray_Params Parms{};

	Parms.ScalarList = ScalarList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ScalarArray != nullptr)
		*ScalarArray = std::move(Parms.ScalarArray);

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertIndexListToArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptIndexList    IndexList                                                        (Edit, BlueprintVisible, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<int32>                      IndexArray                                                       (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UGeometryScriptLibrary_ListUtilityFunctions::ConvertIndexListToArray(const struct FGeometryScriptIndexList& IndexList, const TArray<int32>& IndexArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "ConvertIndexListToArray");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_ConvertIndexListToArray_Params Parms{};

	Parms.IndexList = IndexList;
	Parms.IndexArray = IndexArray;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertColorListToArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptColorList    ColorList                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FLinearColor>        ColorArray                                                       (Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UGeometryScriptLibrary_ListUtilityFunctions::ConvertColorListToArray(const struct FGeometryScriptColorList& ColorList, const TArray<struct FLinearColor>& ColorArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "ConvertColorListToArray");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_ConvertColorListToArray_Params Parms{};

	Parms.ColorList = ColorList;
	Parms.ColorArray = ColorArray;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertArrayToVectorList
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FVector>             VectorArray                                                      (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptVectorList   VectorList                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UGeometryScriptLibrary_ListUtilityFunctions::ConvertArrayToVectorList(TArray<struct FVector>* VectorArray, const struct FGeometryScriptVectorList& VectorList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "ConvertArrayToVectorList");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToVectorList_Params Parms{};

	Parms.VectorList = VectorList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VectorArray != nullptr)
		*VectorArray = std::move(Parms.VectorArray);

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertArrayToUVList
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FVector2D>           UVArray                                                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptUVList       UVList                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UGeometryScriptLibrary_ListUtilityFunctions::ConvertArrayToUVList(const TArray<struct FVector2D>& UVArray, const struct FGeometryScriptUVList& UVList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "ConvertArrayToUVList");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToUVList_Params Parms{};

	Parms.UVArray = UVArray;
	Parms.UVList = UVList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertArrayToTriangleList
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FIntVector>          TriangleArray                                                    (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptTriangleList TriangleList                                                     (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UGeometryScriptLibrary_ListUtilityFunctions::ConvertArrayToTriangleList(const TArray<struct FIntVector>& TriangleArray, const struct FGeometryScriptTriangleList& TriangleList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "ConvertArrayToTriangleList");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToTriangleList_Params Parms{};

	Parms.TriangleArray = TriangleArray;
	Parms.TriangleList = TriangleList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertArrayToScalarList
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<double>                     VectorArray                                                      (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptScalarList   ScalarList                                                       (Edit, ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UGeometryScriptLibrary_ListUtilityFunctions::ConvertArrayToScalarList(TArray<double>* VectorArray, const struct FGeometryScriptScalarList& ScalarList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "ConvertArrayToScalarList");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToScalarList_Params Parms{};

	Parms.ScalarList = ScalarList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VectorArray != nullptr)
		*VectorArray = std::move(Parms.VectorArray);

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertArrayToIndexList
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<int32>                      IndexArray                                                       (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptIndexList    IndexList                                                        (Edit, BlueprintVisible, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EGeometryScriptIndexTypeIndexType                                                        (ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

enum class EGeometryScriptIndexType UGeometryScriptLibrary_ListUtilityFunctions::ConvertArrayToIndexList(const TArray<int32>& IndexArray, const struct FGeometryScriptIndexList& IndexList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "ConvertArrayToIndexList");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToIndexList_Params Parms{};

	Parms.IndexArray = IndexArray;
	Parms.IndexList = IndexList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertArrayToColorList
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FLinearColor>        ColorArray                                                       (Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptColorList    ColorList                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UGeometryScriptLibrary_ListUtilityFunctions::ConvertArrayToColorList(const TArray<struct FLinearColor>& ColorArray, const struct FGeometryScriptColorList& ColorList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "ConvertArrayToColorList");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToColorList_Params Parms{};

	Parms.ColorArray = ColorArray;
	Parms.ColorList = ColorList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ClearVectorList
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGeometryScriptVectorList   VectorList                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     ClearValue                                                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig)

void UGeometryScriptLibrary_ListUtilityFunctions::ClearVectorList(const struct FGeometryScriptVectorList& VectorList, struct FVector* ClearValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "ClearVectorList");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_ClearVectorList_Params Parms{};

	Parms.VectorList = VectorList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ClearValue != nullptr)
		*ClearValue = std::move(Parms.ClearValue);

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ClearUVList
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGeometryScriptUVList       UVList                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector2D                   ClearUV                                                          (Edit, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UGeometryScriptLibrary_ListUtilityFunctions::ClearUVList(const struct FGeometryScriptUVList& UVList, const struct FVector2D& ClearUV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "ClearUVList");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_ClearUVList_Params Parms{};

	Parms.UVList = UVList;
	Parms.ClearUV = ClearUV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ClearScalarList
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptScalarList   ScalarList                                                       (Edit, ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             ClearValue                                                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig)

void UGeometryScriptLibrary_ListUtilityFunctions::ClearScalarList(const struct FGeometryScriptScalarList& ScalarList, double* ClearValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "ClearScalarList");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_ClearScalarList_Params Parms{};

	Parms.ScalarList = ScalarList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ClearValue != nullptr)
		*ClearValue = Parms.ClearValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ClearIndexList
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptIndexList    IndexList                                                        (Edit, BlueprintVisible, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ClearValue                                                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig)

void UGeometryScriptLibrary_ListUtilityFunctions::ClearIndexList(const struct FGeometryScriptIndexList& IndexList, int32* ClearValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "ClearIndexList");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_ClearIndexList_Params Parms{};

	Parms.IndexList = IndexList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ClearValue != nullptr)
		*ClearValue = Parms.ClearValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ClearColorList
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGeometryScriptColorList    ColorList                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FLinearColor                ClearColor                                                       (Edit, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig)

struct FLinearColor UGeometryScriptLibrary_ListUtilityFunctions::ClearColorList(const struct FGeometryScriptColorList& ColorList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "ClearColorList");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_ClearColorList_Params Parms{};

	Parms.ColorList = ColorList;

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
// class UStaticMesh*                 FromStaticMeshAsset                                              (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshReadLOD  RequestedLOD                                                     (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<class UMaterialInterface*>  MaterialList                                                     (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<int32>                      MaterialIndex                                                    (BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// enum class EGeometryScriptOutcomePinsOutcome                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)

enum class EGeometryScriptOutcomePins UGeometryScriptLibrary_StaticMeshFunctions::GetSectionMaterialListFromStaticMesh(class UStaticMesh** FromStaticMeshAsset, TArray<class UMaterialInterface*>* MaterialList, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_StaticMeshFunctions", "GetSectionMaterialListFromStaticMesh");

	Params::UGeometryScriptLibrary_StaticMeshFunctions_GetSectionMaterialListFromStaticMesh_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (FromStaticMeshAsset != nullptr)
		*FromStaticMeshAsset = Parms.FromStaticMeshAsset;

	if (MaterialList != nullptr)
		*MaterialList = std::move(Parms.MaterialList);

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_StaticMeshFunctions.CopyMeshToStaticMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                FromDynamicMesh                                                  (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UStaticMesh*                 ToStaticMeshAsset                                                (ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptCopyMeshToAssetOptionsOptions                                                          (ConstParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FGeometryScriptMeshWriteLOD TargetLod                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EGeometryScriptOutcomePinsOutcome                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_StaticMeshFunctions::CopyMeshToStaticMesh(class UDynamicMesh* FromDynamicMesh, class UStaticMesh* ToStaticMeshAsset, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_StaticMeshFunctions", "CopyMeshToStaticMesh");

	Params::UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshToStaticMesh_Params Parms{};

	Parms.FromDynamicMesh = FromDynamicMesh;
	Parms.ToStaticMeshAsset = ToStaticMeshAsset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_StaticMeshFunctions.CopyMeshToSkeletalMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                FromDynamicMesh                                                  (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class USkeletalMesh*               ToSkeletalMeshAsset                                              (Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptCopyMeshToAssetOptionsOptions                                                          (ConstParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FGeometryScriptMeshWriteLOD TargetLod                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EGeometryScriptOutcomePinsOutcome                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_StaticMeshFunctions::CopyMeshToSkeletalMesh(class UDynamicMesh* FromDynamicMesh, class USkeletalMesh** ToSkeletalMeshAsset, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_StaticMeshFunctions", "CopyMeshToSkeletalMesh");

	Params::UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshToSkeletalMesh_Params Parms{};

	Parms.FromDynamicMesh = FromDynamicMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ToSkeletalMeshAsset != nullptr)
		*ToSkeletalMeshAsset = Parms.ToSkeletalMeshAsset;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_StaticMeshFunctions.CopyMeshFromStaticMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UStaticMesh*                 FromStaticMeshAsset                                              (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ToDynamicMesh                                                    (Edit, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptCopyMeshFromAssetOptionsAssetOptions                                                     (BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshReadLOD  RequestedLOD                                                     (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// enum class EGeometryScriptOutcomePinsOutcome                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_StaticMeshFunctions::CopyMeshFromStaticMesh(class UStaticMesh** FromStaticMeshAsset, class UDynamicMesh** ToDynamicMesh, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_StaticMeshFunctions", "CopyMeshFromStaticMesh");

	Params::UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshFromStaticMesh_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (FromStaticMeshAsset != nullptr)
		*FromStaticMeshAsset = Parms.FromStaticMeshAsset;

	if (ToDynamicMesh != nullptr)
		*ToDynamicMesh = Parms.ToDynamicMesh;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_StaticMeshFunctions.CopyMeshFromSkeletalMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class USkeletalMesh*               FromSkeletalMeshAsset                                            (Edit, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ToDynamicMesh                                                    (Edit, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptCopyMeshFromAssetOptionsAssetOptions                                                     (BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshReadLOD  RequestedLOD                                                     (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// enum class EGeometryScriptOutcomePinsOutcome                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_StaticMeshFunctions::CopyMeshFromSkeletalMesh(class USkeletalMesh** FromSkeletalMeshAsset, class UDynamicMesh** ToDynamicMesh, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_StaticMeshFunctions", "CopyMeshFromSkeletalMesh");

	Params::UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshFromSkeletalMesh_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (FromSkeletalMeshAsset != nullptr)
		*FromSkeletalMeshAsset = Parms.FromSkeletalMeshAsset;

	if (ToDynamicMesh != nullptr)
		*ToDynamicMesh = Parms.ToDynamicMesh;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

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
// struct FGeometryScriptBakeTypeOptionsReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FGeometryScriptBakeTypeOptions UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypeVertexColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBakeFunctions", "MakeBakeTypeVertexColor");

	Params::UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeVertexColor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeTexture
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UTexture2D*                  SourceTexture                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              SourceUVLayer                                                    (Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptBakeTypeOptionsReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FGeometryScriptBakeTypeOptions UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypeTexture(int32* SourceUVLayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBakeFunctions", "MakeBakeTypeTexture");

	Params::UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeTexture_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SourceUVLayer != nullptr)
		*SourceUVLayer = Parms.SourceUVLayer;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeTangentNormal
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptBakeTypeOptionsReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FGeometryScriptBakeTypeOptions UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypeTangentNormal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBakeFunctions", "MakeBakeTypeTangentNormal");

	Params::UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeTangentNormal_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypePosition
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptBakeTypeOptionsReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FGeometryScriptBakeTypeOptions UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypePosition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBakeFunctions", "MakeBakeTypePosition");

	Params::UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypePosition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeObjectNormal
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptBakeTypeOptionsReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FGeometryScriptBakeTypeOptions UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypeObjectNormal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBakeFunctions", "MakeBakeTypeObjectNormal");

	Params::UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeObjectNormal_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeMultiTexture
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class UTexture2D*>          MaterialIDSourceTextures                                         (ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              SourceUVLayer                                                    (Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptBakeTypeOptionsReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FGeometryScriptBakeTypeOptions UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypeMultiTexture(TArray<class UTexture2D*>* MaterialIDSourceTextures, int32* SourceUVLayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBakeFunctions", "MakeBakeTypeMultiTexture");

	Params::UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeMultiTexture_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MaterialIDSourceTextures != nullptr)
		*MaterialIDSourceTextures = std::move(Parms.MaterialIDSourceTextures);

	if (SourceUVLayer != nullptr)
		*SourceUVLayer = Parms.SourceUVLayer;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeMaterialID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptBakeTypeOptionsReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FGeometryScriptBakeTypeOptions UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypeMaterialID()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBakeFunctions", "MakeBakeTypeMaterialID");

	Params::UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeMaterialID_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeFaceNormal
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptBakeTypeOptionsReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FGeometryScriptBakeTypeOptions UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypeFaceNormal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBakeFunctions", "MakeBakeTypeFaceNormal");

	Params::UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeFaceNormal_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeCurvature
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EGeometryScriptBakeCurvatureTypeModeCurvatureType                                                    (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EGeometryScriptBakeCurvatureColorModeColorMapping                                                     (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              ColorRangeMultiplier                                             (ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              MinRangeMultiplier                                               (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EGeometryScriptBakeCurvatureClampModeClamping                                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptBakeTypeOptionsReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FGeometryScriptBakeTypeOptions UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypeCurvature(enum class EGeometryScriptBakeCurvatureTypeMode* CurvatureType, enum class EGeometryScriptBakeCurvatureColorMode* ColorMapping, float* ColorRangeMultiplier, float* MinRangeMultiplier, enum class EGeometryScriptBakeCurvatureClampMode* Clamping)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBakeFunctions", "MakeBakeTypeCurvature");

	Params::UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeCurvature_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (CurvatureType != nullptr)
		*CurvatureType = Parms.CurvatureType;

	if (ColorMapping != nullptr)
		*ColorMapping = Parms.ColorMapping;

	if (ColorRangeMultiplier != nullptr)
		*ColorRangeMultiplier = Parms.ColorRangeMultiplier;

	if (MinRangeMultiplier != nullptr)
		*MinRangeMultiplier = Parms.MinRangeMultiplier;

	if (Clamping != nullptr)
		*Clamping = Parms.Clamping;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeBentNormal
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              OcclusionRays                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              MaxDistance                                                      (BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
// float                              SpreadAngle                                                      (ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptBakeTypeOptionsReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FGeometryScriptBakeTypeOptions UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypeBentNormal(int32* OcclusionRays, float* SpreadAngle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBakeFunctions", "MakeBakeTypeBentNormal");

	Params::UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeBentNormal_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OcclusionRays != nullptr)
		*OcclusionRays = Parms.OcclusionRays;

	if (SpreadAngle != nullptr)
		*SpreadAngle = Parms.SpreadAngle;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeAmbientOcclusion
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              OcclusionRays                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              MaxDistance                                                      (BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
// float                              SpreadAngle                                                      (ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              BiasAngle                                                        (ConstParm, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptBakeTypeOptionsReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FGeometryScriptBakeTypeOptions UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypeAmbientOcclusion(int32* OcclusionRays, float* SpreadAngle, float* BiasAngle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBakeFunctions", "MakeBakeTypeAmbientOcclusion");

	Params::UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeAmbientOcclusion_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OcclusionRays != nullptr)
		*OcclusionRays = Parms.OcclusionRays;

	if (SpreadAngle != nullptr)
		*SpreadAngle = Parms.SpreadAngle;

	if (BiasAngle != nullptr)
		*BiasAngle = Parms.BiasAngle;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.BakeVertex
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  TargetTransform                                                  (ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptBakeTargetMeshOptionsTargetOptions                                                    (BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                SourceMesh                                                       (Edit, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FTransform                  SourceTransform                                                  (Edit, ConstParm, BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptBakeSourceMeshOptionsSourceOptions                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptBakeOutputTypeBakeTypes                                                        (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptBakeVertexOptionsBakeOptions                                                      (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshBakeFunctions::BakeVertex(class UDynamicMesh* TargetMesh, struct FGeometryScriptBakeTargetMeshOptions* TargetOptions, struct FTransform* SourceTransform, struct FGeometryScriptBakeSourceMeshOptions* SourceOptions, struct FGeometryScriptBakeOutputType* BakeTypes, struct FGeometryScriptBakeVertexOptions* BakeOptions, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBakeFunctions", "BakeVertex");

	Params::UGeometryScriptLibrary_MeshBakeFunctions_BakeVertex_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TargetOptions != nullptr)
		*TargetOptions = std::move(Parms.TargetOptions);

	if (SourceTransform != nullptr)
		*SourceTransform = std::move(Parms.SourceTransform);

	if (SourceOptions != nullptr)
		*SourceOptions = std::move(Parms.SourceOptions);

	if (BakeTypes != nullptr)
		*BakeTypes = std::move(Parms.BakeTypes);

	if (BakeOptions != nullptr)
		*BakeOptions = std::move(Parms.BakeOptions);

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.BakeTextureFromRenderCaptures
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  TargetLocalToWorld                                               (ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptBakeTargetMeshOptionsTargetOptions                                                    (BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<class AActor*>              SourceActors                                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptBakeRenderCaptureOptionsBakeOptions                                                      (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptRenderCaptureTexturesReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FGeometryScriptRenderCaptureTextures UGeometryScriptLibrary_MeshBakeFunctions::BakeTextureFromRenderCaptures(class UDynamicMesh* TargetMesh, struct FTransform* TargetLocalToWorld, struct FGeometryScriptBakeTargetMeshOptions* TargetOptions, TArray<class AActor*>* SourceActors, struct FGeometryScriptBakeRenderCaptureOptions* BakeOptions, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBakeFunctions", "BakeTextureFromRenderCaptures");

	Params::UGeometryScriptLibrary_MeshBakeFunctions_BakeTextureFromRenderCaptures_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TargetLocalToWorld != nullptr)
		*TargetLocalToWorld = std::move(Parms.TargetLocalToWorld);

	if (TargetOptions != nullptr)
		*TargetOptions = std::move(Parms.TargetOptions);

	if (SourceActors != nullptr)
		*SourceActors = std::move(Parms.SourceActors);

	if (BakeOptions != nullptr)
		*BakeOptions = std::move(Parms.BakeOptions);

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.BakeTexture
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  TargetTransform                                                  (ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptBakeTargetMeshOptionsTargetOptions                                                    (BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                SourceMesh                                                       (Edit, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FTransform                  SourceTransform                                                  (Edit, ConstParm, BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptBakeSourceMeshOptionsSourceOptions                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FGeometryScriptBakeTypeOptions>BakeTypes                                                        (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptBakeTextureOptionsBakeOptions                                                      (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// TArray<class UTexture2D*>          ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<class UTexture2D*> UGeometryScriptLibrary_MeshBakeFunctions::BakeTexture(class UDynamicMesh* TargetMesh, struct FGeometryScriptBakeTargetMeshOptions* TargetOptions, struct FTransform* SourceTransform, struct FGeometryScriptBakeSourceMeshOptions* SourceOptions, TArray<struct FGeometryScriptBakeTypeOptions>* BakeTypes, struct FGeometryScriptBakeTextureOptions* BakeOptions, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBakeFunctions", "BakeTexture");

	Params::UGeometryScriptLibrary_MeshBakeFunctions_BakeTexture_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TargetOptions != nullptr)
		*TargetOptions = std::move(Parms.TargetOptions);

	if (SourceTransform != nullptr)
		*SourceTransform = std::move(Parms.SourceTransform);

	if (SourceOptions != nullptr)
		*SourceOptions = std::move(Parms.SourceOptions);

	if (BakeTypes != nullptr)
		*BakeTypes = std::move(Parms.BakeTypes);

	if (BakeOptions != nullptr)
		*BakeOptions = std::move(Parms.BakeOptions);

	if (Debug != nullptr)
		*Debug = Parms.Debug;

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
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              VertexID                                                         (EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
// struct FVector                     NewPosition                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bIsValidVertex                                                   (Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bDeferChangeNotifications                                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshBasicEditFunctions::SetVertexPosition(class UDynamicMesh* TargetMesh, const struct FVector& NewPosition, bool bIsValidVertex, bool* bDeferChangeNotifications)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBasicEditFunctions", "SetVertexPosition");

	Params::UGeometryScriptLibrary_MeshBasicEditFunctions_SetVertexPosition_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.NewPosition = NewPosition;
	Parms.bIsValidVertex = bIsValidVertex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bDeferChangeNotifications != nullptr)
		*bDeferChangeNotifications = Parms.bDeferChangeNotifications;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.SetAllMeshVertexPositions
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptVectorList   PositionList                                                     (ConstParm, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshBasicEditFunctions::SetAllMeshVertexPositions(class UDynamicMesh* TargetMesh, const struct FGeometryScriptVectorList& PositionList, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBasicEditFunctions", "SetAllMeshVertexPositions");

	Params::UGeometryScriptLibrary_MeshBasicEditFunctions_SetAllMeshVertexPositions_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.PositionList = PositionList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.DiscardMeshAttributes
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bDeferChangeNotifications                                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshBasicEditFunctions::DiscardMeshAttributes(class UDynamicMesh* TargetMesh, bool* bDeferChangeNotifications)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBasicEditFunctions", "DiscardMeshAttributes");

	Params::UGeometryScriptLibrary_MeshBasicEditFunctions_DiscardMeshAttributes_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bDeferChangeNotifications != nullptr)
		*bDeferChangeNotifications = Parms.bDeferChangeNotifications;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.DeleteVerticesFromMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptIndexList    VertexList                                                       (Edit, BlueprintVisible, ExportObject, OutParm, Transient, Config, InstancedReference, SubobjectReference)
// int32                              NumDeleted                                                       (Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bDeferChangeNotifications                                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshBasicEditFunctions::DeleteVerticesFromMesh(class UDynamicMesh* TargetMesh, struct FGeometryScriptIndexList* VertexList, int32 NumDeleted, bool* bDeferChangeNotifications)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBasicEditFunctions", "DeleteVerticesFromMesh");

	Params::UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteVerticesFromMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.NumDeleted = NumDeleted;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VertexList != nullptr)
		*VertexList = std::move(Parms.VertexList);

	if (bDeferChangeNotifications != nullptr)
		*bDeferChangeNotifications = Parms.bDeferChangeNotifications;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.DeleteVertexFromMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              VertexID                                                         (EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
// bool                               bWasVertexDeleted                                                (ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bDeferChangeNotifications                                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshBasicEditFunctions::DeleteVertexFromMesh(class UDynamicMesh* TargetMesh, bool bWasVertexDeleted, bool* bDeferChangeNotifications)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBasicEditFunctions", "DeleteVertexFromMesh");

	Params::UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteVertexFromMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.bWasVertexDeleted = bWasVertexDeleted;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bDeferChangeNotifications != nullptr)
		*bDeferChangeNotifications = Parms.bDeferChangeNotifications;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.DeleteTrianglesFromMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptIndexList    TriangleList                                                     (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              NumDeleted                                                       (Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bDeferChangeNotifications                                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshBasicEditFunctions::DeleteTrianglesFromMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptIndexList& TriangleList, int32 NumDeleted, bool* bDeferChangeNotifications)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBasicEditFunctions", "DeleteTrianglesFromMesh");

	Params::UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteTrianglesFromMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.TriangleList = TriangleList;
	Parms.NumDeleted = NumDeleted;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bDeferChangeNotifications != nullptr)
		*bDeferChangeNotifications = Parms.bDeferChangeNotifications;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.DeleteTriangleFromMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              TriangleID                                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
// bool                               bWasTriangleDeleted                                              (Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bDeferChangeNotifications                                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshBasicEditFunctions::DeleteTriangleFromMesh(class UDynamicMesh* TargetMesh, bool bWasTriangleDeleted, bool* bDeferChangeNotifications)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBasicEditFunctions", "DeleteTriangleFromMesh");

	Params::UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteTriangleFromMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.bWasTriangleDeleted = bWasTriangleDeleted;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bDeferChangeNotifications != nullptr)
		*bDeferChangeNotifications = Parms.bDeferChangeNotifications;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.DeleteSelectedTrianglesFromMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (ConstParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              NumDeleted                                                       (Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bDeferChangeNotifications                                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshBasicEditFunctions::DeleteSelectedTrianglesFromMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, int32 NumDeleted, bool* bDeferChangeNotifications)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBasicEditFunctions", "DeleteSelectedTrianglesFromMesh");

	Params::UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteSelectedTrianglesFromMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;
	Parms.NumDeleted = NumDeleted;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bDeferChangeNotifications != nullptr)
		*bDeferChangeNotifications = Parms.bDeferChangeNotifications;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AppendMeshTransformed
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                AppendMesh                                                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst)
// TArray<struct FTransform>          AppendTransforms                                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  ConstantTransform                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bConstantTransformIsRelative                                     (Edit, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bDeferChangeNotifications                                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptAppendMeshOptionsAppendOptions                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshBasicEditFunctions::AppendMeshTransformed(class UDynamicMesh* TargetMesh, const TArray<struct FTransform>& AppendTransforms, const struct FTransform& ConstantTransform, bool bConstantTransformIsRelative, bool* bDeferChangeNotifications, const struct FGeometryScriptAppendMeshOptions& AppendOptions, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBasicEditFunctions", "AppendMeshTransformed");

	Params::UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshTransformed_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.AppendTransforms = AppendTransforms;
	Parms.ConstantTransform = ConstantTransform;
	Parms.bConstantTransformIsRelative = bConstantTransformIsRelative;
	Parms.AppendOptions = AppendOptions;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bDeferChangeNotifications != nullptr)
		*bDeferChangeNotifications = Parms.bDeferChangeNotifications;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AppendMeshRepeated
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                AppendMesh                                                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst)
// struct FTransform                  AppendTransform                                                  (Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              RepeatCount                                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bApplyTransformToFirstInstance                                   (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bDeferChangeNotifications                                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptAppendMeshOptionsAppendOptions                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshBasicEditFunctions::AppendMeshRepeated(class UDynamicMesh* TargetMesh, const struct FTransform& AppendTransform, int32 RepeatCount, bool bApplyTransformToFirstInstance, bool* bDeferChangeNotifications, const struct FGeometryScriptAppendMeshOptions& AppendOptions, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBasicEditFunctions", "AppendMeshRepeated");

	Params::UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshRepeated_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.AppendTransform = AppendTransform;
	Parms.RepeatCount = RepeatCount;
	Parms.bApplyTransformToFirstInstance = bApplyTransformToFirstInstance;
	Parms.AppendOptions = AppendOptions;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bDeferChangeNotifications != nullptr)
		*bDeferChangeNotifications = Parms.bDeferChangeNotifications;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AppendMesh
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                AppendMesh                                                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst)
// struct FTransform                  AppendTransform                                                  (Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bDeferChangeNotifications                                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptAppendMeshOptionsAppendOptions                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshBasicEditFunctions::AppendMesh(class UDynamicMesh* TargetMesh, const struct FTransform& AppendTransform, bool* bDeferChangeNotifications, const struct FGeometryScriptAppendMeshOptions& AppendOptions, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBasicEditFunctions", "AppendMesh");

	Params::UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.AppendTransform = AppendTransform;
	Parms.AppendOptions = AppendOptions;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bDeferChangeNotifications != nullptr)
		*bDeferChangeNotifications = Parms.bDeferChangeNotifications;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AppendBuffersToMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptSimpleMeshBuffersBuffers                                                          (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptIndexList    NewTriangleIndicesList                                           (BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              MaterialID                                                       (ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bDeferChangeNotifications                                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshBasicEditFunctions::AppendBuffersToMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptSimpleMeshBuffers& Buffers, const struct FGeometryScriptIndexList& NewTriangleIndicesList, int32 MaterialID, bool* bDeferChangeNotifications, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBasicEditFunctions", "AppendBuffersToMesh");

	Params::UGeometryScriptLibrary_MeshBasicEditFunctions_AppendBuffersToMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Buffers = Buffers;
	Parms.NewTriangleIndicesList = NewTriangleIndicesList;
	Parms.MaterialID = MaterialID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bDeferChangeNotifications != nullptr)
		*bDeferChangeNotifications = Parms.bDeferChangeNotifications;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AddVerticesToMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptVectorList   NewPositionsList                                                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptIndexList    NewIndicesList                                                   (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bDeferChangeNotifications                                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshBasicEditFunctions::AddVerticesToMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptVectorList& NewPositionsList, const struct FGeometryScriptIndexList& NewIndicesList, bool* bDeferChangeNotifications)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBasicEditFunctions", "AddVerticesToMesh");

	Params::UGeometryScriptLibrary_MeshBasicEditFunctions_AddVerticesToMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.NewPositionsList = NewPositionsList;
	Parms.NewIndicesList = NewIndicesList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bDeferChangeNotifications != nullptr)
		*bDeferChangeNotifications = Parms.bDeferChangeNotifications;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AddVertexToMesh
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     NewPosition                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              NewVertexIndex                                                   (ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bDeferChangeNotifications                                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshBasicEditFunctions::AddVertexToMesh(class UDynamicMesh* TargetMesh, const struct FVector& NewPosition, int32 NewVertexIndex, bool* bDeferChangeNotifications)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBasicEditFunctions", "AddVertexToMesh");

	Params::UGeometryScriptLibrary_MeshBasicEditFunctions_AddVertexToMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.NewPosition = NewPosition;
	Parms.NewVertexIndex = NewVertexIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bDeferChangeNotifications != nullptr)
		*bDeferChangeNotifications = Parms.bDeferChangeNotifications;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AddTriangleToMesh
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FIntVector                  NewTriangle                                                      (Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              NewTriangleIndex                                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              NewTriangleGroupID                                               (Edit, ConstParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bDeferChangeNotifications                                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshBasicEditFunctions::AddTriangleToMesh(class UDynamicMesh* TargetMesh, const struct FIntVector& NewTriangle, int32 NewTriangleIndex, int32 NewTriangleGroupID, bool* bDeferChangeNotifications, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBasicEditFunctions", "AddTriangleToMesh");

	Params::UGeometryScriptLibrary_MeshBasicEditFunctions_AddTriangleToMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.NewTriangle = NewTriangle;
	Parms.NewTriangleIndex = NewTriangleIndex;
	Parms.NewTriangleGroupID = NewTriangleGroupID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bDeferChangeNotifications != nullptr)
		*bDeferChangeNotifications = Parms.bDeferChangeNotifications;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AddTrianglesToMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptTriangleList NewTrianglesList                                                 (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptIndexList    NewIndicesList                                                   (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              NewTriangleGroupID                                               (Edit, ConstParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bDeferChangeNotifications                                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshBasicEditFunctions::AddTrianglesToMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptTriangleList& NewTrianglesList, const struct FGeometryScriptIndexList& NewIndicesList, int32 NewTriangleGroupID, bool* bDeferChangeNotifications, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBasicEditFunctions", "AddTrianglesToMesh");

	Params::UGeometryScriptLibrary_MeshBasicEditFunctions_AddTrianglesToMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.NewTrianglesList = NewTrianglesList;
	Parms.NewIndicesList = NewIndicesList;
	Parms.NewTriangleGroupID = NewTriangleGroupID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bDeferChangeNotifications != nullptr)
		*bDeferChangeNotifications = Parms.bDeferChangeNotifications;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

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
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              VertexID                                                         (EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
// TArray<struct FGeometryScriptBoneWeight>BoneWeights                                                      (BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// bool                               bIsValidVertexID                                                 (Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptBoneWeightProfileProfile                                                          (Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshBoneWeightFunctions::SetVertexBoneWeights(class UDynamicMesh* TargetMesh, bool* bIsValidVertexID, const struct FGeometryScriptBoneWeightProfile& Profile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBoneWeightFunctions", "SetVertexBoneWeights");

	Params::UGeometryScriptLibrary_MeshBoneWeightFunctions_SetVertexBoneWeights_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Profile = Profile;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsValidVertexID != nullptr)
		*bIsValidVertexID = Parms.bIsValidVertexID;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.SetAllVertexBoneWeights
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FGeometryScriptBoneWeight>BoneWeights                                                      (BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// struct FGeometryScriptBoneWeightProfileProfile                                                          (Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshBoneWeightFunctions::SetAllVertexBoneWeights(class UDynamicMesh* TargetMesh, const struct FGeometryScriptBoneWeightProfile& Profile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBoneWeightFunctions", "SetAllVertexBoneWeights");

	Params::UGeometryScriptLibrary_MeshBoneWeightFunctions_SetAllVertexBoneWeights_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Profile = Profile;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.MeshHasBoneWeights
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bHasBoneWeights                                                  (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptBoneWeightProfileProfile                                                          (Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshBoneWeightFunctions::MeshHasBoneWeights(class UDynamicMesh* TargetMesh, bool bHasBoneWeights, const struct FGeometryScriptBoneWeightProfile& Profile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBoneWeightFunctions", "MeshHasBoneWeights");

	Params::UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshHasBoneWeights_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.bHasBoneWeights = bHasBoneWeights;
	Parms.Profile = Profile;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.MeshCreateBoneWeights
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bProfileExisted                                                  (BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bReplaceExistingProfile                                          (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptBoneWeightProfileProfile                                                          (Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshBoneWeightFunctions::MeshCreateBoneWeights(class UDynamicMesh* TargetMesh, bool* bProfileExisted, bool bReplaceExistingProfile, const struct FGeometryScriptBoneWeightProfile& Profile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBoneWeightFunctions", "MeshCreateBoneWeights");

	Params::UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshCreateBoneWeights_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.bReplaceExistingProfile = bReplaceExistingProfile;
	Parms.Profile = Profile;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bProfileExisted != nullptr)
		*bProfileExisted = Parms.bProfileExisted;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.GetVertexBoneWeights
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              VertexID                                                         (EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
// TArray<struct FGeometryScriptBoneWeight>BoneWeights                                                      (BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// bool                               bHasValidBoneWeights                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptBoneWeightProfileProfile                                                          (Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshBoneWeightFunctions::GetVertexBoneWeights(class UDynamicMesh* TargetMesh, bool bHasValidBoneWeights, const struct FGeometryScriptBoneWeightProfile& Profile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBoneWeightFunctions", "GetVertexBoneWeights");

	Params::UGeometryScriptLibrary_MeshBoneWeightFunctions_GetVertexBoneWeights_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.bHasValidBoneWeights = bHasValidBoneWeights;
	Parms.Profile = Profile;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.GetMaxBoneWeightIndex
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bHasBoneWeights                                                  (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              MaxBoneIndex                                                     (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptBoneWeightProfileProfile                                                          (Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshBoneWeightFunctions::GetMaxBoneWeightIndex(class UDynamicMesh* TargetMesh, bool bHasBoneWeights, int32 MaxBoneIndex, const struct FGeometryScriptBoneWeightProfile& Profile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBoneWeightFunctions", "GetMaxBoneWeightIndex");

	Params::UGeometryScriptLibrary_MeshBoneWeightFunctions_GetMaxBoneWeightIndex_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.bHasBoneWeights = bHasBoneWeights;
	Parms.MaxBoneIndex = MaxBoneIndex;
	Parms.Profile = Profile;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.GetLargestVertexBoneWeight
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              VertexID                                                         (EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
// struct FGeometryScriptBoneWeight   BoneWeight                                                       (Edit, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bHasValidBoneWeights                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptBoneWeightProfileProfile                                                          (Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshBoneWeightFunctions::GetLargestVertexBoneWeight(class UDynamicMesh* TargetMesh, const struct FGeometryScriptBoneWeight& BoneWeight, bool bHasValidBoneWeights, const struct FGeometryScriptBoneWeightProfile& Profile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBoneWeightFunctions", "GetLargestVertexBoneWeight");

	Params::UGeometryScriptLibrary_MeshBoneWeightFunctions_GetLargestVertexBoneWeight_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.BoneWeight = BoneWeight;
	Parms.bHasValidBoneWeights = bHasValidBoneWeights;
	Parms.Profile = Profile;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.ComputeSmoothBoneWeights
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class USkeleton*                   Skeleton                                                         (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig)
// struct FGeometryScriptSmoothBoneWeightsOptionsOptions                                                          (ConstParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FGeometryScriptBoneWeightProfileProfile                                                          (Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshBoneWeightFunctions::ComputeSmoothBoneWeights(class UDynamicMesh* TargetMesh, const struct FGeometryScriptBoneWeightProfile& Profile, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBoneWeightFunctions", "ComputeSmoothBoneWeights");

	Params::UGeometryScriptLibrary_MeshBoneWeightFunctions_ComputeSmoothBoneWeights_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Profile = Profile;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

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
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelfUnionOptionsOptions                                                          (ConstParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshBooleanFunctions::ApplyMeshSelfUnion(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBooleanFunctions", "ApplyMeshSelfUnion");

	Params::UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshSelfUnion_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBooleanFunctions.ApplyMeshPlaneSlice
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  CutFrame                                                         (ConstParm, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshPlaneSliceOptionsOptions                                                          (ConstParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshBooleanFunctions::ApplyMeshPlaneSlice(class UDynamicMesh* TargetMesh, struct FTransform* CutFrame, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBooleanFunctions", "ApplyMeshPlaneSlice");

	Params::UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshPlaneSlice_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (CutFrame != nullptr)
		*CutFrame = std::move(Parms.CutFrame);

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBooleanFunctions.ApplyMeshPlaneCut
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  CutFrame                                                         (ConstParm, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshPlaneCutOptionsOptions                                                          (ConstParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshBooleanFunctions::ApplyMeshPlaneCut(class UDynamicMesh* TargetMesh, struct FTransform* CutFrame, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBooleanFunctions", "ApplyMeshPlaneCut");

	Params::UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshPlaneCut_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (CutFrame != nullptr)
		*CutFrame = std::move(Parms.CutFrame);

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBooleanFunctions.ApplyMeshMirror
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  MirrorFrame                                                      (Edit, ConstParm, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshMirrorOptionsOptions                                                          (ConstParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshBooleanFunctions::ApplyMeshMirror(class UDynamicMesh* TargetMesh, struct FTransform* MirrorFrame, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBooleanFunctions", "ApplyMeshMirror");

	Params::UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshMirror_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MirrorFrame != nullptr)
		*MirrorFrame = std::move(Parms.MirrorFrame);

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBooleanFunctions.ApplyMeshBoolean
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  TargetTransform                                                  (ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ToolMesh                                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  ToolTransform                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EGeometryScriptBooleanOperationOperation                                                        (Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FGeometryScriptMeshBooleanOptionsOptions                                                          (ConstParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshBooleanFunctions::ApplyMeshBoolean(class UDynamicMesh* TargetMesh, class UDynamicMesh** ToolMesh, struct FTransform* ToolTransform, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBooleanFunctions", "ApplyMeshBoolean");

	Params::UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshBoolean_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ToolMesh != nullptr)
		*ToolMesh = Parms.ToolMesh;

	if (ToolTransform != nullptr)
		*ToolTransform = std::move(Parms.ToolTransform);

	if (Debug != nullptr)
		*Debug = Parms.Debug;

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
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                OtherMesh                                                        (EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeasureMeshDistanceOptionsOptions                                                          (ConstParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             MaxDistance                                                      (BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
// double                             MinDistance                                                      (Edit, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             AverageDistance                                                  (ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             RootMeanSqrDeviation                                             (Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshComparisonFunctions::MeasureDistancesBetweenMeshes(class UDynamicMesh* TargetMesh, class UDynamicMesh** OtherMesh, double* MinDistance, double* AverageDistance, double* RootMeanSqrDeviation, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshComparisonFunctions", "MeasureDistancesBetweenMeshes");

	Params::UGeometryScriptLibrary_MeshComparisonFunctions_MeasureDistancesBetweenMeshes_Params Parms{};

	Parms.TargetMesh = TargetMesh;

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

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshComparisonFunctions.IsSameMeshAs
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                OtherMesh                                                        (EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptIsSameMeshOptionsOptions                                                          (ConstParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               bIsSameMesh                                                      (ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshComparisonFunctions::IsSameMeshAs(class UDynamicMesh* TargetMesh, class UDynamicMesh** OtherMesh, bool* bIsSameMesh, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshComparisonFunctions", "IsSameMeshAs");

	Params::UGeometryScriptLibrary_MeshComparisonFunctions_IsSameMeshAs_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OtherMesh != nullptr)
		*OtherMesh = Parms.OtherMesh;

	if (bIsSameMesh != nullptr)
		*bIsSameMesh = Parms.bIsSameMesh;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshComparisonFunctions.IsIntersectingMesh
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  TargetTransform                                                  (ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                OtherMesh                                                        (EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  OtherTransform                                                   (ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bIsIntersecting                                                  (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshComparisonFunctions::IsIntersectingMesh(class UDynamicMesh* TargetMesh, class UDynamicMesh** OtherMesh, struct FTransform* OtherTransform, bool* bIsIntersecting, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshComparisonFunctions", "IsIntersectingMesh");

	Params::UGeometryScriptLibrary_MeshComparisonFunctions_IsIntersectingMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;

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

	if (Debug != nullptr)
		*Debug = Parms.Debug;

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
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptGroupLayer   GroupLayer                                                       (BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<class UDynamicMesh*>        ComponentMeshes                                                  (ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<int32>                      ComponentPolygroups                                              (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMeshPool*            MeshPool                                                         (Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshDecompositionFunctions::SplitMeshByPolygroups(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, TArray<class UDynamicMesh*>* ComponentMeshes, TArray<int32>* ComponentPolygroups, class UDynamicMeshPool** MeshPool, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshDecompositionFunctions", "SplitMeshByPolygroups");

	Params::UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByPolygroups_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.GroupLayer = GroupLayer;

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

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions.SplitMeshByMaterialIDs
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<class UDynamicMesh*>        ComponentMeshes                                                  (ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<int32>                      ComponentMaterialIDs                                             (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMeshPool*            MeshPool                                                         (Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshDecompositionFunctions::SplitMeshByMaterialIDs(class UDynamicMesh* TargetMesh, TArray<class UDynamicMesh*>* ComponentMeshes, TArray<int32>* ComponentMaterialIDs, class UDynamicMeshPool** MeshPool, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshDecompositionFunctions", "SplitMeshByMaterialIDs");

	Params::UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByMaterialIDs_Params Parms{};

	Parms.TargetMesh = TargetMesh;

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

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions.SplitMeshByComponents
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<class UDynamicMesh*>        ComponentMeshes                                                  (ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMeshPool*            MeshPool                                                         (Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshDecompositionFunctions::SplitMeshByComponents(class UDynamicMesh* TargetMesh, TArray<class UDynamicMesh*>* ComponentMeshes, class UDynamicMeshPool** MeshPool, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshDecompositionFunctions", "SplitMeshByComponents");

	Params::UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByComponents_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ComponentMeshes != nullptr)
		*ComponentMeshes = std::move(Parms.ComponentMeshes);

	if (MeshPool != nullptr)
		*MeshPool = Parms.MeshPool;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions.GetSubMeshFromMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                StoreToSubmesh                                                   (ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptIndexList    TriangleList                                                     (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                StoreToSubmeshOut                                                (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshDecompositionFunctions::GetSubMeshFromMesh(class UDynamicMesh* TargetMesh, class UDynamicMesh** StoreToSubmesh, const struct FGeometryScriptIndexList& TriangleList, class UDynamicMesh** StoreToSubmeshOut, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshDecompositionFunctions", "GetSubMeshFromMesh");

	Params::UGeometryScriptLibrary_MeshDecompositionFunctions_GetSubMeshFromMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.TriangleList = TriangleList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (StoreToSubmesh != nullptr)
		*StoreToSubmesh = Parms.StoreToSubmesh;

	if (StoreToSubmeshOut != nullptr)
		*StoreToSubmeshOut = Parms.StoreToSubmeshOut;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions.CopyMeshToMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                CopyFromMesh                                                     (ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                CopyToMesh                                                       (ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                CopyToMeshOut                                                    (ConstParm, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshDecompositionFunctions::CopyMeshToMesh(class UDynamicMesh** CopyFromMesh, class UDynamicMesh* CopyToMesh, class UDynamicMesh* CopyToMeshOut, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshDecompositionFunctions", "CopyMeshToMesh");

	Params::UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshToMesh_Params Parms{};

	Parms.CopyToMesh = CopyToMesh;
	Parms.CopyToMeshOut = CopyToMeshOut;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (CopyFromMesh != nullptr)
		*CopyFromMesh = Parms.CopyFromMesh;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions.CopyMeshSelectionToMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                StoreToSubmesh                                                   (ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (ConstParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                StoreToSubmeshOut                                                (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bAppendToExisting                                                (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bPreserveGroupIDs                                                (ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshDecompositionFunctions::CopyMeshSelectionToMesh(class UDynamicMesh* TargetMesh, class UDynamicMesh** StoreToSubmesh, const struct FGeometryScriptMeshSelection& Selection, class UDynamicMesh** StoreToSubmeshOut, bool* bAppendToExisting, bool* bPreserveGroupIDs, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshDecompositionFunctions", "CopyMeshSelectionToMesh");

	Params::UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshSelectionToMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;

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

	if (Debug != nullptr)
		*Debug = Parms.Debug;

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
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptTwistWarpOptionsOptions                                                          (ConstParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FTransform                  TwistOrientation                                                 (Edit, ExportObject, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              TwistAngle                                                       (Edit, ConstParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              TwistExtent                                                      (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshDeformFunctions::ApplyTwistWarpToMesh(class UDynamicMesh* TargetMesh, float* TwistExtent, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshDeformFunctions", "ApplyTwistWarpToMesh");

	Params::UGeometryScriptLibrary_MeshDeformFunctions_ApplyTwistWarpToMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TwistExtent != nullptr)
		*TwistExtent = Parms.TwistExtent;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyPerlinNoiseToMesh
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (ConstParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptPerlinNoiseOptionsOptions                                                          (ConstParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshDeformFunctions::ApplyPerlinNoiseToMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshDeformFunctions", "ApplyPerlinNoiseToMesh");

	Params::UGeometryScriptLibrary_MeshDeformFunctions_ApplyPerlinNoiseToMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyMathWarpToMesh
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  WarpOrientation                                                  (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EGeometryScriptMathWarpTypeWarpType                                                         (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMathWarpOptionsOptions                                                          (ConstParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshDeformFunctions::ApplyMathWarpToMesh(class UDynamicMesh* TargetMesh, struct FTransform* WarpOrientation, enum class EGeometryScriptMathWarpType* WarpType, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshDeformFunctions", "ApplyMathWarpToMesh");

	Params::UGeometryScriptLibrary_MeshDeformFunctions_ApplyMathWarpToMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WarpOrientation != nullptr)
		*WarpOrientation = std::move(Parms.WarpOrientation);

	if (WarpType != nullptr)
		*WarpType = Parms.WarpType;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyIterativeSmoothingToMesh
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (ConstParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptIterativeMeshSmoothingOptionsOptions                                                          (ConstParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshDeformFunctions::ApplyIterativeSmoothingToMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshDeformFunctions", "ApplyIterativeSmoothingToMesh");

	Params::UGeometryScriptLibrary_MeshDeformFunctions_ApplyIterativeSmoothingToMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyFlareWarpToMesh
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptFlareWarpOptionsOptions                                                          (ConstParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FTransform                  FlareOrientation                                                 (Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              FlarePercentX                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              FlarePercentY                                                    (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              FlareExtent                                                      (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshDeformFunctions::ApplyFlareWarpToMesh(class UDynamicMesh* TargetMesh, struct FTransform* FlareOrientation, float* FlarePercentX, float* FlarePercentY, float* FlareExtent, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshDeformFunctions", "ApplyFlareWarpToMesh");

	Params::UGeometryScriptLibrary_MeshDeformFunctions_ApplyFlareWarpToMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;

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

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyDisplaceFromTextureMap
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UTexture2D*                  Texture                                                          (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst)
// struct FGeometryScriptMeshSelectionSelection                                                        (ConstParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptDisplaceFromTextureOptionsOptions                                                          (ConstParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int32                              UVLayer                                                          (BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshDeformFunctions::ApplyDisplaceFromTextureMap(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, int32 UVLayer, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshDeformFunctions", "ApplyDisplaceFromTextureMap");

	Params::UGeometryScriptLibrary_MeshDeformFunctions_ApplyDisplaceFromTextureMap_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;
	Parms.UVLayer = UVLayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyDisplaceFromPerVertexVectors
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (ConstParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptVectorList   VectorList                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              Magnitude                                                        (ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshDeformFunctions::ApplyDisplaceFromPerVertexVectors(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FGeometryScriptVectorList& VectorList, float Magnitude, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshDeformFunctions", "ApplyDisplaceFromPerVertexVectors");

	Params::UGeometryScriptLibrary_MeshDeformFunctions_ApplyDisplaceFromPerVertexVectors_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;
	Parms.VectorList = VectorList;
	Parms.Magnitude = Magnitude;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyBendWarpToMesh
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptBendWarpOptionsOptions                                                          (ConstParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FTransform                  BendOrientation                                                  (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              BendAngle                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              BendExtent                                                       (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshDeformFunctions::ApplyBendWarpToMesh(class UDynamicMesh* TargetMesh, struct FTransform* BendOrientation, float* BendAngle, float* BendExtent, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshDeformFunctions", "ApplyBendWarpToMesh");

	Params::UGeometryScriptLibrary_MeshDeformFunctions_ApplyBendWarpToMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;

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

	if (Debug != nullptr)
		*Debug = Parms.Debug;

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
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              TriangleID                                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
// int32                              MaterialID                                                       (ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bIsValidTriangle                                                 (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bDeferChangeNotifications                                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshMaterialFunctions::SetTriangleMaterialID(class UDynamicMesh* TargetMesh, int32 MaterialID, bool* bIsValidTriangle, bool* bDeferChangeNotifications)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshMaterialFunctions", "SetTriangleMaterialID");

	Params::UGeometryScriptLibrary_MeshMaterialFunctions_SetTriangleMaterialID_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.MaterialID = MaterialID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsValidTriangle != nullptr)
		*bIsValidTriangle = Parms.bIsValidTriangle;

	if (bDeferChangeNotifications != nullptr)
		*bDeferChangeNotifications = Parms.bDeferChangeNotifications;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.SetPolygroupMaterialID
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptGroupLayer   GroupLayer                                                       (BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              PolygroupID                                                      (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              MaterialID                                                       (ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bIsValidPolygroupID                                              (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bDeferChangeNotifications                                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshMaterialFunctions::SetPolygroupMaterialID(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, int32 MaterialID, bool* bDeferChangeNotifications, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshMaterialFunctions", "SetPolygroupMaterialID");

	Params::UGeometryScriptLibrary_MeshMaterialFunctions_SetPolygroupMaterialID_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.GroupLayer = GroupLayer;
	Parms.MaterialID = MaterialID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bDeferChangeNotifications != nullptr)
		*bDeferChangeNotifications = Parms.bDeferChangeNotifications;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.SetMaterialIDOnTriangles
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptIndexList    TriangleIDList                                                   (Edit, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              MaterialID                                                       (ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bDeferChangeNotifications                                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshMaterialFunctions::SetMaterialIDOnTriangles(class UDynamicMesh* TargetMesh, int32 MaterialID, bool* bDeferChangeNotifications, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshMaterialFunctions", "SetMaterialIDOnTriangles");

	Params::UGeometryScriptLibrary_MeshMaterialFunctions_SetMaterialIDOnTriangles_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.MaterialID = MaterialID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bDeferChangeNotifications != nullptr)
		*bDeferChangeNotifications = Parms.bDeferChangeNotifications;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.SetMaterialIDForMeshSelection
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (ConstParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              MaterialID                                                       (ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bDeferChangeNotifications                                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshMaterialFunctions::SetMaterialIDForMeshSelection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, int32 MaterialID, bool* bDeferChangeNotifications, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshMaterialFunctions", "SetMaterialIDForMeshSelection");

	Params::UGeometryScriptLibrary_MeshMaterialFunctions_SetMaterialIDForMeshSelection_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;
	Parms.MaterialID = MaterialID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bDeferChangeNotifications != nullptr)
		*bDeferChangeNotifications = Parms.bDeferChangeNotifications;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.SetAllTriangleMaterialIDs
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptIndexList    TriangleMaterialIDList                                           (BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bDeferChangeNotifications                                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshMaterialFunctions::SetAllTriangleMaterialIDs(class UDynamicMesh* TargetMesh, bool* bDeferChangeNotifications, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshMaterialFunctions", "SetAllTriangleMaterialIDs");

	Params::UGeometryScriptLibrary_MeshMaterialFunctions_SetAllTriangleMaterialIDs_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bDeferChangeNotifications != nullptr)
		*bDeferChangeNotifications = Parms.bDeferChangeNotifications;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.RemapMaterialIDs
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              FromMaterialID                                                   (ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ToMaterialID                                                     (Edit, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshMaterialFunctions::RemapMaterialIDs(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshMaterialFunctions", "RemapMaterialIDs");

	Params::UGeometryScriptLibrary_MeshMaterialFunctions_RemapMaterialIDs_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.GetTrianglesByMaterialID
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              MaterialID                                                       (ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptIndexList    TriangleIDList                                                   (Edit, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshMaterialFunctions::GetTrianglesByMaterialID(class UDynamicMesh* TargetMesh, int32 MaterialID, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshMaterialFunctions", "GetTrianglesByMaterialID");

	Params::UGeometryScriptLibrary_MeshMaterialFunctions_GetTrianglesByMaterialID_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.MaterialID = MaterialID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.GetTriangleMaterialID
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              TriangleID                                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
// bool                               bIsValidTriangle                                                 (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UGeometryScriptLibrary_MeshMaterialFunctions::GetTriangleMaterialID(class UDynamicMesh* TargetMesh, bool* bIsValidTriangle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshMaterialFunctions", "GetTriangleMaterialID");

	Params::UGeometryScriptLibrary_MeshMaterialFunctions_GetTriangleMaterialID_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsValidTriangle != nullptr)
		*bIsValidTriangle = Parms.bIsValidTriangle;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.GetMaxMaterialID
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bHasMaterialIDs                                                  (ExportObject, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UGeometryScriptLibrary_MeshMaterialFunctions::GetMaxMaterialID(class UDynamicMesh* TargetMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshMaterialFunctions", "GetMaxMaterialID");

	Params::UGeometryScriptLibrary_MeshMaterialFunctions_GetMaxMaterialID_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.GetMaterialIDsOfTriangles
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptIndexList    TriangleIDList                                                   (Edit, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptIndexList    MaterialIDList                                                   (Edit, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshMaterialFunctions::GetMaterialIDsOfTriangles(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshMaterialFunctions", "GetMaterialIDsOfTriangles");

	Params::UGeometryScriptLibrary_MeshMaterialFunctions_GetMaterialIDsOfTriangles_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.GetAllTriangleMaterialIDs
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptIndexList    MaterialIDList                                                   (Edit, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bHasMaterialIDs                                                  (ExportObject, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshMaterialFunctions::GetAllTriangleMaterialIDs(class UDynamicMesh* TargetMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshMaterialFunctions", "GetAllTriangleMaterialIDs");

	Params::UGeometryScriptLibrary_MeshMaterialFunctions_GetAllTriangleMaterialIDs_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.EnableMaterialIDs
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshMaterialFunctions::EnableMaterialIDs(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshMaterialFunctions", "EnableMaterialIDs");

	Params::UGeometryScriptLibrary_MeshMaterialFunctions_EnableMaterialIDs_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.DeleteTrianglesByMaterialID
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              MaterialID                                                       (ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              NumDeleted                                                       (Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bDeferChangeNotifications                                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshMaterialFunctions::DeleteTrianglesByMaterialID(class UDynamicMesh* TargetMesh, int32 MaterialID, int32 NumDeleted, bool* bDeferChangeNotifications, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshMaterialFunctions", "DeleteTrianglesByMaterialID");

	Params::UGeometryScriptLibrary_MeshMaterialFunctions_DeleteTrianglesByMaterialID_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.MaterialID = MaterialID;
	Parms.NumDeleted = NumDeleted;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bDeferChangeNotifications != nullptr)
		*bDeferChangeNotifications = Parms.bDeferChangeNotifications;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.CompactMaterialIDs
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<class UMaterialInterface*>  SourceMaterialList                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<class UMaterialInterface*>  CompactedMaterialList                                            (ConstParm, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshMaterialFunctions::CompactMaterialIDs(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshMaterialFunctions", "CompactMaterialIDs");

	Params::UGeometryScriptLibrary_MeshMaterialFunctions_CompactMaterialIDs_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.ClearMaterialIDs
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ClearValue                                                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshMaterialFunctions::ClearMaterialIDs(class UDynamicMesh* TargetMesh, int32* ClearValue, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshMaterialFunctions", "ClearMaterialIDs");

	Params::UGeometryScriptLibrary_MeshMaterialFunctions_ClearMaterialIDs_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ClearValue != nullptr)
		*ClearValue = Parms.ClearValue;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

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
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshOffsetOptionsOptions                                                          (ConstParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshShell(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshModelingFunctions", "ApplyMeshShell");

	Params::UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshShell_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshPolygroupBevel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshBevelOptionsOptions                                                          (ConstParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshPolygroupBevel(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshModelingFunctions", "ApplyMeshPolygroupBevel");

	Params::UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshPolygroupBevel_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshOffsetFaces
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshOffsetFacesOptionsOptions                                                          (ConstParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (ConstParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshOffsetFaces(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshModelingFunctions", "ApplyMeshOffsetFaces");

	Params::UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshOffsetFaces_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshOffset
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshOffsetOptionsOptions                                                          (ConstParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshOffset(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshModelingFunctions", "ApplyMeshOffset");

	Params::UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshOffset_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshLinearExtrudeFaces
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshLinearExtrudeOptionsOptions                                                          (ConstParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (ConstParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshLinearExtrudeFaces(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshModelingFunctions", "ApplyMeshLinearExtrudeFaces");

	Params::UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshLinearExtrudeFaces_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshInsetOutsetFaces
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshInsetOutsetFacesOptionsOptions                                                          (ConstParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (ConstParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshInsetOutsetFaces(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshModelingFunctions", "ApplyMeshInsetOutsetFaces");

	Params::UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshInsetOutsetFaces_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshExtrude_Compatibility_5p0
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshExtrudeOptionsOptions                                                          (ConstParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshExtrude_Compatibility_5p0(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshModelingFunctions", "ApplyMeshExtrude_Compatibility_5p0");

	Params::UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshExtrude_Compatibility_5p0_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshDuplicateFaces
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (ConstParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionNewTriangles                                                     (Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshEditPolygroupOptionsGroupOptions                                                     (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshDuplicateFaces(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FGeometryScriptMeshEditPolygroupOptions& GroupOptions, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshModelingFunctions", "ApplyMeshDuplicateFaces");

	Params::UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshDuplicateFaces_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;
	Parms.GroupOptions = GroupOptions;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshDisconnectFaces
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (ConstParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// bool                               bAllowBowtiesInOutput                                            (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshDisconnectFaces(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshModelingFunctions", "ApplyMeshDisconnectFaces");

	Params::UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshDisconnectFaces_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshBevelSelection
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (ConstParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// enum class EGeometryScriptMeshBevelSelectionModeBevelMode                                                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshBevelSelectionOptionsBevelOptions                                                     (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshBevelSelection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshModelingFunctions", "ApplyMeshBevelSelection");

	Params::UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshBevelSelection_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

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
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              VertexID                                                         (EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
// bool                               bUpdateNormal                                                    (BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     NewNormal                                                        (ConstParm, BlueprintVisible, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bUpdateTangents                                                  (Edit, BlueprintVisible, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     NewTangentX                                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     NewTangentY                                                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bIsValidVertex                                                   (Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bMergeSplitValues                                                (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bDeferChangeNotifications                                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshNormalsFunctions::UpdateVertexNormal(class UDynamicMesh* TargetMesh, bool bIsValidVertex, bool* bDeferChangeNotifications)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshNormalsFunctions", "UpdateVertexNormal");

	Params::UGeometryScriptLibrary_MeshNormalsFunctions_UpdateVertexNormal_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.bIsValidVertex = bIsValidVertex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bDeferChangeNotifications != nullptr)
		*bDeferChangeNotifications = Parms.bDeferChangeNotifications;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.SetPerVertexNormals
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshNormalsFunctions::SetPerVertexNormals(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshNormalsFunctions", "SetPerVertexNormals");

	Params::UGeometryScriptLibrary_MeshNormalsFunctions_SetPerVertexNormals_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.SetPerFaceNormals
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshNormalsFunctions::SetPerFaceNormals(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshNormalsFunctions", "SetPerFaceNormals");

	Params::UGeometryScriptLibrary_MeshNormalsFunctions_SetPerFaceNormals_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.SetMeshTriangleNormals
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              TriangleID                                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
// struct FGeometryScriptTriangle     Normals                                                          (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               bIsValidTriangle                                                 (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bDeferChangeNotifications                                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshNormalsFunctions::SetMeshTriangleNormals(class UDynamicMesh* TargetMesh, struct FGeometryScriptTriangle* Normals, bool* bIsValidTriangle, bool* bDeferChangeNotifications)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshNormalsFunctions", "SetMeshTriangleNormals");

	Params::UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshTriangleNormals_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Normals != nullptr)
		*Normals = std::move(Parms.Normals);

	if (bIsValidTriangle != nullptr)
		*bIsValidTriangle = Parms.bIsValidTriangle;

	if (bDeferChangeNotifications != nullptr)
		*bDeferChangeNotifications = Parms.bDeferChangeNotifications;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.SetMeshPerVertexTangents
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptVectorList   TangentXList                                                     (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptVectorList   TangentYList                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshNormalsFunctions::SetMeshPerVertexTangents(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshNormalsFunctions", "SetMeshPerVertexTangents");

	Params::UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshPerVertexTangents_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.SetMeshPerVertexNormals
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptVectorList   VertexNormalList                                                 (BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshNormalsFunctions::SetMeshPerVertexNormals(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshNormalsFunctions", "SetMeshPerVertexNormals");

	Params::UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshPerVertexNormals_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.RecomputeNormals
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptCalculateNormalsOptionsCalculateOptions                                                 (ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshNormalsFunctions::RecomputeNormals(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshNormalsFunctions", "RecomputeNormals");

	Params::UGeometryScriptLibrary_MeshNormalsFunctions_RecomputeNormals_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.GetMeshPerVertexTangents
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptVectorList   TangentXList                                                     (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptVectorList   TangentYList                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bIsValidTangentSet                                               (BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bHasVertexIDGaps                                                 (Edit, ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bAverageSplitVertexValues                                        (Edit, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshNormalsFunctions::GetMeshPerVertexTangents(class UDynamicMesh* TargetMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshNormalsFunctions", "GetMeshPerVertexTangents");

	Params::UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexTangents_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.GetMeshPerVertexNormals
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptVectorList   NormalList                                                       (ConstParm, BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bIsValidNormalSet                                                (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bHasVertexIDGaps                                                 (Edit, ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bAverageSplitVertexValues                                        (Edit, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshNormalsFunctions::GetMeshPerVertexNormals(class UDynamicMesh* TargetMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshNormalsFunctions", "GetMeshPerVertexNormals");

	Params::UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexNormals_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.GetMeshHasTangents
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bHasTangents                                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshNormalsFunctions::GetMeshHasTangents(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshNormalsFunctions", "GetMeshHasTangents");

	Params::UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshHasTangents_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.FlipNormals
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshNormalsFunctions::FlipNormals(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshNormalsFunctions", "FlipNormals");

	Params::UGeometryScriptLibrary_MeshNormalsFunctions_FlipNormals_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.DiscardTangents
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshNormalsFunctions::DiscardTangents(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshNormalsFunctions", "DiscardTangents");

	Params::UGeometryScriptLibrary_MeshNormalsFunctions_DiscardTangents_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.ComputeTangents
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptTangentsOptionsOptions                                                          (ConstParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshNormalsFunctions::ComputeTangents(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshNormalsFunctions", "ComputeTangents");

	Params::UGeometryScriptLibrary_MeshNormalsFunctions_ComputeTangents_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.ComputeSplitNormals
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptSplitNormalsOptionsSplitOptions                                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptCalculateNormalsOptionsCalculateOptions                                                 (ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshNormalsFunctions::ComputeSplitNormals(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshNormalsFunctions", "ComputeSplitNormals");

	Params::UGeometryScriptLibrary_MeshNormalsFunctions_ComputeSplitNormals_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.AutoRepairNormals
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshNormalsFunctions::AutoRepairNormals(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshNormalsFunctions", "AutoRepairNormals");

	Params::UGeometryScriptLibrary_MeshNormalsFunctions_AutoRepairNormals_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

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
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptGroupLayer   GroupLayer                                                       (BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (ConstParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              SetPolygroupIDOut                                                (Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              SetPolygroupID                                                   (Edit, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bGenerateNewPolygroup                                            (Edit, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bDeferChangeNotifications                                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshPolygroupFunctions::SetPolygroupForMeshSelection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, const struct FGeometryScriptMeshSelection& Selection, bool* bDeferChangeNotifications)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPolygroupFunctions", "SetPolygroupForMeshSelection");

	Params::UGeometryScriptLibrary_MeshPolygroupFunctions_SetPolygroupForMeshSelection_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.GroupLayer = GroupLayer;
	Parms.Selection = Selection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bDeferChangeNotifications != nullptr)
		*bDeferChangeNotifications = Parms.bDeferChangeNotifications;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.SetNumExtendedPolygroupLayers
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              NumLayers                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshPolygroupFunctions::SetNumExtendedPolygroupLayers(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPolygroupFunctions", "SetNumExtendedPolygroupLayers");

	Params::UGeometryScriptLibrary_MeshPolygroupFunctions_SetNumExtendedPolygroupLayers_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.GetTrianglesInPolygroup
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptGroupLayer   GroupLayer                                                       (BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              PolygroupID                                                      (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptIndexList    TriangleIDsOut                                                   (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshPolygroupFunctions::GetTrianglesInPolygroup(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPolygroupFunctions", "GetTrianglesInPolygroup");

	Params::UGeometryScriptLibrary_MeshPolygroupFunctions_GetTrianglesInPolygroup_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.GroupLayer = GroupLayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.GetTrianglePolygroupID
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptGroupLayer   GroupLayer                                                       (BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              TriangleID                                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
// bool                               bIsValidTriangle                                                 (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UGeometryScriptLibrary_MeshPolygroupFunctions::GetTrianglePolygroupID(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, bool* bIsValidTriangle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPolygroupFunctions", "GetTrianglePolygroupID");

	Params::UGeometryScriptLibrary_MeshPolygroupFunctions_GetTrianglePolygroupID_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.GroupLayer = GroupLayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsValidTriangle != nullptr)
		*bIsValidTriangle = Parms.bIsValidTriangle;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.GetPolygroupIDsInMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptGroupLayer   GroupLayer                                                       (BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FGeometryScriptIndexList    PolygroupIDsOut                                                  (ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshPolygroupFunctions::GetPolygroupIDsInMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPolygroupFunctions", "GetPolygroupIDsInMesh");

	Params::UGeometryScriptLibrary_MeshPolygroupFunctions_GetPolygroupIDsInMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.GroupLayer = GroupLayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.GetAllTrianglePolygroupIDs
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptGroupLayer   GroupLayer                                                       (BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FGeometryScriptIndexList    PolygroupIDsOut                                                  (ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshPolygroupFunctions::GetAllTrianglePolygroupIDs(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPolygroupFunctions", "GetAllTrianglePolygroupIDs");

	Params::UGeometryScriptLibrary_MeshPolygroupFunctions_GetAllTrianglePolygroupIDs_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.GroupLayer = GroupLayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.EnablePolygroups
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshPolygroupFunctions::EnablePolygroups(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPolygroupFunctions", "EnablePolygroups");

	Params::UGeometryScriptLibrary_MeshPolygroupFunctions_EnablePolygroups_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.DeleteTrianglesInPolygroup
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptGroupLayer   GroupLayer                                                       (BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              PolygroupID                                                      (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              NumDeleted                                                       (Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bDeferChangeNotifications                                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshPolygroupFunctions::DeleteTrianglesInPolygroup(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, int32 NumDeleted, bool* bDeferChangeNotifications, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPolygroupFunctions", "DeleteTrianglesInPolygroup");

	Params::UGeometryScriptLibrary_MeshPolygroupFunctions_DeleteTrianglesInPolygroup_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.GroupLayer = GroupLayer;
	Parms.NumDeleted = NumDeleted;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bDeferChangeNotifications != nullptr)
		*bDeferChangeNotifications = Parms.bDeferChangeNotifications;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.CopyPolygroupsLayer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptGroupLayer   FromGroupLayer                                                   (ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptGroupLayer   ToGroupLayer                                                     (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshPolygroupFunctions::CopyPolygroupsLayer(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPolygroupFunctions", "CopyPolygroupsLayer");

	Params::UGeometryScriptLibrary_MeshPolygroupFunctions_CopyPolygroupsLayer_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.ConvertUVIslandsToPolygroups
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptGroupLayer   GroupLayer                                                       (BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              UVLayer                                                          (BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshPolygroupFunctions::ConvertUVIslandsToPolygroups(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, int32 UVLayer, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPolygroupFunctions", "ConvertUVIslandsToPolygroups");

	Params::UGeometryScriptLibrary_MeshPolygroupFunctions_ConvertUVIslandsToPolygroups_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.GroupLayer = GroupLayer;
	Parms.UVLayer = UVLayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.ConvertComponentsToPolygroups
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptGroupLayer   GroupLayer                                                       (BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshPolygroupFunctions::ConvertComponentsToPolygroups(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPolygroupFunctions", "ConvertComponentsToPolygroups");

	Params::UGeometryScriptLibrary_MeshPolygroupFunctions_ConvertComponentsToPolygroups_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.GroupLayer = GroupLayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.ComputePolygroupsFromPolygonDetection
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptGroupLayer   GroupLayer                                                       (BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               bRespectUVSeams                                                  (ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bRespectHardNormals                                              (Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             QuadAdjacencyWeight                                              (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             QuadMetricClamp                                                  (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              MaxSearchRounds                                                  (ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshPolygroupFunctions::ComputePolygroupsFromPolygonDetection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPolygroupFunctions", "ComputePolygroupsFromPolygonDetection");

	Params::UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromPolygonDetection_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.GroupLayer = GroupLayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.ComputePolygroupsFromAngleThreshold
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptGroupLayer   GroupLayer                                                       (BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// float                              CreaseAngle                                                      (Edit, ConstParm, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              MinGroupSize                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshPolygroupFunctions::ComputePolygroupsFromAngleThreshold(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPolygroupFunctions", "ComputePolygroupsFromAngleThreshold");

	Params::UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromAngleThreshold_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.GroupLayer = GroupLayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.ClearPolygroups
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptGroupLayer   GroupLayer                                                       (BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              ClearValue                                                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshPolygroupFunctions::ClearPolygroups(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, int32* ClearValue, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPolygroupFunctions", "ClearPolygroups");

	Params::UGeometryScriptLibrary_MeshPolygroupFunctions_ClearPolygroups_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.GroupLayer = GroupLayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ClearValue != nullptr)
		*ClearValue = Parms.ClearValue;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

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
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// TArray<struct FVector2D>           VoronoiSites                                                     (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptVoronoiOptionsVoronoiOptions                                                   (Edit, ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendVoronoiDiagram2D(class UDynamicMesh* TargetMesh, struct FTransform* Transform, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendVoronoiDiagram2D");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendVoronoiDiagram2D_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendTriangulatedPolygon
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// TArray<struct FVector2D>           PolygonVertices                                                  (BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bAllowSelfIntersections                                          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendTriangulatedPolygon(class UDynamicMesh* TargetMesh, struct FTransform* Transform, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendTriangulatedPolygon");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTriangulatedPolygon_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendTorus
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// struct FGeometryScriptRevolveOptionsRevolveOptions                                                   (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              MajorRadius                                                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              MinorRadius                                                      (BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              MajorSteps                                                       (ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              MinorSteps                                                       (BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EGeometryScriptPrimitiveOriginModeOrigin                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendTorus(class UDynamicMesh* TargetMesh, struct FTransform* Transform, enum class EGeometryScriptPrimitiveOriginMode* Origin, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendTorus");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTorus_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	if (Origin != nullptr)
		*Origin = Parms.Origin;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendSweepPolyline
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// TArray<struct FVector2D>           PolylineVertices                                                 (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FTransform>          SweepPath                                                        (Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<float>                      PolylineTexParamU                                                (Edit, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<float>                      SweepPathTexParamV                                               (Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bLoop                                                            (BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// float                              StartScale                                                       (ConstParm, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              EndScale                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              RotationAngleDeg                                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendSweepPolyline(class UDynamicMesh* TargetMesh, struct FTransform* Transform, bool bLoop, float StartScale, float EndScale, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendSweepPolyline");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolyline_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.bLoop = bLoop;
	Parms.StartScale = StartScale;
	Parms.EndScale = EndScale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendSweepPolygon
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// TArray<struct FVector2D>           PolygonVertices                                                  (BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FTransform>          SweepPath                                                        (Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bLoop                                                            (BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               bCapped                                                          (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              StartScale                                                       (ConstParm, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              EndScale                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              RotationAngleDeg                                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendSweepPolygon(class UDynamicMesh* TargetMesh, struct FTransform* Transform, bool bLoop, float StartScale, float EndScale, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendSweepPolygon");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolygon_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.bLoop = bLoop;
	Parms.StartScale = StartScale;
	Parms.EndScale = EndScale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendSpiralRevolvePolygon
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// TArray<struct FVector2D>           PolygonVertices                                                  (BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptRevolveOptionsRevolveOptions                                                   (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              Radius                                                           (ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// int32                              Steps                                                            (Edit, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              RisePerRevolution                                                (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendSpiralRevolvePolygon(class UDynamicMesh* TargetMesh, struct FTransform* Transform, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendSpiralRevolvePolygon");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSpiralRevolvePolygon_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendSphereLatLong
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// float                              Radius                                                           (ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// int32                              StepsPhi                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              StepsTheta                                                       (Edit, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EGeometryScriptPrimitiveOriginModeOrigin                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendSphereLatLong(class UDynamicMesh* TargetMesh, struct FTransform* Transform, enum class EGeometryScriptPrimitiveOriginMode* Origin, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendSphereLatLong");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereLatLong_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	if (Origin != nullptr)
		*Origin = Parms.Origin;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendSphereBox
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// float                              Radius                                                           (ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// int32                              StepsX                                                           (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              StepsY                                                           (Edit, ConstParm, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              StepsZ                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EGeometryScriptPrimitiveOriginModeOrigin                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendSphereBox(class UDynamicMesh* TargetMesh, struct FTransform* Transform, enum class EGeometryScriptPrimitiveOriginMode* Origin, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendSphereBox");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereBox_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	if (Origin != nullptr)
		*Origin = Parms.Origin;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendSimpleSweptPolygon
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// TArray<struct FVector2D>           PolygonVertices                                                  (BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FVector>             SweepPath                                                        (Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bLoop                                                            (BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               bCapped                                                          (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              StartScale                                                       (ConstParm, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              EndScale                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendSimpleSweptPolygon(class UDynamicMesh* TargetMesh, struct FTransform* Transform, bool bLoop, float StartScale, float EndScale, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendSimpleSweptPolygon");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleSweptPolygon_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.bLoop = bLoop;
	Parms.StartScale = StartScale;
	Parms.EndScale = EndScale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendSimpleExtrudePolygon
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// TArray<struct FVector2D>           PolygonVertices                                                  (BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              Height                                                           (BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Config, EditConst)
// int32                              HeightSteps                                                      (Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bCapped                                                          (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EGeometryScriptPrimitiveOriginModeOrigin                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendSimpleExtrudePolygon(class UDynamicMesh* TargetMesh, struct FTransform* Transform, float Height, enum class EGeometryScriptPrimitiveOriginMode* Origin, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendSimpleExtrudePolygon");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleExtrudePolygon_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Height = Height;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	if (Origin != nullptr)
		*Origin = Parms.Origin;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendRoundRectangleXY
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// float                              DimensionX                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              DimensionY                                                       (Edit, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              CornerRadius                                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
// int32                              StepsWidth                                                       (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              StepsHeight                                                      (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              StepsRound                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendRoundRectangleXY(class UDynamicMesh* TargetMesh, struct FTransform* Transform, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendRoundRectangleXY");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangleXY_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendRoundRectangle_Compatibility_5_0
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// float                              DimensionX                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              DimensionY                                                       (Edit, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              CornerRadius                                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
// int32                              StepsWidth                                                       (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              StepsHeight                                                      (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              StepsRound                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendRoundRectangle_Compatibility_5_0(class UDynamicMesh* TargetMesh, struct FTransform* Transform, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendRoundRectangle_Compatibility_5_0");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangle_Compatibility_5_0_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendRevolvePolygon
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// TArray<struct FVector2D>           PolygonVertices                                                  (BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptRevolveOptionsRevolveOptions                                                   (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              Radius                                                           (ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// int32                              Steps                                                            (Edit, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendRevolvePolygon(class UDynamicMesh* TargetMesh, struct FTransform* Transform, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendRevolvePolygon");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePolygon_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendRevolvePath
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// TArray<struct FVector2D>           PathVertices                                                     (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptRevolveOptionsRevolveOptions                                                   (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              Steps                                                            (Edit, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bCapped                                                          (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendRevolvePath(class UDynamicMesh* TargetMesh, struct FTransform* Transform, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendRevolvePath");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePath_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendRectangleXY
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// float                              DimensionX                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              DimensionY                                                       (Edit, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              StepsWidth                                                       (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              StepsHeight                                                      (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendRectangleXY(class UDynamicMesh* TargetMesh, struct FTransform* Transform, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendRectangleXY");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangleXY_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendRectangle_Compatibility_5_0
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// float                              DimensionX                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              DimensionY                                                       (Edit, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              StepsWidth                                                       (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              StepsHeight                                                      (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendRectangle_Compatibility_5_0(class UDynamicMesh* TargetMesh, struct FTransform* Transform, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendRectangle_Compatibility_5_0");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangle_Compatibility_5_0_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendLinearStairs
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// float                              StepWidth                                                        (Edit, ConstParm, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              StepHeight                                                       (Edit, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              StepDepth                                                        (ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              NumSteps                                                         (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bFloating                                                        (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendLinearStairs(class UDynamicMesh* TargetMesh, struct FTransform* Transform, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendLinearStairs");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendLinearStairs_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendDisc
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// float                              Radius                                                           (ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// int32                              AngleSteps                                                       (ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              SpokeSteps                                                       (ConstParm, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              StartAngle                                                       (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              EndAngle                                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              HoleRadius                                                       (Edit, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendDisc(class UDynamicMesh* TargetMesh, struct FTransform* Transform, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendDisc");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendDisc_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendCylinder
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// float                              Radius                                                           (ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// float                              Height                                                           (BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Config, EditConst)
// int32                              RadialSteps                                                      (ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// int32                              HeightSteps                                                      (Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bCapped                                                          (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EGeometryScriptPrimitiveOriginModeOrigin                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendCylinder(class UDynamicMesh* TargetMesh, struct FTransform* Transform, float Height, enum class EGeometryScriptPrimitiveOriginMode* Origin, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendCylinder");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCylinder_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Height = Height;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	if (Origin != nullptr)
		*Origin = Parms.Origin;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendCurvedStairs
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// float                              StepWidth                                                        (Edit, ConstParm, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              StepHeight                                                       (Edit, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              InnerRadius                                                      (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              CurveAngle                                                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              NumSteps                                                         (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bFloating                                                        (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendCurvedStairs(class UDynamicMesh* TargetMesh, struct FTransform* Transform, float InnerRadius, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendCurvedStairs");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCurvedStairs_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.InnerRadius = InnerRadius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendCone
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// float                              BaseRadius                                                       (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              TopRadius                                                        (ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              Height                                                           (BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Config, EditConst)
// int32                              RadialSteps                                                      (ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// int32                              HeightSteps                                                      (Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bCapped                                                          (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EGeometryScriptPrimitiveOriginModeOrigin                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendCone(class UDynamicMesh* TargetMesh, struct FTransform* Transform, float Height, enum class EGeometryScriptPrimitiveOriginMode* Origin, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendCone");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCone_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Height = Height;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	if (Origin != nullptr)
		*Origin = Parms.Origin;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendCapsule
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// float                              Radius                                                           (ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// float                              LineLength                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              HemisphereSteps                                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              CircleSteps                                                      (ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EGeometryScriptPrimitiveOriginModeOrigin                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendCapsule(class UDynamicMesh* TargetMesh, struct FTransform* Transform, enum class EGeometryScriptPrimitiveOriginMode* Origin, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendCapsule");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCapsule_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	if (Origin != nullptr)
		*Origin = Parms.Origin;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendBox
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// float                              DimensionX                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              DimensionY                                                       (Edit, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              DimensionZ                                                       (Edit, ConstParm, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              StepsX                                                           (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              StepsY                                                           (Edit, ConstParm, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              StepsZ                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EGeometryScriptPrimitiveOriginModeOrigin                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendBox(class UDynamicMesh* TargetMesh, struct FTransform* Transform, enum class EGeometryScriptPrimitiveOriginMode* Origin, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendBox");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendBox_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	if (Origin != nullptr)
		*Origin = Parms.Origin;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

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
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              VertexID                                                         (EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UGeometryScriptLibrary_MeshQueryFunctions::IsValidVertexID(class UDynamicMesh* TargetMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "IsValidVertexID");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_IsValidVertexID_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.IsValidTriangleID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              TriangleID                                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UGeometryScriptLibrary_MeshQueryFunctions::IsValidTriangleID(class UDynamicMesh* TargetMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "IsValidTriangleID");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_IsValidTriangleID_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetVertexPosition
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              VertexID                                                         (EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
// bool                               bIsValidVertex                                                   (Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector UGeometryScriptLibrary_MeshQueryFunctions::GetVertexPosition(class UDynamicMesh* TargetMesh, bool bIsValidVertex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetVertexPosition");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetVertexPosition_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.bIsValidVertex = bIsValidVertex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetVertexCount
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UGeometryScriptLibrary_MeshQueryFunctions::GetVertexCount(class UDynamicMesh* TargetMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetVertexCount");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetVertexCount_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetUVSetBoundingBox
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              UvSetIndex                                                       (Edit, ConstParm, ExportObject, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bIsValidUVSet                                                    (ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bUVSetIsEmpty                                                    (ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FBox2D                      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FBox2D UGeometryScriptLibrary_MeshQueryFunctions::GetUVSetBoundingBox(class UDynamicMesh* TargetMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetUVSetBoundingBox");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetUVSetBoundingBox_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTriangleVertexColors
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              TriangleID                                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
// struct FLinearColor                Color1                                                           (Edit, ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance)
// struct FLinearColor                Color2                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance)
// struct FLinearColor                Color3                                                           (Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance)
// bool                               bTriHasValidVertexColors                                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::GetTriangleVertexColors(class UDynamicMesh* TargetMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetTriangleVertexColors");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleVertexColors_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTriangleUVs
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              UvSetIndex                                                       (Edit, ConstParm, ExportObject, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              TriangleID                                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
// struct FVector2D                   UV1                                                              (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FVector2D                   UV2                                                              (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FVector2D                   UV3                                                              (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               bHaveValidUVs                                                    (ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

bool UGeometryScriptLibrary_MeshQueryFunctions::GetTriangleUVs(class UDynamicMesh* TargetMesh, const struct FVector2D& UV3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetTriangleUVs");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleUVs_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.UV3 = UV3;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTrianglePositions
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              TriangleID                                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
// bool                               bIsValidTriangle                                                 (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     Vertex1                                                          (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FVector                     Vertex2                                                          (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FVector                     Vertex3                                                          (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

struct FVector UGeometryScriptLibrary_MeshQueryFunctions::GetTrianglePositions(class UDynamicMesh* TargetMesh, bool* bIsValidTriangle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetTrianglePositions");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetTrianglePositions_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsValidTriangle != nullptr)
		*bIsValidTriangle = Parms.bIsValidTriangle;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTriangleNormalTangents
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              TriangleID                                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
// bool                               bTriHasValidElements                                             (BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptTriangle     Normals                                                          (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// struct FGeometryScriptTriangle     Tangents                                                         (Edit, BlueprintVisible, ExportObject, Net, InstancedReference, SubobjectReference)
// struct FGeometryScriptTriangle     BiTangents                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::GetTriangleNormalTangents(class UDynamicMesh* TargetMesh, struct FGeometryScriptTriangle* Normals, const struct FGeometryScriptTriangle& Tangents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetTriangleNormalTangents");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormalTangents_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Tangents = Tangents;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Normals != nullptr)
		*Normals = std::move(Parms.Normals);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTriangleNormals
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              TriangleID                                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
// struct FVector                     Normal1                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     Normal2                                                          (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     Normal3                                                          (Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bTriHasValidNormals                                              (ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::GetTriangleNormals(class UDynamicMesh* TargetMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetTriangleNormals");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormals_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTriangleIndices
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              TriangleID                                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
// bool                               bIsValidTriangle                                                 (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FIntVector                  ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FIntVector UGeometryScriptLibrary_MeshQueryFunctions::GetTriangleIndices(class UDynamicMesh* TargetMesh, bool* bIsValidTriangle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetTriangleIndices");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleIndices_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsValidTriangle != nullptr)
		*bIsValidTriangle = Parms.bIsValidTriangle;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTriangleFaceNormal
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              TriangleID                                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
// bool                               bIsValidTriangle                                                 (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector UGeometryScriptLibrary_MeshQueryFunctions::GetTriangleFaceNormal(class UDynamicMesh* TargetMesh, bool* bIsValidTriangle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetTriangleFaceNormal");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleFaceNormal_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsValidTriangle != nullptr)
		*bIsValidTriangle = Parms.bIsValidTriangle;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetNumVertexIDs
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UGeometryScriptLibrary_MeshQueryFunctions::GetNumVertexIDs(class UDynamicMesh* TargetMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetNumVertexIDs");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetNumVertexIDs_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetNumUVSets
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UGeometryScriptLibrary_MeshQueryFunctions::GetNumUVSets(class UDynamicMesh* TargetMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetNumUVSets");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetNumUVSets_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetNumTriangleIDs
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UGeometryScriptLibrary_MeshQueryFunctions::GetNumTriangleIDs(class UDynamicMesh* TargetMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetNumTriangleIDs");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetNumTriangleIDs_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetNumOpenBorderLoops
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bAmbiguousTopologyFound                                          (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UGeometryScriptLibrary_MeshQueryFunctions::GetNumOpenBorderLoops(class UDynamicMesh* TargetMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetNumOpenBorderLoops");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetNumOpenBorderLoops_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetNumOpenBorderEdges
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UGeometryScriptLibrary_MeshQueryFunctions::GetNumOpenBorderEdges(class UDynamicMesh* TargetMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetNumOpenBorderEdges");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetNumOpenBorderEdges_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetNumExtendedPolygroupLayers
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UGeometryScriptLibrary_MeshQueryFunctions::GetNumExtendedPolygroupLayers(class UDynamicMesh* TargetMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetNumExtendedPolygroupLayers");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetNumExtendedPolygroupLayers_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetNumConnectedComponents
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UGeometryScriptLibrary_MeshQueryFunctions::GetNumConnectedComponents(class UDynamicMesh* TargetMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetNumConnectedComponents");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetNumConnectedComponents_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetMeshVolumeArea
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              SurfaceArea                                                      (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              Volume                                                           (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config)

float UGeometryScriptLibrary_MeshQueryFunctions::GetMeshVolumeArea(class UDynamicMesh* TargetMesh, float* Volume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetMeshVolumeArea");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetMeshVolumeArea_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Volume != nullptr)
		*Volume = Parms.Volume;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetMeshInfoString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FString                      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FString UGeometryScriptLibrary_MeshQueryFunctions::GetMeshInfoString(class UDynamicMesh* TargetMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetMeshInfoString");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetMeshInfoString_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetMeshHasAttributeSet
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UGeometryScriptLibrary_MeshQueryFunctions::GetMeshHasAttributeSet(class UDynamicMesh* TargetMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetMeshHasAttributeSet");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetMeshHasAttributeSet_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetMeshBoundingBox
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FBox                        ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FBox UGeometryScriptLibrary_MeshQueryFunctions::GetMeshBoundingBox(class UDynamicMesh* TargetMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetMeshBoundingBox");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetMeshBoundingBox_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetIsDenseMesh
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UGeometryScriptLibrary_MeshQueryFunctions::GetIsDenseMesh(class UDynamicMesh* TargetMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetIsDenseMesh");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetIsDenseMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetIsClosedMesh
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UGeometryScriptLibrary_MeshQueryFunctions::GetIsClosedMesh(class UDynamicMesh* TargetMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetIsClosedMesh");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetIsClosedMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetInterpolatedTriangleVertexColor
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              TriangleID                                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
// struct FVector                     BarycentricCoords                                                (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FLinearColor                DefaultColor                                                     (ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bTriHasValidVertexColors                                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FLinearColor                InterpolatedColor                                                (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::GetInterpolatedTriangleVertexColor(class UDynamicMesh* TargetMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetInterpolatedTriangleVertexColor");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleVertexColor_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetInterpolatedTriangleUV
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              UvSetIndex                                                       (Edit, ConstParm, ExportObject, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              TriangleID                                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
// struct FVector                     BarycentricCoords                                                (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bTriHasValidUVs                                                  (ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector2D                   InterpolatedUV                                                   (ConstParm, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::GetInterpolatedTriangleUV(class UDynamicMesh* TargetMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetInterpolatedTriangleUV");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleUV_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetInterpolatedTrianglePosition
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              TriangleID                                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
// struct FVector                     BarycentricCoords                                                (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bIsValidTriangle                                                 (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     InterpolatedPosition                                             (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::GetInterpolatedTrianglePosition(class UDynamicMesh* TargetMesh, bool* bIsValidTriangle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetInterpolatedTrianglePosition");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTrianglePosition_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsValidTriangle != nullptr)
		*bIsValidTriangle = Parms.bIsValidTriangle;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetInterpolatedTriangleNormalTangents
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              TriangleID                                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
// struct FVector                     BarycentricCoords                                                (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bTriHasValidElements                                             (BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     InterpolatedNormal                                               (OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     InterpolatedTangent                                              (Edit, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     InterpolatedBiTangent                                            (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::GetInterpolatedTriangleNormalTangents(class UDynamicMesh* TargetMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetInterpolatedTriangleNormalTangents");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormalTangents_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetInterpolatedTriangleNormal
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              TriangleID                                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
// struct FVector                     BarycentricCoords                                                (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bTriHasValidNormals                                              (ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     InterpolatedNormal                                               (OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::GetInterpolatedTriangleNormal(class UDynamicMesh* TargetMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetInterpolatedTriangleNormal");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormal_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetHasVertexIDGaps
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UGeometryScriptLibrary_MeshQueryFunctions::GetHasVertexIDGaps(class UDynamicMesh* TargetMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetHasVertexIDGaps");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetHasVertexIDGaps_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetHasVertexColors
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UGeometryScriptLibrary_MeshQueryFunctions::GetHasVertexColors(class UDynamicMesh* TargetMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetHasVertexColors");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetHasVertexColors_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetHasTriangleNormals
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UGeometryScriptLibrary_MeshQueryFunctions::GetHasTriangleNormals(class UDynamicMesh* TargetMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetHasTriangleNormals");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetHasTriangleNormals_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetHasTriangleIDGaps
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UGeometryScriptLibrary_MeshQueryFunctions::GetHasTriangleIDGaps(class UDynamicMesh* TargetMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetHasTriangleIDGaps");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetHasTriangleIDGaps_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetHasPolygroups
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UGeometryScriptLibrary_MeshQueryFunctions::GetHasPolygroups(class UDynamicMesh* TargetMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetHasPolygroups");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetHasPolygroups_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetHasMaterialIDs
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UGeometryScriptLibrary_MeshQueryFunctions::GetHasMaterialIDs(class UDynamicMesh* TargetMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetHasMaterialIDs");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetHasMaterialIDs_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetAllVertexPositions
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptVectorList   PositionList                                                     (ConstParm, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bSkipGaps                                                        (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bHasVertexIDGaps                                                 (Edit, ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::GetAllVertexPositions(class UDynamicMesh* TargetMesh, const struct FGeometryScriptVectorList& PositionList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetAllVertexPositions");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexPositions_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.PositionList = PositionList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetAllVertexIDs
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptIndexList    VertexIDList                                                     (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bHasVertexIDGaps                                                 (Edit, ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::GetAllVertexIDs(class UDynamicMesh* TargetMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetAllVertexIDs");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexIDs_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetAllTriangleIndices
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptTriangleList TriangleList                                                     (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bSkipGaps                                                        (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bHasTriangleIDGaps                                               (Edit, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::GetAllTriangleIndices(class UDynamicMesh* TargetMesh, const struct FGeometryScriptTriangleList& TriangleList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetAllTriangleIndices");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetAllTriangleIndices_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.TriangleList = TriangleList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetAllTriangleIDs
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptIndexList    TriangleIDList                                                   (Edit, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bHasTriangleIDGaps                                               (Edit, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::GetAllTriangleIDs(class UDynamicMesh* TargetMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetAllTriangleIDs");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetAllTriangleIDs_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.ComputeTriangleBarycentricCoords
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              TriangleID                                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
// bool                               bIsValidTriangle                                                 (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     Point                                                            (ConstParm, Parm, ReturnParm)
// struct FVector                     Vertex1                                                          (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FVector                     Vertex2                                                          (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FVector                     Vertex3                                                          (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     BarycentricCoords                                                (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::ComputeTriangleBarycentricCoords(class UDynamicMesh* TargetMesh, bool* bIsValidTriangle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "ComputeTriangleBarycentricCoords");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_ComputeTriangleBarycentricCoords_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsValidTriangle != nullptr)
		*bIsValidTriangle = Parms.bIsValidTriangle;

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
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptRemeshOptionsRemeshOptions                                                    (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptUniformRemeshOptionsUniformOptions                                                   (ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_RemeshingFunctions::ApplyUniformRemesh(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_RemeshingFunctions", "ApplyUniformRemesh");

	Params::UGeometryScriptLibrary_RemeshingFunctions_ApplyUniformRemesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

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
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptWeldEdgesOptionsWeldOptions                                                      (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshRepairFunctions::WeldMeshEdges(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshRepairFunctions", "WeldMeshEdges");

	Params::UGeometryScriptLibrary_MeshRepairFunctions_WeldMeshEdges_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.SplitMeshBowties
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bMeshBowties                                                     (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bAttributeBowties                                                (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshRepairFunctions::SplitMeshBowties(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshRepairFunctions", "SplitMeshBowties");

	Params::UGeometryScriptLibrary_MeshRepairFunctions_SplitMeshBowties_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.ResolveMeshTJunctions
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptResolveTJunctionOptionsResolveOptions                                                   (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshRepairFunctions::ResolveMeshTJunctions(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshRepairFunctions", "ResolveMeshTJunctions");

	Params::UGeometryScriptLibrary_MeshRepairFunctions_ResolveMeshTJunctions_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.RepairMeshDegenerateGeometry
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptDegenerateTriangleOptionsOptions                                                          (ConstParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshRepairFunctions::RepairMeshDegenerateGeometry(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshRepairFunctions", "RepairMeshDegenerateGeometry");

	Params::UGeometryScriptLibrary_MeshRepairFunctions_RepairMeshDegenerateGeometry_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.RemoveSmallComponents
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptRemoveSmallComponentOptionsOptions                                                          (ConstParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshRepairFunctions::RemoveSmallComponents(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshRepairFunctions", "RemoveSmallComponents");

	Params::UGeometryScriptLibrary_MeshRepairFunctions_RemoveSmallComponents_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.RemoveHiddenTriangles
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptRemoveHiddenTrianglesOptionsOptions                                                          (ConstParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshRepairFunctions::RemoveHiddenTriangles(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshRepairFunctions", "RemoveHiddenTriangles");

	Params::UGeometryScriptLibrary_MeshRepairFunctions_RemoveHiddenTriangles_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.FillAllMeshHoles
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptFillHolesOptionsFillOptions                                                      (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              NumFilledHoles                                                   (BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              NumFailedHoleFills                                               (ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshRepairFunctions::FillAllMeshHoles(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshRepairFunctions", "FillAllMeshHoles");

	Params::UGeometryScriptLibrary_MeshRepairFunctions_FillAllMeshHoles_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.CompactMesh
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshRepairFunctions::CompactMesh(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshRepairFunctions", "CompactMesh");

	Params::UGeometryScriptLibrary_MeshRepairFunctions_CompactMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

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
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshPointSamplingOptionsOptions                                                          (ConstParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FGeometryScriptNonUniformPointSamplingOptionsNonUniformOptions                                                (Edit, ExportObject, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptScalarList   VertexWeights                                                    (Edit, ConstParm, BlueprintReadOnly, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FTransform>          Samples                                                          (BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// TArray<double>                     SampleRadii                                                      (ConstParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptIndexList    TriangleIDs                                                      (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshSamplingFunctions::ComputeVertexWeightedPointSampling(class UDynamicMesh* TargetMesh, const struct FGeometryScriptNonUniformPointSamplingOptions& NonUniformOptions, const struct FGeometryScriptScalarList& VertexWeights, const TArray<double>& SampleRadii, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSamplingFunctions", "ComputeVertexWeightedPointSampling");

	Params::UGeometryScriptLibrary_MeshSamplingFunctions_ComputeVertexWeightedPointSampling_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.NonUniformOptions = NonUniformOptions;
	Parms.VertexWeights = VertexWeights;
	Parms.SampleRadii = SampleRadii;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSamplingFunctions.ComputePointSampling
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshPointSamplingOptionsOptions                                                          (ConstParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// TArray<struct FTransform>          Samples                                                          (BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FGeometryScriptIndexList    TriangleIDs                                                      (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshSamplingFunctions::ComputePointSampling(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSamplingFunctions", "ComputePointSampling");

	Params::UGeometryScriptLibrary_MeshSamplingFunctions_ComputePointSampling_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSamplingFunctions.ComputeNonUniformPointSampling
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshPointSamplingOptionsOptions                                                          (ConstParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FGeometryScriptNonUniformPointSamplingOptionsNonUniformOptions                                                (Edit, ExportObject, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FTransform>          Samples                                                          (BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// TArray<double>                     SampleRadii                                                      (ConstParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptIndexList    TriangleIDs                                                      (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshSamplingFunctions::ComputeNonUniformPointSampling(class UDynamicMesh* TargetMesh, const struct FGeometryScriptNonUniformPointSamplingOptions& NonUniformOptions, const TArray<double>& SampleRadii, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSamplingFunctions", "ComputeNonUniformPointSampling");

	Params::UGeometryScriptLibrary_MeshSamplingFunctions_ComputeNonUniformPointSampling_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.NonUniformOptions = NonUniformOptions;
	Parms.SampleRadii = SampleRadii;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

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
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (ConstParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FVector                     PlaneOrigin                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     PlaneNormal                                                      (ExportObject, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class EGeometryScriptMeshSelectionTypeSelectionType                                                    (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               bInvert                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              MinNumTrianglePoints                                             (Edit, BlueprintReadOnly, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshElementsWithPlane(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FVector& PlaneOrigin, const struct FVector& PlaneNormal, int32 MinNumTrianglePoints)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionFunctions", "SelectMeshElementsWithPlane");

	Params::UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsWithPlane_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;
	Parms.PlaneOrigin = PlaneOrigin;
	Parms.PlaneNormal = PlaneNormal;
	Parms.MinNumTrianglePoints = MinNumTrianglePoints;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.SelectMeshElementsInSphere
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (ConstParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FVector                     SphereOrigin                                                     (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             SphereRadius                                                     (ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class EGeometryScriptMeshSelectionTypeSelectionType                                                    (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               bInvert                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              MinNumTrianglePoints                                             (Edit, BlueprintReadOnly, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshElementsInSphere(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FVector& SphereOrigin, int32 MinNumTrianglePoints)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionFunctions", "SelectMeshElementsInSphere");

	Params::UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInSphere_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;
	Parms.SphereOrigin = SphereOrigin;
	Parms.MinNumTrianglePoints = MinNumTrianglePoints;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.SelectMeshElementsInsideMesh
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                SelectionMesh                                                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (ConstParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FTransform                  SelectionMeshTransform                                           (Edit, ConstParm, ExportObject, Net, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EGeometryScriptMeshSelectionTypeSelectionType                                                    (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               bInvert                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             ShellDistance                                                    (Edit, ConstParm, Net, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             WindingThreshold                                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              MinNumTrianglePoints                                             (Edit, BlueprintReadOnly, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshElementsInsideMesh(class UDynamicMesh* TargetMesh, class UDynamicMesh* SelectionMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FTransform& SelectionMeshTransform, double ShellDistance, double* WindingThreshold, int32 MinNumTrianglePoints)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionFunctions", "SelectMeshElementsInsideMesh");

	Params::UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInsideMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.SelectionMesh = SelectionMesh;
	Parms.Selection = Selection;
	Parms.SelectionMeshTransform = SelectionMeshTransform;
	Parms.ShellDistance = ShellDistance;
	Parms.MinNumTrianglePoints = MinNumTrianglePoints;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WindingThreshold != nullptr)
		*WindingThreshold = Parms.WindingThreshold;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.SelectMeshElementsInBox
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (ConstParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FBox                        Box                                                              (Edit, ConstParm, ExportObject, OutParm)
// enum class EGeometryScriptMeshSelectionTypeSelectionType                                                    (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               bInvert                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              MinNumTrianglePoints                                             (Edit, BlueprintReadOnly, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshElementsInBox(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, struct FBox* Box, int32 MinNumTrianglePoints)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionFunctions", "SelectMeshElementsInBox");

	Params::UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInBox_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;
	Parms.MinNumTrianglePoints = MinNumTrianglePoints;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Box != nullptr)
		*Box = std::move(Parms.Box);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.SelectMeshElementsByNormalAngle
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (ConstParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FVector                     Normal                                                           (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst)
// double                             MaxAngleDeg                                                      (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EGeometryScriptMeshSelectionTypeSelectionType                                                    (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               bInvert                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              MinNumTrianglePoints                                             (Edit, BlueprintReadOnly, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshElementsByNormalAngle(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, double MaxAngleDeg, int32 MinNumTrianglePoints)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionFunctions", "SelectMeshElementsByNormalAngle");

	Params::UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsByNormalAngle_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;
	Parms.MaxAngleDeg = MaxAngleDeg;
	Parms.MinNumTrianglePoints = MinNumTrianglePoints;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.InvertMeshSelection
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (ConstParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionNewSelection                                                     (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bOnlyToConnected                                                 (ExportObject, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshSelectionFunctions::InvertMeshSelection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FGeometryScriptMeshSelection& NewSelection, bool bOnlyToConnected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionFunctions", "InvertMeshSelection");

	Params::UGeometryScriptLibrary_MeshSelectionFunctions_InvertMeshSelection_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;
	Parms.NewSelection = NewSelection;
	Parms.bOnlyToConnected = bOnlyToConnected;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.GetMeshSelectionInfo
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptMeshSelectionSelection                                                        (ConstParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// enum class EGeometryScriptMeshSelectionTypeSelectionType                                                    (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int32                              NumSelected                                                      (Edit, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

enum class EGeometryScriptMeshSelectionType UGeometryScriptLibrary_MeshSelectionFunctions::GetMeshSelectionInfo(const struct FGeometryScriptMeshSelection& Selection, int32 NumSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionFunctions", "GetMeshSelectionInfo");

	Params::UGeometryScriptLibrary_MeshSelectionFunctions_GetMeshSelectionInfo_Params Parms{};

	Parms.Selection = Selection;
	Parms.NumSelected = NumSelected;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ExpandMeshSelectionToConnected
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (ConstParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionNewSelection                                                     (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EGeometryScriptTopologyConnectionTypeConnectionType                                                   (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, InstancedReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshSelectionFunctions::ExpandMeshSelectionToConnected(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FGeometryScriptMeshSelection& NewSelection, enum class EGeometryScriptTopologyConnectionType* ConnectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionFunctions", "ExpandMeshSelectionToConnected");

	Params::UGeometryScriptLibrary_MeshSelectionFunctions_ExpandMeshSelectionToConnected_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;
	Parms.NewSelection = NewSelection;

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
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (ConstParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionNewSelection                                                     (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              Iterations                                                       (ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// bool                               bContract                                                        (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bOnlyExpandToFaceNeighbours                                      (Edit, BlueprintVisible, Net, EditFixedSize, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshSelectionFunctions::ExpandContractMeshSelection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FGeometryScriptMeshSelection& NewSelection, int32 Iterations, bool bContract, bool bOnlyExpandToFaceNeighbours)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionFunctions", "ExpandContractMeshSelection");

	Params::UGeometryScriptLibrary_MeshSelectionFunctions_ExpandContractMeshSelection_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;
	Parms.NewSelection = NewSelection;
	Parms.Iterations = Iterations;
	Parms.bContract = bContract;
	Parms.bOnlyExpandToFaceNeighbours = bOnlyExpandToFaceNeighbours;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.DebugPrintMeshSelection
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGeometryScriptMeshSelectionSelection                                                        (ConstParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// bool                               bDisable                                                         (Net, EditFixedSize, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UGeometryScriptLibrary_MeshSelectionFunctions::DebugPrintMeshSelection(const struct FGeometryScriptMeshSelection& Selection, bool bDisable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionFunctions", "DebugPrintMeshSelection");

	Params::UGeometryScriptLibrary_MeshSelectionFunctions_DebugPrintMeshSelection_Params Parms{};

	Parms.Selection = Selection;
	Parms.bDisable = bDisable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.CreateSelectAllMeshSelection
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (ConstParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// enum class EGeometryScriptMeshSelectionTypeSelectionType                                                    (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshSelectionFunctions::CreateSelectAllMeshSelection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionFunctions", "CreateSelectAllMeshSelection");

	Params::UGeometryScriptLibrary_MeshSelectionFunctions_CreateSelectAllMeshSelection_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ConvertMeshSelectionToIndexList
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (ConstParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptIndexList    IndexList                                                        (Edit, BlueprintVisible, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EGeometryScriptIndexTypeResultListType                                                   (ExportObject, BlueprintReadOnly, EditFixedSize, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EGeometryScriptIndexTypeConvertToType                                                    (BlueprintReadOnly, EditFixedSize, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshSelectionFunctions::ConvertMeshSelectionToIndexList(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FGeometryScriptIndexList& IndexList, enum class EGeometryScriptIndexType ResultListType, enum class EGeometryScriptIndexType ConvertToType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionFunctions", "ConvertMeshSelectionToIndexList");

	Params::UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelectionToIndexList_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;
	Parms.IndexList = IndexList;
	Parms.ResultListType = ResultListType;
	Parms.ConvertToType = ConvertToType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ConvertMeshSelectionToIndexArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (ConstParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// TArray<int32>                      IndexArray                                                       (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EGeometryScriptMeshSelectionTypeSelectionType                                                    (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshSelectionFunctions::ConvertMeshSelectionToIndexArray(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const TArray<int32>& IndexArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionFunctions", "ConvertMeshSelectionToIndexArray");

	Params::UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelectionToIndexArray_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;
	Parms.IndexArray = IndexArray;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ConvertMeshSelection
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionFromSelection                                                    (ExportObject, EditFixedSize, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionToSelection                                                      (Edit, EditFixedSize, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EGeometryScriptMeshSelectionTypeNewType                                                          (Edit, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               bAllowPartialInclusion                                           (Edit, BlueprintVisible, BlueprintReadOnly, Net, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshSelectionFunctions::ConvertMeshSelection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& FromSelection, const struct FGeometryScriptMeshSelection& ToSelection, enum class EGeometryScriptMeshSelectionType NewType, bool bAllowPartialInclusion)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionFunctions", "ConvertMeshSelection");

	Params::UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelection_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.FromSelection = FromSelection;
	Parms.ToSelection = ToSelection;
	Parms.NewType = NewType;
	Parms.bAllowPartialInclusion = bAllowPartialInclusion;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ConvertIndexSetToMeshSelection
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TSet<int32>                        IndexSet                                                         (BlueprintReadOnly, Net, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EGeometryScriptMeshSelectionTypeSelectionType                                                    (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (ConstParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshSelectionFunctions::ConvertIndexSetToMeshSelection(class UDynamicMesh* TargetMesh, TSet<int32> IndexSet, const struct FGeometryScriptMeshSelection& Selection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionFunctions", "ConvertIndexSetToMeshSelection");

	Params::UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexSetToMeshSelection_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.IndexSet = IndexSet;
	Parms.Selection = Selection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ConvertIndexListToMeshSelection
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptIndexList    IndexList                                                        (Edit, BlueprintVisible, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EGeometryScriptMeshSelectionTypeSelectionType                                                    (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (ConstParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshSelectionFunctions::ConvertIndexListToMeshSelection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptIndexList& IndexList, const struct FGeometryScriptMeshSelection& Selection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionFunctions", "ConvertIndexListToMeshSelection");

	Params::UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexListToMeshSelection_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.IndexList = IndexList;
	Parms.Selection = Selection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ConvertIndexArrayToMeshSelection
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<int32>                      IndexArray                                                       (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EGeometryScriptMeshSelectionTypeSelectionType                                                    (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (ConstParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshSelectionFunctions::ConvertIndexArrayToMeshSelection(class UDynamicMesh* TargetMesh, const TArray<int32>& IndexArray, const struct FGeometryScriptMeshSelection& Selection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionFunctions", "ConvertIndexArrayToMeshSelection");

	Params::UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexArrayToMeshSelection_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.IndexArray = IndexArray;
	Parms.Selection = Selection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.CombineMeshSelections
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptMeshSelectionSelectionA                                                       (ConstParm, ExportObject, Net, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelectionB                                                       (BlueprintVisible, Net, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionResultSelection                                                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EGeometryScriptCombineSelectionModeCombineMode                                                      (Net, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

void UGeometryScriptLibrary_MeshSelectionFunctions::CombineMeshSelections(const struct FGeometryScriptMeshSelection& SelectionA, const struct FGeometryScriptMeshSelection& SelectionB, const struct FGeometryScriptMeshSelection& ResultSelection, enum class EGeometryScriptCombineSelectionMode CombineMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionFunctions", "CombineMeshSelections");

	Params::UGeometryScriptLibrary_MeshSelectionFunctions_CombineMeshSelections_Params Parms{};

	Parms.SelectionA = SelectionA;
	Parms.SelectionB = SelectionB;
	Parms.ResultSelection = ResultSelection;
	Parms.CombineMode = CombineMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (ConstParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FBox                        SelectionBounds                                                  (Edit, ConstParm, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bIsEmpty                                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshSelectionQueryFunctions::GetMeshSelectionBoundingBox(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FBox& SelectionBounds, bool bIsEmpty, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionQueryFunctions", "GetMeshSelectionBoundingBox");

	Params::UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundingBox_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;
	Parms.SelectionBounds = SelectionBounds;
	Parms.bIsEmpty = bIsEmpty;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionQueryFunctions.GetMeshSelectionBoundaryLoops
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (ConstParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// TArray<struct FGeometryScriptIndexList>IndexLoops                                                       (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FGeometryScriptPolyPath>PathLoops                                                        (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              NumLoops                                                         (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bFoundErrors                                                     (ConstParm, BlueprintVisible, EditFixedSize, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshSelectionQueryFunctions::GetMeshSelectionBoundaryLoops(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const TArray<struct FGeometryScriptIndexList>& IndexLoops, const TArray<struct FGeometryScriptPolyPath>& PathLoops, int32 NumLoops, bool bFoundErrors, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionQueryFunctions", "GetMeshSelectionBoundaryLoops");

	Params::UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundaryLoops_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;
	Parms.IndexLoops = IndexLoops;
	Parms.PathLoops = PathLoops;
	Parms.NumLoops = NumLoops;
	Parms.bFoundErrors = bFoundErrors;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

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
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              Vertexcount                                                      (Edit, ConstParm, ExportObject, Parm, ZeroConstructor, Transient, Config)
// struct FGeometryScriptSimplifyMeshOptionsOptions                                                          (ConstParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshSimplifyFunctions::ApplySimplifyToVertexCount(class UDynamicMesh* TargetMesh, int32 Vertexcount, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSimplifyFunctions", "ApplySimplifyToVertexCount");

	Params::UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToVertexCount_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Vertexcount = Vertexcount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSimplifyFunctions.ApplySimplifyToTriangleCount
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              TriangleCount                                                    (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptSimplifyMeshOptionsOptions                                                          (ConstParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshSimplifyFunctions::ApplySimplifyToTriangleCount(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSimplifyFunctions", "ApplySimplifyToTriangleCount");

	Params::UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToTriangleCount_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSimplifyFunctions.ApplySimplifyToTolerance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              Tolerance                                                        (Edit, BlueprintReadOnly, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FGeometryScriptSimplifyMeshOptionsOptions                                                          (ConstParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshSimplifyFunctions::ApplySimplifyToTolerance(class UDynamicMesh* TargetMesh, float Tolerance, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSimplifyFunctions", "ApplySimplifyToTolerance");

	Params::UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToTolerance_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Tolerance = Tolerance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSimplifyFunctions.ApplySimplifyToPolygroupTopology
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptPolygroupSimplifyOptionsOptions                                                          (ConstParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FGeometryScriptGroupLayer   GroupLayer                                                       (BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshSimplifyFunctions::ApplySimplifyToPolygroupTopology(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSimplifyFunctions", "ApplySimplifyToPolygroupTopology");

	Params::UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToPolygroupTopology_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.GroupLayer = GroupLayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSimplifyFunctions.ApplySimplifyToPlanar
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptPlanarSimplifyOptionsOptions                                                          (ConstParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshSimplifyFunctions::ApplySimplifyToPlanar(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSimplifyFunctions", "ApplySimplifyToPlanar");

	Params::UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToPlanar_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

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
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptDynamicMeshBVHUpdateBVH                                                        (ExportObject, BlueprintReadOnly, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bOnlyIfInvalid                                                   (BlueprintReadOnly, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshSpatial::RebuildBVHForMesh(class UDynamicMesh* TargetMesh, struct FGeometryScriptDynamicMeshBVH* UpdateBVH, bool* bOnlyIfInvalid, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSpatial", "RebuildBVHForMesh");

	Params::UGeometryScriptLibrary_MeshSpatial_RebuildBVHForMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (UpdateBVH != nullptr)
		*UpdateBVH = std::move(Parms.UpdateBVH);

	if (bOnlyIfInvalid != nullptr)
		*bOnlyIfInvalid = Parms.bOnlyIfInvalid;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial.IsPointInsideMesh
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptDynamicMeshBVHQueryBVH                                                         (OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     QueryPoint                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptSpatialQueryOptionsOptions                                                          (ConstParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               bIsInside                                                        (ConstParm, ExportObject, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EGeometryScriptContainmentOutcomePinsOutcome                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshSpatial::IsPointInsideMesh(class UDynamicMesh* TargetMesh, struct FGeometryScriptDynamicMeshBVH* QueryBVH, const struct FVector& QueryPoint, bool* bIsInside, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSpatial", "IsPointInsideMesh");

	Params::UGeometryScriptLibrary_MeshSpatial_IsPointInsideMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.QueryPoint = QueryPoint;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (QueryBVH != nullptr)
		*QueryBVH = std::move(Parms.QueryBVH);

	if (bIsInside != nullptr)
		*bIsInside = Parms.bIsInside;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial.IsBVHValidForMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptDynamicMeshBVHTestBVH                                                          (Edit, BlueprintVisible, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bIsValid                                                         (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshSpatial::IsBVHValidForMesh(class UDynamicMesh* TargetMesh, struct FGeometryScriptDynamicMeshBVH* TestBVH, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSpatial", "IsBVHValidForMesh");

	Params::UGeometryScriptLibrary_MeshSpatial_IsBVHValidForMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TestBVH != nullptr)
		*TestBVH = std::move(Parms.TestBVH);

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial.FindNearestRayIntersectionWithMesh
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptDynamicMeshBVHQueryBVH                                                         (OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     RayOrigin                                                        (Edit, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FVector                     RayDirection                                                     (ConstParm, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptSpatialQueryOptionsOptions                                                          (ConstParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FGeometryScriptRayHitResult HitResult                                                        (BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Transient, EditConst)
// enum class EGeometryScriptSearchOutcomePinsOutcome                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshSpatial::FindNearestRayIntersectionWithMesh(class UDynamicMesh* TargetMesh, struct FGeometryScriptDynamicMeshBVH* QueryBVH, struct FVector* RayOrigin, struct FVector* RayDirection, const struct FGeometryScriptRayHitResult& HitResult, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSpatial", "FindNearestRayIntersectionWithMesh");

	Params::UGeometryScriptLibrary_MeshSpatial_FindNearestRayIntersectionWithMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.HitResult = HitResult;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (QueryBVH != nullptr)
		*QueryBVH = std::move(Parms.QueryBVH);

	if (RayOrigin != nullptr)
		*RayOrigin = std::move(Parms.RayOrigin);

	if (RayDirection != nullptr)
		*RayDirection = std::move(Parms.RayDirection);

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial.FindNearestPointOnMesh
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptDynamicMeshBVHQueryBVH                                                         (OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     QueryPoint                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptSpatialQueryOptionsOptions                                                          (ConstParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FGeometryScriptTrianglePointNearestResult                                                    (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EGeometryScriptSearchOutcomePinsOutcome                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshSpatial::FindNearestPointOnMesh(class UDynamicMesh* TargetMesh, struct FGeometryScriptDynamicMeshBVH* QueryBVH, const struct FVector& QueryPoint, const struct FGeometryScriptTrianglePoint& NearestResult, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSpatial", "FindNearestPointOnMesh");

	Params::UGeometryScriptLibrary_MeshSpatial_FindNearestPointOnMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.QueryPoint = QueryPoint;
	Parms.NearestResult = NearestResult;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (QueryBVH != nullptr)
		*QueryBVH = std::move(Parms.QueryBVH);

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial.BuildBVHForMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptDynamicMeshBVHOutputBVH                                                        (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshSpatial::BuildBVHForMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptDynamicMeshBVH& OutputBVH, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSpatial", "BuildBVHForMesh");

	Params::UGeometryScriptLibrary_MeshSpatial_BuildBVHForMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.OutputBVH = OutputBVH;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

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
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              TessellationLevel                                                (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshSubdivideFunctions::ApplyUniformTessellation(class UDynamicMesh* TargetMesh, int32* TessellationLevel, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSubdivideFunctions", "ApplyUniformTessellation");

	Params::UGeometryScriptLibrary_MeshSubdivideFunctions_ApplyUniformTessellation_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TessellationLevel != nullptr)
		*TessellationLevel = Parms.TessellationLevel;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSubdivideFunctions.ApplySelectiveTessellation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (ConstParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptSelectiveTessellateOptionsOptions                                                          (ConstParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int32                              TessellationLevel                                                (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class ESelectiveTessellatePatternTypePatternType                                                      (ExportObject, Net, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshSubdivideFunctions::ApplySelectiveTessellation(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, int32* TessellationLevel, enum class ESelectiveTessellatePatternType* PatternType, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSubdivideFunctions", "ApplySelectiveTessellation");

	Params::UGeometryScriptLibrary_MeshSubdivideFunctions_ApplySelectiveTessellation_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TessellationLevel != nullptr)
		*TessellationLevel = Parms.TessellationLevel;

	if (PatternType != nullptr)
		*PatternType = Parms.PatternType;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSubdivideFunctions.ApplyPNTessellation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptPNTessellateOptionsOptions                                                          (ConstParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int32                              TessellationLevel                                                (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshSubdivideFunctions::ApplyPNTessellation(class UDynamicMesh* TargetMesh, int32* TessellationLevel, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSubdivideFunctions", "ApplyPNTessellation");

	Params::UGeometryScriptLibrary_MeshSubdivideFunctions_ApplyPNTessellation_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TessellationLevel != nullptr)
		*TessellationLevel = Parms.TessellationLevel;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

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
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     PivotLocation                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshTransformFunctions::TranslatePivotToLocation(class UDynamicMesh* TargetMesh, struct FVector* PivotLocation, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshTransformFunctions", "TranslatePivotToLocation");

	Params::UGeometryScriptLibrary_MeshTransformFunctions_TranslatePivotToLocation_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PivotLocation != nullptr)
		*PivotLocation = std::move(Parms.PivotLocation);

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.TranslateMeshSelection
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (ConstParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FVector                     Translation                                                      (ConstParm, Parm, ZeroConstructor, Transient, Config)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshTransformFunctions::TranslateMeshSelection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FVector& Translation, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshTransformFunctions", "TranslateMeshSelection");

	Params::UGeometryScriptLibrary_MeshTransformFunctions_TranslateMeshSelection_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;
	Parms.Translation = Translation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.TranslateMesh
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     Translation                                                      (ConstParm, Parm, ZeroConstructor, Transient, Config)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshTransformFunctions::TranslateMesh(class UDynamicMesh* TargetMesh, const struct FVector& Translation, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshTransformFunctions", "TranslateMesh");

	Params::UGeometryScriptLibrary_MeshTransformFunctions_TranslateMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Translation = Translation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.TransformMeshSelection
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (ConstParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshTransformFunctions::TransformMeshSelection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, struct FTransform* Transform, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshTransformFunctions", "TransformMeshSelection");

	Params::UGeometryScriptLibrary_MeshTransformFunctions_TransformMeshSelection_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.TransformMesh
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// bool                               bFixOrientationForNegativeScale                                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshTransformFunctions::TransformMesh(class UDynamicMesh* TargetMesh, struct FTransform* Transform, bool* bFixOrientationForNegativeScale, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshTransformFunctions", "TransformMesh");

	Params::UGeometryScriptLibrary_MeshTransformFunctions_TransformMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	if (bFixOrientationForNegativeScale != nullptr)
		*bFixOrientationForNegativeScale = Parms.bFixOrientationForNegativeScale;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.ScaleMeshSelection
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (ConstParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FVector                     Scale                                                            (Edit, ExportObject, Parm, ZeroConstructor, Transient, Config)
// struct FVector                     ScaleOrigin                                                      (ExportObject, EditFixedSize, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshTransformFunctions::ScaleMeshSelection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FVector& Scale, struct FVector* ScaleOrigin, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshTransformFunctions", "ScaleMeshSelection");

	Params::UGeometryScriptLibrary_MeshTransformFunctions_ScaleMeshSelection_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;
	Parms.Scale = Scale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ScaleOrigin != nullptr)
		*ScaleOrigin = std::move(Parms.ScaleOrigin);

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.ScaleMesh
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     Scale                                                            (Edit, ExportObject, Parm, ZeroConstructor, Transient, Config)
// struct FVector                     ScaleOrigin                                                      (ExportObject, EditFixedSize, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bFixOrientationForNegativeScale                                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshTransformFunctions::ScaleMesh(class UDynamicMesh* TargetMesh, const struct FVector& Scale, struct FVector* ScaleOrigin, bool* bFixOrientationForNegativeScale, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshTransformFunctions", "ScaleMesh");

	Params::UGeometryScriptLibrary_MeshTransformFunctions_ScaleMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Scale = Scale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ScaleOrigin != nullptr)
		*ScaleOrigin = std::move(Parms.ScaleOrigin);

	if (bFixOrientationForNegativeScale != nullptr)
		*bFixOrientationForNegativeScale = Parms.bFixOrientationForNegativeScale;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.RotateMeshSelection
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (ConstParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FRotator                    Rotation                                                         (BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
// struct FVector                     RotationOrigin                                                   (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshTransformFunctions::RotateMeshSelection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, struct FRotator* Rotation, struct FVector* RotationOrigin, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshTransformFunctions", "RotateMeshSelection");

	Params::UGeometryScriptLibrary_MeshTransformFunctions_RotateMeshSelection_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Rotation != nullptr)
		*Rotation = std::move(Parms.Rotation);

	if (RotationOrigin != nullptr)
		*RotationOrigin = std::move(Parms.RotationOrigin);

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.RotateMesh
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FRotator                    Rotation                                                         (BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
// struct FVector                     RotationOrigin                                                   (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshTransformFunctions::RotateMesh(class UDynamicMesh* TargetMesh, struct FRotator* Rotation, struct FVector* RotationOrigin, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshTransformFunctions", "RotateMesh");

	Params::UGeometryScriptLibrary_MeshTransformFunctions_RotateMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Rotation != nullptr)
		*Rotation = std::move(Parms.Rotation);

	if (RotationOrigin != nullptr)
		*RotationOrigin = std::move(Parms.RotationOrigin);

	if (Debug != nullptr)
		*Debug = Parms.Debug;

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
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              UvSetIndex                                                       (Edit, ConstParm, ExportObject, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector2D                   Translation                                                      (ConstParm, Parm, ZeroConstructor, Transient, Config)
// struct FGeometryScriptMeshSelectionSelection                                                        (ConstParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshUVFunctions::TranslateMeshUVs(class UDynamicMesh* TargetMesh, const struct FVector2D& Translation, const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "TranslateMeshUVs");

	Params::UGeometryScriptLibrary_MeshUVFunctions_TranslateMeshUVs_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Translation = Translation;
	Parms.Selection = Selection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.SetNumUVSets
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              NumUVSets                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshUVFunctions::SetNumUVSets(class UDynamicMesh* TargetMesh, int32* NumUVSets, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "SetNumUVSets");

	Params::UGeometryScriptLibrary_MeshUVFunctions_SetNumUVSets_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NumUVSets != nullptr)
		*NumUVSets = Parms.NumUVSets;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.SetMeshUVsFromPlanarProjection
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              UvSetIndex                                                       (Edit, ConstParm, ExportObject, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  PlaneTransform                                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (ConstParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshUVFunctions::SetMeshUVsFromPlanarProjection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "SetMeshUVsFromPlanarProjection");

	Params::UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromPlanarProjection_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.SetMeshUVsFromCylinderProjection
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              UvSetIndex                                                       (Edit, ConstParm, ExportObject, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  CylinderTransform                                                (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (ConstParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// float                              SplitAngle                                                       (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshUVFunctions::SetMeshUVsFromCylinderProjection(class UDynamicMesh* TargetMesh, struct FTransform* CylinderTransform, const struct FGeometryScriptMeshSelection& Selection, float* SplitAngle, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "SetMeshUVsFromCylinderProjection");

	Params::UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromCylinderProjection_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (CylinderTransform != nullptr)
		*CylinderTransform = std::move(Parms.CylinderTransform);

	if (SplitAngle != nullptr)
		*SplitAngle = Parms.SplitAngle;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.SetMeshUVsFromBoxProjection
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              UvSetIndex                                                       (Edit, ConstParm, ExportObject, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  BoxTransform                                                     (ExportObject, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (ConstParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int32                              MinIslandTriCount                                                (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshUVFunctions::SetMeshUVsFromBoxProjection(class UDynamicMesh* TargetMesh, struct FTransform* BoxTransform, const struct FGeometryScriptMeshSelection& Selection, int32* MinIslandTriCount, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "SetMeshUVsFromBoxProjection");

	Params::UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromBoxProjection_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (BoxTransform != nullptr)
		*BoxTransform = std::move(Parms.BoxTransform);

	if (MinIslandTriCount != nullptr)
		*MinIslandTriCount = Parms.MinIslandTriCount;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.SetMeshTriangleUVs
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              UvSetIndex                                                       (Edit, ConstParm, ExportObject, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              TriangleID                                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
// struct FGeometryScriptUVTriangle   UVs                                                              (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, Config, EditConst)
// bool                               bIsValidTriangle                                                 (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bDeferChangeNotifications                                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshUVFunctions::SetMeshTriangleUVs(class UDynamicMesh* TargetMesh, bool* bIsValidTriangle, bool* bDeferChangeNotifications)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "SetMeshTriangleUVs");

	Params::UGeometryScriptLibrary_MeshUVFunctions_SetMeshTriangleUVs_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsValidTriangle != nullptr)
		*bIsValidTriangle = Parms.bIsValidTriangle;

	if (bDeferChangeNotifications != nullptr)
		*bDeferChangeNotifications = Parms.bDeferChangeNotifications;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.ScaleMeshUVs
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              UvSetIndex                                                       (Edit, ConstParm, ExportObject, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector2D                   Scale                                                            (Edit, ExportObject, Parm, ZeroConstructor, Transient, Config)
// struct FVector2D                   ScaleOrigin                                                      (ExportObject, EditFixedSize, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (ConstParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshUVFunctions::ScaleMeshUVs(class UDynamicMesh* TargetMesh, const struct FVector2D& Scale, struct FVector2D* ScaleOrigin, const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "ScaleMeshUVs");

	Params::UGeometryScriptLibrary_MeshUVFunctions_ScaleMeshUVs_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Scale = Scale;
	Parms.Selection = Selection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ScaleOrigin != nullptr)
		*ScaleOrigin = std::move(Parms.ScaleOrigin);

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.RotateMeshUVs
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              UvSetIndex                                                       (Edit, ConstParm, ExportObject, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              RotationAngle                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector2D                   RotationOrigin                                                   (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (ConstParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshUVFunctions::RotateMeshUVs(class UDynamicMesh* TargetMesh, float* RotationAngle, struct FVector2D* RotationOrigin, const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "RotateMeshUVs");

	Params::UGeometryScriptLibrary_MeshUVFunctions_RotateMeshUVs_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (RotationAngle != nullptr)
		*RotationAngle = Parms.RotationAngle;

	if (RotationOrigin != nullptr)
		*RotationOrigin = std::move(Parms.RotationOrigin);

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.RepackMeshUVs
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              UvSetIndex                                                       (Edit, ConstParm, ExportObject, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptRepackUVsOptionsRepackOptions                                                    (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshUVFunctions::RepackMeshUVs(class UDynamicMesh* TargetMesh, struct FGeometryScriptRepackUVsOptions* RepackOptions, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "RepackMeshUVs");

	Params::UGeometryScriptLibrary_MeshUVFunctions_RepackMeshUVs_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (RepackOptions != nullptr)
		*RepackOptions = std::move(Parms.RepackOptions);

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.RecomputeMeshUVs
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              UvSetIndex                                                       (Edit, ConstParm, ExportObject, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptRecomputeUVsOptionsOptions                                                          (ConstParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (ConstParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshUVFunctions::RecomputeMeshUVs(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "RecomputeMeshUVs");

	Params::UGeometryScriptLibrary_MeshUVFunctions_RecomputeMeshUVs_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.GetMeshUVSizeInfo
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              UvSetIndex                                                       (Edit, ConstParm, ExportObject, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (ConstParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// double                             MeshArea                                                         (Edit, ExportObject, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             UVArea                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FBox                        MeshBounds                                                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FBox2D                      UVBounds                                                         (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bIsValidUVSet                                                    (ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bFoundUnsetUVs                                                   (ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bOnlyIncludeValidUVTris                                          (Edit, BlueprintVisible, Net, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshUVFunctions::GetMeshUVSizeInfo(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, double* MeshArea, double* UVArea, struct FBox* MeshBounds, struct FBox2D* UVBounds, bool* bFoundUnsetUVs, bool* bOnlyIncludeValidUVTris, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "GetMeshUVSizeInfo");

	Params::UGeometryScriptLibrary_MeshUVFunctions_GetMeshUVSizeInfo_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MeshArea != nullptr)
		*MeshArea = Parms.MeshArea;

	if (UVArea != nullptr)
		*UVArea = Parms.UVArea;

	if (MeshBounds != nullptr)
		*MeshBounds = std::move(Parms.MeshBounds);

	if (UVBounds != nullptr)
		*UVBounds = std::move(Parms.UVBounds);

	if (bFoundUnsetUVs != nullptr)
		*bFoundUnsetUVs = Parms.bFoundUnsetUVs;

	if (bOnlyIncludeValidUVTris != nullptr)
		*bOnlyIncludeValidUVTris = Parms.bOnlyIncludeValidUVTris;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.GetMeshPerVertexUVs
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              UvSetIndex                                                       (Edit, ConstParm, ExportObject, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptUVList       UVList                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bIsValidUVSet                                                    (ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bHasVertexIDGaps                                                 (Edit, ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bHasSplitUVs                                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshUVFunctions::GetMeshPerVertexUVs(class UDynamicMesh* TargetMesh, const struct FGeometryScriptUVList& UVList, bool* bHasSplitUVs, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "GetMeshPerVertexUVs");

	Params::UGeometryScriptLibrary_MeshUVFunctions_GetMeshPerVertexUVs_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.UVList = UVList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bHasSplitUVs != nullptr)
		*bHasSplitUVs = Parms.bHasSplitUVs;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.CopyUVSet
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              FromUVSet                                                        (ExportObject, BlueprintReadOnly, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ToUVSet                                                          (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshUVFunctions::CopyUVSet(class UDynamicMesh* TargetMesh, int32* FromUVSet, int32* ToUVSet, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "CopyUVSet");

	Params::UGeometryScriptLibrary_MeshUVFunctions_CopyUVSet_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (FromUVSet != nullptr)
		*FromUVSet = Parms.FromUVSet;

	if (ToUVSet != nullptr)
		*ToUVSet = Parms.ToUVSet;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.CopyMeshUVLayerToMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                CopyFromMesh                                                     (ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              UvSetIndex                                                       (Edit, ConstParm, ExportObject, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                CopyToUVMesh                                                     (BlueprintVisible, ExportObject, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                CopyToUVMeshOut                                                  (Edit, ConstParm, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bInvalidTopology                                                 (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bIsValidUVSet                                                    (ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshUVFunctions::CopyMeshUVLayerToMesh(class UDynamicMesh** CopyFromMesh, class UDynamicMesh** CopyToUVMesh, class UDynamicMesh** CopyToUVMeshOut, bool* bInvalidTopology, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "CopyMeshUVLayerToMesh");

	Params::UGeometryScriptLibrary_MeshUVFunctions_CopyMeshUVLayerToMesh_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (CopyFromMesh != nullptr)
		*CopyFromMesh = Parms.CopyFromMesh;

	if (CopyToUVMesh != nullptr)
		*CopyToUVMesh = Parms.CopyToUVMesh;

	if (CopyToUVMeshOut != nullptr)
		*CopyToUVMeshOut = Parms.CopyToUVMeshOut;

	if (bInvalidTopology != nullptr)
		*bInvalidTopology = Parms.bInvalidTopology;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.CopyMeshToMeshUVLayer
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                CopyFromUVMesh                                                   (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ToUVSetIndex                                                     (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                CopyToMesh                                                       (ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                CopyToMeshOut                                                    (ConstParm, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bFoundTopologyErrors                                             (Net, EditFixedSize, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bIsValidUVSet                                                    (ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bOnlyUVPositions                                                 (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshUVFunctions::CopyMeshToMeshUVLayer(class UDynamicMesh** CopyFromUVMesh, int32* ToUVSetIndex, class UDynamicMesh* CopyToMesh, class UDynamicMesh* CopyToMeshOut, bool* bFoundTopologyErrors, bool* bOnlyUVPositions, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "CopyMeshToMeshUVLayer");

	Params::UGeometryScriptLibrary_MeshUVFunctions_CopyMeshToMeshUVLayer_Params Parms{};

	Parms.CopyToMesh = CopyToMesh;
	Parms.CopyToMeshOut = CopyToMeshOut;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (CopyFromUVMesh != nullptr)
		*CopyFromUVMesh = Parms.CopyFromUVMesh;

	if (ToUVSetIndex != nullptr)
		*ToUVSetIndex = Parms.ToUVSetIndex;

	if (bFoundTopologyErrors != nullptr)
		*bFoundTopologyErrors = Parms.bFoundTopologyErrors;

	if (bOnlyUVPositions != nullptr)
		*bOnlyUVPositions = Parms.bOnlyUVPositions;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.AutoGenerateXAtlasMeshUVs
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              UvSetIndex                                                       (Edit, ConstParm, ExportObject, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptXAtlasOptionsOptions                                                          (ConstParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshUVFunctions::AutoGenerateXAtlasMeshUVs(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "AutoGenerateXAtlasMeshUVs");

	Params::UGeometryScriptLibrary_MeshUVFunctions_AutoGenerateXAtlasMeshUVs_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.AutoGeneratePatchBuilderMeshUVs
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              UvSetIndex                                                       (Edit, ConstParm, ExportObject, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptPatchBuilderOptionsOptions                                                          (ConstParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshUVFunctions::AutoGeneratePatchBuilderMeshUVs(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "AutoGeneratePatchBuilderMeshUVs");

	Params::UGeometryScriptLibrary_MeshUVFunctions_AutoGeneratePatchBuilderMeshUVs_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

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
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMeshSelectionSelection                                                        (ConstParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FLinearColor                Color                                                            (Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
// struct FGeometryScriptColorFlags   Flags                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance)
// bool                               bCreateColorSeam                                                 (BlueprintVisible, ExportObject, Net, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshVertexColorFunctions::SetMeshSelectionVertexColor(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, struct FLinearColor* Color, bool bCreateColorSeam, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshVertexColorFunctions", "SetMeshSelectionVertexColor");

	Params::UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshSelectionVertexColor_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;
	Parms.bCreateColorSeam = bCreateColorSeam;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions.SetMeshPerVertexColors
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptColorList    VertexColorList                                                  (Edit, ConstParm, Net, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshVertexColorFunctions::SetMeshPerVertexColors(class UDynamicMesh* TargetMesh, const struct FGeometryScriptColorList& VertexColorList, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshVertexColorFunctions", "SetMeshPerVertexColors");

	Params::UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshPerVertexColors_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.VertexColorList = VertexColorList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions.SetMeshConstantVertexColor
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FLinearColor                Color                                                            (Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
// struct FGeometryScriptColorFlags   Flags                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance)
// bool                               bClearExisting                                                   (Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshVertexColorFunctions::SetMeshConstantVertexColor(class UDynamicMesh* TargetMesh, struct FLinearColor* Color, bool bClearExisting, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshVertexColorFunctions", "SetMeshConstantVertexColor");

	Params::UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshConstantVertexColor_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.bClearExisting = bClearExisting;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions.GetMeshPerVertexColors
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptColorList    ColorList                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bIsValidColorSet                                                 (ConstParm, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bHasVertexIDGaps                                                 (Edit, ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bBlendSplitVertexValues                                          (Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshVertexColorFunctions::GetMeshPerVertexColors(class UDynamicMesh* TargetMesh, const struct FGeometryScriptColorList& ColorList, bool bIsValidColorSet, bool bBlendSplitVertexValues)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshVertexColorFunctions", "GetMeshPerVertexColors");

	Params::UGeometryScriptLibrary_MeshVertexColorFunctions_GetMeshPerVertexColors_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.ColorList = ColorList;
	Parms.bIsValidColorSet = bIsValidColorSet;
	Parms.bBlendSplitVertexValues = bBlendSplitVertexValues;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions.ConvertMeshVertexColorsSRGBToLinear
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshVertexColorFunctions::ConvertMeshVertexColorsSRGBToLinear(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshVertexColorFunctions", "ConvertMeshVertexColorsSRGBToLinear");

	Params::UGeometryScriptLibrary_MeshVertexColorFunctions_ConvertMeshVertexColorsSRGBToLinear_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions.ConvertMeshVertexColorsLinearToSRGB
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshVertexColorFunctions::ConvertMeshVertexColorsLinearToSRGB(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshVertexColorFunctions", "ConvertMeshVertexColorsLinearToSRGB");

	Params::UGeometryScriptLibrary_MeshVertexColorFunctions_ConvertMeshVertexColorsLinearToSRGB_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

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
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptSolidifyOptionsOptions                                                          (ConstParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshVoxelFunctions::ApplyMeshSolidify(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshVoxelFunctions", "ApplyMeshSolidify");

	Params::UGeometryScriptLibrary_MeshVoxelFunctions_ApplyMeshSolidify_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshVoxelFunctions.ApplyMeshMorphology
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptMorphologyOptionsOptions                                                          (ConstParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_MeshVoxelFunctions::ApplyMeshMorphology(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshVoxelFunctions", "ApplyMeshMorphology");

	Params::UGeometryScriptLibrary_MeshVoxelFunctions_ApplyMeshMorphology_Params Parms{};

	Parms.TargetMesh = TargetMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

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
// TArray<struct FTransform>          Frames                                                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, SubobjectReference)
// TArray<double>                     FrameTimes                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptSplineSamplingOptionsSamplingOptions                                                  (Edit, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  RelativeTransform                                                (BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
// bool                               bIncludeScale                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

struct FTransform UGeometryScriptLibrary_PolyPathFunctions::SampleSplineToTransforms(class USplineComponent** Spline, TArray<struct FTransform>* Frames, const TArray<double>& FrameTimes, const struct FGeometryScriptSplineSamplingOptions& SamplingOptions, bool bIncludeScale)
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

	if (Spline != nullptr)
		*Spline = Parms.Spline;

	if (Frames != nullptr)
		*Frames = std::move(Parms.Frames);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.GetPolyPathVertex
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptPolyPath     PolyPath                                                         (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// bool                               bIsValidIndex                                                    (Edit, ConstParm, BlueprintVisible, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector UGeometryScriptLibrary_PolyPathFunctions::GetPolyPathVertex(const struct FGeometryScriptPolyPath& PolyPath, bool* bIsValidIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "GetPolyPathVertex");

	Params::UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathVertex_Params Parms{};

	Parms.PolyPath = PolyPath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsValidIndex != nullptr)
		*bIsValidIndex = Parms.bIsValidIndex;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.GetPolyPathTangent
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptPolyPath     PolyPath                                                         (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// bool                               bIsValidIndex                                                    (Edit, ConstParm, BlueprintVisible, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector UGeometryScriptLibrary_PolyPathFunctions::GetPolyPathTangent(const struct FGeometryScriptPolyPath& PolyPath, bool* bIsValidIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "GetPolyPathTangent");

	Params::UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathTangent_Params Parms{};

	Parms.PolyPath = PolyPath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsValidIndex != nullptr)
		*bIsValidIndex = Parms.bIsValidIndex;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.GetPolyPathNumVertices
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptPolyPath     PolyPath                                                         (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UGeometryScriptLibrary_PolyPathFunctions::GetPolyPathNumVertices(const struct FGeometryScriptPolyPath& PolyPath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "GetPolyPathNumVertices");

	Params::UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathNumVertices_Params Parms{};

	Parms.PolyPath = PolyPath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.GetPolyPathLastIndex
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptPolyPath     PolyPath                                                         (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UGeometryScriptLibrary_PolyPathFunctions::GetPolyPathLastIndex(const struct FGeometryScriptPolyPath& PolyPath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "GetPolyPathLastIndex");

	Params::UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathLastIndex_Params Parms{};

	Parms.PolyPath = PolyPath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.GetPolyPathArcLength
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGeometryScriptPolyPath     PolyPath                                                         (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

double UGeometryScriptLibrary_PolyPathFunctions::GetPolyPathArcLength(const struct FGeometryScriptPolyPath& PolyPath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "GetPolyPathArcLength");

	Params::UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathArcLength_Params Parms{};

	Parms.PolyPath = PolyPath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.GetNearestVertexIndex
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGeometryScriptPolyPath     PolyPath                                                         (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     Point                                                            (ConstParm, Parm, ReturnParm)
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UGeometryScriptLibrary_PolyPathFunctions::GetNearestVertexIndex(const struct FGeometryScriptPolyPath& PolyPath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "GetNearestVertexIndex");

	Params::UGeometryScriptLibrary_PolyPathFunctions_GetNearestVertexIndex_Params Parms{};

	Parms.PolyPath = PolyPath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.FlattenTo2DOnAxis
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGeometryScriptPolyPath     PolyPath                                                         (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EGeometryScriptAxis     DropAxis                                                         (ConstParm, ExportObject, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptPolyPath     ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FGeometryScriptPolyPath UGeometryScriptLibrary_PolyPathFunctions::FlattenTo2DOnAxis(const struct FGeometryScriptPolyPath& PolyPath, enum class EGeometryScriptAxis DropAxis)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "FlattenTo2DOnAxis");

	Params::UGeometryScriptLibrary_PolyPathFunctions_FlattenTo2DOnAxis_Params Parms{};

	Parms.PolyPath = PolyPath;
	Parms.DropAxis = DropAxis;

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
// float                              Radius                                                           (ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// int32                              NumPoints                                                        (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FGeometryScriptPolyPath     ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FGeometryScriptPolyPath UGeometryScriptLibrary_PolyPathFunctions::CreateCirclePath3D(struct FTransform* Transform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "CreateCirclePath3D");

	Params::UGeometryScriptLibrary_PolyPathFunctions_CreateCirclePath3D_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.CreateCirclePath2D
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   Center                                                           (Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
// float                              Radius                                                           (ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// int32                              NumPoints                                                        (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FGeometryScriptPolyPath     ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FGeometryScriptPolyPath UGeometryScriptLibrary_PolyPathFunctions::CreateCirclePath2D()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "CreateCirclePath2D");

	Params::UGeometryScriptLibrary_PolyPathFunctions_CreateCirclePath2D_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.CreateArcPath3D
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// float                              Radius                                                           (ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// int32                              NumPoints                                                        (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// float                              StartAngle                                                       (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              EndAngle                                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptPolyPath     ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FGeometryScriptPolyPath UGeometryScriptLibrary_PolyPathFunctions::CreateArcPath3D(struct FTransform* Transform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "CreateArcPath3D");

	Params::UGeometryScriptLibrary_PolyPathFunctions_CreateArcPath3D_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.CreateArcPath2D
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   Center                                                           (Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
// float                              Radius                                                           (ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// int32                              NumPoints                                                        (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// float                              StartAngle                                                       (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              EndAngle                                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptPolyPath     ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FGeometryScriptPolyPath UGeometryScriptLibrary_PolyPathFunctions::CreateArcPath2D()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "CreateArcPath2D");

	Params::UGeometryScriptLibrary_PolyPathFunctions_CreateArcPath2D_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.ConvertSplineToPolyPath
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class USplineComponent*            Spline                                                           (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config)
// struct FGeometryScriptPolyPath     PolyPath                                                         (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptSplineSamplingOptionsSamplingOptions                                                  (Edit, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UGeometryScriptLibrary_PolyPathFunctions::ConvertSplineToPolyPath(class USplineComponent** Spline, const struct FGeometryScriptPolyPath& PolyPath, const struct FGeometryScriptSplineSamplingOptions& SamplingOptions)
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

	if (Spline != nullptr)
		*Spline = Parms.Spline;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.ConvertPolyPathToArrayOfVector2D
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptPolyPath     PolyPath                                                         (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FVector2D>           VertexArray                                                      (ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// struct FGeometryScriptPolyPath     PolyPath                                                         (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FVector>             VertexArray                                                      (ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// TArray<struct FVector>             VertexArray                                                      (ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptPolyPath     PolyPath                                                         (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// TArray<struct FVector2D>           VertexArray                                                      (ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptPolyPath     PolyPath                                                         (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// struct FGeometryScriptPolyPath     PolyPath                                                         (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FVector2D>           ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<struct FVector2D> UGeometryScriptLibrary_PolyPathFunctions::Conv_GeometryScriptPolyPathToArrayOfVector2D(const struct FGeometryScriptPolyPath& PolyPath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "Conv_GeometryScriptPolyPathToArrayOfVector2D");

	Params::UGeometryScriptLibrary_PolyPathFunctions_Conv_GeometryScriptPolyPathToArrayOfVector2D_Params Parms{};

	Parms.PolyPath = PolyPath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.Conv_GeometryScriptPolyPathToArray
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptPolyPath     PolyPath                                                         (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FVector>             ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<struct FVector> UGeometryScriptLibrary_PolyPathFunctions::Conv_GeometryScriptPolyPathToArray(const struct FGeometryScriptPolyPath& PolyPath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "Conv_GeometryScriptPolyPathToArray");

	Params::UGeometryScriptLibrary_PolyPathFunctions_Conv_GeometryScriptPolyPathToArray_Params Parms{};

	Parms.PolyPath = PolyPath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.Conv_ArrayToGeometryScriptPolyPath
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FVector>             PathVertices                                                     (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptPolyPath     ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FGeometryScriptPolyPath UGeometryScriptLibrary_PolyPathFunctions::Conv_ArrayToGeometryScriptPolyPath()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "Conv_ArrayToGeometryScriptPolyPath");

	Params::UGeometryScriptLibrary_PolyPathFunctions_Conv_ArrayToGeometryScriptPolyPath_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.Conv_ArrayOfVector2DToGeometryScriptPolyPath
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FVector2D>           PathVertices                                                     (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptPolyPath     ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FGeometryScriptPolyPath UGeometryScriptLibrary_PolyPathFunctions::Conv_ArrayOfVector2DToGeometryScriptPolyPath()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "Conv_ArrayOfVector2DToGeometryScriptPolyPath");

	Params::UGeometryScriptLibrary_PolyPathFunctions_Conv_ArrayOfVector2DToGeometryScriptPolyPath_Params Parms{};


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
// class UPrimitiveComponent*         Component                                                        (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// TArray<class UMaterialInterface*>  MaterialList                                                     (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)

class UPrimitiveComponent* UGeometryScriptLibrary_SceneUtilityFunctions::SetComponentMaterialList(TArray<class UMaterialInterface*>* MaterialList, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_SceneUtilityFunctions", "SetComponentMaterialList");

	Params::UGeometryScriptLibrary_SceneUtilityFunctions_SetComponentMaterialList_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MaterialList != nullptr)
		*MaterialList = std::move(Parms.MaterialList);

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_SceneUtilityFunctions.CreateDynamicMeshPool
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMeshPool*            ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMeshPool* UGeometryScriptLibrary_SceneUtilityFunctions::CreateDynamicMeshPool()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_SceneUtilityFunctions", "CreateDynamicMeshPool");

	Params::UGeometryScriptLibrary_SceneUtilityFunctions_CreateDynamicMeshPool_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_SceneUtilityFunctions.CopyMeshFromComponent
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class USceneComponent*             Component                                                        (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// class UDynamicMesh*                ToDynamicMesh                                                    (Edit, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptCopyMeshFromComponentOptionsOptions                                                          (ConstParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               bTransformToWorld                                                (Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  LocalToWorld                                                     (Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// enum class EGeometryScriptOutcomePinsOutcome                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_SceneUtilityFunctions::CopyMeshFromComponent(class UDynamicMesh** ToDynamicMesh, bool bTransformToWorld, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_SceneUtilityFunctions", "CopyMeshFromComponent");

	Params::UGeometryScriptLibrary_SceneUtilityFunctions_CopyMeshFromComponent_Params Parms{};

	Parms.bTransformToWorld = bTransformToWorld;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ToDynamicMesh != nullptr)
		*ToDynamicMesh = Parms.ToDynamicMesh;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_SceneUtilityFunctions.CopyCollisionMeshesFromObject
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     FromObject                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ToDynamicMesh                                                    (Edit, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bTransformToWorld                                                (Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  LocalToWorld                                                     (Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// enum class EGeometryScriptOutcomePinsOutcome                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bUseComplexCollision                                             (ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              SphereResolution                                                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UGeometryScriptLibrary_SceneUtilityFunctions::CopyCollisionMeshesFromObject(class UDynamicMesh** ToDynamicMesh, bool bTransformToWorld, bool bUseComplexCollision, int32 SphereResolution, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_SceneUtilityFunctions", "CopyCollisionMeshesFromObject");

	Params::UGeometryScriptLibrary_SceneUtilityFunctions_CopyCollisionMeshesFromObject_Params Parms{};

	Parms.bTransformToWorld = bTransformToWorld;
	Parms.bUseComplexCollision = bUseComplexCollision;
	Parms.SphereResolution = SphereResolution;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ToDynamicMesh != nullptr)
		*ToDynamicMesh = Parms.ToDynamicMesh;

	if (Debug != nullptr)
		*Debug = Parms.Debug;

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
// struct FVector                     ZAxis                                                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FTransform                  ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FTransform UGeometryScriptLibrary_TransformFunctions::MakeTransformFromZAxis(struct FVector* Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_TransformFunctions", "MakeTransformFromZAxis");

	Params::UGeometryScriptLibrary_TransformFunctions_MakeTransformFromZAxis_Params Parms{};


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
// struct FVector                     ZAxis                                                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     TangentAxis                                                      (ConstParm, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bTangentIsX                                                      (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FTransform UGeometryScriptLibrary_TransformFunctions::MakeTransformFromAxes(struct FVector* Location, const struct FVector& TangentAxis, bool bTangentIsX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_TransformFunctions", "MakeTransformFromAxes");

	Params::UGeometryScriptLibrary_TransformFunctions_MakeTransformFromAxes_Params Parms{};

	Parms.TangentAxis = TangentAxis;
	Parms.bTangentIsX = bTangentIsX;

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
// enum class EGeometryScriptAxis     Axis                                                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config)
// struct FVector                     ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector UGeometryScriptLibrary_TransformFunctions::GetTransformAxisVector(struct FTransform* Transform, enum class EGeometryScriptAxis Axis)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_TransformFunctions", "GetTransformAxisVector");

	Params::UGeometryScriptLibrary_TransformFunctions_GetTransformAxisVector_Params Parms{};

	Parms.Axis = Axis;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_TransformFunctions.GetTransformAxisRay
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// enum class EGeometryScriptAxis     Axis                                                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config)
// struct FRay                        ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FRay UGeometryScriptLibrary_TransformFunctions::GetTransformAxisRay(struct FTransform* Transform, enum class EGeometryScriptAxis Axis)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_TransformFunctions", "GetTransformAxisRay");

	Params::UGeometryScriptLibrary_TransformFunctions_GetTransformAxisRay_Params Parms{};

	Parms.Axis = Axis;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_TransformFunctions.GetTransformAxisPlane
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// enum class EGeometryScriptAxis     Axis                                                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config)
// struct FPlane                      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FPlane UGeometryScriptLibrary_TransformFunctions::GetTransformAxisPlane(struct FTransform* Transform, enum class EGeometryScriptAxis Axis)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_TransformFunctions", "GetTransformAxisPlane");

	Params::UGeometryScriptLibrary_TransformFunctions_GetTransformAxisPlane_Params Parms{};

	Parms.Axis = Axis;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	return Parms.ReturnValue;

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
// struct FRay                        ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FRay UGeometryScriptLibrary_RayFunctions::MakeRayFromPoints()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_RayFunctions", "MakeRayFromPoints");

	Params::UGeometryScriptLibrary_RayFunctions_MakeRayFromPoints_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.MakeRayFromPointDirection
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     Origin                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     Direction                                                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, EditConst, SubobjectReference)
// bool                               bDirectionIsNormalized                                           (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FRay                        ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FRay UGeometryScriptLibrary_RayFunctions::MakeRayFromPointDirection(struct FVector* Origin, struct FVector* Direction, bool bDirectionIsNormalized)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_RayFunctions", "MakeRayFromPointDirection");

	Params::UGeometryScriptLibrary_RayFunctions_MakeRayFromPointDirection_Params Parms{};

	Parms.bDirectionIsNormalized = bDirectionIsNormalized;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Origin != nullptr)
		*Origin = std::move(Parms.Origin);

	if (Direction != nullptr)
		*Direction = std::move(Parms.Direction);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetTransformedRay
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRay                        Ray                                                              (ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// bool                               bInvert                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FRay                        ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FRay UGeometryScriptLibrary_RayFunctions::GetTransformedRay(const struct FRay& Ray, struct FTransform* Transform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_RayFunctions", "GetTransformedRay");

	Params::UGeometryScriptLibrary_RayFunctions_GetTransformedRay_Params Parms{};

	Parms.Ray = Ray;

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
// double                             StartDistance                                                    (ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             EndDistance                                                      (Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     StartPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     EndPoint                                                         (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// struct FVector                     SphereCenter                                                     (Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             SphereRadius                                                     (ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// double                             Distance1                                                        (Edit, ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             Distance2                                                        (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UGeometryScriptLibrary_RayFunctions::GetRaySphereIntersection(const struct FRay& Ray, const struct FVector& SphereCenter, double Distance1, double Distance2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_RayFunctions", "GetRaySphereIntersection");

	Params::UGeometryScriptLibrary_RayFunctions_GetRaySphereIntersection_Params Parms{};

	Parms.Ray = Ray;
	Parms.SphereCenter = SphereCenter;
	Parms.Distance1 = Distance1;
	Parms.Distance2 = Distance2;

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
// struct FVector                     SegStartPoint                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     SegEndPoint                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             RayParameter                                                     (ConstParm, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FVector                     RayPoint                                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     SegPoint                                                         (Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

double UGeometryScriptLibrary_RayFunctions::GetRaySegmentClosestPoint(const struct FRay& Ray, const struct FVector& SegStartPoint, const struct FVector& SegEndPoint, const struct FVector& RayPoint, const struct FVector& SegPoint)
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
// double                             ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

double UGeometryScriptLibrary_RayFunctions::GetRayPointDistance(const struct FRay& Ray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_RayFunctions", "GetRayPointDistance");

	Params::UGeometryScriptLibrary_RayFunctions_GetRayPointDistance_Params Parms{};

	Parms.Ray = Ray;

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
// double                             Distance                                                         (BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector UGeometryScriptLibrary_RayFunctions::GetRayPoint(const struct FRay& Ray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_RayFunctions", "GetRayPoint");

	Params::UGeometryScriptLibrary_RayFunctions_GetRayPoint_Params Parms{};

	Parms.Ray = Ray;

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
// double                             HitDistance                                                      (Edit, ExportObject, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UGeometryScriptLibrary_RayFunctions::GetRayPlaneIntersection(const struct FRay& Ray, struct FPlane* Plane, double HitDistance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_RayFunctions", "GetRayPlaneIntersection");

	Params::UGeometryScriptLibrary_RayFunctions_GetRayPlaneIntersection_Params Parms{};

	Parms.Ray = Ray;
	Parms.HitDistance = HitDistance;

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
// double                             ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

double UGeometryScriptLibrary_RayFunctions::GetRayParameter(const struct FRay& Ray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_RayFunctions", "GetRayParameter");

	Params::UGeometryScriptLibrary_RayFunctions_GetRayParameter_Params Parms{};

	Parms.Ray = Ray;

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
// struct FVector                     LineOrigin                                                       (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     LineDirection                                                    (Edit, ConstParm, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             RayParameter                                                     (ConstParm, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FVector                     RayPoint                                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             LineParameter                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     LinePoint                                                        (BlueprintReadOnly, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

double UGeometryScriptLibrary_RayFunctions::GetRayLineClosestPoint(const struct FRay& Ray, const struct FVector& LineOrigin, const struct FVector& LineDirection, const struct FVector& RayPoint, double LineParameter, const struct FVector& LinePoint)
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
// struct FVector                     ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector UGeometryScriptLibrary_RayFunctions::GetRayClosestPoint(const struct FRay& Ray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_RayFunctions", "GetRayClosestPoint");

	Params::UGeometryScriptLibrary_RayFunctions_GetRayClosestPoint_Params Parms{};

	Parms.Ray = Ray;

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
// double                             HitDistance                                                      (Edit, ExportObject, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UGeometryScriptLibrary_RayFunctions::GetRayBoxIntersection(const struct FRay& Ray, struct FBox* Box, double HitDistance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_RayFunctions", "GetRayBoxIntersection");

	Params::UGeometryScriptLibrary_RayFunctions_GetRayBoxIntersection_Params Parms{};

	Parms.Ray = Ray;
	Parms.HitDistance = HitDistance;

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
// bool                               bConsiderOnBoxAsInside                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UGeometryScriptLibrary_BoxFunctions::TestPointInsideBox(struct FBox* Box, bool* bConsiderOnBoxAsInside)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_BoxFunctions", "TestPointInsideBox");

	Params::UGeometryScriptLibrary_BoxFunctions_TestPointInsideBox_Params Parms{};


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
// struct FVector                     SphereCenter                                                     (Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             SphereRadius                                                     (ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UGeometryScriptLibrary_BoxFunctions::TestBoxSphereIntersection(struct FBox* Box, const struct FVector& SphereCenter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_BoxFunctions", "TestBoxSphereIntersection");

	Params::UGeometryScriptLibrary_BoxFunctions_TestBoxSphereIntersection_Params Parms{};

	Parms.SphereCenter = SphereCenter;

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
// struct FBox                        Box1                                                             (Edit, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FBox                        Box2                                                             (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UGeometryScriptLibrary_BoxFunctions::TestBoxBoxIntersection(struct FBox* Box1, const struct FBox& Box2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_BoxFunctions", "TestBoxBoxIntersection");

	Params::UGeometryScriptLibrary_BoxFunctions_TestBoxBoxIntersection_Params Parms{};

	Parms.Box2 = Box2;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Box1 != nullptr)
		*Box1 = std::move(Parms.Box1);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.MakeBoxFromCenterSize
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     Center                                                           (Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
// struct FVector                     Dimensions                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, DuplicateTransient)
// struct FBox                        ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FBox UGeometryScriptLibrary_BoxFunctions::MakeBoxFromCenterSize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_BoxFunctions", "MakeBoxFromCenterSize");

	Params::UGeometryScriptLibrary_BoxFunctions_MakeBoxFromCenterSize_Params Parms{};


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
// struct FBox                        ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FBox UGeometryScriptLibrary_BoxFunctions::MakeBoxFromCenterExtents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_BoxFunctions", "MakeBoxFromCenterExtents");

	Params::UGeometryScriptLibrary_BoxFunctions_MakeBoxFromCenterExtents_Params Parms{};


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
// struct FBox                        ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FBox UGeometryScriptLibrary_BoxFunctions::GetTransformedBox(struct FBox* Box, struct FTransform* Transform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_BoxFunctions", "GetTransformedBox");

	Params::UGeometryScriptLibrary_BoxFunctions_GetTransformedBox_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Box != nullptr)
		*Box = std::move(Parms.Box);

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetExpandedBox
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBox                        Box                                                              (Edit, ConstParm, ExportObject, OutParm)
// struct FVector                     ExpandBy                                                         (Edit, BlueprintReadOnly, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FBox                        ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FBox UGeometryScriptLibrary_BoxFunctions::GetExpandedBox(struct FBox* Box, struct FVector* ExpandBy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_BoxFunctions", "GetExpandedBox");

	Params::UGeometryScriptLibrary_BoxFunctions_GetExpandedBox_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Box != nullptr)
		*Box = std::move(Parms.Box);

	if (ExpandBy != nullptr)
		*ExpandBy = std::move(Parms.ExpandBy);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetBoxVolumeArea
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBox                        Box                                                              (Edit, ConstParm, ExportObject, OutParm)
// double                             Volume                                                           (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config)
// double                             SurfaceArea                                                      (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

double UGeometryScriptLibrary_BoxFunctions::GetBoxVolumeArea(struct FBox* Box, double* Volume)
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

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetBoxPointDistance
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBox                        Box                                                              (Edit, ConstParm, ExportObject, OutParm)
// struct FVector                     Point                                                            (ConstParm, Parm, ReturnParm)
// double                             ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

double UGeometryScriptLibrary_BoxFunctions::GetBoxPointDistance(struct FBox* Box)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_BoxFunctions", "GetBoxPointDistance");

	Params::UGeometryScriptLibrary_BoxFunctions_GetBoxPointDistance_Params Parms{};


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
// int32                              FaceIndex                                                        (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     FaceNormal                                                       (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector UGeometryScriptLibrary_BoxFunctions::GetBoxFaceCenter(struct FBox* Box, struct FVector* FaceNormal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_BoxFunctions", "GetBoxFaceCenter");

	Params::UGeometryScriptLibrary_BoxFunctions_GetBoxFaceCenter_Params Parms{};


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
// int32                              CornerIndex                                                      (BlueprintVisible, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector UGeometryScriptLibrary_BoxFunctions::GetBoxCorner(struct FBox* Box, int32* CornerIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_BoxFunctions", "GetBoxCorner");

	Params::UGeometryScriptLibrary_BoxFunctions_GetBoxCorner_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Box != nullptr)
		*Box = std::move(Parms.Box);

	if (CornerIndex != nullptr)
		*CornerIndex = Parms.CornerIndex;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetBoxCenterSize
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBox                        Box                                                              (Edit, ConstParm, ExportObject, OutParm)
// struct FVector                     Center                                                           (Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
// struct FVector                     Dimensions                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, DuplicateTransient)

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
// struct FBox                        Box1                                                             (Edit, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FBox                        Box2                                                             (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

double UGeometryScriptLibrary_BoxFunctions::GetBoxBoxDistance(struct FBox* Box1, const struct FBox& Box2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_BoxFunctions", "GetBoxBoxDistance");

	Params::UGeometryScriptLibrary_BoxFunctions_GetBoxBoxDistance_Params Parms{};

	Parms.Box2 = Box2;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Box1 != nullptr)
		*Box1 = std::move(Parms.Box1);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.FindClosestPointOnBox
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBox                        Box                                                              (Edit, ConstParm, ExportObject, OutParm)
// struct FVector                     Point                                                            (ConstParm, Parm, ReturnParm)
// bool                               bIsInside                                                        (ConstParm, ExportObject, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector UGeometryScriptLibrary_BoxFunctions::FindClosestPointOnBox(struct FBox* Box, bool* bIsInside)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_BoxFunctions", "FindClosestPointOnBox");

	Params::UGeometryScriptLibrary_BoxFunctions_FindClosestPointOnBox_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Box != nullptr)
		*Box = std::move(Parms.Box);

	if (bIsInside != nullptr)
		*bIsInside = Parms.bIsInside;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.FindBoxBoxIntersection
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBox                        Box1                                                             (Edit, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FBox                        Box2                                                             (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bIsIntersecting                                                  (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FBox                        ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FBox UGeometryScriptLibrary_BoxFunctions::FindBoxBoxIntersection(struct FBox* Box1, const struct FBox& Box2, bool* bIsIntersecting)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_BoxFunctions", "FindBoxBoxIntersection");

	Params::UGeometryScriptLibrary_BoxFunctions_FindBoxBoxIntersection_Params Parms{};

	Parms.Box2 = Box2;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Box1 != nullptr)
		*Box1 = std::move(Parms.Box1);

	if (bIsIntersecting != nullptr)
		*bIsIntersecting = Parms.bIsIntersecting;

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
// struct FGeometryScriptUVList       UVList                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UTextureRenderTarget2D*      Texture                                                          (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst)
// struct FGeometryScriptSampleTextureOptionsSampleOptions                                                    (ConstParm, Net, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptColorList    ColorList                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)

class UTextureRenderTarget2D* UGeometryScriptLibrary_TextureMapFunctions::SampleTextureRenderTarget2DAtUVPositions(const struct FGeometryScriptUVList& UVList, struct FGeometryScriptSampleTextureOptions* SampleOptions, const struct FGeometryScriptColorList& ColorList, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_TextureMapFunctions", "SampleTextureRenderTarget2DAtUVPositions");

	Params::UGeometryScriptLibrary_TextureMapFunctions_SampleTextureRenderTarget2DAtUVPositions_Params Parms{};

	Parms.UVList = UVList;
	Parms.ColorList = ColorList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SampleOptions != nullptr)
		*SampleOptions = std::move(Parms.SampleOptions);

	if (Debug != nullptr)
		*Debug = Parms.Debug;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_TextureMapFunctions.SampleTexture2DAtUVPositions
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptUVList       UVList                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UTexture2D*                  Texture                                                          (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst)
// struct FGeometryScriptSampleTextureOptionsSampleOptions                                                    (ConstParm, Net, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptColorList    ColorList                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UGeometryScriptDebug*        Debug                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)

class UTexture2D* UGeometryScriptLibrary_TextureMapFunctions::SampleTexture2DAtUVPositions(const struct FGeometryScriptUVList& UVList, struct FGeometryScriptSampleTextureOptions* SampleOptions, const struct FGeometryScriptColorList& ColorList, class UGeometryScriptDebug** Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_TextureMapFunctions", "SampleTexture2DAtUVPositions");

	Params::UGeometryScriptLibrary_TextureMapFunctions_SampleTexture2DAtUVPositions_Params Parms{};

	Parms.UVList = UVList;
	Parms.ColorList = ColorList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SampleOptions != nullptr)
		*SampleOptions = std::move(Parms.SampleOptions);

	if (Debug != nullptr)
		*Debug = Parms.Debug;

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
// struct FGeometryScriptVectorList   VectorList                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             ConstantX                                                        (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
// double                             ConstantY                                                        (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
// double                             ConstantZ                                                        (BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptScalarList   ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FGeometryScriptScalarList UGeometryScriptLibrary_VectorMathFunctions::VectorToScalar(const struct FGeometryScriptVectorList& VectorList, double* ConstantZ)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_VectorMathFunctions", "VectorToScalar");

	Params::UGeometryScriptLibrary_VectorMathFunctions_VectorToScalar_Params Parms{};

	Parms.VectorList = VectorList;

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
// struct FGeometryScriptVectorList   VectorList                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     SetOnFailure                                                     (BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UGeometryScriptLibrary_VectorMathFunctions::VectorNormalizeInPlace(const struct FGeometryScriptVectorList& VectorList, struct FVector* SetOnFailure)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_VectorMathFunctions", "VectorNormalizeInPlace");

	Params::UGeometryScriptLibrary_VectorMathFunctions_VectorNormalizeInPlace_Params Parms{};

	Parms.VectorList = VectorList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SetOnFailure != nullptr)
		*SetOnFailure = std::move(Parms.SetOnFailure);

}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.VectorLength
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGeometryScriptVectorList   VectorList                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptScalarList   ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FGeometryScriptScalarList UGeometryScriptLibrary_VectorMathFunctions::VectorLength(const struct FGeometryScriptVectorList& VectorList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_VectorMathFunctions", "VectorLength");

	Params::UGeometryScriptLibrary_VectorMathFunctions_VectorLength_Params Parms{};

	Parms.VectorList = VectorList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.VectorDot
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGeometryScriptVectorList   VectorListA                                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptVectorList   VectorListB                                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptScalarList   ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FGeometryScriptScalarList UGeometryScriptLibrary_VectorMathFunctions::VectorDot(struct FGeometryScriptVectorList* VectorListA, struct FGeometryScriptVectorList* VectorListB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_VectorMathFunctions", "VectorDot");

	Params::UGeometryScriptLibrary_VectorMathFunctions_VectorDot_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VectorListA != nullptr)
		*VectorListA = std::move(Parms.VectorListA);

	if (VectorListB != nullptr)
		*VectorListB = std::move(Parms.VectorListB);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.VectorCross
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGeometryScriptVectorList   VectorListA                                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptVectorList   VectorListB                                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptVectorList   ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FGeometryScriptVectorList UGeometryScriptLibrary_VectorMathFunctions::VectorCross(struct FGeometryScriptVectorList* VectorListA, struct FGeometryScriptVectorList* VectorListB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_VectorMathFunctions", "VectorCross");

	Params::UGeometryScriptLibrary_VectorMathFunctions_VectorCross_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VectorListA != nullptr)
		*VectorListA = std::move(Parms.VectorListA);

	if (VectorListB != nullptr)
		*VectorListB = std::move(Parms.VectorListB);

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.VectorBlendInPlace
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptVectorList   VectorListA                                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptVectorList   VectorListB                                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             ConstantA                                                        (BlueprintReadOnly, Net, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             ConstantB                                                        (ConstParm, ExportObject, Net, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// struct FGeometryScriptVectorList   VectorListA                                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptVectorList   VectorListB                                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             ConstantA                                                        (BlueprintReadOnly, Net, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             ConstantB                                                        (ConstParm, ExportObject, Net, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptVectorList   ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FGeometryScriptVectorList UGeometryScriptLibrary_VectorMathFunctions::VectorBlend(struct FGeometryScriptVectorList* VectorListA, struct FGeometryScriptVectorList* VectorListB, double* ConstantA, double* ConstantB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_VectorMathFunctions", "VectorBlend");

	Params::UGeometryScriptLibrary_VectorMathFunctions_VectorBlend_Params Parms{};


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

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarVectorMultiplyInPlace
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptScalarList   ScalarList                                                       (Edit, ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptVectorList   VectorList                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             ScalarMultiplier                                                 (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UGeometryScriptLibrary_VectorMathFunctions::ScalarVectorMultiplyInPlace(const struct FGeometryScriptScalarList& ScalarList, const struct FGeometryScriptVectorList& VectorList, double* ScalarMultiplier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_VectorMathFunctions", "ScalarVectorMultiplyInPlace");

	Params::UGeometryScriptLibrary_VectorMathFunctions_ScalarVectorMultiplyInPlace_Params Parms{};

	Parms.ScalarList = ScalarList;
	Parms.VectorList = VectorList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ScalarMultiplier != nullptr)
		*ScalarMultiplier = Parms.ScalarMultiplier;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarVectorMultiply
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGeometryScriptScalarList   ScalarList                                                       (Edit, ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptVectorList   VectorList                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             ScalarMultiplier                                                 (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptVectorList   ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FGeometryScriptVectorList UGeometryScriptLibrary_VectorMathFunctions::ScalarVectorMultiply(const struct FGeometryScriptScalarList& ScalarList, const struct FGeometryScriptVectorList& VectorList, double* ScalarMultiplier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_VectorMathFunctions", "ScalarVectorMultiply");

	Params::UGeometryScriptLibrary_VectorMathFunctions_ScalarVectorMultiply_Params Parms{};

	Parms.ScalarList = ScalarList;
	Parms.VectorList = VectorList;

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
// struct FGeometryScriptScalarList   ScalarListA                                                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptScalarList   ScalarListB                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             ConstantMultiplier                                               (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// struct FGeometryScriptScalarList   ScalarListA                                                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptScalarList   ScalarListB                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             ConstantMultiplier                                               (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptScalarList   ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FGeometryScriptScalarList UGeometryScriptLibrary_VectorMathFunctions::ScalarMultiply(struct FGeometryScriptScalarList* ScalarListA, struct FGeometryScriptScalarList* ScalarListB, double* ConstantMultiplier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_VectorMathFunctions", "ScalarMultiply");

	Params::UGeometryScriptLibrary_VectorMathFunctions_ScalarMultiply_Params Parms{};


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

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarInvertInPlace
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptScalarList   ScalarList                                                       (Edit, ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             Numerator                                                        (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// double                             SetOnFailure                                                     (BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             Epsilon                                                          (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

double UGeometryScriptLibrary_VectorMathFunctions::ScalarInvertInPlace(const struct FGeometryScriptScalarList& ScalarList, double* SetOnFailure, double* Epsilon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_VectorMathFunctions", "ScalarInvertInPlace");

	Params::UGeometryScriptLibrary_VectorMathFunctions_ScalarInvertInPlace_Params Parms{};

	Parms.ScalarList = ScalarList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SetOnFailure != nullptr)
		*SetOnFailure = Parms.SetOnFailure;

	if (Epsilon != nullptr)
		*Epsilon = Parms.Epsilon;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarInvert
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGeometryScriptScalarList   ScalarList                                                       (Edit, ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             Numerator                                                        (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// double                             SetOnFailure                                                     (BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             Epsilon                                                          (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FGeometryScriptScalarList   ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FGeometryScriptScalarList UGeometryScriptLibrary_VectorMathFunctions::ScalarInvert(const struct FGeometryScriptScalarList& ScalarList, double* SetOnFailure, double* Epsilon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_VectorMathFunctions", "ScalarInvert");

	Params::UGeometryScriptLibrary_VectorMathFunctions_ScalarInvert_Params Parms{};

	Parms.ScalarList = ScalarList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SetOnFailure != nullptr)
		*SetOnFailure = Parms.SetOnFailure;

	if (Epsilon != nullptr)
		*Epsilon = Parms.Epsilon;

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarBlendInPlace
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptScalarList   ScalarListA                                                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptScalarList   ScalarListB                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             ConstantA                                                        (BlueprintReadOnly, Net, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             ConstantB                                                        (ConstParm, ExportObject, Net, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// struct FGeometryScriptScalarList   ScalarListA                                                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptScalarList   ScalarListB                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             ConstantA                                                        (BlueprintReadOnly, Net, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             ConstantB                                                        (ConstParm, ExportObject, Net, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptScalarList   ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FGeometryScriptScalarList UGeometryScriptLibrary_VectorMathFunctions::ScalarBlend(struct FGeometryScriptScalarList* ScalarListA, struct FGeometryScriptScalarList* ScalarListB, double* ConstantA, double* ConstantB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_VectorMathFunctions", "ScalarBlend");

	Params::UGeometryScriptLibrary_VectorMathFunctions_ScalarBlend_Params Parms{};


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

	return Parms.ReturnValue;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ConstantVectorMultiplyInPlace
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// double                             Constant                                                         (OutParm, Transient, Config, EditConst)
// struct FGeometryScriptVectorList   VectorList                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UGeometryScriptLibrary_VectorMathFunctions::ConstantVectorMultiplyInPlace(double* Constant, const struct FGeometryScriptVectorList& VectorList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_VectorMathFunctions", "ConstantVectorMultiplyInPlace");

	Params::UGeometryScriptLibrary_VectorMathFunctions_ConstantVectorMultiplyInPlace_Params Parms{};

	Parms.VectorList = VectorList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Constant != nullptr)
		*Constant = Parms.Constant;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ConstantVectorMultiply
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// double                             Constant                                                         (OutParm, Transient, Config, EditConst)
// struct FGeometryScriptVectorList   VectorList                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptVectorList   ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FGeometryScriptVectorList UGeometryScriptLibrary_VectorMathFunctions::ConstantVectorMultiply(double* Constant, const struct FGeometryScriptVectorList& VectorList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_VectorMathFunctions", "ConstantVectorMultiply");

	Params::UGeometryScriptLibrary_VectorMathFunctions_ConstantVectorMultiply_Params Parms{};

	Parms.VectorList = VectorList;

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
// struct FGeometryScriptScalarList   ScalarList                                                       (Edit, ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UGeometryScriptLibrary_VectorMathFunctions::ConstantScalarMultiplyInPlace(double* Constant, const struct FGeometryScriptScalarList& ScalarList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_VectorMathFunctions", "ConstantScalarMultiplyInPlace");

	Params::UGeometryScriptLibrary_VectorMathFunctions_ConstantScalarMultiplyInPlace_Params Parms{};

	Parms.ScalarList = ScalarList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Constant != nullptr)
		*Constant = Parms.Constant;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ConstantScalarMultiply
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// double                             Constant                                                         (OutParm, Transient, Config, EditConst)
// struct FGeometryScriptScalarList   ScalarList                                                       (Edit, ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGeometryScriptScalarList   ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FGeometryScriptScalarList UGeometryScriptLibrary_VectorMathFunctions::ConstantScalarMultiply(double* Constant, const struct FGeometryScriptScalarList& ScalarList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_VectorMathFunctions", "ConstantScalarMultiply");

	Params::UGeometryScriptLibrary_VectorMathFunctions_ConstantScalarMultiply_Params Parms{};

	Parms.ScalarList = ScalarList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Constant != nullptr)
		*Constant = Parms.Constant;

	return Parms.ReturnValue;

}

}



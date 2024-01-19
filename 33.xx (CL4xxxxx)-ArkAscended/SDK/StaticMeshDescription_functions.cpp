#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class StaticMeshDescription.StaticMeshDescription
// (None)

class UClass* UStaticMeshDescription::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StaticMeshDescription");

	return Clss;
}


// StaticMeshDescription StaticMeshDescription.Default__StaticMeshDescription
// (Public, ClassDefaultObject, ArchetypeObject)

class UStaticMeshDescription* UStaticMeshDescription::GetDefaultObj()
{
	static class UStaticMeshDescription* Default = nullptr;

	if (!Default)
		Default = static_cast<UStaticMeshDescription*>(UStaticMeshDescription::StaticClass()->DefaultObject);

	return Default;
}


// Function StaticMeshDescription.StaticMeshDescription.SetVertexInstanceUV
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVertexInstanceID           VertexInstanceID                                                 (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
// struct FVector2D                   UV                                                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance)
// int32                              UVIndex                                                          (ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, Config, EditConst)

int32 UStaticMeshDescription::SetVertexInstanceUV()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StaticMeshDescription", "SetVertexInstanceUV");

	Params::UStaticMeshDescription_SetVertexInstanceUV_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function StaticMeshDescription.StaticMeshDescription.SetPolygonGroupMaterialSlotName
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPolygonGroupID             PolygonGroupID                                                   (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
// class FName                        SlotName                                                         (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)

struct FPolygonGroupID UStaticMeshDescription::SetPolygonGroupMaterialSlotName(class FName* SlotName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StaticMeshDescription", "SetPolygonGroupMaterialSlotName");

	Params::UStaticMeshDescription_SetPolygonGroupMaterialSlotName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SlotName != nullptr)
		*SlotName = Parms.SlotName;

	return Parms.ReturnValue;

}


// Function StaticMeshDescription.StaticMeshDescription.GetVertexInstanceUV
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexInstanceID           VertexInstanceID                                                 (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
// int32                              UVIndex                                                          (ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, Config, EditConst)
// struct FVector2D                   ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UStaticMeshDescription::GetVertexInstanceUV(const struct FVector2D& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StaticMeshDescription", "GetVertexInstanceUV");

	Params::UStaticMeshDescription_GetVertexInstanceUV_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function StaticMeshDescription.StaticMeshDescription.CreateCube
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Center                                                           (Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
// struct FVector                     HalfExtents                                                      (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
// struct FPolygonGroupID             PolygonGroup                                                     (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// struct FPolygonID                  PolygonID_PlusX                                                  (Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// struct FPolygonID                  PolygonID_MinusX                                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// struct FPolygonID                  PolygonID_PlusY                                                  (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// struct FPolygonID                  PolygonID_MinusY                                                 (ConstParm, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// struct FPolygonID                  PolygonID_PlusZ                                                  (Edit, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// struct FPolygonID                  PolygonID_MinusZ                                                 (ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

struct FVector UStaticMeshDescription::CreateCube(struct FVector* HalfExtents, const struct FPolygonGroupID& PolygonGroup, const struct FPolygonID& PolygonID_PlusX, const struct FPolygonID& PolygonID_MinusX, const struct FPolygonID& PolygonID_PlusY, const struct FPolygonID& PolygonID_MinusY, const struct FPolygonID& PolygonID_PlusZ, const struct FPolygonID& PolygonID_MinusZ)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StaticMeshDescription", "CreateCube");

	Params::UStaticMeshDescription_CreateCube_Params Parms{};

	Parms.PolygonGroup = PolygonGroup;
	Parms.PolygonID_PlusX = PolygonID_PlusX;
	Parms.PolygonID_MinusX = PolygonID_MinusX;
	Parms.PolygonID_PlusY = PolygonID_PlusY;
	Parms.PolygonID_MinusY = PolygonID_MinusY;
	Parms.PolygonID_PlusZ = PolygonID_PlusZ;
	Parms.PolygonID_MinusZ = PolygonID_MinusZ;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (HalfExtents != nullptr)
		*HalfExtents = std::move(Parms.HalfExtents);

	return Parms.ReturnValue;

}

}



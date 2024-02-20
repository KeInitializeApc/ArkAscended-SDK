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
// struct FVertexInstanceID           VertexInstanceID                                                 (ConstParm, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FVector2D                   UV                                                               (Edit, ConstParm, Net, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance)
// int32                              UVIndex                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst)

void UStaticMeshDescription::SetVertexInstanceUV(struct FVertexInstanceID* VertexInstanceID, const struct FVector2D& UV, int32 UVIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StaticMeshDescription", "SetVertexInstanceUV");

	Params::UStaticMeshDescription_SetVertexInstanceUV_Params Parms{};

	Parms.UV = UV;
	Parms.UVIndex = UVIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VertexInstanceID != nullptr)
		*VertexInstanceID = std::move(Parms.VertexInstanceID);

}


// Function StaticMeshDescription.StaticMeshDescription.SetPolygonGroupMaterialSlotName
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPolygonGroupID             PolygonGroupID                                                   (EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// class FName                        SlotName                                                         (Edit, ConstParm, BlueprintReadOnly, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)

class FName UStaticMeshDescription::SetPolygonGroupMaterialSlotName(struct FPolygonGroupID* PolygonGroupID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StaticMeshDescription", "SetPolygonGroupMaterialSlotName");

	Params::UStaticMeshDescription_SetPolygonGroupMaterialSlotName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PolygonGroupID != nullptr)
		*PolygonGroupID = std::move(Parms.PolygonGroupID);

	return Parms.ReturnValue;

}


// Function StaticMeshDescription.StaticMeshDescription.GetVertexInstanceUV
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexInstanceID           VertexInstanceID                                                 (ConstParm, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// int32                              UVIndex                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FVector2D                   ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UStaticMeshDescription::GetVertexInstanceUV(struct FVertexInstanceID* VertexInstanceID, int32 UVIndex, const struct FVector2D& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StaticMeshDescription", "GetVertexInstanceUV");

	Params::UStaticMeshDescription_GetVertexInstanceUV_Params Parms{};

	Parms.UVIndex = UVIndex;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VertexInstanceID != nullptr)
		*VertexInstanceID = std::move(Parms.VertexInstanceID);

}


// Function StaticMeshDescription.StaticMeshDescription.CreateCube
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Center                                                           (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FVector                     HalfExtents                                                      (Edit, ExportObject, Net, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FPolygonGroupID             PolygonGroup                                                     (BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FPolygonID                  PolygonID_PlusX                                                  (Edit, ConstParm, Net, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FPolygonID                  PolygonID_MinusX                                                 (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FPolygonID                  PolygonID_PlusY                                                  (Edit, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FPolygonID                  PolygonID_MinusY                                                 (ExportObject, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FPolygonID                  PolygonID_PlusZ                                                  (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FPolygonID                  PolygonID_MinusZ                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

struct FVector UStaticMeshDescription::CreateCube(struct FVector* Center, struct FPolygonGroupID* PolygonGroup, struct FPolygonID* PolygonID_PlusX, struct FPolygonID* PolygonID_MinusX, struct FPolygonID* PolygonID_PlusY, struct FPolygonID* PolygonID_MinusY, const struct FPolygonID& PolygonID_PlusZ, const struct FPolygonID& PolygonID_MinusZ)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StaticMeshDescription", "CreateCube");

	Params::UStaticMeshDescription_CreateCube_Params Parms{};

	Parms.PolygonID_PlusZ = PolygonID_PlusZ;
	Parms.PolygonID_MinusZ = PolygonID_MinusZ;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Center != nullptr)
		*Center = std::move(Parms.Center);

	if (PolygonGroup != nullptr)
		*PolygonGroup = std::move(Parms.PolygonGroup);

	if (PolygonID_PlusX != nullptr)
		*PolygonID_PlusX = std::move(Parms.PolygonID_PlusX);

	if (PolygonID_MinusX != nullptr)
		*PolygonID_MinusX = std::move(Parms.PolygonID_MinusX);

	if (PolygonID_PlusY != nullptr)
		*PolygonID_PlusY = std::move(Parms.PolygonID_PlusY);

	if (PolygonID_MinusY != nullptr)
		*PolygonID_MinusY = std::move(Parms.PolygonID_MinusY);

	return Parms.ReturnValue;

}

}



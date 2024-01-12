#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GeometryFramework.BaseDynamicMeshComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UBaseDynamicMeshComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseDynamicMeshComponent");

	return Clss;
}


// BaseDynamicMeshComponent GeometryFramework.Default__BaseDynamicMeshComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UBaseDynamicMeshComponent* UBaseDynamicMeshComponent::GetDefaultObj()
{
	static class UBaseDynamicMeshComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseDynamicMeshComponent*>(UBaseDynamicMeshComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryFramework.BaseDynamicMeshComponent.SetViewModeOverridesEnabled
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnabled                                                         (Edit, BlueprintVisible, ExportObject, Net, OutParm, Transient, EditConst, GlobalConfig)

void UBaseDynamicMeshComponent::SetViewModeOverridesEnabled(bool* bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseDynamicMeshComponent", "SetViewModeOverridesEnabled");

	Params::UBaseDynamicMeshComponent_SetViewModeOverridesEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bEnabled != nullptr)
		*bEnabled = Parms.bEnabled;

}


// Function GeometryFramework.BaseDynamicMeshComponent.SetShadowsEnabled
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnabled                                                         (Edit, BlueprintVisible, ExportObject, Net, OutParm, Transient, EditConst, GlobalConfig)

void UBaseDynamicMeshComponent::SetShadowsEnabled(bool* bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseDynamicMeshComponent", "SetShadowsEnabled");

	Params::UBaseDynamicMeshComponent_SetShadowsEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bEnabled != nullptr)
		*bEnabled = Parms.bEnabled;

}


// Function GeometryFramework.BaseDynamicMeshComponent.SetSecondaryRenderMaterial
// (Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*          Material                                                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)

class UMaterialInterface* UBaseDynamicMeshComponent::SetSecondaryRenderMaterial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseDynamicMeshComponent", "SetSecondaryRenderMaterial");

	Params::UBaseDynamicMeshComponent_SetSecondaryRenderMaterial_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryFramework.BaseDynamicMeshComponent.SetSecondaryBuffersVisibility
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bSetVisible                                                      (ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UBaseDynamicMeshComponent::SetSecondaryBuffersVisibility(bool bSetVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseDynamicMeshComponent", "SetSecondaryBuffersVisibility");

	Params::UBaseDynamicMeshComponent_SetSecondaryBuffersVisibility_Params Parms{};

	Parms.bSetVisible = bSetVisible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryFramework.BaseDynamicMeshComponent.SetOverrideRenderMaterial
// (Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*          Material                                                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)

class UMaterialInterface* UBaseDynamicMeshComponent::SetOverrideRenderMaterial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseDynamicMeshComponent", "SetOverrideRenderMaterial");

	Params::UBaseDynamicMeshComponent_SetOverrideRenderMaterial_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryFramework.BaseDynamicMeshComponent.SetEnableWireframeRenderPass
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnable                                                          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)

void UBaseDynamicMeshComponent::SetEnableWireframeRenderPass(bool* bEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseDynamicMeshComponent", "SetEnableWireframeRenderPass");

	Params::UBaseDynamicMeshComponent_SetEnableWireframeRenderPass_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bEnable != nullptr)
		*bEnable = Parms.bEnable;

}


// Function GeometryFramework.BaseDynamicMeshComponent.SetEnableRaytracing
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bSetEnabled                                                      (Edit, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UBaseDynamicMeshComponent::SetEnableRaytracing(bool bSetEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseDynamicMeshComponent", "SetEnableRaytracing");

	Params::UBaseDynamicMeshComponent_SetEnableRaytracing_Params Parms{};

	Parms.bSetEnabled = bSetEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryFramework.BaseDynamicMeshComponent.SetEnableFlatShading
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnable                                                          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)

void UBaseDynamicMeshComponent::SetEnableFlatShading(bool* bEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseDynamicMeshComponent", "SetEnableFlatShading");

	Params::UBaseDynamicMeshComponent_SetEnableFlatShading_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bEnable != nullptr)
		*bEnable = Parms.bEnable;

}


// Function GeometryFramework.BaseDynamicMeshComponent.SetConstantOverrideColor
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FColor                      NewColor                                                         (ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UBaseDynamicMeshComponent::SetConstantOverrideColor(struct FColor* NewColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseDynamicMeshComponent", "SetConstantOverrideColor");

	Params::UBaseDynamicMeshComponent_SetConstantOverrideColor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NewColor != nullptr)
		*NewColor = std::move(Parms.NewColor);

}


// Function GeometryFramework.BaseDynamicMeshComponent.SetColorOverrideMode
// (Native, Public, BlueprintCallable)
// Parameters:
// enum class EDynamicMeshComponentColorOverrideModeNewMode                                                          (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UBaseDynamicMeshComponent::SetColorOverrideMode(enum class EDynamicMeshComponentColorOverrideMode NewMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseDynamicMeshComponent", "SetColorOverrideMode");

	Params::UBaseDynamicMeshComponent_SetColorOverrideMode_Params Parms{};

	Parms.NewMode = NewMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryFramework.BaseDynamicMeshComponent.HasOverrideRenderMaterial
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              K                                                                (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UBaseDynamicMeshComponent::HasOverrideRenderMaterial(int32 K)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseDynamicMeshComponent", "HasOverrideRenderMaterial");

	Params::UBaseDynamicMeshComponent_HasOverrideRenderMaterial_Params Parms{};

	Parms.K = K;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryFramework.BaseDynamicMeshComponent.GetViewModeOverridesEnabled
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UBaseDynamicMeshComponent::GetViewModeOverridesEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseDynamicMeshComponent", "GetViewModeOverridesEnabled");

	Params::UBaseDynamicMeshComponent_GetViewModeOverridesEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryFramework.BaseDynamicMeshComponent.GetShadowsEnabled
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UBaseDynamicMeshComponent::GetShadowsEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseDynamicMeshComponent", "GetShadowsEnabled");

	Params::UBaseDynamicMeshComponent_GetShadowsEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryFramework.BaseDynamicMeshComponent.GetSecondaryRenderMaterial
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMaterialInterface*          ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UMaterialInterface* UBaseDynamicMeshComponent::GetSecondaryRenderMaterial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseDynamicMeshComponent", "GetSecondaryRenderMaterial");

	Params::UBaseDynamicMeshComponent_GetSecondaryRenderMaterial_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryFramework.BaseDynamicMeshComponent.GetSecondaryBuffersVisibility
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UBaseDynamicMeshComponent::GetSecondaryBuffersVisibility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseDynamicMeshComponent", "GetSecondaryBuffersVisibility");

	Params::UBaseDynamicMeshComponent_GetSecondaryBuffersVisibility_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryFramework.BaseDynamicMeshComponent.GetOverrideRenderMaterial
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              MaterialIndex                                                    (BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UMaterialInterface*          ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UMaterialInterface* UBaseDynamicMeshComponent::GetOverrideRenderMaterial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseDynamicMeshComponent", "GetOverrideRenderMaterial");

	Params::UBaseDynamicMeshComponent_GetOverrideRenderMaterial_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryFramework.BaseDynamicMeshComponent.GetFlatShadingEnabled
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UBaseDynamicMeshComponent::GetFlatShadingEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseDynamicMeshComponent", "GetFlatShadingEnabled");

	Params::UBaseDynamicMeshComponent_GetFlatShadingEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryFramework.BaseDynamicMeshComponent.GetEnableWireframeRenderPass
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UBaseDynamicMeshComponent::GetEnableWireframeRenderPass()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseDynamicMeshComponent", "GetEnableWireframeRenderPass");

	Params::UBaseDynamicMeshComponent_GetEnableWireframeRenderPass_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryFramework.BaseDynamicMeshComponent.GetEnableRaytracing
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UBaseDynamicMeshComponent::GetEnableRaytracing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseDynamicMeshComponent", "GetEnableRaytracing");

	Params::UBaseDynamicMeshComponent_GetEnableRaytracing_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryFramework.BaseDynamicMeshComponent.GetDynamicMesh
// (Native, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UBaseDynamicMeshComponent::GetDynamicMesh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseDynamicMeshComponent", "GetDynamicMesh");

	Params::UBaseDynamicMeshComponent_GetDynamicMesh_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryFramework.BaseDynamicMeshComponent.GetConstantOverrideColor
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FColor                      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FColor UBaseDynamicMeshComponent::GetConstantOverrideColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseDynamicMeshComponent", "GetConstantOverrideColor");

	Params::UBaseDynamicMeshComponent_GetConstantOverrideColor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryFramework.BaseDynamicMeshComponent.GetColorOverrideMode
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EDynamicMeshComponentColorOverrideModeReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

enum class EDynamicMeshComponentColorOverrideMode UBaseDynamicMeshComponent::GetColorOverrideMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseDynamicMeshComponent", "GetColorOverrideMode");

	Params::UBaseDynamicMeshComponent_GetColorOverrideMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryFramework.BaseDynamicMeshComponent.ClearSecondaryRenderMaterial
// (Native, Public, BlueprintCallable)
// Parameters:

void UBaseDynamicMeshComponent::ClearSecondaryRenderMaterial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseDynamicMeshComponent", "ClearSecondaryRenderMaterial");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GeometryFramework.BaseDynamicMeshComponent.ClearOverrideRenderMaterial
// (Native, Public, BlueprintCallable)
// Parameters:

void UBaseDynamicMeshComponent::ClearOverrideRenderMaterial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseDynamicMeshComponent", "ClearOverrideRenderMaterial");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class GeometryFramework.MeshCommandChangeTarget
// (None)

class UClass* IMeshCommandChangeTarget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshCommandChangeTarget");

	return Clss;
}


// MeshCommandChangeTarget GeometryFramework.Default__MeshCommandChangeTarget
// (Public, ClassDefaultObject, ArchetypeObject)

class IMeshCommandChangeTarget* IMeshCommandChangeTarget::GetDefaultObj()
{
	static class IMeshCommandChangeTarget* Default = nullptr;

	if (!Default)
		Default = static_cast<IMeshCommandChangeTarget*>(IMeshCommandChangeTarget::StaticClass()->DefaultObject);

	return Default;
}


// Class GeometryFramework.MeshReplacementCommandChangeTarget
// (None)

class UClass* IMeshReplacementCommandChangeTarget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshReplacementCommandChangeTarget");

	return Clss;
}


// MeshReplacementCommandChangeTarget GeometryFramework.Default__MeshReplacementCommandChangeTarget
// (Public, ClassDefaultObject, ArchetypeObject)

class IMeshReplacementCommandChangeTarget* IMeshReplacementCommandChangeTarget::GetDefaultObj()
{
	static class IMeshReplacementCommandChangeTarget* Default = nullptr;

	if (!Default)
		Default = static_cast<IMeshReplacementCommandChangeTarget*>(IMeshReplacementCommandChangeTarget::StaticClass()->DefaultObject);

	return Default;
}


// Class GeometryFramework.MeshVertexCommandChangeTarget
// (None)

class UClass* IMeshVertexCommandChangeTarget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshVertexCommandChangeTarget");

	return Clss;
}


// MeshVertexCommandChangeTarget GeometryFramework.Default__MeshVertexCommandChangeTarget
// (Public, ClassDefaultObject, ArchetypeObject)

class IMeshVertexCommandChangeTarget* IMeshVertexCommandChangeTarget::GetDefaultObj()
{
	static class IMeshVertexCommandChangeTarget* Default = nullptr;

	if (!Default)
		Default = static_cast<IMeshVertexCommandChangeTarget*>(IMeshVertexCommandChangeTarget::StaticClass()->DefaultObject);

	return Default;
}


// Class GeometryFramework.DynamicMeshComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UDynamicMeshComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DynamicMeshComponent");

	return Clss;
}


// DynamicMeshComponent GeometryFramework.Default__DynamicMeshComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UDynamicMeshComponent* UDynamicMeshComponent::GetDefaultObj()
{
	static class UDynamicMeshComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UDynamicMeshComponent*>(UDynamicMeshComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryFramework.DynamicMeshComponent.ValidateMaterialSlots
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bCreateIfMissing                                                 (Edit, ExportObject, BlueprintReadOnly, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               bDeleteExtraSlots                                                (Edit, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UDynamicMeshComponent::ValidateMaterialSlots()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicMeshComponent", "ValidateMaterialSlots");

	Params::UDynamicMeshComponent_ValidateMaterialSlots_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryFramework.DynamicMeshComponent.UpdateCollision
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bOnlyIfPending                                                   (Edit, ExportObject, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

bool UDynamicMeshComponent::UpdateCollision()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicMeshComponent", "UpdateCollision");

	Params::UDynamicMeshComponent_UpdateCollision_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryFramework.DynamicMeshComponent.SetTangentsType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EDynamicMeshComponentTangentsModeNewTangentsType                                                  (EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

enum class EDynamicMeshComponentTangentsMode UDynamicMeshComponent::SetTangentsType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicMeshComponent", "SetTangentsType");

	Params::UDynamicMeshComponent_SetTangentsType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryFramework.DynamicMeshComponent.SetDynamicMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                NewMesh                                                          (Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UDynamicMeshComponent::SetDynamicMesh(class UDynamicMesh** NewMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicMeshComponent", "SetDynamicMesh");

	Params::UDynamicMeshComponent_SetDynamicMesh_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NewMesh != nullptr)
		*NewMesh = Parms.NewMesh;

}


// Function GeometryFramework.DynamicMeshComponent.SetDeferredCollisionUpdatesEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnabled                                                         (Edit, BlueprintVisible, ExportObject, Net, OutParm, Transient, EditConst, GlobalConfig)
// bool                               bImmediateUpdate                                                 (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

bool UDynamicMeshComponent::SetDeferredCollisionUpdatesEnabled(bool* bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicMeshComponent", "SetDeferredCollisionUpdatesEnabled");

	Params::UDynamicMeshComponent_SetDeferredCollisionUpdatesEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bEnabled != nullptr)
		*bEnabled = Parms.bEnabled;

	return Parms.ReturnValue;

}


// Function GeometryFramework.DynamicMeshComponent.SetComplexAsSimpleCollisionEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnabled                                                         (Edit, BlueprintVisible, ExportObject, Net, OutParm, Transient, EditConst, GlobalConfig)
// bool                               bImmediateUpdate                                                 (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

bool UDynamicMeshComponent::SetComplexAsSimpleCollisionEnabled(bool* bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicMeshComponent", "SetComplexAsSimpleCollisionEnabled");

	Params::UDynamicMeshComponent_SetComplexAsSimpleCollisionEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bEnabled != nullptr)
		*bEnabled = Parms.bEnabled;

	return Parms.ReturnValue;

}


// Function GeometryFramework.DynamicMeshComponent.GetTangentsType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EDynamicMeshComponentTangentsModeReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

enum class EDynamicMeshComponentTangentsMode UDynamicMeshComponent::GetTangentsType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicMeshComponent", "GetTangentsType");

	Params::UDynamicMeshComponent_GetTangentsType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryFramework.DynamicMeshComponent.EnableComplexAsSimpleCollision
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UDynamicMeshComponent::EnableComplexAsSimpleCollision()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicMeshComponent", "EnableComplexAsSimpleCollision");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GeometryFramework.DynamicMeshComponent.ConfigureMaterialSet
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class UMaterialInterface*>  NewMaterialSet                                                   (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

TArray<class UMaterialInterface*> UDynamicMeshComponent::ConfigureMaterialSet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicMeshComponent", "ConfigureMaterialSet");

	Params::UDynamicMeshComponent_ConfigureMaterialSet_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GeometryFramework.DynamicMeshActor
// (Actor)

class UClass* ADynamicMeshActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DynamicMeshActor");

	return Clss;
}


// DynamicMeshActor GeometryFramework.Default__DynamicMeshActor
// (Public, ClassDefaultObject, ArchetypeObject)

class ADynamicMeshActor* ADynamicMeshActor::GetDefaultObj()
{
	static class ADynamicMeshActor* Default = nullptr;

	if (!Default)
		Default = static_cast<ADynamicMeshActor*>(ADynamicMeshActor::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryFramework.DynamicMeshActor.ReleaseComputeMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                Mesh                                                             (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool ADynamicMeshActor::ReleaseComputeMesh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicMeshActor", "ReleaseComputeMesh");

	Params::ADynamicMeshActor_ReleaseComputeMesh_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryFramework.DynamicMeshActor.ReleaseAllComputeMeshes
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void ADynamicMeshActor::ReleaseAllComputeMeshes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicMeshActor", "ReleaseAllComputeMeshes");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GeometryFramework.DynamicMeshActor.GetDynamicMeshComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDynamicMeshComponent*       ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMeshComponent* ADynamicMeshActor::GetDynamicMeshComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicMeshActor", "GetDynamicMeshComponent");

	Params::ADynamicMeshActor_GetDynamicMeshComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryFramework.DynamicMeshActor.GetComputeMeshPool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDynamicMeshPool*            ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMeshPool* ADynamicMeshActor::GetComputeMeshPool()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicMeshActor", "GetComputeMeshPool");

	Params::ADynamicMeshActor_GetComputeMeshPool_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryFramework.DynamicMeshActor.FreeAllComputeMeshes
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void ADynamicMeshActor::FreeAllComputeMeshes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicMeshActor", "FreeAllComputeMeshes");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GeometryFramework.DynamicMeshActor.AllocateComputeMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* ADynamicMeshActor::AllocateComputeMesh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicMeshActor", "AllocateComputeMesh");

	Params::ADynamicMeshActor_AllocateComputeMesh_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GeometryFramework.DynamicMeshGenerator
// (None)

class UClass* UDynamicMeshGenerator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DynamicMeshGenerator");

	return Clss;
}


// DynamicMeshGenerator GeometryFramework.Default__DynamicMeshGenerator
// (Public, ClassDefaultObject, ArchetypeObject)

class UDynamicMeshGenerator* UDynamicMeshGenerator::GetDefaultObj()
{
	static class UDynamicMeshGenerator* Default = nullptr;

	if (!Default)
		Default = static_cast<UDynamicMeshGenerator*>(UDynamicMeshGenerator::StaticClass()->DefaultObject);

	return Default;
}


// Class GeometryFramework.DynamicMesh
// (None)

class UClass* UDynamicMesh::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DynamicMesh");

	return Clss;
}


// DynamicMesh GeometryFramework.Default__DynamicMesh
// (Public, ClassDefaultObject, ArchetypeObject)

class UDynamicMesh* UDynamicMesh::GetDefaultObj()
{
	static class UDynamicMesh* Default = nullptr;

	if (!Default)
		Default = static_cast<UDynamicMesh*>(UDynamicMesh::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryFramework.DynamicMesh.ResetToCube
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UDynamicMesh::ResetToCube()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicMesh", "ResetToCube");

	Params::UDynamicMesh_ResetToCube_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryFramework.DynamicMesh.Reset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UDynamicMesh::Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicMesh", "Reset");

	Params::UDynamicMesh_Reset_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryFramework.DynamicMesh.IsEmpty
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UDynamicMesh::IsEmpty()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicMesh", "IsEmpty");

	Params::UDynamicMesh_IsEmpty_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryFramework.DynamicMesh.GetTriangleCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UDynamicMesh::GetTriangleCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicMesh", "GetTriangleCount");

	Params::UDynamicMesh_GetTriangleCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GeometryFramework.DynamicMeshPool
// (None)

class UClass* UDynamicMeshPool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DynamicMeshPool");

	return Clss;
}


// DynamicMeshPool GeometryFramework.Default__DynamicMeshPool
// (Public, ClassDefaultObject, ArchetypeObject)

class UDynamicMeshPool* UDynamicMeshPool::GetDefaultObj()
{
	static class UDynamicMeshPool* Default = nullptr;

	if (!Default)
		Default = static_cast<UDynamicMeshPool*>(UDynamicMeshPool::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryFramework.DynamicMeshPool.ReturnMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                Mesh                                                             (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

class UDynamicMesh* UDynamicMeshPool::ReturnMesh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicMeshPool", "ReturnMesh");

	Params::UDynamicMeshPool_ReturnMesh_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryFramework.DynamicMeshPool.ReturnAllMeshes
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UDynamicMeshPool::ReturnAllMeshes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicMeshPool", "ReturnAllMeshes");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GeometryFramework.DynamicMeshPool.RequestMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDynamicMesh* UDynamicMeshPool::RequestMesh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicMeshPool", "RequestMesh");

	Params::UDynamicMeshPool_RequestMesh_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryFramework.DynamicMeshPool.FreeAllMeshes
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UDynamicMeshPool::FreeAllMeshes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicMeshPool", "FreeAllMeshes");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}

}



#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class Landscape.ControlPointMeshComponent
// (SceneComponent, PrimitiveComponent, StaticMeshComponent)

class UClass* UControlPointMeshComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ControlPointMeshComponent");

	return Clss;
}


// ControlPointMeshComponent Landscape.Default__ControlPointMeshComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UControlPointMeshComponent* UControlPointMeshComponent::GetDefaultObj()
{
	static class UControlPointMeshComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UControlPointMeshComponent*>(UControlPointMeshComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class Landscape.GroundClutterLayerActor
// (Actor)

class UClass* AGroundClutterLayerActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GroundClutterLayerActor");

	return Clss;
}


// GroundClutterLayerActor Landscape.Default__GroundClutterLayerActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AGroundClutterLayerActor* AGroundClutterLayerActor::GetDefaultObj()
{
	static class AGroundClutterLayerActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AGroundClutterLayerActor*>(AGroundClutterLayerActor::StaticClass()->DefaultObject);

	return Default;
}


// Class Landscape.GroundClutterComponent
// (SceneComponent, PrimitiveComponent, StaticMeshComponent)

class UClass* UGroundClutterComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GroundClutterComponent");

	return Clss;
}


// GroundClutterComponent Landscape.Default__GroundClutterComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UGroundClutterComponent* UGroundClutterComponent::GetDefaultObj()
{
	static class UGroundClutterComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UGroundClutterComponent*>(UGroundClutterComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class Landscape.CustomForceGrassVolume
// (Actor)

class UClass* ACustomForceGrassVolume::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CustomForceGrassVolume");

	return Clss;
}


// CustomForceGrassVolume Landscape.Default__CustomForceGrassVolume
// (Public, ClassDefaultObject, ArchetypeObject)

class ACustomForceGrassVolume* ACustomForceGrassVolume::GetDefaultObj()
{
	static class ACustomForceGrassVolume* Default = nullptr;

	if (!Default)
		Default = static_cast<ACustomForceGrassVolume*>(ACustomForceGrassVolume::StaticClass()->DefaultObject);

	return Default;
}


// Class Landscape.LandscapeSplineInterface
// (None)

class UClass* ILandscapeSplineInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LandscapeSplineInterface");

	return Clss;
}


// LandscapeSplineInterface Landscape.Default__LandscapeSplineInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class ILandscapeSplineInterface* ILandscapeSplineInterface::GetDefaultObj()
{
	static class ILandscapeSplineInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<ILandscapeSplineInterface*>(ILandscapeSplineInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class Landscape.LandscapeProxy
// (Actor)

class UClass* ALandscapeProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LandscapeProxy");

	return Clss;
}


// LandscapeProxy Landscape.Default__LandscapeProxy
// (Public, ClassDefaultObject, ArchetypeObject)

class ALandscapeProxy* ALandscapeProxy::GetDefaultObj()
{
	static class ALandscapeProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<ALandscapeProxy*>(ALandscapeProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function Landscape.LandscapeProxy.SetVirtualTextureRenderPassType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ERuntimeVirtualTextureMainPassTypeInType                                                           (Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

enum class ERuntimeVirtualTextureMainPassType ALandscapeProxy::SetVirtualTextureRenderPassType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LandscapeProxy", "SetVirtualTextureRenderPassType");

	Params::ALandscapeProxy_SetVirtualTextureRenderPassType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue
// (Final, RequiredAPI, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        ParameterName                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// struct FLinearColor                Value                                                            (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)

void ALandscapeProxy::SetLandscapeMaterialVectorParameterValue(class FName ParameterName, struct FLinearColor* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LandscapeProxy", "SetLandscapeMaterialVectorParameterValue");

	Params::ALandscapeProxy_SetLandscapeMaterialVectorParameterValue_Params Parms{};

	Parms.ParameterName = ParameterName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Value != nullptr)
		*Value = std::move(Parms.Value);

}


// Function Landscape.LandscapeProxy.SetLandscapeMaterialTextureParameterValue
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ParameterName                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// class UTexture*                    Value                                                            (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)

void ALandscapeProxy::SetLandscapeMaterialTextureParameterValue(class FName ParameterName, class UTexture** Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LandscapeProxy", "SetLandscapeMaterialTextureParameterValue");

	Params::ALandscapeProxy_SetLandscapeMaterialTextureParameterValue_Params Parms{};

	Parms.ParameterName = ParameterName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function Landscape.LandscapeProxy.SetLandscapeMaterialScalarParameterValue
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ParameterName                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// float                              Value                                                            (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)

void ALandscapeProxy::SetLandscapeMaterialScalarParameterValue(class FName ParameterName, float* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LandscapeProxy", "SetLandscapeMaterialScalarParameterValue");

	Params::ALandscapeProxy_SetLandscapeMaterialScalarParameterValue_Params Parms{};

	Parms.ParameterName = ParameterName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function Landscape.LandscapeProxy.LandscapeExportHeightmapToRenderTarget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTextureRenderTarget2D*      InRenderTarget                                                   (Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
// bool                               InExportHeightIntoRGChannel                                      (ConstParm, ExportObject, EditFixedSize, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               InExportLandscapeProxies                                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void ALandscapeProxy::LandscapeExportHeightmapToRenderTarget(class UTextureRenderTarget2D** InRenderTarget, bool InExportHeightIntoRGChannel, bool InExportLandscapeProxies, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LandscapeProxy", "LandscapeExportHeightmapToRenderTarget");

	Params::ALandscapeProxy_LandscapeExportHeightmapToRenderTarget_Params Parms{};

	Parms.InExportHeightIntoRGChannel = InExportHeightIntoRGChannel;
	Parms.InExportLandscapeProxies = InExportLandscapeProxies;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InRenderTarget != nullptr)
		*InRenderTarget = Parms.InRenderTarget;

}


// Function Landscape.LandscapeProxy.GetLandscapeActor
// (Native, Public, BlueprintCallable)
// Parameters:
// class ALandscape*                  ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void ALandscapeProxy::GetLandscapeActor(class ALandscape* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LandscapeProxy", "GetLandscapeActor");

	Params::ALandscapeProxy_GetLandscapeActor_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Landscape.LandscapeProxy.EditorSetLandscapeMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*          NewLandscapeMaterial                                             (ConstParm, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void ALandscapeProxy::EditorSetLandscapeMaterial(class UMaterialInterface* NewLandscapeMaterial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LandscapeProxy", "EditorSetLandscapeMaterial");

	Params::ALandscapeProxy_EditorSetLandscapeMaterial_Params Parms{};

	Parms.NewLandscapeMaterial = NewLandscapeMaterial;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Landscape.LandscapeProxy.EditorApplySpline
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class USplineComponent*            InSplineComponent                                                (ExportObject, Net, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              StartWidth                                                       (ConstParm, Net, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              EndWidth                                                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              StartSideFalloff                                                 (BlueprintVisible, BlueprintReadOnly, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              EndSideFalloff                                                   (BlueprintVisible, ExportObject, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              StartRoll                                                        (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// float                              EndRoll                                                          (Edit, BlueprintVisible, Net, EditFixedSize, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              NumSubdivisions                                                  (Edit, ConstParm, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// bool                               bRaiseHeights                                                    (BlueprintVisible, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               bLowerHeights                                                    (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class ULandscapeLayerInfoObject*   PaintLayer                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class FName                        EditLayerName                                                    (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

class FName ALandscapeProxy::EditorApplySpline(class USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, bool bRaiseHeights)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LandscapeProxy", "EditorApplySpline");

	Params::ALandscapeProxy_EditorApplySpline_Params Parms{};

	Parms.InSplineComponent = InSplineComponent;
	Parms.StartWidth = StartWidth;
	Parms.EndWidth = EndWidth;
	Parms.StartSideFalloff = StartSideFalloff;
	Parms.EndSideFalloff = EndSideFalloff;
	Parms.StartRoll = StartRoll;
	Parms.EndRoll = EndRoll;
	Parms.bRaiseHeights = bRaiseHeights;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Landscape.LandscapeProxy.ChangeLODDistanceFactor
// (Native, Public, BlueprintCallable)
// Parameters:
// float                              InLODDistanceFactor                                              (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

float ALandscapeProxy::ChangeLODDistanceFactor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LandscapeProxy", "ChangeLODDistanceFactor");

	Params::ALandscapeProxy_ChangeLODDistanceFactor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Landscape.LandscapeProxy.ChangeComponentScreenSizeToUseSubSections
// (Native, Public, BlueprintCallable)
// Parameters:
// float                              InComponentScreenSizeToUseSubSections                            (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

float ALandscapeProxy::ChangeComponentScreenSizeToUseSubSections()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LandscapeProxy", "ChangeComponentScreenSizeToUseSubSections");

	Params::ALandscapeProxy_ChangeComponentScreenSizeToUseSubSections_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Landscape.Landscape
// (Actor)

class UClass* ALandscape::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Landscape");

	return Clss;
}


// Landscape Landscape.Default__Landscape
// (Public, ClassDefaultObject, ArchetypeObject)

class ALandscape* ALandscape::GetDefaultObj()
{
	static class ALandscape* Default = nullptr;

	if (!Default)
		Default = static_cast<ALandscape*>(ALandscape::StaticClass()->DefaultObject);

	return Default;
}


// Function Landscape.Landscape.RenderHeightmap
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform                  InWorldTransform                                                 (ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FBox2D                      InExtents                                                        (Edit, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// class UTextureRenderTarget2D*      OutRenderTarget                                                  (Edit, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void ALandscape::RenderHeightmap(const struct FTransform& InWorldTransform, const struct FBox2D& InExtents, class UTextureRenderTarget2D* OutRenderTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Landscape", "RenderHeightmap");

	Params::ALandscape_RenderHeightmap_Params Parms{};

	Parms.InWorldTransform = InWorldTransform;
	Parms.InExtents = InExtents;
	Parms.OutRenderTarget = OutRenderTarget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Landscape.LandscapeLODStreamingProxy_DEPRECATED
// (None)

class UClass* ULandscapeLODStreamingProxy_DEPRECATED::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LandscapeLODStreamingProxy_DEPRECATED");

	return Clss;
}


// LandscapeLODStreamingProxy_DEPRECATED Landscape.Default__LandscapeLODStreamingProxy_DEPRECATED
// (Public, ClassDefaultObject, ArchetypeObject)

class ULandscapeLODStreamingProxy_DEPRECATED* ULandscapeLODStreamingProxy_DEPRECATED::GetDefaultObj()
{
	static class ULandscapeLODStreamingProxy_DEPRECATED* Default = nullptr;

	if (!Default)
		Default = static_cast<ULandscapeLODStreamingProxy_DEPRECATED*>(ULandscapeLODStreamingProxy_DEPRECATED::StaticClass()->DefaultObject);

	return Default;
}


// Class Landscape.LandscapeComponent
// (SceneComponent, PrimitiveComponent)

class UClass* ULandscapeComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LandscapeComponent");

	return Clss;
}


// LandscapeComponent Landscape.Default__LandscapeComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class ULandscapeComponent* ULandscapeComponent::GetDefaultObj()
{
	static class ULandscapeComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<ULandscapeComponent*>(ULandscapeComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function Landscape.LandscapeComponent.SetLODBias
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InLODBias                                                        (Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void ULandscapeComponent::SetLODBias(int32 InLODBias)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LandscapeComponent", "SetLODBias");

	Params::ULandscapeComponent_SetLODBias_Params Parms{};

	Parms.InLODBias = InLODBias;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Landscape.LandscapeComponent.SetForcedLOD
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InForcedLOD                                                      (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void ULandscapeComponent::SetForcedLOD(int32 InForcedLOD)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LandscapeComponent", "SetForcedLOD");

	Params::ULandscapeComponent_SetForcedLOD_Params Parms{};

	Parms.InForcedLOD = InForcedLOD;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Landscape.LandscapeComponent.GetMaterialInstanceDynamic
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              InIndex                                                          (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class UMaterialInstanceDynamic*    ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void ULandscapeComponent::GetMaterialInstanceDynamic(int32* InIndex, class UMaterialInstanceDynamic* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LandscapeComponent", "GetMaterialInstanceDynamic");

	Params::ULandscapeComponent_GetMaterialInstanceDynamic_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InIndex != nullptr)
		*InIndex = Parms.InIndex;

}


// Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightByNameAtLocation
// (Final, RequiredAPI, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     InLocation                                                       (EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class FName                        InPaintLayerName                                                 (Edit, ConstParm, Net, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void ULandscapeComponent::EditorGetPaintLayerWeightByNameAtLocation(struct FVector* InLocation, class FName InPaintLayerName, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LandscapeComponent", "EditorGetPaintLayerWeightByNameAtLocation");

	Params::ULandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation_Params Parms{};

	Parms.InPaintLayerName = InPaintLayerName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InLocation != nullptr)
		*InLocation = std::move(Parms.InLocation);

}


// Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightAtLocation
// (Final, RequiredAPI, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     InLocation                                                       (EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class ULandscapeLayerInfoObject*   PaintLayer                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class ULandscapeLayerInfoObject* ULandscapeComponent::EditorGetPaintLayerWeightAtLocation(struct FVector* InLocation, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LandscapeComponent", "EditorGetPaintLayerWeightAtLocation");

	Params::ULandscapeComponent_EditorGetPaintLayerWeightAtLocation_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InLocation != nullptr)
		*InLocation = std::move(Parms.InLocation);

	return Parms.ReturnValue;

}


// Class Landscape.LandscapeGizmoActor
// (Actor)

class UClass* ALandscapeGizmoActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LandscapeGizmoActor");

	return Clss;
}


// LandscapeGizmoActor Landscape.Default__LandscapeGizmoActor
// (Public, ClassDefaultObject, ArchetypeObject)

class ALandscapeGizmoActor* ALandscapeGizmoActor::GetDefaultObj()
{
	static class ALandscapeGizmoActor* Default = nullptr;

	if (!Default)
		Default = static_cast<ALandscapeGizmoActor*>(ALandscapeGizmoActor::StaticClass()->DefaultObject);

	return Default;
}


// Class Landscape.LandscapeGizmoActiveActor
// (Actor)

class UClass* ALandscapeGizmoActiveActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LandscapeGizmoActiveActor");

	return Clss;
}


// LandscapeGizmoActiveActor Landscape.Default__LandscapeGizmoActiveActor
// (Public, ClassDefaultObject, ArchetypeObject)

class ALandscapeGizmoActiveActor* ALandscapeGizmoActiveActor::GetDefaultObj()
{
	static class ALandscapeGizmoActiveActor* Default = nullptr;

	if (!Default)
		Default = static_cast<ALandscapeGizmoActiveActor*>(ALandscapeGizmoActiveActor::StaticClass()->DefaultObject);

	return Default;
}


// Class Landscape.LandscapeGizmoRenderComponent
// (SceneComponent, PrimitiveComponent)

class UClass* ULandscapeGizmoRenderComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LandscapeGizmoRenderComponent");

	return Clss;
}


// LandscapeGizmoRenderComponent Landscape.Default__LandscapeGizmoRenderComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class ULandscapeGizmoRenderComponent* ULandscapeGizmoRenderComponent::GetDefaultObj()
{
	static class ULandscapeGizmoRenderComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<ULandscapeGizmoRenderComponent*>(ULandscapeGizmoRenderComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class Landscape.LandscapeGrassType
// (None)

class UClass* ULandscapeGrassType::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LandscapeGrassType");

	return Clss;
}


// LandscapeGrassType Landscape.Default__LandscapeGrassType
// (Public, ClassDefaultObject, ArchetypeObject)

class ULandscapeGrassType* ULandscapeGrassType::GetDefaultObj()
{
	static class ULandscapeGrassType* Default = nullptr;

	if (!Default)
		Default = static_cast<ULandscapeGrassType*>(ULandscapeGrassType::StaticClass()->DefaultObject);

	return Default;
}


// Class Landscape.LandscapeHeightfieldCollisionComponent
// (SceneComponent, PrimitiveComponent)

class UClass* ULandscapeHeightfieldCollisionComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LandscapeHeightfieldCollisionComponent");

	return Clss;
}


// LandscapeHeightfieldCollisionComponent Landscape.Default__LandscapeHeightfieldCollisionComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class ULandscapeHeightfieldCollisionComponent* ULandscapeHeightfieldCollisionComponent::GetDefaultObj()
{
	static class ULandscapeHeightfieldCollisionComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<ULandscapeHeightfieldCollisionComponent*>(ULandscapeHeightfieldCollisionComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function Landscape.LandscapeHeightfieldCollisionComponent.GetRenderComponent
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULandscapeComponent*         ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void ULandscapeHeightfieldCollisionComponent::GetRenderComponent(class ULandscapeComponent* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LandscapeHeightfieldCollisionComponent", "GetRenderComponent");

	Params::ULandscapeHeightfieldCollisionComponent_GetRenderComponent_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Landscape.LandscapeLayerInfoObject
// (None)

class UClass* ULandscapeLayerInfoObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LandscapeLayerInfoObject");

	return Clss;
}


// LandscapeLayerInfoObject Landscape.Default__LandscapeLayerInfoObject
// (Public, ClassDefaultObject, ArchetypeObject)

class ULandscapeLayerInfoObject* ULandscapeLayerInfoObject::GetDefaultObj()
{
	static class ULandscapeLayerInfoObject* Default = nullptr;

	if (!Default)
		Default = static_cast<ULandscapeLayerInfoObject*>(ULandscapeLayerInfoObject::StaticClass()->DefaultObject);

	return Default;
}


// Class Landscape.LandscapeMaterialInstanceConstant
// (None)

class UClass* ULandscapeMaterialInstanceConstant::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LandscapeMaterialInstanceConstant");

	return Clss;
}


// LandscapeMaterialInstanceConstant Landscape.Default__LandscapeMaterialInstanceConstant
// (Public, ClassDefaultObject, ArchetypeObject)

class ULandscapeMaterialInstanceConstant* ULandscapeMaterialInstanceConstant::GetDefaultObj()
{
	static class ULandscapeMaterialInstanceConstant* Default = nullptr;

	if (!Default)
		Default = static_cast<ULandscapeMaterialInstanceConstant*>(ULandscapeMaterialInstanceConstant::StaticClass()->DefaultObject);

	return Default;
}


// Class Landscape.LandscapeMeshCollisionComponent
// (SceneComponent, PrimitiveComponent)

class UClass* ULandscapeMeshCollisionComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LandscapeMeshCollisionComponent");

	return Clss;
}


// LandscapeMeshCollisionComponent Landscape.Default__LandscapeMeshCollisionComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class ULandscapeMeshCollisionComponent* ULandscapeMeshCollisionComponent::GetDefaultObj()
{
	static class ULandscapeMeshCollisionComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<ULandscapeMeshCollisionComponent*>(ULandscapeMeshCollisionComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class Landscape.LandscapeMeshProxyActor
// (Actor)

class UClass* ALandscapeMeshProxyActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LandscapeMeshProxyActor");

	return Clss;
}


// LandscapeMeshProxyActor Landscape.Default__LandscapeMeshProxyActor
// (Public, ClassDefaultObject, ArchetypeObject)

class ALandscapeMeshProxyActor* ALandscapeMeshProxyActor::GetDefaultObj()
{
	static class ALandscapeMeshProxyActor* Default = nullptr;

	if (!Default)
		Default = static_cast<ALandscapeMeshProxyActor*>(ALandscapeMeshProxyActor::StaticClass()->DefaultObject);

	return Default;
}


// Class Landscape.LandscapeMeshProxyComponent
// (SceneComponent, PrimitiveComponent, StaticMeshComponent)

class UClass* ULandscapeMeshProxyComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LandscapeMeshProxyComponent");

	return Clss;
}


// LandscapeMeshProxyComponent Landscape.Default__LandscapeMeshProxyComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class ULandscapeMeshProxyComponent* ULandscapeMeshProxyComponent::GetDefaultObj()
{
	static class ULandscapeMeshProxyComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<ULandscapeMeshProxyComponent*>(ULandscapeMeshProxyComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class Landscape.LandscapeSettings
// (None)

class UClass* ULandscapeSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LandscapeSettings");

	return Clss;
}


// LandscapeSettings Landscape.Default__LandscapeSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class ULandscapeSettings* ULandscapeSettings::GetDefaultObj()
{
	static class ULandscapeSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<ULandscapeSettings*>(ULandscapeSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class Landscape.LandscapeSplinesComponent
// (SceneComponent, PrimitiveComponent)

class UClass* ULandscapeSplinesComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LandscapeSplinesComponent");

	return Clss;
}


// LandscapeSplinesComponent Landscape.Default__LandscapeSplinesComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class ULandscapeSplinesComponent* ULandscapeSplinesComponent::GetDefaultObj()
{
	static class ULandscapeSplinesComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<ULandscapeSplinesComponent*>(ULandscapeSplinesComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function Landscape.LandscapeSplinesComponent.GetSplineMeshComponents
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class USplineMeshComponent*>ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void ULandscapeSplinesComponent::GetSplineMeshComponents(const TArray<class USplineMeshComponent*>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LandscapeSplinesComponent", "GetSplineMeshComponents");

	Params::ULandscapeSplinesComponent_GetSplineMeshComponents_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Landscape.LandscapeSplineControlPoint
// (None)

class UClass* ULandscapeSplineControlPoint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LandscapeSplineControlPoint");

	return Clss;
}


// LandscapeSplineControlPoint Landscape.Default__LandscapeSplineControlPoint
// (Public, ClassDefaultObject, ArchetypeObject)

class ULandscapeSplineControlPoint* ULandscapeSplineControlPoint::GetDefaultObj()
{
	static class ULandscapeSplineControlPoint* Default = nullptr;

	if (!Default)
		Default = static_cast<ULandscapeSplineControlPoint*>(ULandscapeSplineControlPoint::StaticClass()->DefaultObject);

	return Default;
}


// Class Landscape.LandscapeSplineSegment
// (None)

class UClass* ULandscapeSplineSegment::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LandscapeSplineSegment");

	return Clss;
}


// LandscapeSplineSegment Landscape.Default__LandscapeSplineSegment
// (Public, ClassDefaultObject, ArchetypeObject)

class ULandscapeSplineSegment* ULandscapeSplineSegment::GetDefaultObj()
{
	static class ULandscapeSplineSegment* Default = nullptr;

	if (!Default)
		Default = static_cast<ULandscapeSplineSegment*>(ULandscapeSplineSegment::StaticClass()->DefaultObject);

	return Default;
}


// Class Landscape.LandscapeStreamingProxy
// (Actor)

class UClass* ALandscapeStreamingProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LandscapeStreamingProxy");

	return Clss;
}


// LandscapeStreamingProxy Landscape.Default__LandscapeStreamingProxy
// (Public, ClassDefaultObject, ArchetypeObject)

class ALandscapeStreamingProxy* ALandscapeStreamingProxy::GetDefaultObj()
{
	static class ALandscapeStreamingProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<ALandscapeStreamingProxy*>(ALandscapeStreamingProxy::StaticClass()->DefaultObject);

	return Default;
}


// Class Landscape.LandscapeWeightmapUsage
// (None)

class UClass* ULandscapeWeightmapUsage::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LandscapeWeightmapUsage");

	return Clss;
}


// LandscapeWeightmapUsage Landscape.Default__LandscapeWeightmapUsage
// (Public, ClassDefaultObject, ArchetypeObject)

class ULandscapeWeightmapUsage* ULandscapeWeightmapUsage::GetDefaultObj()
{
	static class ULandscapeWeightmapUsage* Default = nullptr;

	if (!Default)
		Default = static_cast<ULandscapeWeightmapUsage*>(ULandscapeWeightmapUsage::StaticClass()->DefaultObject);

	return Default;
}


// Class Landscape.MaterialExpressionLandscapeGrassOutput
// (None)

class UClass* UMaterialExpressionLandscapeGrassOutput::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MaterialExpressionLandscapeGrassOutput");

	return Clss;
}


// MaterialExpressionLandscapeGrassOutput Landscape.Default__MaterialExpressionLandscapeGrassOutput
// (Public, ClassDefaultObject, ArchetypeObject)

class UMaterialExpressionLandscapeGrassOutput* UMaterialExpressionLandscapeGrassOutput::GetDefaultObj()
{
	static class UMaterialExpressionLandscapeGrassOutput* Default = nullptr;

	if (!Default)
		Default = static_cast<UMaterialExpressionLandscapeGrassOutput*>(UMaterialExpressionLandscapeGrassOutput::StaticClass()->DefaultObject);

	return Default;
}


// Class Landscape.MaterialExpressionLandscapeLayerBlend
// (None)

class UClass* UMaterialExpressionLandscapeLayerBlend::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MaterialExpressionLandscapeLayerBlend");

	return Clss;
}


// MaterialExpressionLandscapeLayerBlend Landscape.Default__MaterialExpressionLandscapeLayerBlend
// (Public, ClassDefaultObject, ArchetypeObject)

class UMaterialExpressionLandscapeLayerBlend* UMaterialExpressionLandscapeLayerBlend::GetDefaultObj()
{
	static class UMaterialExpressionLandscapeLayerBlend* Default = nullptr;

	if (!Default)
		Default = static_cast<UMaterialExpressionLandscapeLayerBlend*>(UMaterialExpressionLandscapeLayerBlend::StaticClass()->DefaultObject);

	return Default;
}


// Class Landscape.MaterialExpressionLandscapeLayerCoords
// (None)

class UClass* UMaterialExpressionLandscapeLayerCoords::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MaterialExpressionLandscapeLayerCoords");

	return Clss;
}


// MaterialExpressionLandscapeLayerCoords Landscape.Default__MaterialExpressionLandscapeLayerCoords
// (Public, ClassDefaultObject, ArchetypeObject)

class UMaterialExpressionLandscapeLayerCoords* UMaterialExpressionLandscapeLayerCoords::GetDefaultObj()
{
	static class UMaterialExpressionLandscapeLayerCoords* Default = nullptr;

	if (!Default)
		Default = static_cast<UMaterialExpressionLandscapeLayerCoords*>(UMaterialExpressionLandscapeLayerCoords::StaticClass()->DefaultObject);

	return Default;
}


// Class Landscape.ControlPointMeshActor
// (Actor)

class UClass* AControlPointMeshActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ControlPointMeshActor");

	return Clss;
}


// ControlPointMeshActor Landscape.Default__ControlPointMeshActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AControlPointMeshActor* AControlPointMeshActor::GetDefaultObj()
{
	static class AControlPointMeshActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AControlPointMeshActor*>(AControlPointMeshActor::StaticClass()->DefaultObject);

	return Default;
}


// Class Landscape.LandscapeBlueprintBrushBase
// (Actor)

class UClass* ALandscapeBlueprintBrushBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LandscapeBlueprintBrushBase");

	return Clss;
}


// LandscapeBlueprintBrushBase Landscape.Default__LandscapeBlueprintBrushBase
// (Public, ClassDefaultObject, ArchetypeObject)

class ALandscapeBlueprintBrushBase* ALandscapeBlueprintBrushBase::GetDefaultObj()
{
	static class ALandscapeBlueprintBrushBase* Default = nullptr;

	if (!Default)
		Default = static_cast<ALandscapeBlueprintBrushBase*>(ALandscapeBlueprintBrushBase::StaticClass()->DefaultObject);

	return Default;
}


// Function Landscape.LandscapeBlueprintBrushBase.RequestLandscapeUpdate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInUserTriggered                                                 (BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

bool ALandscapeBlueprintBrushBase::RequestLandscapeUpdate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LandscapeBlueprintBrushBase", "RequestLandscapeUpdate");

	Params::ALandscapeBlueprintBrushBase_RequestLandscapeUpdate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Landscape.LandscapeBlueprintBrushBase.Render
// (Native, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// bool                               InIsHeightmap                                                    (BlueprintVisible, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UTextureRenderTarget2D*      InCombinedResult                                                 (Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class FName                        InWeightmapLayerName                                             (BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UTextureRenderTarget2D*      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class FName ALandscapeBlueprintBrushBase::Render(class UTextureRenderTarget2D* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LandscapeBlueprintBrushBase", "Render");

	Params::ALandscapeBlueprintBrushBase_Render_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Landscape.LandscapeBlueprintBrushBase.Initialize
// (Native, Event, Public, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// struct FTransform                  InLandscapeTransform                                             (Edit, BlueprintVisible, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FIntPoint                   InLandscapeSize                                                  (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FIntPoint                   InLandscapeRenderTargetSize                                      (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

struct FIntPoint ALandscapeBlueprintBrushBase::Initialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LandscapeBlueprintBrushBase", "Initialize");

	Params::ALandscapeBlueprintBrushBase_Initialize_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Landscape.LandscapeBlueprintBrushBase.GetBlueprintRenderDependencies
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<class UObject*>             OutStreamableAssets                                              (ConstParm, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

TArray<class UObject*> ALandscapeBlueprintBrushBase::GetBlueprintRenderDependencies()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LandscapeBlueprintBrushBase", "GetBlueprintRenderDependencies");

	Params::ALandscapeBlueprintBrushBase_GetBlueprintRenderDependencies_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Class Landscape.LandscapeHLODBuilder
// (None)

class UClass* ULandscapeHLODBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LandscapeHLODBuilder");

	return Clss;
}


// LandscapeHLODBuilder Landscape.Default__LandscapeHLODBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class ULandscapeHLODBuilder* ULandscapeHLODBuilder::GetDefaultObj()
{
	static class ULandscapeHLODBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<ULandscapeHLODBuilder*>(ULandscapeHLODBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class Landscape.LandscapeInfo
// (None)

class UClass* ULandscapeInfo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LandscapeInfo");

	return Clss;
}


// LandscapeInfo Landscape.Default__LandscapeInfo
// (Public, ClassDefaultObject, ArchetypeObject)

class ULandscapeInfo* ULandscapeInfo::GetDefaultObj()
{
	static class ULandscapeInfo* Default = nullptr;

	if (!Default)
		Default = static_cast<ULandscapeInfo*>(ULandscapeInfo::StaticClass()->DefaultObject);

	return Default;
}


// Class Landscape.LandscapeInfoMap
// (None)

class UClass* ULandscapeInfoMap::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LandscapeInfoMap");

	return Clss;
}


// LandscapeInfoMap Landscape.Default__LandscapeInfoMap
// (Public, ClassDefaultObject, ArchetypeObject)

class ULandscapeInfoMap* ULandscapeInfoMap::GetDefaultObj()
{
	static class ULandscapeInfoMap* Default = nullptr;

	if (!Default)
		Default = static_cast<ULandscapeInfoMap*>(ULandscapeInfoMap::StaticClass()->DefaultObject);

	return Default;
}


// Class Landscape.LandscapeNaniteComponent
// (SceneComponent, PrimitiveComponent, StaticMeshComponent)

class UClass* ULandscapeNaniteComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LandscapeNaniteComponent");

	return Clss;
}


// LandscapeNaniteComponent Landscape.Default__LandscapeNaniteComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class ULandscapeNaniteComponent* ULandscapeNaniteComponent::GetDefaultObj()
{
	static class ULandscapeNaniteComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<ULandscapeNaniteComponent*>(ULandscapeNaniteComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class Landscape.LandscapeSplineActor
// (Actor)

class UClass* ALandscapeSplineActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LandscapeSplineActor");

	return Clss;
}


// LandscapeSplineActor Landscape.Default__LandscapeSplineActor
// (Public, ClassDefaultObject, ArchetypeObject)

class ALandscapeSplineActor* ALandscapeSplineActor::GetDefaultObj()
{
	static class ALandscapeSplineActor* Default = nullptr;

	if (!Default)
		Default = static_cast<ALandscapeSplineActor*>(ALandscapeSplineActor::StaticClass()->DefaultObject);

	return Default;
}


// Class Landscape.LandscapeSplineMeshesActor
// (Actor)

class UClass* ALandscapeSplineMeshesActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LandscapeSplineMeshesActor");

	return Clss;
}


// LandscapeSplineMeshesActor Landscape.Default__LandscapeSplineMeshesActor
// (Public, ClassDefaultObject, ArchetypeObject)

class ALandscapeSplineMeshesActor* ALandscapeSplineMeshesActor::GetDefaultObj()
{
	static class ALandscapeSplineMeshesActor* Default = nullptr;

	if (!Default)
		Default = static_cast<ALandscapeSplineMeshesActor*>(ALandscapeSplineMeshesActor::StaticClass()->DefaultObject);

	return Default;
}


// Class Landscape.LandscapeSubsystem
// (None)

class UClass* ULandscapeSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LandscapeSubsystem");

	return Clss;
}


// LandscapeSubsystem Landscape.Default__LandscapeSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class ULandscapeSubsystem* ULandscapeSubsystem::GetDefaultObj()
{
	static class ULandscapeSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<ULandscapeSubsystem*>(ULandscapeSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Class Landscape.MaterialExpressionLandscapeLayerSample
// (None)

class UClass* UMaterialExpressionLandscapeLayerSample::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MaterialExpressionLandscapeLayerSample");

	return Clss;
}


// MaterialExpressionLandscapeLayerSample Landscape.Default__MaterialExpressionLandscapeLayerSample
// (Public, ClassDefaultObject, ArchetypeObject)

class UMaterialExpressionLandscapeLayerSample* UMaterialExpressionLandscapeLayerSample::GetDefaultObj()
{
	static class UMaterialExpressionLandscapeLayerSample* Default = nullptr;

	if (!Default)
		Default = static_cast<UMaterialExpressionLandscapeLayerSample*>(UMaterialExpressionLandscapeLayerSample::StaticClass()->DefaultObject);

	return Default;
}


// Class Landscape.MaterialExpressionLandscapeLayerSwitch
// (None)

class UClass* UMaterialExpressionLandscapeLayerSwitch::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MaterialExpressionLandscapeLayerSwitch");

	return Clss;
}


// MaterialExpressionLandscapeLayerSwitch Landscape.Default__MaterialExpressionLandscapeLayerSwitch
// (Public, ClassDefaultObject, ArchetypeObject)

class UMaterialExpressionLandscapeLayerSwitch* UMaterialExpressionLandscapeLayerSwitch::GetDefaultObj()
{
	static class UMaterialExpressionLandscapeLayerSwitch* Default = nullptr;

	if (!Default)
		Default = static_cast<UMaterialExpressionLandscapeLayerSwitch*>(UMaterialExpressionLandscapeLayerSwitch::StaticClass()->DefaultObject);

	return Default;
}


// Class Landscape.MaterialExpressionLandscapeLayerWeight
// (None)

class UClass* UMaterialExpressionLandscapeLayerWeight::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MaterialExpressionLandscapeLayerWeight");

	return Clss;
}


// MaterialExpressionLandscapeLayerWeight Landscape.Default__MaterialExpressionLandscapeLayerWeight
// (Public, ClassDefaultObject, ArchetypeObject)

class UMaterialExpressionLandscapeLayerWeight* UMaterialExpressionLandscapeLayerWeight::GetDefaultObj()
{
	static class UMaterialExpressionLandscapeLayerWeight* Default = nullptr;

	if (!Default)
		Default = static_cast<UMaterialExpressionLandscapeLayerWeight*>(UMaterialExpressionLandscapeLayerWeight::StaticClass()->DefaultObject);

	return Default;
}


// Class Landscape.MaterialExpressionLandscapePhysicalMaterialOutput
// (None)

class UClass* UMaterialExpressionLandscapePhysicalMaterialOutput::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MaterialExpressionLandscapePhysicalMaterialOutput");

	return Clss;
}


// MaterialExpressionLandscapePhysicalMaterialOutput Landscape.Default__MaterialExpressionLandscapePhysicalMaterialOutput
// (Public, ClassDefaultObject, ArchetypeObject)

class UMaterialExpressionLandscapePhysicalMaterialOutput* UMaterialExpressionLandscapePhysicalMaterialOutput::GetDefaultObj()
{
	static class UMaterialExpressionLandscapePhysicalMaterialOutput* Default = nullptr;

	if (!Default)
		Default = static_cast<UMaterialExpressionLandscapePhysicalMaterialOutput*>(UMaterialExpressionLandscapePhysicalMaterialOutput::StaticClass()->DefaultObject);

	return Default;
}


// Class Landscape.MaterialExpressionLandscapeVisibilityMask
// (None)

class UClass* UMaterialExpressionLandscapeVisibilityMask::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MaterialExpressionLandscapeVisibilityMask");

	return Clss;
}


// MaterialExpressionLandscapeVisibilityMask Landscape.Default__MaterialExpressionLandscapeVisibilityMask
// (Public, ClassDefaultObject, ArchetypeObject)

class UMaterialExpressionLandscapeVisibilityMask* UMaterialExpressionLandscapeVisibilityMask::GetDefaultObj()
{
	static class UMaterialExpressionLandscapeVisibilityMask* Default = nullptr;

	if (!Default)
		Default = static_cast<UMaterialExpressionLandscapeVisibilityMask*>(UMaterialExpressionLandscapeVisibilityMask::StaticClass()->DefaultObject);

	return Default;
}

}



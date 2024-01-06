#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class CustomMeshComponent.CustomMeshComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UCustomMeshComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CustomMeshComponent");

	return Clss;
}


// CustomMeshComponent CustomMeshComponent.Default__CustomMeshComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UCustomMeshComponent* UCustomMeshComponent::GetDefaultObj()
{
	static class UCustomMeshComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UCustomMeshComponent*>(UCustomMeshComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function CustomMeshComponent.CustomMeshComponent.SetCustomMeshTriangles
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FCustomMeshTriangle> Triangles                                                        (EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<struct FCustomMeshTriangle> UCustomMeshComponent::SetCustomMeshTriangles(bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomMeshComponent", "SetCustomMeshTriangles");

	Params::UCustomMeshComponent_SetCustomMeshTriangles_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function CustomMeshComponent.CustomMeshComponent.ClearCustomMeshTriangles
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCustomMeshComponent::ClearCustomMeshTriangles()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomMeshComponent", "ClearCustomMeshTriangles");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CustomMeshComponent.CustomMeshComponent.AddCustomMeshTriangles
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FCustomMeshTriangle> Triangles                                                        (EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst)

TArray<struct FCustomMeshTriangle> UCustomMeshComponent::AddCustomMeshTriangles()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomMeshComponent", "AddCustomMeshTriangles");

	Params::UCustomMeshComponent_AddCustomMeshTriangles_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}



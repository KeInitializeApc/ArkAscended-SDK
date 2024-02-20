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
// TArray<struct FCustomMeshTriangle> Triangles                                                        (Edit, BlueprintVisible, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UCustomMeshComponent::SetCustomMeshTriangles(TArray<struct FCustomMeshTriangle>* Triangles, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomMeshComponent", "SetCustomMeshTriangles");

	Params::UCustomMeshComponent_SetCustomMeshTriangles_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Triangles != nullptr)
		*Triangles = std::move(Parms.Triangles);

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
// TArray<struct FCustomMeshTriangle> Triangles                                                        (Edit, BlueprintVisible, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)

void UCustomMeshComponent::AddCustomMeshTriangles(TArray<struct FCustomMeshTriangle>* Triangles)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomMeshComponent", "AddCustomMeshTriangles");

	Params::UCustomMeshComponent_AddCustomMeshTriangles_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Triangles != nullptr)
		*Triangles = std::move(Parms.Triangles);

}

}



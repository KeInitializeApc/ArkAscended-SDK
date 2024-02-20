#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class VirtualHeightfieldMesh.HeightfieldMinMaxTexture
// (None)

class UClass* UHeightfieldMinMaxTexture::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HeightfieldMinMaxTexture");

	return Clss;
}


// HeightfieldMinMaxTexture VirtualHeightfieldMesh.Default__HeightfieldMinMaxTexture
// (Public, ClassDefaultObject, ArchetypeObject)

class UHeightfieldMinMaxTexture* UHeightfieldMinMaxTexture::GetDefaultObj()
{
	static class UHeightfieldMinMaxTexture* Default = nullptr;

	if (!Default)
		Default = static_cast<UHeightfieldMinMaxTexture*>(UHeightfieldMinMaxTexture::StaticClass()->DefaultObject);

	return Default;
}


// Class VirtualHeightfieldMesh.MaterialExpressionHeightfieldMinMaxTexture
// (None)

class UClass* UMaterialExpressionHeightfieldMinMaxTexture::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MaterialExpressionHeightfieldMinMaxTexture");

	return Clss;
}


// MaterialExpressionHeightfieldMinMaxTexture VirtualHeightfieldMesh.Default__MaterialExpressionHeightfieldMinMaxTexture
// (Public, ClassDefaultObject, ArchetypeObject)

class UMaterialExpressionHeightfieldMinMaxTexture* UMaterialExpressionHeightfieldMinMaxTexture::GetDefaultObj()
{
	static class UMaterialExpressionHeightfieldMinMaxTexture* Default = nullptr;

	if (!Default)
		Default = static_cast<UMaterialExpressionHeightfieldMinMaxTexture*>(UMaterialExpressionHeightfieldMinMaxTexture::StaticClass()->DefaultObject);

	return Default;
}


// Class VirtualHeightfieldMesh.VirtualHeightfieldMesh
// (Actor)

class UClass* AVirtualHeightfieldMesh::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VirtualHeightfieldMesh");

	return Clss;
}


// VirtualHeightfieldMesh VirtualHeightfieldMesh.Default__VirtualHeightfieldMesh
// (Public, ClassDefaultObject, ArchetypeObject)

class AVirtualHeightfieldMesh* AVirtualHeightfieldMesh::GetDefaultObj()
{
	static class AVirtualHeightfieldMesh* Default = nullptr;

	if (!Default)
		Default = static_cast<AVirtualHeightfieldMesh*>(AVirtualHeightfieldMesh::StaticClass()->DefaultObject);

	return Default;
}


// Class VirtualHeightfieldMesh.VirtualHeightfieldMeshComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UVirtualHeightfieldMeshComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VirtualHeightfieldMeshComponent");

	return Clss;
}


// VirtualHeightfieldMeshComponent VirtualHeightfieldMesh.Default__VirtualHeightfieldMeshComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UVirtualHeightfieldMeshComponent* UVirtualHeightfieldMeshComponent::GetDefaultObj()
{
	static class UVirtualHeightfieldMeshComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UVirtualHeightfieldMeshComponent*>(UVirtualHeightfieldMeshComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function VirtualHeightfieldMesh.VirtualHeightfieldMeshComponent.GatherHideFlags
// (Final, Native, Protected, HasOutParams, Const)
// Parameters:
// bool                               InOutHidePrimitivesInEditor                                      (Edit, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
// bool                               InOutHidePrimitivesInGame                                        (Edit, ConstParm, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

bool UVirtualHeightfieldMeshComponent::GatherHideFlags()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VirtualHeightfieldMeshComponent", "GatherHideFlags");

	Params::UVirtualHeightfieldMeshComponent_GatherHideFlags_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}



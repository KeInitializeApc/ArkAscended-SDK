#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PreviewScene_Explore_Note.PreviewScene_Explore_Note_C
// (Actor)

class UClass* APreviewScene_Explore_Note_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PreviewScene_Explore_Note_C");

	return Clss;
}


// PreviewScene_Explore_Note_C PreviewScene_Explore_Note.Default__PreviewScene_Explore_Note_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APreviewScene_Explore_Note_C* APreviewScene_Explore_Note_C::GetDefaultObj()
{
	static class APreviewScene_Explore_Note_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APreviewScene_Explore_Note_C*>(APreviewScene_Explore_Note_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PreviewScene_Explore_Note.PreviewScene_Explore_Note_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void APreviewScene_Explore_Note_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PreviewScene_Explore_Note_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PreviewScene_Explore_Note.PreviewScene_Explore_Note_C.NotifyPreviewSceneUpdated
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float APreviewScene_Explore_Note_C::NotifyPreviewSceneUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PreviewScene_Explore_Note_C", "NotifyPreviewSceneUpdated");

	Params::APreviewScene_Explore_Note_C_NotifyPreviewSceneUpdated_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PreviewScene_Explore_Note.PreviewScene_Explore_Note_C.ExecuteUbergraph_PreviewScene_Explore_Note
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// class USkeletalMeshComponent*      K2Node_DynamicCast_AsSkeletal_Mesh_Component                     (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// float                              K2Node_Event_DeltaTime                                           (Edit, BlueprintVisible, Net, Parm, Config, DisableEditOnInstance, SubobjectReference)
// class USkeletalMesh*               CallFunc_GetSkeletalMeshAsset_ReturnValue                        (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool APreviewScene_Explore_Note_C::ExecuteUbergraph_PreviewScene_Explore_Note(int32* EntryPoint, bool* K2Node_DynamicCast_bSuccess, float K2Node_Event_DeltaTime, class USkeletalMesh** CallFunc_GetSkeletalMeshAsset_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PreviewScene_Explore_Note_C", "ExecuteUbergraph_PreviewScene_Explore_Note");

	Params::APreviewScene_Explore_Note_C_ExecuteUbergraph_PreviewScene_Explore_Note_Params Parms{};

	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_GetSkeletalMeshAsset_ReturnValue != nullptr)
		*CallFunc_GetSkeletalMeshAsset_ReturnValue = Parms.CallFunc_GetSkeletalMeshAsset_ReturnValue;

	return Parms.ReturnValue;

}

}



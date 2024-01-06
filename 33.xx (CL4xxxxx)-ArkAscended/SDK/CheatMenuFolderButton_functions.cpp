#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CheatMenuFolderButton.CheatMenuFolderButton_C
// (None)

class UClass* UCheatMenuFolderButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CheatMenuFolderButton_C");

	return Clss;
}


// CheatMenuFolderButton_C CheatMenuFolderButton.Default__CheatMenuFolderButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCheatMenuFolderButton_C* UCheatMenuFolderButton_C::GetDefaultObj()
{
	static class UCheatMenuFolderButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCheatMenuFolderButton_C*>(UCheatMenuFolderButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CheatMenuFolderButton.CheatMenuFolderButton_C.SetFolder
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        FolderName                                                       (ConstParm, ExportObject, OutParm, Transient, InstancedReference, SubobjectReference)
// int32                              ScreenNumber                                                     (Edit, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, EditConst, SubobjectReference)
// class UTexture2D*                  Image                                                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)

int32 UCheatMenuFolderButton_C::SetFolder(class FText* FolderName, class UTexture2D** Image, class FString* CallFunc_Conv_TextToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenuFolderButton_C", "SetFolder");

	Params::UCheatMenuFolderButton_C_SetFolder_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (FolderName != nullptr)
		*FolderName = Parms.FolderName;

	if (Image != nullptr)
		*Image = Parms.Image;

	if (CallFunc_Conv_TextToString_ReturnValue != nullptr)
		*CallFunc_Conv_TextToString_ReturnValue = std::move(Parms.CallFunc_Conv_TextToString_ReturnValue);

	return Parms.ReturnValue;

}


// Function CheatMenuFolderButton.CheatMenuFolderButton_C.BndEvt__SpawnButton_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UCheatMenuFolderButton_C::BndEvt__SpawnButton_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenuFolderButton_C", "BndEvt__SpawnButton_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CheatMenuFolderButton.CheatMenuFolderButton_C.ExecuteUbergraph_CheatMenuFolderButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (ConstParm, BlueprintVisible, Net, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UCheatMenuFolderButton_C::ExecuteUbergraph_CheatMenuFolderButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenuFolderButton_C", "ExecuteUbergraph_CheatMenuFolderButton");

	Params::UCheatMenuFolderButton_C_ExecuteUbergraph_CheatMenuFolderButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}



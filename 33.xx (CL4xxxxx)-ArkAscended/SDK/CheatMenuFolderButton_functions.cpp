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
// class FText                        FolderName                                                       (ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// int32                              ScreenNumber                                                     (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, EditConst, SubobjectReference)
// class UTexture2D*                  Image                                                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)

class FText UCheatMenuFolderButton_C::SetFolder(int32 ScreenNumber, class UTexture2D** Image, const class FString& CallFunc_Conv_TextToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenuFolderButton_C", "SetFolder");

	Params::UCheatMenuFolderButton_C_SetFolder_Params Parms{};

	Parms.ScreenNumber = ScreenNumber;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Image != nullptr)
		*Image = Parms.Image;

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
// int32                              EntryPoint                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UCheatMenuFolderButton_C::ExecuteUbergraph_CheatMenuFolderButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenuFolderButton_C", "ExecuteUbergraph_CheatMenuFolderButton");

	Params::UCheatMenuFolderButton_C_ExecuteUbergraph_CheatMenuFolderButton_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}



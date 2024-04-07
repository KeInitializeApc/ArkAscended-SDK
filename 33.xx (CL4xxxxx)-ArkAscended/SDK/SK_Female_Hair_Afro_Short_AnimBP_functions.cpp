#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass SK_Female_Hair_Afro_Short_AnimBP.SK_Female_Hair_Afro_Short_AnimBP_C
// (None)

class UClass* USK_Female_Hair_Afro_Short_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SK_Female_Hair_Afro_Short_AnimBP_C");

	return Clss;
}


// SK_Female_Hair_Afro_Short_AnimBP_C SK_Female_Hair_Afro_Short_AnimBP.Default__SK_Female_Hair_Afro_Short_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USK_Female_Hair_Afro_Short_AnimBP_C* USK_Female_Hair_Afro_Short_AnimBP_C::GetDefaultObj()
{
	static class USK_Female_Hair_Afro_Short_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USK_Female_Hair_Afro_Short_AnimBP_C*>(USK_Female_Hair_Afro_Short_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SK_Female_Hair_Afro_Short_AnimBP.SK_Female_Hair_Afro_Short_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Edit, Net, Transient, EditConst)

void USK_Female_Hair_Afro_Short_AnimBP_C::AnimGraph(const struct FPoseLink& AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_Female_Hair_Afro_Short_AnimBP_C", "AnimGraph");

	Params::USK_Female_Hair_Afro_Short_AnimBP_C_AnimGraph_Params Parms{};

	Parms.AnimGraph = AnimGraph;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SK_Female_Hair_Afro_Short_AnimBP.SK_Female_Hair_Afro_Short_AnimBP_C.ExecuteUbergraph_SK_Female_Hair_Afro_Short_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)

void USK_Female_Hair_Afro_Short_AnimBP_C::ExecuteUbergraph_SK_Female_Hair_Afro_Short_AnimBP(int32* EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_Female_Hair_Afro_Short_AnimBP_C", "ExecuteUbergraph_SK_Female_Hair_Afro_Short_AnimBP");

	Params::USK_Female_Hair_Afro_Short_AnimBP_C_ExecuteUbergraph_SK_Female_Hair_Afro_Short_AnimBP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

}

}



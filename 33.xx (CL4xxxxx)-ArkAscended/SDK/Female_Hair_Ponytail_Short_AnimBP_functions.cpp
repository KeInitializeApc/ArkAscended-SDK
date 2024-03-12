#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Female_Hair_Ponytail_Short_AnimBP.Female_Hair_Ponytail_Short_AnimBP_C
// (None)

class UClass* UFemale_Hair_Ponytail_Short_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Female_Hair_Ponytail_Short_AnimBP_C");

	return Clss;
}


// Female_Hair_Ponytail_Short_AnimBP_C Female_Hair_Ponytail_Short_AnimBP.Default__Female_Hair_Ponytail_Short_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFemale_Hair_Ponytail_Short_AnimBP_C* UFemale_Hair_Ponytail_Short_AnimBP_C::GetDefaultObj()
{
	static class UFemale_Hair_Ponytail_Short_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFemale_Hair_Ponytail_Short_AnimBP_C*>(UFemale_Hair_Ponytail_Short_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Female_Hair_Ponytail_Short_AnimBP.Female_Hair_Ponytail_Short_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Edit, Net, Transient, EditConst)

void UFemale_Hair_Ponytail_Short_AnimBP_C::AnimGraph(const struct FPoseLink& AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Female_Hair_Ponytail_Short_AnimBP_C", "AnimGraph");

	Params::UFemale_Hair_Ponytail_Short_AnimBP_C_AnimGraph_Params Parms{};

	Parms.AnimGraph = AnimGraph;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Female_Hair_Ponytail_Short_AnimBP.Female_Hair_Ponytail_Short_AnimBP_C.ExecuteUbergraph_Female_Hair_Ponytail_Short_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)

void UFemale_Hair_Ponytail_Short_AnimBP_C::ExecuteUbergraph_Female_Hair_Ponytail_Short_AnimBP(int32* EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Female_Hair_Ponytail_Short_AnimBP_C", "ExecuteUbergraph_Female_Hair_Ponytail_Short_AnimBP");

	Params::UFemale_Hair_Ponytail_Short_AnimBP_C_ExecuteUbergraph_Female_Hair_Ponytail_Short_AnimBP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

}

}



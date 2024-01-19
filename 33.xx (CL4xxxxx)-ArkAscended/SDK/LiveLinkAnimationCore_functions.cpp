#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class LiveLinkAnimationCore.LiveLinkInstance
// (None)

class UClass* ULiveLinkInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkInstance");

	return Clss;
}


// LiveLinkInstance LiveLinkAnimationCore.Default__LiveLinkInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkInstance* ULiveLinkInstance::GetDefaultObj()
{
	static class ULiveLinkInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkInstance*>(ULiveLinkInstance::StaticClass()->DefaultObject);

	return Default;
}


// Function LiveLinkAnimationCore.LiveLinkInstance.SetSubject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FLiveLinkSubjectName        SubjectName                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, DisableEditOnInstance, EditConst)

void ULiveLinkInstance::SetSubject(const struct FLiveLinkSubjectName& SubjectName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkInstance", "SetSubject");

	Params::ULiveLinkInstance_SetSubject_Params Parms{};

	Parms.SubjectName = SubjectName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LiveLinkAnimationCore.LiveLinkInstance.SetRetargetAsset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                      RetargetAsset                                                    (Edit, ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)

class UClass* ULiveLinkInstance::SetRetargetAsset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkInstance", "SetRetargetAsset");

	Params::ULiveLinkInstance_SetRetargetAsset_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class LiveLinkAnimationCore.LiveLinkRetargetAsset
// (None)

class UClass* ULiveLinkRetargetAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkRetargetAsset");

	return Clss;
}


// LiveLinkRetargetAsset LiveLinkAnimationCore.Default__LiveLinkRetargetAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkRetargetAsset* ULiveLinkRetargetAsset::GetDefaultObj()
{
	static class ULiveLinkRetargetAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkRetargetAsset*>(ULiveLinkRetargetAsset::StaticClass()->DefaultObject);

	return Default;
}


// Class LiveLinkAnimationCore.LiveLinkRemapAsset
// (None)

class UClass* ULiveLinkRemapAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkRemapAsset");

	return Clss;
}


// LiveLinkRemapAsset LiveLinkAnimationCore.Default__LiveLinkRemapAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkRemapAsset* ULiveLinkRemapAsset::GetDefaultObj()
{
	static class ULiveLinkRemapAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkRemapAsset*>(ULiveLinkRemapAsset::StaticClass()->DefaultObject);

	return Default;
}


// Function LiveLinkAnimationCore.LiveLinkRemapAsset.RemapCurveElements
// (Native, Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// TMap<class FName, float>           CurveItems                                                       (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

TMap<class FName, float> ULiveLinkRemapAsset::RemapCurveElements()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkRemapAsset", "RemapCurveElements");

	Params::ULiveLinkRemapAsset_RemapCurveElements_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LiveLinkAnimationCore.LiveLinkRemapAsset.GetRemappedCurveName
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class FName                        CurveName                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class FName                        ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class FName ULiveLinkRemapAsset::GetRemappedCurveName(class FName ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkRemapAsset", "GetRemappedCurveName");

	Params::ULiveLinkRemapAsset_GetRemappedCurveName_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LiveLinkAnimationCore.LiveLinkRemapAsset.GetRemappedBoneName
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class FName                        BoneName                                                         (ConstParm, Net, DisableEditOnTemplate, Config)
// class FName                        ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void ULiveLinkRemapAsset::GetRemappedBoneName(class FName BoneName, class FName ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkRemapAsset", "GetRemappedBoneName");

	Params::ULiveLinkRemapAsset_GetRemappedBoneName_Params Parms{};

	Parms.BoneName = BoneName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}



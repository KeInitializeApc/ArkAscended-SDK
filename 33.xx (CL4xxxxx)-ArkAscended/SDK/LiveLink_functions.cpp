#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class LiveLink.LiveLinkBasicFrameInterpolationProcessor
// (None)

class UClass* ULiveLinkBasicFrameInterpolationProcessor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkBasicFrameInterpolationProcessor");

	return Clss;
}


// LiveLinkBasicFrameInterpolationProcessor LiveLink.Default__LiveLinkBasicFrameInterpolationProcessor
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkBasicFrameInterpolationProcessor* ULiveLinkBasicFrameInterpolationProcessor::GetDefaultObj()
{
	static class ULiveLinkBasicFrameInterpolationProcessor* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkBasicFrameInterpolationProcessor*>(ULiveLinkBasicFrameInterpolationProcessor::StaticClass()->DefaultObject);

	return Default;
}


// Class LiveLink.LiveLinkAnimationFrameInterpolationProcessor
// (None)

class UClass* ULiveLinkAnimationFrameInterpolationProcessor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkAnimationFrameInterpolationProcessor");

	return Clss;
}


// LiveLinkAnimationFrameInterpolationProcessor LiveLink.Default__LiveLinkAnimationFrameInterpolationProcessor
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkAnimationFrameInterpolationProcessor* ULiveLinkAnimationFrameInterpolationProcessor::GetDefaultObj()
{
	static class ULiveLinkAnimationFrameInterpolationProcessor* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkAnimationFrameInterpolationProcessor*>(ULiveLinkAnimationFrameInterpolationProcessor::StaticClass()->DefaultObject);

	return Default;
}


// Class LiveLink.LiveLinkAnimationVirtualSubject
// (None)

class UClass* ULiveLinkAnimationVirtualSubject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkAnimationVirtualSubject");

	return Clss;
}


// LiveLinkAnimationVirtualSubject LiveLink.Default__LiveLinkAnimationVirtualSubject
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkAnimationVirtualSubject* ULiveLinkAnimationVirtualSubject::GetDefaultObj()
{
	static class ULiveLinkAnimationVirtualSubject* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkAnimationVirtualSubject*>(ULiveLinkAnimationVirtualSubject::StaticClass()->DefaultObject);

	return Default;
}


// Class LiveLink.LiveLinkBlueprintLibrary
// (None)

class UClass* ULiveLinkBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkBlueprintLibrary");

	return Clss;
}


// LiveLinkBlueprintLibrary LiveLink.Default__LiveLinkBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkBlueprintLibrary* ULiveLinkBlueprintLibrary::GetDefaultObj()
{
	static class ULiveLinkBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkBlueprintLibrary*>(ULiveLinkBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function LiveLink.LiveLinkBlueprintLibrary.TransformNames
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSubjectFrameHandle         SubjectFrameHandle                                               (ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<class FName>                TransformNames                                                   (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, EditConst)

struct FSubjectFrameHandle ULiveLinkBlueprintLibrary::TransformNames(const TArray<class FName>& TransformNames)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "TransformNames");

	Params::ULiveLinkBlueprintLibrary_TransformNames_Params Parms{};

	Parms.TransformNames = TransformNames;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.TransformName
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLiveLinkTransform          LiveLinkTransform                                                (ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// class FName                        Name                                                             (ConstParm, Net, OutParm)

struct FLiveLinkTransform ULiveLinkBlueprintLibrary::TransformName(class FName* Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "TransformName");

	Params::ULiveLinkBlueprintLibrary_TransformName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Name != nullptr)
		*Name = Parms.Name;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.SetLiveLinkSubjectEnabled
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FLiveLinkSubjectKey         SubjectKey                                                       (ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bEnabled                                                         (Edit, BlueprintVisible, ExportObject, Net, OutParm, Transient, EditConst, GlobalConfig)

struct FLiveLinkSubjectKey ULiveLinkBlueprintLibrary::SetLiveLinkSubjectEnabled(bool* bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "SetLiveLinkSubjectEnabled");

	Params::ULiveLinkBlueprintLibrary_SetLiveLinkSubjectEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bEnabled != nullptr)
		*bEnabled = Parms.bEnabled;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.RemoveSource
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLiveLinkSourceHandle       SourceHandle                                                     (Edit, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool ULiveLinkBlueprintLibrary::RemoveSource()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "RemoveSource");

	Params::ULiveLinkBlueprintLibrary_RemoveSource_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.ParentBoneSpaceTransform
// (Final, Native, Static, Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLiveLinkTransform          LiveLinkTransform                                                (ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)

struct FLiveLinkTransform ULiveLinkBlueprintLibrary::ParentBoneSpaceTransform(struct FTransform* Transform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "ParentBoneSpaceTransform");

	Params::ULiveLinkBlueprintLibrary_ParentBoneSpaceTransform_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.NumberOfTransforms
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSubjectFrameHandle         SubjectFrameHandle                                               (ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 ULiveLinkBlueprintLibrary::NumberOfTransforms()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "NumberOfTransforms");

	Params::ULiveLinkBlueprintLibrary_NumberOfTransforms_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.IsSpecificLiveLinkSubjectEnabled
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FLiveLinkSubjectKey         SubjectKey                                                       (ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bForThisFrame                                                    (Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool ULiveLinkBlueprintLibrary::IsSpecificLiveLinkSubjectEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "IsSpecificLiveLinkSubjectEnabled");

	Params::ULiveLinkBlueprintLibrary_IsSpecificLiveLinkSubjectEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.IsSourceStillValid
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLiveLinkSourceHandle       SourceHandle                                                     (Edit, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool ULiveLinkBlueprintLibrary::IsSourceStillValid()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "IsSourceStillValid");

	Params::ULiveLinkBlueprintLibrary_IsSourceStillValid_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.IsLiveLinkSubjectEnabled
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FLiveLinkSubjectName        SubjectName                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, DisableEditOnInstance, EditConst)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool ULiveLinkBlueprintLibrary::IsLiveLinkSubjectEnabled(const struct FLiveLinkSubjectName& SubjectName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "IsLiveLinkSubjectEnabled");

	Params::ULiveLinkBlueprintLibrary_IsLiveLinkSubjectEnabled_Params Parms{};

	Parms.SubjectName = SubjectName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.HasParent
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLiveLinkTransform          LiveLinkTransform                                                (ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool ULiveLinkBlueprintLibrary::HasParent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "HasParent");

	Params::ULiveLinkBlueprintLibrary_HasParent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetTransformByName
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSubjectFrameHandle         SubjectFrameHandle                                               (ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// class FName                        TransformName                                                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, EditConst)
// struct FLiveLinkTransform          LiveLinkTransform                                                (ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)

struct FLiveLinkTransform ULiveLinkBlueprintLibrary::GetTransformByName(class FName TransformName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetTransformByName");

	Params::ULiveLinkBlueprintLibrary_GetTransformByName_Params Parms{};

	Parms.TransformName = TransformName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetTransformByIndex
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSubjectFrameHandle         SubjectFrameHandle                                               (ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// int32                              TransformIndex                                                   (Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FLiveLinkTransform          LiveLinkTransform                                                (ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)

struct FLiveLinkTransform ULiveLinkBlueprintLibrary::GetTransformByIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetTransformByIndex");

	Params::ULiveLinkBlueprintLibrary_GetTransformByIndex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetSpecificLiveLinkSubjectRole
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FLiveLinkSubjectKey         SubjectKey                                                       (ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UClass*                      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UClass* ULiveLinkBlueprintLibrary::GetSpecificLiveLinkSubjectRole()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetSpecificLiveLinkSubjectRole");

	Params::ULiveLinkBlueprintLibrary_GetSpecificLiveLinkSubjectRole_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetSourceTypeFromGuid
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGuid                       SourceGuid                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FText                        ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FText ULiveLinkBlueprintLibrary::GetSourceTypeFromGuid()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetSourceTypeFromGuid");

	Params::ULiveLinkBlueprintLibrary_GetSourceTypeFromGuid_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetSourceType
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLiveLinkSourceHandle       SourceHandle                                                     (Edit, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FText                        ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FText ULiveLinkBlueprintLibrary::GetSourceType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetSourceType");

	Params::ULiveLinkBlueprintLibrary_GetSourceType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetSourceStatus
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLiveLinkSourceHandle       SourceHandle                                                     (Edit, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FText                        ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FText ULiveLinkBlueprintLibrary::GetSourceStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetSourceStatus");

	Params::ULiveLinkBlueprintLibrary_GetSourceStatus_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetSourceMachineName
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLiveLinkSourceHandle       SourceHandle                                                     (Edit, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FText                        ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FText ULiveLinkBlueprintLibrary::GetSourceMachineName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetSourceMachineName");

	Params::ULiveLinkBlueprintLibrary_GetSourceMachineName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetRootTransform
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSubjectFrameHandle         SubjectFrameHandle                                               (ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FLiveLinkTransform          LiveLinkTransform                                                (ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)

struct FLiveLinkTransform ULiveLinkBlueprintLibrary::GetRootTransform()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetRootTransform");

	Params::ULiveLinkBlueprintLibrary_GetRootTransform_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetPropertyValue
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLiveLinkBasicBlueprintData BasicData                                                        (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        PropertyName                                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              Value                                                            (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool ULiveLinkBlueprintLibrary::GetPropertyValue(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetPropertyValue");

	Params::ULiveLinkBlueprintLibrary_GetPropertyValue_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetParent
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLiveLinkTransform          LiveLinkTransform                                                (ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FLiveLinkTransform          Parent                                                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance)

struct FLiveLinkTransform ULiveLinkBlueprintLibrary::GetParent(const struct FLiveLinkTransform& Parent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetParent");

	Params::ULiveLinkBlueprintLibrary_GetParent_Params Parms{};

	Parms.Parent = Parent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetMetadata
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSubjectFrameHandle         SubjectFrameHandle                                               (ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FSubjectMetadata            MetaData                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)

struct FSubjectFrameHandle ULiveLinkBlueprintLibrary::GetMetadata(struct FSubjectMetadata* MetaData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetMetadata");

	Params::ULiveLinkBlueprintLibrary_GetMetadata_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MetaData != nullptr)
		*MetaData = std::move(Parms.MetaData);

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkSubjects
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bIncludeDisabledSubject                                          (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bIncludeVirtualSubject                                           (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FLiveLinkSubjectKey> ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<struct FLiveLinkSubjectKey> ULiveLinkBlueprintLibrary::GetLiveLinkSubjects()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetLiveLinkSubjects");

	Params::ULiveLinkBlueprintLibrary_GetLiveLinkSubjects_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkSubjectRole
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FLiveLinkSubjectName        SubjectName                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, DisableEditOnInstance, EditConst)
// class UClass*                      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UClass* ULiveLinkBlueprintLibrary::GetLiveLinkSubjectRole(const struct FLiveLinkSubjectName& SubjectName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetLiveLinkSubjectRole");

	Params::ULiveLinkBlueprintLibrary_GetLiveLinkSubjectRole_Params Parms{};

	Parms.SubjectName = SubjectName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkEnabledSubjectNames
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bIncludeVirtualSubject                                           (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FLiveLinkSubjectName>ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<struct FLiveLinkSubjectName> ULiveLinkBlueprintLibrary::GetLiveLinkEnabledSubjectNames()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetLiveLinkEnabledSubjectNames");

	Params::ULiveLinkBlueprintLibrary_GetLiveLinkEnabledSubjectNames_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetCurves
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSubjectFrameHandle         SubjectFrameHandle                                               (ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TMap<class FName, float>           Curves                                                           (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, EditConst)

TMap<class FName, float> ULiveLinkBlueprintLibrary::GetCurves()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetCurves");

	Params::ULiveLinkBlueprintLibrary_GetCurves_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetChildren
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLiveLinkTransform          LiveLinkTransform                                                (ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// TArray<struct FLiveLinkTransform>  Children                                                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance)

struct FLiveLinkTransform ULiveLinkBlueprintLibrary::GetChildren(TArray<struct FLiveLinkTransform>* Children)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetChildren");

	Params::ULiveLinkBlueprintLibrary_GetChildren_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Children != nullptr)
		*Children = std::move(Parms.Children);

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetBasicData
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSubjectFrameHandle         SubjectFrameHandle                                               (ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FLiveLinkBasicBlueprintData BasicBlueprintData                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

struct FLiveLinkBasicBlueprintData ULiveLinkBlueprintLibrary::GetBasicData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetBasicData");

	Params::ULiveLinkBlueprintLibrary_GetBasicData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetAnimationStaticData
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSubjectFrameHandle         SubjectFrameHandle                                               (ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FLiveLinkSkeletonStaticData AnimationStaticData                                              (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool ULiveLinkBlueprintLibrary::GetAnimationStaticData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetAnimationStaticData");

	Params::ULiveLinkBlueprintLibrary_GetAnimationStaticData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetAnimationFrameData
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSubjectFrameHandle         SubjectFrameHandle                                               (ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FLiveLinkAnimationFrameData AnimationFrameData                                               (Edit, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool ULiveLinkBlueprintLibrary::GetAnimationFrameData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetAnimationFrameData");

	Params::ULiveLinkBlueprintLibrary_GetAnimationFrameData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameWithSpecificRole
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLiveLinkSubjectName        SubjectName                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, DisableEditOnInstance, EditConst)
// class UClass*                      Role                                                             (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor)
// struct FLiveLinkBaseBlueprintData  OutBlueprintData                                                 (Edit, ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool ULiveLinkBlueprintLibrary::EvaluateLiveLinkFrameWithSpecificRole(const struct FLiveLinkSubjectName& SubjectName, class UClass* Role)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "EvaluateLiveLinkFrameWithSpecificRole");

	Params::ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameWithSpecificRole_Params Parms{};

	Parms.SubjectName = SubjectName;
	Parms.Role = Role;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameAtWorldTimeOffset
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLiveLinkSubjectName        SubjectName                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, DisableEditOnInstance, EditConst)
// class UClass*                      Role                                                             (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor)
// float                              WorldTimeOffset                                                  (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FLiveLinkBaseBlueprintData  OutBlueprintData                                                 (Edit, ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool ULiveLinkBlueprintLibrary::EvaluateLiveLinkFrameAtWorldTimeOffset(const struct FLiveLinkSubjectName& SubjectName, class UClass* Role)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "EvaluateLiveLinkFrameAtWorldTimeOffset");

	Params::ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtWorldTimeOffset_Params Parms{};

	Parms.SubjectName = SubjectName;
	Parms.Role = Role;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameAtSceneTime
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLiveLinkSubjectName        SubjectName                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, DisableEditOnInstance, EditConst)
// class UClass*                      Role                                                             (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor)
// struct FTimecode                   SceneTime                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FLiveLinkBaseBlueprintData  OutBlueprintData                                                 (Edit, ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool ULiveLinkBlueprintLibrary::EvaluateLiveLinkFrameAtSceneTime(const struct FLiveLinkSubjectName& SubjectName, class UClass* Role)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "EvaluateLiveLinkFrameAtSceneTime");

	Params::ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtSceneTime_Params Parms{};

	Parms.SubjectName = SubjectName;
	Parms.Role = Role;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrame
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLiveLinkSubjectRepresentationSubjectRepresentation                                            (BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FLiveLinkBaseBlueprintData  OutBlueprintData                                                 (Edit, ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool ULiveLinkBlueprintLibrary::EvaluateLiveLinkFrame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "EvaluateLiveLinkFrame");

	Params::ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrame_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.ComponentSpaceTransform
// (Final, Native, Static, Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLiveLinkTransform          LiveLinkTransform                                                (ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)

struct FLiveLinkTransform ULiveLinkBlueprintLibrary::ComponentSpaceTransform(struct FTransform* Transform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "ComponentSpaceTransform");

	Params::ULiveLinkBlueprintLibrary_ComponentSpaceTransform_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.ChildCount
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLiveLinkTransform          LiveLinkTransform                                                (ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 ULiveLinkBlueprintLibrary::ChildCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "ChildCount");

	Params::ULiveLinkBlueprintLibrary_ChildCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class LiveLink.LiveLinkComponent
// (None)

class UClass* ULiveLinkComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkComponent");

	return Clss;
}


// LiveLinkComponent LiveLink.Default__LiveLinkComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkComponent* ULiveLinkComponent::GetDefaultObj()
{
	static class ULiveLinkComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkComponent*>(ULiveLinkComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function LiveLink.LiveLinkComponent.GetSubjectDataAtWorldTime
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        SubjectName                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, DisableEditOnInstance, EditConst)
// float                              WorldTime                                                        (Edit, ConstParm, BlueprintReadOnly, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bSuccess                                                         (ConstParm, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FSubjectFrameHandle         SubjectFrameHandle                                               (ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)

struct FSubjectFrameHandle ULiveLinkComponent::GetSubjectDataAtWorldTime(class FName SubjectName, float WorldTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkComponent", "GetSubjectDataAtWorldTime");

	Params::ULiveLinkComponent_GetSubjectDataAtWorldTime_Params Parms{};

	Parms.SubjectName = SubjectName;
	Parms.WorldTime = WorldTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkComponent.GetSubjectDataAtSceneTime
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        SubjectName                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, DisableEditOnInstance, EditConst)
// struct FTimecode                   SceneTime                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bSuccess                                                         (ConstParm, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FSubjectFrameHandle         SubjectFrameHandle                                               (ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)

struct FSubjectFrameHandle ULiveLinkComponent::GetSubjectDataAtSceneTime(class FName SubjectName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkComponent", "GetSubjectDataAtSceneTime");

	Params::ULiveLinkComponent_GetSubjectDataAtSceneTime_Params Parms{};

	Parms.SubjectName = SubjectName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkComponent.GetSubjectData
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        SubjectName                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, DisableEditOnInstance, EditConst)
// bool                               bSuccess                                                         (ConstParm, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FSubjectFrameHandle         SubjectFrameHandle                                               (ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)

struct FSubjectFrameHandle ULiveLinkComponent::GetSubjectData(class FName SubjectName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkComponent", "GetSubjectData");

	Params::ULiveLinkComponent_GetSubjectData_Params Parms{};

	Parms.SubjectName = SubjectName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkComponent.GetAvailableSubjectNames
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class FName>                SubjectNames                                                     (ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

TArray<class FName> ULiveLinkComponent::GetAvailableSubjectNames()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkComponent", "GetAvailableSubjectNames");

	Params::ULiveLinkComponent_GetAvailableSubjectNames_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class LiveLink.LiveLinkDrivenComponent
// (None)

class UClass* ULiveLinkDrivenComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkDrivenComponent");

	return Clss;
}


// LiveLinkDrivenComponent LiveLink.Default__LiveLinkDrivenComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkDrivenComponent* ULiveLinkDrivenComponent::GetDefaultObj()
{
	static class ULiveLinkDrivenComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkDrivenComponent*>(ULiveLinkDrivenComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class LiveLink.LiveLinkMessageBusFinder
// (None)

class UClass* ULiveLinkMessageBusFinder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkMessageBusFinder");

	return Clss;
}


// LiveLinkMessageBusFinder LiveLink.Default__LiveLinkMessageBusFinder
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkMessageBusFinder* ULiveLinkMessageBusFinder::GetDefaultObj()
{
	static class ULiveLinkMessageBusFinder* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkMessageBusFinder*>(ULiveLinkMessageBusFinder::StaticClass()->DefaultObject);

	return Default;
}


// Function LiveLink.LiveLinkMessageBusFinder.GetAvailableProviders
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FLatentActionInfo           LatentInfo                                                       (Edit, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              Duration                                                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, DuplicateTransient)
// TArray<struct FProviderPollResult> AvailableProviders                                               (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

TArray<struct FProviderPollResult> ULiveLinkMessageBusFinder::GetAvailableProviders()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkMessageBusFinder", "GetAvailableProviders");

	Params::ULiveLinkMessageBusFinder_GetAvailableProviders_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkMessageBusFinder.ConstructMessageBusFinder
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ULiveLinkMessageBusFinder*   ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class ULiveLinkMessageBusFinder* ULiveLinkMessageBusFinder::ConstructMessageBusFinder()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkMessageBusFinder", "ConstructMessageBusFinder");

	Params::ULiveLinkMessageBusFinder_ConstructMessageBusFinder_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkMessageBusFinder.ConnectToProvider
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FProviderPollResult         Provider                                                         (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FLiveLinkSourceHandle       SourceHandle                                                     (Edit, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

struct FLiveLinkSourceHandle ULiveLinkMessageBusFinder::ConnectToProvider(struct FProviderPollResult* Provider)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkMessageBusFinder", "ConnectToProvider");

	Params::ULiveLinkMessageBusFinder_ConnectToProvider_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Provider != nullptr)
		*Provider = std::move(Parms.Provider);

	return Parms.ReturnValue;

}


// Class LiveLink.LiveLinkMessageBusSourceFactory
// (None)

class UClass* ULiveLinkMessageBusSourceFactory::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkMessageBusSourceFactory");

	return Clss;
}


// LiveLinkMessageBusSourceFactory LiveLink.Default__LiveLinkMessageBusSourceFactory
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkMessageBusSourceFactory* ULiveLinkMessageBusSourceFactory::GetDefaultObj()
{
	static class ULiveLinkMessageBusSourceFactory* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkMessageBusSourceFactory*>(ULiveLinkMessageBusSourceFactory::StaticClass()->DefaultObject);

	return Default;
}


// Class LiveLink.LiveLinkMessageBusSourceSettings
// (None)

class UClass* ULiveLinkMessageBusSourceSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkMessageBusSourceSettings");

	return Clss;
}


// LiveLinkMessageBusSourceSettings LiveLink.Default__LiveLinkMessageBusSourceSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkMessageBusSourceSettings* ULiveLinkMessageBusSourceSettings::GetDefaultObj()
{
	static class ULiveLinkMessageBusSourceSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkMessageBusSourceSettings*>(ULiveLinkMessageBusSourceSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class LiveLink.LiveLinkPreset
// (None)

class UClass* ULiveLinkPreset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkPreset");

	return Clss;
}


// LiveLinkPreset LiveLink.Default__LiveLinkPreset
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkPreset* ULiveLinkPreset::GetDefaultObj()
{
	static class ULiveLinkPreset* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkPreset*>(ULiveLinkPreset::StaticClass()->DefaultObject);

	return Default;
}


// Function LiveLink.LiveLinkPreset.BuildFromClient
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void ULiveLinkPreset::BuildFromClient()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkPreset", "BuildFromClient");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LiveLink.LiveLinkPreset.ApplyToClientLatent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FLatentActionInfo           LatentInfo                                                       (Edit, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FLatentActionInfo ULiveLinkPreset::ApplyToClientLatent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkPreset", "ApplyToClientLatent");

	Params::ULiveLinkPreset_ApplyToClientLatent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkPreset.ApplyToClient
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool ULiveLinkPreset::ApplyToClient()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkPreset", "ApplyToClient");

	Params::ULiveLinkPreset_ApplyToClient_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkPreset.AddToClient
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// bool                               bRecreatePresets                                                 (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool ULiveLinkPreset::AddToClient()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkPreset", "AddToClient");

	Params::ULiveLinkPreset_AddToClient_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class LiveLink.LiveLinkUserSettings
// (None)

class UClass* ULiveLinkUserSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkUserSettings");

	return Clss;
}


// LiveLinkUserSettings LiveLink.Default__LiveLinkUserSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkUserSettings* ULiveLinkUserSettings::GetDefaultObj()
{
	static class ULiveLinkUserSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkUserSettings*>(ULiveLinkUserSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class LiveLink.LiveLinkSettings
// (None)

class UClass* ULiveLinkSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkSettings");

	return Clss;
}


// LiveLinkSettings LiveLink.Default__LiveLinkSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkSettings* ULiveLinkSettings::GetDefaultObj()
{
	static class ULiveLinkSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkSettings*>(ULiveLinkSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class LiveLink.LiveLinkTimecodeProvider
// (None)

class UClass* ULiveLinkTimecodeProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkTimecodeProvider");

	return Clss;
}


// LiveLinkTimecodeProvider LiveLink.Default__LiveLinkTimecodeProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkTimecodeProvider* ULiveLinkTimecodeProvider::GetDefaultObj()
{
	static class ULiveLinkTimecodeProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkTimecodeProvider*>(ULiveLinkTimecodeProvider::StaticClass()->DefaultObject);

	return Default;
}


// Class LiveLink.LiveLinkTimeSynchronizationSource
// (None)

class UClass* ULiveLinkTimeSynchronizationSource::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkTimeSynchronizationSource");

	return Clss;
}


// LiveLinkTimeSynchronizationSource LiveLink.Default__LiveLinkTimeSynchronizationSource
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkTimeSynchronizationSource* ULiveLinkTimeSynchronizationSource::GetDefaultObj()
{
	static class ULiveLinkTimeSynchronizationSource* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkTimeSynchronizationSource*>(ULiveLinkTimeSynchronizationSource::StaticClass()->DefaultObject);

	return Default;
}


// Class LiveLink.LiveLinkVirtualSubjectSourceSettings
// (None)

class UClass* ULiveLinkVirtualSubjectSourceSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkVirtualSubjectSourceSettings");

	return Clss;
}


// LiveLinkVirtualSubjectSourceSettings LiveLink.Default__LiveLinkVirtualSubjectSourceSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkVirtualSubjectSourceSettings* ULiveLinkVirtualSubjectSourceSettings::GetDefaultObj()
{
	static class ULiveLinkVirtualSubjectSourceSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkVirtualSubjectSourceSettings*>(ULiveLinkVirtualSubjectSourceSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class LiveLink.LiveLinkTransformAxisSwitchPreProcessor
// (None)

class UClass* ULiveLinkTransformAxisSwitchPreProcessor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkTransformAxisSwitchPreProcessor");

	return Clss;
}


// LiveLinkTransformAxisSwitchPreProcessor LiveLink.Default__LiveLinkTransformAxisSwitchPreProcessor
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkTransformAxisSwitchPreProcessor* ULiveLinkTransformAxisSwitchPreProcessor::GetDefaultObj()
{
	static class ULiveLinkTransformAxisSwitchPreProcessor* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkTransformAxisSwitchPreProcessor*>(ULiveLinkTransformAxisSwitchPreProcessor::StaticClass()->DefaultObject);

	return Default;
}


// Class LiveLink.LiveLinkAnimationAxisSwitchPreProcessor
// (None)

class UClass* ULiveLinkAnimationAxisSwitchPreProcessor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkAnimationAxisSwitchPreProcessor");

	return Clss;
}


// LiveLinkAnimationAxisSwitchPreProcessor LiveLink.Default__LiveLinkAnimationAxisSwitchPreProcessor
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkAnimationAxisSwitchPreProcessor* ULiveLinkAnimationAxisSwitchPreProcessor::GetDefaultObj()
{
	static class ULiveLinkAnimationAxisSwitchPreProcessor* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkAnimationAxisSwitchPreProcessor*>(ULiveLinkAnimationAxisSwitchPreProcessor::StaticClass()->DefaultObject);

	return Default;
}


// Class LiveLink.LiveLinkAnimationRoleToTransform
// (None)

class UClass* ULiveLinkAnimationRoleToTransform::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkAnimationRoleToTransform");

	return Clss;
}


// LiveLinkAnimationRoleToTransform LiveLink.Default__LiveLinkAnimationRoleToTransform
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkAnimationRoleToTransform* ULiveLinkAnimationRoleToTransform::GetDefaultObj()
{
	static class ULiveLinkAnimationRoleToTransform* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkAnimationRoleToTransform*>(ULiveLinkAnimationRoleToTransform::StaticClass()->DefaultObject);

	return Default;
}


// Class LiveLink.LiveLinkBlueprintVirtualSubject
// (None)

class UClass* ULiveLinkBlueprintVirtualSubject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkBlueprintVirtualSubject");

	return Clss;
}


// LiveLinkBlueprintVirtualSubject LiveLink.Default__LiveLinkBlueprintVirtualSubject
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkBlueprintVirtualSubject* ULiveLinkBlueprintVirtualSubject::GetDefaultObj()
{
	static class ULiveLinkBlueprintVirtualSubject* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkBlueprintVirtualSubject*>(ULiveLinkBlueprintVirtualSubject::StaticClass()->DefaultObject);

	return Default;
}


// Function LiveLink.LiveLinkBlueprintVirtualSubject.UpdateVirtualSubjectStaticData_Internal
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLiveLinkBaseStaticData     InStruct                                                         (ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool ULiveLinkBlueprintVirtualSubject::UpdateVirtualSubjectStaticData_Internal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintVirtualSubject", "UpdateVirtualSubjectStaticData_Internal");

	Params::ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintVirtualSubject.UpdateVirtualSubjectFrameData_Internal
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLiveLinkBaseFrameData      InStruct                                                         (ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bInShouldStampCurrentTime                                        (ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool ULiveLinkBlueprintVirtualSubject::UpdateVirtualSubjectFrameData_Internal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintVirtualSubject", "UpdateVirtualSubjectFrameData_Internal");

	Params::ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintVirtualSubject.OnUpdate
// (Event, Public, BlueprintEvent)
// Parameters:

void ULiveLinkBlueprintVirtualSubject::OnUpdate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintVirtualSubject", "OnUpdate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LiveLink.LiveLinkBlueprintVirtualSubject.OnInitialize
// (Event, Public, BlueprintEvent)
// Parameters:

void ULiveLinkBlueprintVirtualSubject::OnInitialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintVirtualSubject", "OnInitialize");



	UObject::ProcessEvent(Func, nullptr);

}

}



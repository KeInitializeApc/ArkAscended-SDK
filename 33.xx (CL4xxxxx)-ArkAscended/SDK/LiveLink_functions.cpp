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
// struct FSubjectFrameHandle         SubjectFrameHandle                                               (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst)
// TArray<class FName>                TransformNames                                                   (BlueprintVisible, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst)

TArray<class FName> ULiveLinkBlueprintLibrary::TransformNames(struct FSubjectFrameHandle* SubjectFrameHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "TransformNames");

	Params::ULiveLinkBlueprintLibrary_TransformNames_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SubjectFrameHandle != nullptr)
		*SubjectFrameHandle = std::move(Parms.SubjectFrameHandle);

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.TransformName
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLiveLinkTransform          LiveLinkTransform                                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst)
// class FName                        Name                                                             (ConstParm, Net, OutParm)

void ULiveLinkBlueprintLibrary::TransformName(struct FLiveLinkTransform* LiveLinkTransform, class FName* Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "TransformName");

	Params::ULiveLinkBlueprintLibrary_TransformName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (LiveLinkTransform != nullptr)
		*LiveLinkTransform = std::move(Parms.LiveLinkTransform);

	if (Name != nullptr)
		*Name = Parms.Name;

}


// Function LiveLink.LiveLinkBlueprintLibrary.SetLiveLinkSubjectEnabled
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FLiveLinkSubjectKey         SubjectKey                                                       (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// bool                               bEnabled                                                         (Edit, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)

bool ULiveLinkBlueprintLibrary::SetLiveLinkSubjectEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "SetLiveLinkSubjectEnabled");

	Params::ULiveLinkBlueprintLibrary_SetLiveLinkSubjectEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.RemoveSource
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLiveLinkSourceHandle       SourceHandle                                                     (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FLiveLinkSourceHandle ULiveLinkBlueprintLibrary::RemoveSource(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "RemoveSource");

	Params::ULiveLinkBlueprintLibrary_RemoveSource_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.ParentBoneSpaceTransform
// (Final, Native, Static, Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLiveLinkTransform          LiveLinkTransform                                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)

void ULiveLinkBlueprintLibrary::ParentBoneSpaceTransform(struct FLiveLinkTransform* LiveLinkTransform, struct FTransform* Transform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "ParentBoneSpaceTransform");

	Params::ULiveLinkBlueprintLibrary_ParentBoneSpaceTransform_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (LiveLinkTransform != nullptr)
		*LiveLinkTransform = std::move(Parms.LiveLinkTransform);

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

}


// Function LiveLink.LiveLinkBlueprintLibrary.NumberOfTransforms
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSubjectFrameHandle         SubjectFrameHandle                                               (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst)
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void ULiveLinkBlueprintLibrary::NumberOfTransforms(struct FSubjectFrameHandle* SubjectFrameHandle, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "NumberOfTransforms");

	Params::ULiveLinkBlueprintLibrary_NumberOfTransforms_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SubjectFrameHandle != nullptr)
		*SubjectFrameHandle = std::move(Parms.SubjectFrameHandle);

}


// Function LiveLink.LiveLinkBlueprintLibrary.IsSpecificLiveLinkSubjectEnabled
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FLiveLinkSubjectKey         SubjectKey                                                       (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// bool                               bForThisFrame                                                    (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool ULiveLinkBlueprintLibrary::IsSpecificLiveLinkSubjectEnabled(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "IsSpecificLiveLinkSubjectEnabled");

	Params::ULiveLinkBlueprintLibrary_IsSpecificLiveLinkSubjectEnabled_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.IsSourceStillValid
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLiveLinkSourceHandle       SourceHandle                                                     (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FLiveLinkSourceHandle ULiveLinkBlueprintLibrary::IsSourceStillValid(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "IsSourceStillValid");

	Params::ULiveLinkBlueprintLibrary_IsSourceStillValid_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.IsLiveLinkSubjectEnabled
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FLiveLinkSubjectName        SubjectName                                                      (Edit, Net, ReturnParm, DisableEditOnInstance, EditConst)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FLiveLinkSubjectName ULiveLinkBlueprintLibrary::IsLiveLinkSubjectEnabled(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "IsLiveLinkSubjectEnabled");

	Params::ULiveLinkBlueprintLibrary_IsLiveLinkSubjectEnabled_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.HasParent
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLiveLinkTransform          LiveLinkTransform                                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void ULiveLinkBlueprintLibrary::HasParent(struct FLiveLinkTransform* LiveLinkTransform, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "HasParent");

	Params::ULiveLinkBlueprintLibrary_HasParent_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (LiveLinkTransform != nullptr)
		*LiveLinkTransform = std::move(Parms.LiveLinkTransform);

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetTransformByName
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSubjectFrameHandle         SubjectFrameHandle                                               (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst)
// class FName                        TransformName                                                    (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst)
// struct FLiveLinkTransform          LiveLinkTransform                                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst)

class FName ULiveLinkBlueprintLibrary::GetTransformByName(struct FSubjectFrameHandle* SubjectFrameHandle, struct FLiveLinkTransform* LiveLinkTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetTransformByName");

	Params::ULiveLinkBlueprintLibrary_GetTransformByName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SubjectFrameHandle != nullptr)
		*SubjectFrameHandle = std::move(Parms.SubjectFrameHandle);

	if (LiveLinkTransform != nullptr)
		*LiveLinkTransform = std::move(Parms.LiveLinkTransform);

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetTransformByIndex
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSubjectFrameHandle         SubjectFrameHandle                                               (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst)
// int32                              TransformIndex                                                   (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
// struct FLiveLinkTransform          LiveLinkTransform                                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst)

void ULiveLinkBlueprintLibrary::GetTransformByIndex(struct FSubjectFrameHandle* SubjectFrameHandle, int32 TransformIndex, struct FLiveLinkTransform* LiveLinkTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetTransformByIndex");

	Params::ULiveLinkBlueprintLibrary_GetTransformByIndex_Params Parms{};

	Parms.TransformIndex = TransformIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SubjectFrameHandle != nullptr)
		*SubjectFrameHandle = std::move(Parms.SubjectFrameHandle);

	if (LiveLinkTransform != nullptr)
		*LiveLinkTransform = std::move(Parms.LiveLinkTransform);

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetSpecificLiveLinkSubjectRole
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FLiveLinkSubjectKey         SubjectKey                                                       (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// class UClass*                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FLiveLinkSubjectKey ULiveLinkBlueprintLibrary::GetSpecificLiveLinkSubjectRole(class UClass* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetSpecificLiveLinkSubjectRole");

	Params::ULiveLinkBlueprintLibrary_GetSpecificLiveLinkSubjectRole_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetSourceTypeFromGuid
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGuid                       SourceGuid                                                       (Edit, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// class FText                        ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FGuid ULiveLinkBlueprintLibrary::GetSourceTypeFromGuid(class FText ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetSourceTypeFromGuid");

	Params::ULiveLinkBlueprintLibrary_GetSourceTypeFromGuid_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetSourceType
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLiveLinkSourceHandle       SourceHandle                                                     (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// class FText                        ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FLiveLinkSourceHandle ULiveLinkBlueprintLibrary::GetSourceType(class FText ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetSourceType");

	Params::ULiveLinkBlueprintLibrary_GetSourceType_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetSourceStatus
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLiveLinkSourceHandle       SourceHandle                                                     (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// class FText                        ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FLiveLinkSourceHandle ULiveLinkBlueprintLibrary::GetSourceStatus(class FText ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetSourceStatus");

	Params::ULiveLinkBlueprintLibrary_GetSourceStatus_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetSourceMachineName
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLiveLinkSourceHandle       SourceHandle                                                     (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// class FText                        ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FLiveLinkSourceHandle ULiveLinkBlueprintLibrary::GetSourceMachineName(class FText ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetSourceMachineName");

	Params::ULiveLinkBlueprintLibrary_GetSourceMachineName_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetRootTransform
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSubjectFrameHandle         SubjectFrameHandle                                               (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst)
// struct FLiveLinkTransform          LiveLinkTransform                                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst)

void ULiveLinkBlueprintLibrary::GetRootTransform(struct FSubjectFrameHandle* SubjectFrameHandle, struct FLiveLinkTransform* LiveLinkTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetRootTransform");

	Params::ULiveLinkBlueprintLibrary_GetRootTransform_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SubjectFrameHandle != nullptr)
		*SubjectFrameHandle = std::move(Parms.SubjectFrameHandle);

	if (LiveLinkTransform != nullptr)
		*LiveLinkTransform = std::move(Parms.LiveLinkTransform);

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetPropertyValue
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLiveLinkBasicBlueprintData BasicData                                                        (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// class FName                        PropertyName                                                     (Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// float                              Value                                                            (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FLiveLinkBasicBlueprintData ULiveLinkBlueprintLibrary::GetPropertyValue(class FName PropertyName, float* Value, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetPropertyValue");

	Params::ULiveLinkBlueprintLibrary_GetPropertyValue_Params Parms{};

	Parms.PropertyName = PropertyName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Value != nullptr)
		*Value = Parms.Value;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetParent
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLiveLinkTransform          LiveLinkTransform                                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst)
// struct FLiveLinkTransform          Parent                                                           (Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance)

void ULiveLinkBlueprintLibrary::GetParent(struct FLiveLinkTransform* LiveLinkTransform, struct FLiveLinkTransform* Parent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetParent");

	Params::ULiveLinkBlueprintLibrary_GetParent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (LiveLinkTransform != nullptr)
		*LiveLinkTransform = std::move(Parms.LiveLinkTransform);

	if (Parent != nullptr)
		*Parent = std::move(Parms.Parent);

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetMetadata
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSubjectFrameHandle         SubjectFrameHandle                                               (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst)
// struct FSubjectMetadata            MetaData                                                         (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)

struct FSubjectMetadata ULiveLinkBlueprintLibrary::GetMetadata(struct FSubjectFrameHandle* SubjectFrameHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetMetadata");

	Params::ULiveLinkBlueprintLibrary_GetMetadata_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SubjectFrameHandle != nullptr)
		*SubjectFrameHandle = std::move(Parms.SubjectFrameHandle);

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkSubjects
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bIncludeDisabledSubject                                          (Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// bool                               bIncludeVirtualSubject                                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// TArray<struct FLiveLinkSubjectKey> ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool ULiveLinkBlueprintLibrary::GetLiveLinkSubjects(const TArray<struct FLiveLinkSubjectKey>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetLiveLinkSubjects");

	Params::ULiveLinkBlueprintLibrary_GetLiveLinkSubjects_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkSubjectRole
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FLiveLinkSubjectName        SubjectName                                                      (Edit, Net, ReturnParm, DisableEditOnInstance, EditConst)
// class UClass*                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FLiveLinkSubjectName ULiveLinkBlueprintLibrary::GetLiveLinkSubjectRole(class UClass* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetLiveLinkSubjectRole");

	Params::ULiveLinkBlueprintLibrary_GetLiveLinkSubjectRole_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkEnabledSubjectNames
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bIncludeVirtualSubject                                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// TArray<struct FLiveLinkSubjectName>ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool ULiveLinkBlueprintLibrary::GetLiveLinkEnabledSubjectNames(const TArray<struct FLiveLinkSubjectName>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetLiveLinkEnabledSubjectNames");

	Params::ULiveLinkBlueprintLibrary_GetLiveLinkEnabledSubjectNames_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetCurves
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSubjectFrameHandle         SubjectFrameHandle                                               (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst)
// TMap<class FName, float>           Curves                                                           (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst)

void ULiveLinkBlueprintLibrary::GetCurves(struct FSubjectFrameHandle* SubjectFrameHandle, TMap<class FName, float> Curves)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetCurves");

	Params::ULiveLinkBlueprintLibrary_GetCurves_Params Parms{};

	Parms.Curves = Curves;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SubjectFrameHandle != nullptr)
		*SubjectFrameHandle = std::move(Parms.SubjectFrameHandle);

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetChildren
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLiveLinkTransform          LiveLinkTransform                                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst)
// TArray<struct FLiveLinkTransform>  Children                                                         (Edit, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)

TArray<struct FLiveLinkTransform> ULiveLinkBlueprintLibrary::GetChildren(struct FLiveLinkTransform* LiveLinkTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetChildren");

	Params::ULiveLinkBlueprintLibrary_GetChildren_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (LiveLinkTransform != nullptr)
		*LiveLinkTransform = std::move(Parms.LiveLinkTransform);

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetBasicData
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSubjectFrameHandle         SubjectFrameHandle                                               (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst)
// struct FLiveLinkBasicBlueprintData BasicBlueprintData                                               (Edit, ConstParm, ExportObject, Net, OutParm, ReturnParm, InstancedReference, SubobjectReference)

struct FLiveLinkBasicBlueprintData ULiveLinkBlueprintLibrary::GetBasicData(struct FSubjectFrameHandle* SubjectFrameHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetBasicData");

	Params::ULiveLinkBlueprintLibrary_GetBasicData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SubjectFrameHandle != nullptr)
		*SubjectFrameHandle = std::move(Parms.SubjectFrameHandle);

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetAnimationStaticData
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSubjectFrameHandle         SubjectFrameHandle                                               (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst)
// struct FLiveLinkSkeletonStaticData AnimationStaticData                                              (Net, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FLiveLinkSkeletonStaticData ULiveLinkBlueprintLibrary::GetAnimationStaticData(struct FSubjectFrameHandle* SubjectFrameHandle, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetAnimationStaticData");

	Params::ULiveLinkBlueprintLibrary_GetAnimationStaticData_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SubjectFrameHandle != nullptr)
		*SubjectFrameHandle = std::move(Parms.SubjectFrameHandle);

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetAnimationFrameData
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSubjectFrameHandle         SubjectFrameHandle                                               (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst)
// struct FLiveLinkAnimationFrameData AnimationFrameData                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FLiveLinkAnimationFrameData ULiveLinkBlueprintLibrary::GetAnimationFrameData(struct FSubjectFrameHandle* SubjectFrameHandle, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetAnimationFrameData");

	Params::ULiveLinkBlueprintLibrary_GetAnimationFrameData_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SubjectFrameHandle != nullptr)
		*SubjectFrameHandle = std::move(Parms.SubjectFrameHandle);

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameWithSpecificRole
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLiveLinkSubjectName        SubjectName                                                      (Edit, Net, ReturnParm, DisableEditOnInstance, EditConst)
// class UClass*                      Role                                                             (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor)
// struct FLiveLinkBaseBlueprintData  OutBlueprintData                                                 (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FLiveLinkBaseBlueprintData ULiveLinkBlueprintLibrary::EvaluateLiveLinkFrameWithSpecificRole(class UClass* Role, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "EvaluateLiveLinkFrameWithSpecificRole");

	Params::ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameWithSpecificRole_Params Parms{};

	Parms.Role = Role;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameAtWorldTimeOffset
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLiveLinkSubjectName        SubjectName                                                      (Edit, Net, ReturnParm, DisableEditOnInstance, EditConst)
// class UClass*                      Role                                                             (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor)
// float                              WorldTimeOffset                                                  (Edit, BlueprintVisible, ExportObject, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// struct FLiveLinkBaseBlueprintData  OutBlueprintData                                                 (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FLiveLinkBaseBlueprintData ULiveLinkBlueprintLibrary::EvaluateLiveLinkFrameAtWorldTimeOffset(class UClass* Role, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "EvaluateLiveLinkFrameAtWorldTimeOffset");

	Params::ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtWorldTimeOffset_Params Parms{};

	Parms.Role = Role;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameAtSceneTime
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLiveLinkSubjectName        SubjectName                                                      (Edit, Net, ReturnParm, DisableEditOnInstance, EditConst)
// class UClass*                      Role                                                             (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor)
// struct FTimecode                   SceneTime                                                        (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// struct FLiveLinkBaseBlueprintData  OutBlueprintData                                                 (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FLiveLinkBaseBlueprintData ULiveLinkBlueprintLibrary::EvaluateLiveLinkFrameAtSceneTime(class UClass* Role, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "EvaluateLiveLinkFrameAtSceneTime");

	Params::ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtSceneTime_Params Parms{};

	Parms.Role = Role;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrame
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLiveLinkSubjectRepresentationSubjectRepresentation                                            (Edit, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// struct FLiveLinkBaseBlueprintData  OutBlueprintData                                                 (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FLiveLinkBaseBlueprintData ULiveLinkBlueprintLibrary::EvaluateLiveLinkFrame(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "EvaluateLiveLinkFrame");

	Params::ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrame_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.ComponentSpaceTransform
// (Final, Native, Static, Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLiveLinkTransform          LiveLinkTransform                                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)

void ULiveLinkBlueprintLibrary::ComponentSpaceTransform(struct FLiveLinkTransform* LiveLinkTransform, struct FTransform* Transform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "ComponentSpaceTransform");

	Params::ULiveLinkBlueprintLibrary_ComponentSpaceTransform_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (LiveLinkTransform != nullptr)
		*LiveLinkTransform = std::move(Parms.LiveLinkTransform);

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

}


// Function LiveLink.LiveLinkBlueprintLibrary.ChildCount
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLiveLinkTransform          LiveLinkTransform                                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst)
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void ULiveLinkBlueprintLibrary::ChildCount(struct FLiveLinkTransform* LiveLinkTransform, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "ChildCount");

	Params::ULiveLinkBlueprintLibrary_ChildCount_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (LiveLinkTransform != nullptr)
		*LiveLinkTransform = std::move(Parms.LiveLinkTransform);

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
// class FName                        SubjectName                                                      (Edit, Net, ReturnParm, DisableEditOnInstance, EditConst)
// float                              WorldTime                                                        (Edit, ExportObject, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
// bool                               bSuccess                                                         (Edit, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FSubjectFrameHandle         SubjectFrameHandle                                               (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst)

bool ULiveLinkComponent::GetSubjectDataAtWorldTime(struct FSubjectFrameHandle* SubjectFrameHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkComponent", "GetSubjectDataAtWorldTime");

	Params::ULiveLinkComponent_GetSubjectDataAtWorldTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SubjectFrameHandle != nullptr)
		*SubjectFrameHandle = std::move(Parms.SubjectFrameHandle);

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkComponent.GetSubjectDataAtSceneTime
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        SubjectName                                                      (Edit, Net, ReturnParm, DisableEditOnInstance, EditConst)
// struct FTimecode                   SceneTime                                                        (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// bool                               bSuccess                                                         (Edit, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FSubjectFrameHandle         SubjectFrameHandle                                               (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst)

bool ULiveLinkComponent::GetSubjectDataAtSceneTime(struct FSubjectFrameHandle* SubjectFrameHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkComponent", "GetSubjectDataAtSceneTime");

	Params::ULiveLinkComponent_GetSubjectDataAtSceneTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SubjectFrameHandle != nullptr)
		*SubjectFrameHandle = std::move(Parms.SubjectFrameHandle);

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkComponent.GetSubjectData
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        SubjectName                                                      (Edit, Net, ReturnParm, DisableEditOnInstance, EditConst)
// bool                               bSuccess                                                         (Edit, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FSubjectFrameHandle         SubjectFrameHandle                                               (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst)

bool ULiveLinkComponent::GetSubjectData(struct FSubjectFrameHandle* SubjectFrameHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkComponent", "GetSubjectData");

	Params::ULiveLinkComponent_GetSubjectData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SubjectFrameHandle != nullptr)
		*SubjectFrameHandle = std::move(Parms.SubjectFrameHandle);

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkComponent.GetAvailableSubjectNames
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class FName>                SubjectNames                                                     (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)

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
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// struct FLatentActionInfo           LatentInfo                                                       (BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, SubobjectReference)
// float                              Duration                                                         (Edit, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, DuplicateTransient)
// TArray<struct FProviderPollResult> AvailableProviders                                               (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)

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
// class ULiveLinkMessageBusFinder*   ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void ULiveLinkMessageBusFinder::ConstructMessageBusFinder(class ULiveLinkMessageBusFinder* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkMessageBusFinder", "ConstructMessageBusFinder");

	Params::ULiveLinkMessageBusFinder_ConstructMessageBusFinder_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LiveLink.LiveLinkMessageBusFinder.ConnectToProvider
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FProviderPollResult         Provider                                                         (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FLiveLinkSourceHandle       SourceHandle                                                     (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)

struct FLiveLinkSourceHandle ULiveLinkMessageBusFinder::ConnectToProvider()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkMessageBusFinder", "ConnectToProvider");

	Params::ULiveLinkMessageBusFinder_ConnectToProvider_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// struct FLatentActionInfo           LatentInfo                                                       (BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, SubobjectReference)

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
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void ULiveLinkPreset::ApplyToClient(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkPreset", "ApplyToClient");

	Params::ULiveLinkPreset_ApplyToClient_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LiveLink.LiveLinkPreset.AddToClient
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// bool                               bRecreatePresets                                                 (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool ULiveLinkPreset::AddToClient(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkPreset", "AddToClient");

	Params::ULiveLinkPreset_AddToClient_Params Parms{};

	Parms.ReturnValue = ReturnValue;

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
// struct FLiveLinkBaseStaticData     InStruct                                                         (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FLiveLinkBaseStaticData ULiveLinkBlueprintVirtualSubject::UpdateVirtualSubjectStaticData_Internal(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintVirtualSubject", "UpdateVirtualSubjectStaticData_Internal");

	Params::ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintVirtualSubject.UpdateVirtualSubjectFrameData_Internal
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLiveLinkBaseFrameData      InStruct                                                         (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
// bool                               bInShouldStampCurrentTime                                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool ULiveLinkBlueprintVirtualSubject::UpdateVirtualSubjectFrameData_Internal(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintVirtualSubject", "UpdateVirtualSubjectFrameData_Internal");

	Params::ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal_Params Parms{};

	Parms.ReturnValue = ReturnValue;

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



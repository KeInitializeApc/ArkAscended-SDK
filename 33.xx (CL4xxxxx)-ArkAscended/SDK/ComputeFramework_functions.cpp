#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ComputeFramework.ComputeDataInterface
// (None)

class UClass* UComputeDataInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ComputeDataInterface");

	return Clss;
}


// ComputeDataInterface ComputeFramework.Default__ComputeDataInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class UComputeDataInterface* UComputeDataInterface::GetDefaultObj()
{
	static class UComputeDataInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<UComputeDataInterface*>(UComputeDataInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class ComputeFramework.ComputeDataProvider
// (None)

class UClass* UComputeDataProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ComputeDataProvider");

	return Clss;
}


// ComputeDataProvider ComputeFramework.Default__ComputeDataProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class UComputeDataProvider* UComputeDataProvider::GetDefaultObj()
{
	static class UComputeDataProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<UComputeDataProvider*>(UComputeDataProvider::StaticClass()->DefaultObject);

	return Default;
}


// Class ComputeFramework.ComputeKernelSource
// (None)

class UClass* UComputeKernelSource::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ComputeKernelSource");

	return Clss;
}


// ComputeKernelSource ComputeFramework.Default__ComputeKernelSource
// (Public, ClassDefaultObject, ArchetypeObject)

class UComputeKernelSource* UComputeKernelSource::GetDefaultObj()
{
	static class UComputeKernelSource* Default = nullptr;

	if (!Default)
		Default = static_cast<UComputeKernelSource*>(UComputeKernelSource::StaticClass()->DefaultObject);

	return Default;
}


// Class ComputeFramework.ComputeSource
// (None)

class UClass* UComputeSource::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ComputeSource");

	return Clss;
}


// ComputeSource ComputeFramework.Default__ComputeSource
// (Public, ClassDefaultObject, ArchetypeObject)

class UComputeSource* UComputeSource::GetDefaultObj()
{
	static class UComputeSource* Default = nullptr;

	if (!Default)
		Default = static_cast<UComputeSource*>(UComputeSource::StaticClass()->DefaultObject);

	return Default;
}


// Class ComputeFramework.ComputeGraph
// (None)

class UClass* UComputeGraph::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ComputeGraph");

	return Clss;
}


// ComputeGraph ComputeFramework.Default__ComputeGraph
// (Public, ClassDefaultObject, ArchetypeObject)

class UComputeGraph* UComputeGraph::GetDefaultObj()
{
	static class UComputeGraph* Default = nullptr;

	if (!Default)
		Default = static_cast<UComputeGraph*>(UComputeGraph::StaticClass()->DefaultObject);

	return Default;
}


// Class ComputeFramework.ComputeGraphComponent
// (None)

class UClass* UComputeGraphComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ComputeGraphComponent");

	return Clss;
}


// ComputeGraphComponent ComputeFramework.Default__ComputeGraphComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UComputeGraphComponent* UComputeGraphComponent::GetDefaultObj()
{
	static class UComputeGraphComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UComputeGraphComponent*>(UComputeGraphComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function ComputeFramework.ComputeGraphComponent.QueueExecute
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UComputeGraphComponent::QueueExecute()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComputeGraphComponent", "QueueExecute");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ComputeFramework.ComputeGraphComponent.DestroyDataProviders
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UComputeGraphComponent::DestroyDataProviders()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComputeGraphComponent", "DestroyDataProviders");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ComputeFramework.ComputeGraphComponent.CreateDataProviders
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InBindingIndex                                                   (Edit, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UObject*                     InBindingObject                                                  (ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

class UObject* UComputeGraphComponent::CreateDataProviders()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComputeGraphComponent", "CreateDataProviders");

	Params::UComputeGraphComponent_CreateDataProviders_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ComputeFramework.ComputeKernel
// (None)

class UClass* UComputeKernel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ComputeKernel");

	return Clss;
}


// ComputeKernel ComputeFramework.Default__ComputeKernel
// (Public, ClassDefaultObject, ArchetypeObject)

class UComputeKernel* UComputeKernel::GetDefaultObj()
{
	static class UComputeKernel* Default = nullptr;

	if (!Default)
		Default = static_cast<UComputeKernel*>(UComputeKernel::StaticClass()->DefaultObject);

	return Default;
}


// Class ComputeFramework.ComputeKernelFromText
// (None)

class UClass* UComputeKernelFromText::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ComputeKernelFromText");

	return Clss;
}


// ComputeKernelFromText ComputeFramework.Default__ComputeKernelFromText
// (Public, ClassDefaultObject, ArchetypeObject)

class UComputeKernelFromText* UComputeKernelFromText::GetDefaultObj()
{
	static class UComputeKernelFromText* Default = nullptr;

	if (!Default)
		Default = static_cast<UComputeKernelFromText*>(UComputeKernelFromText::StaticClass()->DefaultObject);

	return Default;
}


// Class ComputeFramework.ComputeSourceFromText
// (None)

class UClass* UComputeSourceFromText::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ComputeSourceFromText");

	return Clss;
}


// ComputeSourceFromText ComputeFramework.Default__ComputeSourceFromText
// (Public, ClassDefaultObject, ArchetypeObject)

class UComputeSourceFromText* UComputeSourceFromText::GetDefaultObj()
{
	static class UComputeSourceFromText* Default = nullptr;

	if (!Default)
		Default = static_cast<UComputeSourceFromText*>(UComputeSourceFromText::StaticClass()->DefaultObject);

	return Default;
}

}



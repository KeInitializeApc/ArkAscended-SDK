#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class OptimusCore.OptimusComputeDataInterface
// (None)

class UClass* UOptimusComputeDataInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusComputeDataInterface");

	return Clss;
}


// OptimusComputeDataInterface OptimusCore.Default__OptimusComputeDataInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusComputeDataInterface* UOptimusComputeDataInterface::GetDefaultObj()
{
	static class UOptimusComputeDataInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusComputeDataInterface*>(UOptimusComputeDataInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class OptimusCore.OptimusComponentSource
// (None)

class UClass* UOptimusComponentSource::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusComponentSource");

	return Clss;
}


// OptimusComponentSource OptimusCore.Default__OptimusComponentSource
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusComponentSource* UOptimusComponentSource::GetDefaultObj()
{
	static class UOptimusComponentSource* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusComponentSource*>(UOptimusComponentSource::StaticClass()->DefaultObject);

	return Default;
}


// Class OptimusCore.OptimusComponentBindingProvider
// (None)

class UClass* IOptimusComponentBindingProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusComponentBindingProvider");

	return Clss;
}


// OptimusComponentBindingProvider OptimusCore.Default__OptimusComponentBindingProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class IOptimusComponentBindingProvider* IOptimusComponentBindingProvider::GetDefaultObj()
{
	static class IOptimusComponentBindingProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<IOptimusComponentBindingProvider*>(IOptimusComponentBindingProvider::StaticClass()->DefaultObject);

	return Default;
}


// Class OptimusCore.OptimusComputeKernelProvider
// (None)

class UClass* IOptimusComputeKernelProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusComputeKernelProvider");

	return Clss;
}


// OptimusComputeKernelProvider OptimusCore.Default__OptimusComputeKernelProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class IOptimusComputeKernelProvider* IOptimusComputeKernelProvider::GetDefaultObj()
{
	static class IOptimusComputeKernelProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<IOptimusComputeKernelProvider*>(IOptimusComputeKernelProvider::StaticClass()->DefaultObject);

	return Default;
}


// Class OptimusCore.OptimusDataInterfaceProvider
// (None)

class UClass* IOptimusDataInterfaceProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusDataInterfaceProvider");

	return Clss;
}


// OptimusDataInterfaceProvider OptimusCore.Default__OptimusDataInterfaceProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class IOptimusDataInterfaceProvider* IOptimusDataInterfaceProvider::GetDefaultObj()
{
	static class IOptimusDataInterfaceProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<IOptimusDataInterfaceProvider*>(IOptimusDataInterfaceProvider::StaticClass()->DefaultObject);

	return Default;
}


// Class OptimusCore.OptimusExecutionDomainProvider
// (None)

class UClass* IOptimusExecutionDomainProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusExecutionDomainProvider");

	return Clss;
}


// OptimusExecutionDomainProvider OptimusCore.Default__OptimusExecutionDomainProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class IOptimusExecutionDomainProvider* IOptimusExecutionDomainProvider::GetDefaultObj()
{
	static class IOptimusExecutionDomainProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<IOptimusExecutionDomainProvider*>(IOptimusExecutionDomainProvider::StaticClass()->DefaultObject);

	return Default;
}


// Class OptimusCore.OptimusGeneratedClassDefiner
// (None)

class UClass* IOptimusGeneratedClassDefiner::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusGeneratedClassDefiner");

	return Clss;
}


// OptimusGeneratedClassDefiner OptimusCore.Default__OptimusGeneratedClassDefiner
// (Public, ClassDefaultObject, ArchetypeObject)

class IOptimusGeneratedClassDefiner* IOptimusGeneratedClassDefiner::GetDefaultObj()
{
	static class IOptimusGeneratedClassDefiner* Default = nullptr;

	if (!Default)
		Default = static_cast<IOptimusGeneratedClassDefiner*>(IOptimusGeneratedClassDefiner::StaticClass()->DefaultObject);

	return Default;
}


// Class OptimusCore.OptimusNodeAdderPinProvider
// (None)

class UClass* IOptimusNodeAdderPinProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusNodeAdderPinProvider");

	return Clss;
}


// OptimusNodeAdderPinProvider OptimusCore.Default__OptimusNodeAdderPinProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class IOptimusNodeAdderPinProvider* IOptimusNodeAdderPinProvider::GetDefaultObj()
{
	static class IOptimusNodeAdderPinProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<IOptimusNodeAdderPinProvider*>(IOptimusNodeAdderPinProvider::StaticClass()->DefaultObject);

	return Default;
}


// Class OptimusCore.OptimusNodeFunctionLibraryOwner
// (None)

class UClass* IOptimusNodeFunctionLibraryOwner::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusNodeFunctionLibraryOwner");

	return Clss;
}


// OptimusNodeFunctionLibraryOwner OptimusCore.Default__OptimusNodeFunctionLibraryOwner
// (Public, ClassDefaultObject, ArchetypeObject)

class IOptimusNodeFunctionLibraryOwner* IOptimusNodeFunctionLibraryOwner::GetDefaultObj()
{
	static class IOptimusNodeFunctionLibraryOwner* Default = nullptr;

	if (!Default)
		Default = static_cast<IOptimusNodeFunctionLibraryOwner*>(IOptimusNodeFunctionLibraryOwner::StaticClass()->DefaultObject);

	return Default;
}


// Class OptimusCore.OptimusNodeGraphCollectionOwner
// (None)

class UClass* IOptimusNodeGraphCollectionOwner::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusNodeGraphCollectionOwner");

	return Clss;
}


// OptimusNodeGraphCollectionOwner OptimusCore.Default__OptimusNodeGraphCollectionOwner
// (Public, ClassDefaultObject, ArchetypeObject)

class IOptimusNodeGraphCollectionOwner* IOptimusNodeGraphCollectionOwner::GetDefaultObj()
{
	static class IOptimusNodeGraphCollectionOwner* Default = nullptr;

	if (!Default)
		Default = static_cast<IOptimusNodeGraphCollectionOwner*>(IOptimusNodeGraphCollectionOwner::StaticClass()->DefaultObject);

	return Default;
}


// Class OptimusCore.OptimusNodePinRouter
// (None)

class UClass* IOptimusNodePinRouter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusNodePinRouter");

	return Clss;
}


// OptimusNodePinRouter OptimusCore.Default__OptimusNodePinRouter
// (Public, ClassDefaultObject, ArchetypeObject)

class IOptimusNodePinRouter* IOptimusNodePinRouter::GetDefaultObj()
{
	static class IOptimusNodePinRouter* Default = nullptr;

	if (!Default)
		Default = static_cast<IOptimusNodePinRouter*>(IOptimusNodePinRouter::StaticClass()->DefaultObject);

	return Default;
}


// Class OptimusCore.OptimusParameterBindingProvider
// (None)

class UClass* IOptimusParameterBindingProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusParameterBindingProvider");

	return Clss;
}


// OptimusParameterBindingProvider OptimusCore.Default__OptimusParameterBindingProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class IOptimusParameterBindingProvider* IOptimusParameterBindingProvider::GetDefaultObj()
{
	static class IOptimusParameterBindingProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<IOptimusParameterBindingProvider*>(IOptimusParameterBindingProvider::StaticClass()->DefaultObject);

	return Default;
}


// Class OptimusCore.OptimusPathResolver
// (None)

class UClass* IOptimusPathResolver::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusPathResolver");

	return Clss;
}


// OptimusPathResolver OptimusCore.Default__OptimusPathResolver
// (Public, ClassDefaultObject, ArchetypeObject)

class IOptimusPathResolver* IOptimusPathResolver::GetDefaultObj()
{
	static class IOptimusPathResolver* Default = nullptr;

	if (!Default)
		Default = static_cast<IOptimusPathResolver*>(IOptimusPathResolver::StaticClass()->DefaultObject);

	return Default;
}


// Class OptimusCore.OptimusShaderTextProvider
// (None)

class UClass* IOptimusShaderTextProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusShaderTextProvider");

	return Clss;
}


// OptimusShaderTextProvider OptimusCore.Default__OptimusShaderTextProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class IOptimusShaderTextProvider* IOptimusShaderTextProvider::GetDefaultObj()
{
	static class IOptimusShaderTextProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<IOptimusShaderTextProvider*>(IOptimusShaderTextProvider::StaticClass()->DefaultObject);

	return Default;
}


// Class OptimusCore.OptimusValueProvider
// (None)

class UClass* IOptimusValueProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusValueProvider");

	return Clss;
}


// OptimusValueProvider OptimusCore.Default__OptimusValueProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class IOptimusValueProvider* IOptimusValueProvider::GetDefaultObj()
{
	static class IOptimusValueProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<IOptimusValueProvider*>(IOptimusValueProvider::StaticClass()->DefaultObject);

	return Default;
}


// Class OptimusCore.OptimusKernelSource
// (None)

class UClass* UOptimusKernelSource::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusKernelSource");

	return Clss;
}


// OptimusKernelSource OptimusCore.Default__OptimusKernelSource
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusKernelSource* UOptimusKernelSource::GetDefaultObj()
{
	static class UOptimusKernelSource* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusKernelSource*>(UOptimusKernelSource::StaticClass()->DefaultObject);

	return Default;
}


// Class OptimusCore.OptimusSceneComponentSource
// (None)

class UClass* UOptimusSceneComponentSource::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusSceneComponentSource");

	return Clss;
}


// OptimusSceneComponentSource OptimusCore.Default__OptimusSceneComponentSource
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusSceneComponentSource* UOptimusSceneComponentSource::GetDefaultObj()
{
	static class UOptimusSceneComponentSource* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusSceneComponentSource*>(UOptimusSceneComponentSource::StaticClass()->DefaultObject);

	return Default;
}


// Class OptimusCore.OptimusSkinnedMeshComponentSource
// (None)

class UClass* UOptimusSkinnedMeshComponentSource::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusSkinnedMeshComponentSource");

	return Clss;
}


// OptimusSkinnedMeshComponentSource OptimusCore.Default__OptimusSkinnedMeshComponentSource
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusSkinnedMeshComponentSource* UOptimusSkinnedMeshComponentSource::GetDefaultObj()
{
	static class UOptimusSkinnedMeshComponentSource* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusSkinnedMeshComponentSource*>(UOptimusSkinnedMeshComponentSource::StaticClass()->DefaultObject);

	return Default;
}


// Class OptimusCore.OptimusSkeletalMeshComponentSource
// (None)

class UClass* UOptimusSkeletalMeshComponentSource::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusSkeletalMeshComponentSource");

	return Clss;
}


// OptimusSkeletalMeshComponentSource OptimusCore.Default__OptimusSkeletalMeshComponentSource
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusSkeletalMeshComponentSource* UOptimusSkeletalMeshComponentSource::GetDefaultObj()
{
	static class UOptimusSkeletalMeshComponentSource* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusSkeletalMeshComponentSource*>(UOptimusSkeletalMeshComponentSource::StaticClass()->DefaultObject);

	return Default;
}


// Class OptimusCore.OptimusAnimAttributeDataInterface
// (None)

class UClass* UOptimusAnimAttributeDataInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusAnimAttributeDataInterface");

	return Clss;
}


// OptimusAnimAttributeDataInterface OptimusCore.Default__OptimusAnimAttributeDataInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusAnimAttributeDataInterface* UOptimusAnimAttributeDataInterface::GetDefaultObj()
{
	static class UOptimusAnimAttributeDataInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusAnimAttributeDataInterface*>(UOptimusAnimAttributeDataInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class OptimusCore.OptimusAnimAttributeDataProvider
// (None)

class UClass* UOptimusAnimAttributeDataProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusAnimAttributeDataProvider");

	return Clss;
}


// OptimusAnimAttributeDataProvider OptimusCore.Default__OptimusAnimAttributeDataProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusAnimAttributeDataProvider* UOptimusAnimAttributeDataProvider::GetDefaultObj()
{
	static class UOptimusAnimAttributeDataProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusAnimAttributeDataProvider*>(UOptimusAnimAttributeDataProvider::StaticClass()->DefaultObject);

	return Default;
}


// Class OptimusCore.OptimusClothDataInterface
// (None)

class UClass* UOptimusClothDataInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusClothDataInterface");

	return Clss;
}


// OptimusClothDataInterface OptimusCore.Default__OptimusClothDataInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusClothDataInterface* UOptimusClothDataInterface::GetDefaultObj()
{
	static class UOptimusClothDataInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusClothDataInterface*>(UOptimusClothDataInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class OptimusCore.OptimusClothDataProvider
// (None)

class UClass* UOptimusClothDataProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusClothDataProvider");

	return Clss;
}


// OptimusClothDataProvider OptimusCore.Default__OptimusClothDataProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusClothDataProvider* UOptimusClothDataProvider::GetDefaultObj()
{
	static class UOptimusClothDataProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusClothDataProvider*>(UOptimusClothDataProvider::StaticClass()->DefaultObject);

	return Default;
}


// Class OptimusCore.OptimusConnectivityDataInterface
// (None)

class UClass* UOptimusConnectivityDataInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusConnectivityDataInterface");

	return Clss;
}


// OptimusConnectivityDataInterface OptimusCore.Default__OptimusConnectivityDataInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusConnectivityDataInterface* UOptimusConnectivityDataInterface::GetDefaultObj()
{
	static class UOptimusConnectivityDataInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusConnectivityDataInterface*>(UOptimusConnectivityDataInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class OptimusCore.OptimusConnectivityDataProvider
// (None)

class UClass* UOptimusConnectivityDataProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusConnectivityDataProvider");

	return Clss;
}


// OptimusConnectivityDataProvider OptimusCore.Default__OptimusConnectivityDataProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusConnectivityDataProvider* UOptimusConnectivityDataProvider::GetDefaultObj()
{
	static class UOptimusConnectivityDataProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusConnectivityDataProvider*>(UOptimusConnectivityDataProvider::StaticClass()->DefaultObject);

	return Default;
}


// Class OptimusCore.OptimusDebugDrawDataInterface
// (None)

class UClass* UOptimusDebugDrawDataInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusDebugDrawDataInterface");

	return Clss;
}


// OptimusDebugDrawDataInterface OptimusCore.Default__OptimusDebugDrawDataInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusDebugDrawDataInterface* UOptimusDebugDrawDataInterface::GetDefaultObj()
{
	static class UOptimusDebugDrawDataInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusDebugDrawDataInterface*>(UOptimusDebugDrawDataInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class OptimusCore.OptimusDebugDrawDataProvider
// (None)

class UClass* UOptimusDebugDrawDataProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusDebugDrawDataProvider");

	return Clss;
}


// OptimusDebugDrawDataProvider OptimusCore.Default__OptimusDebugDrawDataProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusDebugDrawDataProvider* UOptimusDebugDrawDataProvider::GetDefaultObj()
{
	static class UOptimusDebugDrawDataProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusDebugDrawDataProvider*>(UOptimusDebugDrawDataProvider::StaticClass()->DefaultObject);

	return Default;
}


// Class OptimusCore.OptimusDuplicateVerticesDataInterface
// (None)

class UClass* UOptimusDuplicateVerticesDataInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusDuplicateVerticesDataInterface");

	return Clss;
}


// OptimusDuplicateVerticesDataInterface OptimusCore.Default__OptimusDuplicateVerticesDataInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusDuplicateVerticesDataInterface* UOptimusDuplicateVerticesDataInterface::GetDefaultObj()
{
	static class UOptimusDuplicateVerticesDataInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusDuplicateVerticesDataInterface*>(UOptimusDuplicateVerticesDataInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class OptimusCore.OptimusDuplicateVerticesDataProvider
// (None)

class UClass* UOptimusDuplicateVerticesDataProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusDuplicateVerticesDataProvider");

	return Clss;
}


// OptimusDuplicateVerticesDataProvider OptimusCore.Default__OptimusDuplicateVerticesDataProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusDuplicateVerticesDataProvider* UOptimusDuplicateVerticesDataProvider::GetDefaultObj()
{
	static class UOptimusDuplicateVerticesDataProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusDuplicateVerticesDataProvider*>(UOptimusDuplicateVerticesDataProvider::StaticClass()->DefaultObject);

	return Default;
}


// Class OptimusCore.OptimusGraphDataInterface
// (None)

class UClass* UOptimusGraphDataInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusGraphDataInterface");

	return Clss;
}


// OptimusGraphDataInterface OptimusCore.Default__OptimusGraphDataInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusGraphDataInterface* UOptimusGraphDataInterface::GetDefaultObj()
{
	static class UOptimusGraphDataInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusGraphDataInterface*>(UOptimusGraphDataInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class OptimusCore.OptimusGraphDataProvider
// (None)

class UClass* UOptimusGraphDataProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusGraphDataProvider");

	return Clss;
}


// OptimusGraphDataProvider OptimusCore.Default__OptimusGraphDataProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusGraphDataProvider* UOptimusGraphDataProvider::GetDefaultObj()
{
	static class UOptimusGraphDataProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusGraphDataProvider*>(UOptimusGraphDataProvider::StaticClass()->DefaultObject);

	return Default;
}


// Class OptimusCore.OptimusHalfEdgeDataInterface
// (None)

class UClass* UOptimusHalfEdgeDataInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusHalfEdgeDataInterface");

	return Clss;
}


// OptimusHalfEdgeDataInterface OptimusCore.Default__OptimusHalfEdgeDataInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusHalfEdgeDataInterface* UOptimusHalfEdgeDataInterface::GetDefaultObj()
{
	static class UOptimusHalfEdgeDataInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusHalfEdgeDataInterface*>(UOptimusHalfEdgeDataInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class OptimusCore.OptimusHalfEdgeDataProvider
// (None)

class UClass* UOptimusHalfEdgeDataProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusHalfEdgeDataProvider");

	return Clss;
}


// OptimusHalfEdgeDataProvider OptimusCore.Default__OptimusHalfEdgeDataProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusHalfEdgeDataProvider* UOptimusHalfEdgeDataProvider::GetDefaultObj()
{
	static class UOptimusHalfEdgeDataProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusHalfEdgeDataProvider*>(UOptimusHalfEdgeDataProvider::StaticClass()->DefaultObject);

	return Default;
}


// Class OptimusCore.OptimusMorphTargetDataInterface
// (None)

class UClass* UOptimusMorphTargetDataInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusMorphTargetDataInterface");

	return Clss;
}


// OptimusMorphTargetDataInterface OptimusCore.Default__OptimusMorphTargetDataInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusMorphTargetDataInterface* UOptimusMorphTargetDataInterface::GetDefaultObj()
{
	static class UOptimusMorphTargetDataInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusMorphTargetDataInterface*>(UOptimusMorphTargetDataInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class OptimusCore.OptimusMorphTargetDataProvider
// (None)

class UClass* UOptimusMorphTargetDataProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusMorphTargetDataProvider");

	return Clss;
}


// OptimusMorphTargetDataProvider OptimusCore.Default__OptimusMorphTargetDataProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusMorphTargetDataProvider* UOptimusMorphTargetDataProvider::GetDefaultObj()
{
	static class UOptimusMorphTargetDataProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusMorphTargetDataProvider*>(UOptimusMorphTargetDataProvider::StaticClass()->DefaultObject);

	return Default;
}


// Class OptimusCore.OptimusRawBufferDataInterface
// (None)

class UClass* UOptimusRawBufferDataInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusRawBufferDataInterface");

	return Clss;
}


// OptimusRawBufferDataInterface OptimusCore.Default__OptimusRawBufferDataInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusRawBufferDataInterface* UOptimusRawBufferDataInterface::GetDefaultObj()
{
	static class UOptimusRawBufferDataInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusRawBufferDataInterface*>(UOptimusRawBufferDataInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class OptimusCore.OptimusTransientBufferDataInterface
// (None)

class UClass* UOptimusTransientBufferDataInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusTransientBufferDataInterface");

	return Clss;
}


// OptimusTransientBufferDataInterface OptimusCore.Default__OptimusTransientBufferDataInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusTransientBufferDataInterface* UOptimusTransientBufferDataInterface::GetDefaultObj()
{
	static class UOptimusTransientBufferDataInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusTransientBufferDataInterface*>(UOptimusTransientBufferDataInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class OptimusCore.OptimusPersistentBufferDataInterface
// (None)

class UClass* UOptimusPersistentBufferDataInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusPersistentBufferDataInterface");

	return Clss;
}


// OptimusPersistentBufferDataInterface OptimusCore.Default__OptimusPersistentBufferDataInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusPersistentBufferDataInterface* UOptimusPersistentBufferDataInterface::GetDefaultObj()
{
	static class UOptimusPersistentBufferDataInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusPersistentBufferDataInterface*>(UOptimusPersistentBufferDataInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class OptimusCore.OptimusRawBufferDataProvider
// (None)

class UClass* UOptimusRawBufferDataProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusRawBufferDataProvider");

	return Clss;
}


// OptimusRawBufferDataProvider OptimusCore.Default__OptimusRawBufferDataProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusRawBufferDataProvider* UOptimusRawBufferDataProvider::GetDefaultObj()
{
	static class UOptimusRawBufferDataProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusRawBufferDataProvider*>(UOptimusRawBufferDataProvider::StaticClass()->DefaultObject);

	return Default;
}


// Class OptimusCore.OptimusTransientBufferDataProvider
// (None)

class UClass* UOptimusTransientBufferDataProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusTransientBufferDataProvider");

	return Clss;
}


// OptimusTransientBufferDataProvider OptimusCore.Default__OptimusTransientBufferDataProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusTransientBufferDataProvider* UOptimusTransientBufferDataProvider::GetDefaultObj()
{
	static class UOptimusTransientBufferDataProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusTransientBufferDataProvider*>(UOptimusTransientBufferDataProvider::StaticClass()->DefaultObject);

	return Default;
}


// Class OptimusCore.OptimusPersistentBufferDataProvider
// (None)

class UClass* UOptimusPersistentBufferDataProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusPersistentBufferDataProvider");

	return Clss;
}


// OptimusPersistentBufferDataProvider OptimusCore.Default__OptimusPersistentBufferDataProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusPersistentBufferDataProvider* UOptimusPersistentBufferDataProvider::GetDefaultObj()
{
	static class UOptimusPersistentBufferDataProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusPersistentBufferDataProvider*>(UOptimusPersistentBufferDataProvider::StaticClass()->DefaultObject);

	return Default;
}


// Class OptimusCore.OptimusSceneDataInterface
// (None)

class UClass* UOptimusSceneDataInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusSceneDataInterface");

	return Clss;
}


// OptimusSceneDataInterface OptimusCore.Default__OptimusSceneDataInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusSceneDataInterface* UOptimusSceneDataInterface::GetDefaultObj()
{
	static class UOptimusSceneDataInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusSceneDataInterface*>(UOptimusSceneDataInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class OptimusCore.OptimusSceneDataProvider
// (None)

class UClass* UOptimusSceneDataProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusSceneDataProvider");

	return Clss;
}


// OptimusSceneDataProvider OptimusCore.Default__OptimusSceneDataProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusSceneDataProvider* UOptimusSceneDataProvider::GetDefaultObj()
{
	static class UOptimusSceneDataProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusSceneDataProvider*>(UOptimusSceneDataProvider::StaticClass()->DefaultObject);

	return Default;
}


// Class OptimusCore.OptimusSkeletonDataInterface
// (None)

class UClass* UOptimusSkeletonDataInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusSkeletonDataInterface");

	return Clss;
}


// OptimusSkeletonDataInterface OptimusCore.Default__OptimusSkeletonDataInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusSkeletonDataInterface* UOptimusSkeletonDataInterface::GetDefaultObj()
{
	static class UOptimusSkeletonDataInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusSkeletonDataInterface*>(UOptimusSkeletonDataInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class OptimusCore.OptimusSkeletonDataProvider
// (None)

class UClass* UOptimusSkeletonDataProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusSkeletonDataProvider");

	return Clss;
}


// OptimusSkeletonDataProvider OptimusCore.Default__OptimusSkeletonDataProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusSkeletonDataProvider* UOptimusSkeletonDataProvider::GetDefaultObj()
{
	static class UOptimusSkeletonDataProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusSkeletonDataProvider*>(UOptimusSkeletonDataProvider::StaticClass()->DefaultObject);

	return Default;
}


// Class OptimusCore.OptimusSkinnedMeshDataInterface
// (None)

class UClass* UOptimusSkinnedMeshDataInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusSkinnedMeshDataInterface");

	return Clss;
}


// OptimusSkinnedMeshDataInterface OptimusCore.Default__OptimusSkinnedMeshDataInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusSkinnedMeshDataInterface* UOptimusSkinnedMeshDataInterface::GetDefaultObj()
{
	static class UOptimusSkinnedMeshDataInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusSkinnedMeshDataInterface*>(UOptimusSkinnedMeshDataInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class OptimusCore.OptimusSkinnedMeshDataProvider
// (None)

class UClass* UOptimusSkinnedMeshDataProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusSkinnedMeshDataProvider");

	return Clss;
}


// OptimusSkinnedMeshDataProvider OptimusCore.Default__OptimusSkinnedMeshDataProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusSkinnedMeshDataProvider* UOptimusSkinnedMeshDataProvider::GetDefaultObj()
{
	static class UOptimusSkinnedMeshDataProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusSkinnedMeshDataProvider*>(UOptimusSkinnedMeshDataProvider::StaticClass()->DefaultObject);

	return Default;
}


// Class OptimusCore.OptimusSkinnedMeshExecDataInterface
// (None)

class UClass* UOptimusSkinnedMeshExecDataInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusSkinnedMeshExecDataInterface");

	return Clss;
}


// OptimusSkinnedMeshExecDataInterface OptimusCore.Default__OptimusSkinnedMeshExecDataInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusSkinnedMeshExecDataInterface* UOptimusSkinnedMeshExecDataInterface::GetDefaultObj()
{
	static class UOptimusSkinnedMeshExecDataInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusSkinnedMeshExecDataInterface*>(UOptimusSkinnedMeshExecDataInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class OptimusCore.OptimusSkinnedMeshExecDataProvider
// (None)

class UClass* UOptimusSkinnedMeshExecDataProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusSkinnedMeshExecDataProvider");

	return Clss;
}


// OptimusSkinnedMeshExecDataProvider OptimusCore.Default__OptimusSkinnedMeshExecDataProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusSkinnedMeshExecDataProvider* UOptimusSkinnedMeshExecDataProvider::GetDefaultObj()
{
	static class UOptimusSkinnedMeshExecDataProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusSkinnedMeshExecDataProvider*>(UOptimusSkinnedMeshExecDataProvider::StaticClass()->DefaultObject);

	return Default;
}


// Class OptimusCore.OptimusSkinnedMeshWriteDataInterface
// (None)

class UClass* UOptimusSkinnedMeshWriteDataInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusSkinnedMeshWriteDataInterface");

	return Clss;
}


// OptimusSkinnedMeshWriteDataInterface OptimusCore.Default__OptimusSkinnedMeshWriteDataInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusSkinnedMeshWriteDataInterface* UOptimusSkinnedMeshWriteDataInterface::GetDefaultObj()
{
	static class UOptimusSkinnedMeshWriteDataInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusSkinnedMeshWriteDataInterface*>(UOptimusSkinnedMeshWriteDataInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class OptimusCore.OptimusSkinnedMeshWriteDataProvider
// (None)

class UClass* UOptimusSkinnedMeshWriteDataProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusSkinnedMeshWriteDataProvider");

	return Clss;
}


// OptimusSkinnedMeshWriteDataProvider OptimusCore.Default__OptimusSkinnedMeshWriteDataProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusSkinnedMeshWriteDataProvider* UOptimusSkinnedMeshWriteDataProvider::GetDefaultObj()
{
	static class UOptimusSkinnedMeshWriteDataProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusSkinnedMeshWriteDataProvider*>(UOptimusSkinnedMeshWriteDataProvider::StaticClass()->DefaultObject);

	return Default;
}


// Class OptimusCore.OptimusNode
// (None)

class UClass* UOptimusNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusNode");

	return Clss;
}


// OptimusNode OptimusCore.Default__OptimusNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusNode* UOptimusNode::GetDefaultObj()
{
	static class UOptimusNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusNode*>(UOptimusNode::StaticClass()->DefaultObject);

	return Default;
}


// Function OptimusCore.OptimusNode.SetGraphPosition
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   InPosition                                                       (ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UOptimusNode::SetGraphPosition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptimusNode", "SetGraphPosition");

	Params::UOptimusNode_SetGraphPosition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusNode.GetNodeName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FName UOptimusNode::GetNodeName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptimusNode", "GetNodeName");

	Params::UOptimusNode_GetNodeName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusNode.GetNodeCategory
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FName UOptimusNode::GetNodeCategory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptimusNode", "GetNodeCategory");

	Params::UOptimusNode_GetNodeCategory_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusNode.GetGraphPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector2D UOptimusNode::GetGraphPosition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptimusNode", "GetGraphPosition");

	Params::UOptimusNode_GetGraphPosition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusNode.GetDisplayName
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FText UOptimusNode::GetDisplayName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptimusNode", "GetDisplayName");

	Params::UOptimusNode_GetDisplayName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OptimusCore.OptimusNode_DataInterface
// (None)

class UClass* UOptimusNode_DataInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusNode_DataInterface");

	return Clss;
}


// OptimusNode_DataInterface OptimusCore.Default__OptimusNode_DataInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusNode_DataInterface* UOptimusNode_DataInterface::GetDefaultObj()
{
	static class UOptimusNode_DataInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusNode_DataInterface*>(UOptimusNode_DataInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class OptimusCore.OptimusNode_AnimAttributeDataInterface
// (None)

class UClass* UOptimusNode_AnimAttributeDataInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusNode_AnimAttributeDataInterface");

	return Clss;
}


// OptimusNode_AnimAttributeDataInterface OptimusCore.Default__OptimusNode_AnimAttributeDataInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusNode_AnimAttributeDataInterface* UOptimusNode_AnimAttributeDataInterface::GetDefaultObj()
{
	static class UOptimusNode_AnimAttributeDataInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusNode_AnimAttributeDataInterface*>(UOptimusNode_AnimAttributeDataInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class OptimusCore.OptimusNode_ComponentSource
// (None)

class UClass* UOptimusNode_ComponentSource::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusNode_ComponentSource");

	return Clss;
}


// OptimusNode_ComponentSource OptimusCore.Default__OptimusNode_ComponentSource
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusNode_ComponentSource* UOptimusNode_ComponentSource::GetDefaultObj()
{
	static class UOptimusNode_ComponentSource* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusNode_ComponentSource*>(UOptimusNode_ComponentSource::StaticClass()->DefaultObject);

	return Default;
}


// Class OptimusCore.OptimusNode_ComputeKernelBase
// (None)

class UClass* UOptimusNode_ComputeKernelBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusNode_ComputeKernelBase");

	return Clss;
}


// OptimusNode_ComputeKernelBase OptimusCore.Default__OptimusNode_ComputeKernelBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusNode_ComputeKernelBase* UOptimusNode_ComputeKernelBase::GetDefaultObj()
{
	static class UOptimusNode_ComputeKernelBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusNode_ComputeKernelBase*>(UOptimusNode_ComputeKernelBase::StaticClass()->DefaultObject);

	return Default;
}


// Class OptimusCore.OptimusNode_ComputeKernelFunctionGeneratorClass
// (Field, Struct, Class)

class UClass* UOptimusNode_ComputeKernelFunctionGeneratorClass::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusNode_ComputeKernelFunctionGeneratorClass");

	return Clss;
}


// OptimusNode_ComputeKernelFunctionGeneratorClass OptimusCore.Default__OptimusNode_ComputeKernelFunctionGeneratorClass
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusNode_ComputeKernelFunctionGeneratorClass* UOptimusNode_ComputeKernelFunctionGeneratorClass::GetDefaultObj()
{
	static class UOptimusNode_ComputeKernelFunctionGeneratorClass* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusNode_ComputeKernelFunctionGeneratorClass*>(UOptimusNode_ComputeKernelFunctionGeneratorClass::StaticClass()->DefaultObject);

	return Default;
}


// Class OptimusCore.OptimusNode_ComputeKernelFunction
// (None)

class UClass* UOptimusNode_ComputeKernelFunction::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusNode_ComputeKernelFunction");

	return Clss;
}


// OptimusNode_ComputeKernelFunction OptimusCore.Default__OptimusNode_ComputeKernelFunction
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusNode_ComputeKernelFunction* UOptimusNode_ComputeKernelFunction::GetDefaultObj()
{
	static class UOptimusNode_ComputeKernelFunction* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusNode_ComputeKernelFunction*>(UOptimusNode_ComputeKernelFunction::StaticClass()->DefaultObject);

	return Default;
}


// Class OptimusCore.OptimusNode_ConstantValueGeneratorClass
// (Field, Struct, Class)

class UClass* UOptimusNode_ConstantValueGeneratorClass::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusNode_ConstantValueGeneratorClass");

	return Clss;
}


// OptimusNode_ConstantValueGeneratorClass OptimusCore.Default__OptimusNode_ConstantValueGeneratorClass
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusNode_ConstantValueGeneratorClass* UOptimusNode_ConstantValueGeneratorClass::GetDefaultObj()
{
	static class UOptimusNode_ConstantValueGeneratorClass* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusNode_ConstantValueGeneratorClass*>(UOptimusNode_ConstantValueGeneratorClass::StaticClass()->DefaultObject);

	return Default;
}


// Class OptimusCore.OptimusNode_ConstantValue
// (None)

class UClass* UOptimusNode_ConstantValue::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusNode_ConstantValue");

	return Clss;
}


// OptimusNode_ConstantValue OptimusCore.Default__OptimusNode_ConstantValue
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusNode_ConstantValue* UOptimusNode_ConstantValue::GetDefaultObj()
{
	static class UOptimusNode_ConstantValue* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusNode_ConstantValue*>(UOptimusNode_ConstantValue::StaticClass()->DefaultObject);

	return Default;
}


// Class OptimusCore.OptimusNode_CustomComputeKernel
// (None)

class UClass* UOptimusNode_CustomComputeKernel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusNode_CustomComputeKernel");

	return Clss;
}


// OptimusNode_CustomComputeKernel OptimusCore.Default__OptimusNode_CustomComputeKernel
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusNode_CustomComputeKernel* UOptimusNode_CustomComputeKernel::GetDefaultObj()
{
	static class UOptimusNode_CustomComputeKernel* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusNode_CustomComputeKernel*>(UOptimusNode_CustomComputeKernel::StaticClass()->DefaultObject);

	return Default;
}


// Class OptimusCore.OptimusNode_FunctionReference
// (None)

class UClass* UOptimusNode_FunctionReference::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusNode_FunctionReference");

	return Clss;
}


// OptimusNode_FunctionReference OptimusCore.Default__OptimusNode_FunctionReference
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusNode_FunctionReference* UOptimusNode_FunctionReference::GetDefaultObj()
{
	static class UOptimusNode_FunctionReference* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusNode_FunctionReference*>(UOptimusNode_FunctionReference::StaticClass()->DefaultObject);

	return Default;
}


// Class OptimusCore.OptimusNode_ResourceAccessorBase
// (None)

class UClass* UOptimusNode_ResourceAccessorBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusNode_ResourceAccessorBase");

	return Clss;
}


// OptimusNode_ResourceAccessorBase OptimusCore.Default__OptimusNode_ResourceAccessorBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusNode_ResourceAccessorBase* UOptimusNode_ResourceAccessorBase::GetDefaultObj()
{
	static class UOptimusNode_ResourceAccessorBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusNode_ResourceAccessorBase*>(UOptimusNode_ResourceAccessorBase::StaticClass()->DefaultObject);

	return Default;
}


// Class OptimusCore.OptimusNode_GetResource
// (None)

class UClass* UOptimusNode_GetResource::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusNode_GetResource");

	return Clss;
}


// OptimusNode_GetResource OptimusCore.Default__OptimusNode_GetResource
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusNode_GetResource* UOptimusNode_GetResource::GetDefaultObj()
{
	static class UOptimusNode_GetResource* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusNode_GetResource*>(UOptimusNode_GetResource::StaticClass()->DefaultObject);

	return Default;
}


// Class OptimusCore.OptimusNode_GetVariable
// (None)

class UClass* UOptimusNode_GetVariable::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusNode_GetVariable");

	return Clss;
}


// OptimusNode_GetVariable OptimusCore.Default__OptimusNode_GetVariable
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusNode_GetVariable* UOptimusNode_GetVariable::GetDefaultObj()
{
	static class UOptimusNode_GetVariable* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusNode_GetVariable*>(UOptimusNode_GetVariable::StaticClass()->DefaultObject);

	return Default;
}


// Class OptimusCore.OptimusNode_GraphTerminal
// (None)

class UClass* UOptimusNode_GraphTerminal::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusNode_GraphTerminal");

	return Clss;
}


// OptimusNode_GraphTerminal OptimusCore.Default__OptimusNode_GraphTerminal
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusNode_GraphTerminal* UOptimusNode_GraphTerminal::GetDefaultObj()
{
	static class UOptimusNode_GraphTerminal* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusNode_GraphTerminal*>(UOptimusNode_GraphTerminal::StaticClass()->DefaultObject);

	return Default;
}


// Class OptimusCore.OptimusNode_Resource
// (None)

class UClass* UOptimusNode_Resource::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusNode_Resource");

	return Clss;
}


// OptimusNode_Resource OptimusCore.Default__OptimusNode_Resource
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusNode_Resource* UOptimusNode_Resource::GetDefaultObj()
{
	static class UOptimusNode_Resource* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusNode_Resource*>(UOptimusNode_Resource::StaticClass()->DefaultObject);

	return Default;
}


// Class OptimusCore.OptimusNode_SetResource
// (None)

class UClass* UOptimusNode_SetResource::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusNode_SetResource");

	return Clss;
}


// OptimusNode_SetResource OptimusCore.Default__OptimusNode_SetResource
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusNode_SetResource* UOptimusNode_SetResource::GetDefaultObj()
{
	static class UOptimusNode_SetResource* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusNode_SetResource*>(UOptimusNode_SetResource::StaticClass()->DefaultObject);

	return Default;
}


// Class OptimusCore.OptimusNode_SubGraphReference
// (None)

class UClass* UOptimusNode_SubGraphReference::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusNode_SubGraphReference");

	return Clss;
}


// OptimusNode_SubGraphReference OptimusCore.Default__OptimusNode_SubGraphReference
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusNode_SubGraphReference* UOptimusNode_SubGraphReference::GetDefaultObj()
{
	static class UOptimusNode_SubGraphReference* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusNode_SubGraphReference*>(UOptimusNode_SubGraphReference::StaticClass()->DefaultObject);

	return Default;
}


// Class OptimusCore.OptimusActionStack
// (None)

class UClass* UOptimusActionStack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusActionStack");

	return Clss;
}


// OptimusActionStack OptimusCore.Default__OptimusActionStack
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusActionStack* UOptimusActionStack::GetDefaultObj()
{
	static class UOptimusActionStack* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusActionStack*>(UOptimusActionStack::StaticClass()->DefaultObject);

	return Default;
}


// Class OptimusCore.OptimusComponentSourceBinding
// (None)

class UClass* UOptimusComponentSourceBinding::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusComponentSourceBinding");

	return Clss;
}


// OptimusComponentSourceBinding OptimusCore.Default__OptimusComponentSourceBinding
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusComponentSourceBinding* UOptimusComponentSourceBinding::GetDefaultObj()
{
	static class UOptimusComponentSourceBinding* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusComponentSourceBinding*>(UOptimusComponentSourceBinding::StaticClass()->DefaultObject);

	return Default;
}


// Class OptimusCore.OptimusComputeGraph
// (None)

class UClass* UOptimusComputeGraph::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusComputeGraph");

	return Clss;
}


// OptimusComputeGraph OptimusCore.Default__OptimusComputeGraph
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusComputeGraph* UOptimusComputeGraph::GetDefaultObj()
{
	static class UOptimusComputeGraph* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusComputeGraph*>(UOptimusComputeGraph::StaticClass()->DefaultObject);

	return Default;
}


// Class OptimusCore.OptimusComponentSourceBindingContainer
// (None)

class UClass* UOptimusComponentSourceBindingContainer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusComponentSourceBindingContainer");

	return Clss;
}


// OptimusComponentSourceBindingContainer OptimusCore.Default__OptimusComponentSourceBindingContainer
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusComponentSourceBindingContainer* UOptimusComponentSourceBindingContainer::GetDefaultObj()
{
	static class UOptimusComponentSourceBindingContainer* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusComponentSourceBindingContainer*>(UOptimusComponentSourceBindingContainer::StaticClass()->DefaultObject);

	return Default;
}


// Class OptimusCore.OptimusVariableContainer
// (None)

class UClass* UOptimusVariableContainer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusVariableContainer");

	return Clss;
}


// OptimusVariableContainer OptimusCore.Default__OptimusVariableContainer
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusVariableContainer* UOptimusVariableContainer::GetDefaultObj()
{
	static class UOptimusVariableContainer* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusVariableContainer*>(UOptimusVariableContainer::StaticClass()->DefaultObject);

	return Default;
}


// Class OptimusCore.OptimusResourceContainer
// (None)

class UClass* UOptimusResourceContainer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusResourceContainer");

	return Clss;
}


// OptimusResourceContainer OptimusCore.Default__OptimusResourceContainer
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusResourceContainer* UOptimusResourceContainer::GetDefaultObj()
{
	static class UOptimusResourceContainer* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusResourceContainer*>(UOptimusResourceContainer::StaticClass()->DefaultObject);

	return Default;
}


// Class OptimusCore.OptimusDeformer
// (None)

class UClass* UOptimusDeformer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusDeformer");

	return Clss;
}


// OptimusDeformer OptimusCore.Default__OptimusDeformer
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusDeformer* UOptimusDeformer::GetDefaultObj()
{
	static class UOptimusDeformer* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusDeformer*>(UOptimusDeformer::StaticClass()->DefaultObject);

	return Default;
}


// Function OptimusCore.OptimusDeformer.GetVariables
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UOptimusVariableDescription*>ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<class UOptimusVariableDescription*> UOptimusDeformer::GetVariables()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptimusDeformer", "GetVariables");

	Params::UOptimusDeformer_GetVariables_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusDeformer.GetResources
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UOptimusResourceDescription*>ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<class UOptimusResourceDescription*> UOptimusDeformer::GetResources()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptimusDeformer", "GetResources");

	Params::UOptimusDeformer_GetResources_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusDeformer.GetComponentBindings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UOptimusComponentSourceBinding*>ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<class UOptimusComponentSourceBinding*> UOptimusDeformer::GetComponentBindings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptimusDeformer", "GetComponentBindings");

	Params::UOptimusDeformer_GetComponentBindings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OptimusCore.OptimusDeformerInstanceSettings
// (None)

class UClass* UOptimusDeformerInstanceSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusDeformerInstanceSettings");

	return Clss;
}


// OptimusDeformerInstanceSettings OptimusCore.Default__OptimusDeformerInstanceSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusDeformerInstanceSettings* UOptimusDeformerInstanceSettings::GetDefaultObj()
{
	static class UOptimusDeformerInstanceSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusDeformerInstanceSettings*>(UOptimusDeformerInstanceSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class OptimusCore.OptimusDeformerInstance
// (None)

class UClass* UOptimusDeformerInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusDeformerInstance");

	return Clss;
}


// OptimusDeformerInstance OptimusCore.Default__OptimusDeformerInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusDeformerInstance* UOptimusDeformerInstance::GetDefaultObj()
{
	static class UOptimusDeformerInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusDeformerInstance*>(UOptimusDeformerInstance::StaticClass()->DefaultObject);

	return Default;
}


// Function OptimusCore.OptimusDeformerInstance.SetVectorVariable
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        InVariableName                                                   (ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// struct FVector                     InValue                                                          (Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UOptimusDeformerInstance::SetVectorVariable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptimusDeformerInstance", "SetVectorVariable");

	Params::UOptimusDeformerInstance_SetVectorVariable_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusDeformerInstance.SetVector4Variable
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        InVariableName                                                   (ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// struct FVector4                    InValue                                                          (Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UOptimusDeformerInstance::SetVector4Variable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptimusDeformerInstance", "SetVector4Variable");

	Params::UOptimusDeformerInstance_SetVector4Variable_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusDeformerInstance.SetTransformVariable
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        InVariableName                                                   (ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// struct FTransform                  InValue                                                          (Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UOptimusDeformerInstance::SetTransformVariable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptimusDeformerInstance", "SetTransformVariable");

	Params::UOptimusDeformerInstance_SetTransformVariable_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusDeformerInstance.SetIntVariable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InVariableName                                                   (ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// int32                              InValue                                                          (Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UOptimusDeformerInstance::SetIntVariable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptimusDeformerInstance", "SetIntVariable");

	Params::UOptimusDeformerInstance_SetIntVariable_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusDeformerInstance.SetFloatVariable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InVariableName                                                   (ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// double                             InValue                                                          (Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UOptimusDeformerInstance::SetFloatVariable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptimusDeformerInstance", "SetFloatVariable");

	Params::UOptimusDeformerInstance_SetFloatVariable_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusDeformerInstance.SetBoolVariable
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        InVariableName                                                   (ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// bool                               InValue                                                          (Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UOptimusDeformerInstance::SetBoolVariable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptimusDeformerInstance", "SetBoolVariable");

	Params::UOptimusDeformerInstance_SetBoolVariable_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusDeformerInstance.GetVariables
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UOptimusVariableDescription*>ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<class UOptimusVariableDescription*> UOptimusDeformerInstance::GetVariables()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptimusDeformerInstance", "GetVariables");

	Params::UOptimusDeformerInstance_GetVariables_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusDeformerInstance.EnqueueTriggerGraph
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InTriggerGraphName                                               (Edit, BlueprintVisible, Net, Parm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UOptimusDeformerInstance::EnqueueTriggerGraph(class FName InTriggerGraphName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptimusDeformerInstance", "EnqueueTriggerGraph");

	Params::UOptimusDeformerInstance_EnqueueTriggerGraph_Params Parms{};

	Parms.InTriggerGraphName = InTriggerGraphName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OptimusCore.OptimusNodeGraph
// (None)

class UClass* UOptimusNodeGraph::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusNodeGraph");

	return Clss;
}


// OptimusNodeGraph OptimusCore.Default__OptimusNodeGraph
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusNodeGraph* UOptimusNodeGraph::GetDefaultObj()
{
	static class UOptimusNodeGraph* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusNodeGraph*>(UOptimusNodeGraph::StaticClass()->DefaultObject);

	return Default;
}


// Function OptimusCore.OptimusNodeGraph.RenameGraph
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UOptimusNodeGraph*           InGraph                                                          (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
// class FString                      InNewName                                                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UOptimusNodeGraph::RenameGraph(class UOptimusNodeGraph** InGraph, class FString* InNewName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptimusNodeGraph", "RenameGraph");

	Params::UOptimusNodeGraph_RenameGraph_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InGraph != nullptr)
		*InGraph = Parms.InGraph;

	if (InNewName != nullptr)
		*InNewName = std::move(Parms.InNewName);

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusNodeGraph.RemoveNodes
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class UOptimusNode*>        InNodes                                                          (Edit, ExportObject, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UOptimusNodeGraph::RemoveNodes(TArray<class UOptimusNode*>* InNodes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptimusNodeGraph", "RemoveNodes");

	Params::UOptimusNodeGraph_RemoveNodes_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InNodes != nullptr)
		*InNodes = std::move(Parms.InNodes);

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusNodeGraph.RemoveNode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UOptimusNode*                InNode                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UOptimusNodeGraph::RemoveNode(class UOptimusNode** InNode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptimusNodeGraph", "RemoveNode");

	Params::UOptimusNodeGraph_RemoveNode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InNode != nullptr)
		*InNode = Parms.InNode;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusNodeGraph.RemoveLink
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UOptimusNodePin*             InNodeOutputPin                                                  (Edit, Net, EditFixedSize, Parm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
// class UOptimusNodePin*             InNodeInputPin                                                   (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UOptimusNodeGraph::RemoveLink(class UOptimusNodePin* InNodeOutputPin, class UOptimusNodePin* InNodeInputPin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptimusNodeGraph", "RemoveLink");

	Params::UOptimusNodeGraph_RemoveLink_Params Parms{};

	Parms.InNodeOutputPin = InNodeOutputPin;
	Parms.InNodeInputPin = InNodeInputPin;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusNodeGraph.RemoveAllLinks
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UOptimusNodePin*             InNodePin                                                        (ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UOptimusNodeGraph::RemoveAllLinks(class UOptimusNodePin** InNodePin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptimusNodeGraph", "RemoveAllLinks");

	Params::UOptimusNodeGraph_RemoveAllLinks_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InNodePin != nullptr)
		*InNodePin = Parms.InNodePin;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusNodeGraph.MoveGraph
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UOptimusNodeGraph*           InGraph                                                          (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
// int32                              InInsertBefore                                                   (Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UOptimusNodeGraph::MoveGraph(class UOptimusNodeGraph** InGraph, int32* InInsertBefore)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptimusNodeGraph", "MoveGraph");

	Params::UOptimusNodeGraph_MoveGraph_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InGraph != nullptr)
		*InGraph = Parms.InGraph;

	if (InInsertBefore != nullptr)
		*InInsertBefore = Parms.InInsertBefore;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusNodeGraph.IsSubGraphReference
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UOptimusNode*                InNode                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UOptimusNodeGraph::IsSubGraphReference(class UOptimusNode** InNode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptimusNodeGraph", "IsSubGraphReference");

	Params::UOptimusNodeGraph_IsSubGraphReference_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InNode != nullptr)
		*InNode = Parms.InNode;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusNodeGraph.IsKernelFunction
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UOptimusNode*                InNode                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UOptimusNodeGraph::IsKernelFunction(class UOptimusNode** InNode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptimusNodeGraph", "IsKernelFunction");

	Params::UOptimusNodeGraph_IsKernelFunction_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InNode != nullptr)
		*InNode = Parms.InNode;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusNodeGraph.IsFunctionReference
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UOptimusNode*                InNode                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UOptimusNodeGraph::IsFunctionReference(class UOptimusNode** InNode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptimusNodeGraph", "IsFunctionReference");

	Params::UOptimusNodeGraph_IsFunctionReference_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InNode != nullptr)
		*InNode = Parms.InNode;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusNodeGraph.IsFunctionGraph
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UOptimusNodeGraph::IsFunctionGraph()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptimusNodeGraph", "IsFunctionGraph");

	Params::UOptimusNodeGraph_IsFunctionGraph_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusNodeGraph.IsExecutionGraph
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UOptimusNodeGraph::IsExecutionGraph()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptimusNodeGraph", "IsExecutionGraph");

	Params::UOptimusNodeGraph_IsExecutionGraph_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusNodeGraph.IsCustomKernel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UOptimusNode*                InNode                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UOptimusNodeGraph::IsCustomKernel(class UOptimusNode** InNode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptimusNodeGraph", "IsCustomKernel");

	Params::UOptimusNodeGraph_IsCustomKernel_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InNode != nullptr)
		*InNode = Parms.InNode;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusNodeGraph.GetGraphType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EOptimusNodeGraphType   ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

enum class EOptimusNodeGraphType UOptimusNodeGraph::GetGraphType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptimusNodeGraph", "GetGraphType");

	Params::UOptimusNodeGraph_GetGraphType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusNodeGraph.GetGraphs
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UOptimusNodeGraph*>   ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<class UOptimusNodeGraph*> UOptimusNodeGraph::GetGraphs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptimusNodeGraph", "GetGraphs");

	Params::UOptimusNodeGraph_GetGraphs_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusNodeGraph.GetGraphIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UOptimusNodeGraph::GetGraphIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptimusNodeGraph", "GetGraphIndex");

	Params::UOptimusNodeGraph_GetGraphIndex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusNodeGraph.ExpandCollapsedNodes
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UOptimusNode*                InFunctionNode                                                   (Edit, ConstParm, Net, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
// TArray<class UOptimusNode*>        ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<class UOptimusNode*> UOptimusNodeGraph::ExpandCollapsedNodes(class UOptimusNode** InFunctionNode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptimusNodeGraph", "ExpandCollapsedNodes");

	Params::UOptimusNodeGraph_ExpandCollapsedNodes_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InFunctionNode != nullptr)
		*InFunctionNode = Parms.InFunctionNode;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusNodeGraph.DuplicateNodes
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// TArray<class UOptimusNode*>        InNodes                                                          (Edit, ExportObject, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
// struct FVector2D                   InPosition                                                       (ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UOptimusNodeGraph::DuplicateNodes(TArray<class UOptimusNode*>* InNodes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptimusNodeGraph", "DuplicateNodes");

	Params::UOptimusNodeGraph_DuplicateNodes_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InNodes != nullptr)
		*InNodes = std::move(Parms.InNodes);

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusNodeGraph.DuplicateNode
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UOptimusNode*                InNode                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
// struct FVector2D                   InPosition                                                       (ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UOptimusNode*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UOptimusNode* UOptimusNodeGraph::DuplicateNode(class UOptimusNode** InNode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptimusNodeGraph", "DuplicateNode");

	Params::UOptimusNodeGraph_DuplicateNode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InNode != nullptr)
		*InNode = Parms.InNode;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusNodeGraph.ConvertFunctionToCustomKernel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UOptimusNode*                InKernelFunction                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
// class UOptimusNode*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UOptimusNode* UOptimusNodeGraph::ConvertFunctionToCustomKernel(class UOptimusNode** InKernelFunction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptimusNodeGraph", "ConvertFunctionToCustomKernel");

	Params::UOptimusNodeGraph_ConvertFunctionToCustomKernel_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InKernelFunction != nullptr)
		*InKernelFunction = Parms.InKernelFunction;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusNodeGraph.ConvertCustomKernelToFunction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UOptimusNode*                InCustomKernel                                                   (ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
// class UOptimusNode*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UOptimusNode* UOptimusNodeGraph::ConvertCustomKernelToFunction(class UOptimusNode** InCustomKernel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptimusNodeGraph", "ConvertCustomKernelToFunction");

	Params::UOptimusNodeGraph_ConvertCustomKernelToFunction_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InCustomKernel != nullptr)
		*InCustomKernel = Parms.InCustomKernel;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusNodeGraph.CollapseNodesToSubGraph
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class UOptimusNode*>        InNodes                                                          (Edit, ExportObject, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
// class UOptimusNode*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UOptimusNode* UOptimusNodeGraph::CollapseNodesToSubGraph(TArray<class UOptimusNode*>* InNodes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptimusNodeGraph", "CollapseNodesToSubGraph");

	Params::UOptimusNodeGraph_CollapseNodesToSubGraph_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InNodes != nullptr)
		*InNodes = std::move(Parms.InNodes);

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusNodeGraph.CollapseNodesToFunction
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class UOptimusNode*>        InNodes                                                          (Edit, ExportObject, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
// class UOptimusNode*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UOptimusNode* UOptimusNodeGraph::CollapseNodesToFunction(TArray<class UOptimusNode*>* InNodes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptimusNodeGraph", "CollapseNodesToFunction");

	Params::UOptimusNodeGraph_CollapseNodesToFunction_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InNodes != nullptr)
		*InNodes = std::move(Parms.InNodes);

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusNodeGraph.AddVariableGetNode
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UOptimusVariableDescription* InVariableDesc                                                   (Edit, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
// struct FVector2D                   InPosition                                                       (ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UOptimusNode*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UOptimusNode* UOptimusNodeGraph::AddVariableGetNode(class UOptimusVariableDescription** InVariableDesc)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptimusNodeGraph", "AddVariableGetNode");

	Params::UOptimusNodeGraph_AddVariableGetNode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InVariableDesc != nullptr)
		*InVariableDesc = Parms.InVariableDesc;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusNodeGraph.AddValueNode
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FOptimusDataTypeRef         InDataTypeRef                                                    (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
// struct FVector2D                   InPosition                                                       (ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UOptimusNode*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UOptimusNode* UOptimusNodeGraph::AddValueNode(const struct FOptimusDataTypeRef& InDataTypeRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptimusNodeGraph", "AddValueNode");

	Params::UOptimusNodeGraph_AddValueNode_Params Parms{};

	Parms.InDataTypeRef = InDataTypeRef;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusNodeGraph.AddResourceSetNode
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UOptimusResourceDescription* InResourceDesc                                                   (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
// struct FVector2D                   InPosition                                                       (ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UOptimusNode*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UOptimusNode* UOptimusNodeGraph::AddResourceSetNode(class UOptimusResourceDescription* InResourceDesc)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptimusNodeGraph", "AddResourceSetNode");

	Params::UOptimusNodeGraph_AddResourceSetNode_Params Parms{};

	Parms.InResourceDesc = InResourceDesc;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusNodeGraph.AddResourceNode
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UOptimusResourceDescription* InResourceDesc                                                   (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
// struct FVector2D                   InPosition                                                       (ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UOptimusNode*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UOptimusNode* UOptimusNodeGraph::AddResourceNode(class UOptimusResourceDescription* InResourceDesc)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptimusNodeGraph", "AddResourceNode");

	Params::UOptimusNodeGraph_AddResourceNode_Params Parms{};

	Parms.InResourceDesc = InResourceDesc;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusNodeGraph.AddResourceGetNode
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UOptimusResourceDescription* InResourceDesc                                                   (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
// struct FVector2D                   InPosition                                                       (ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UOptimusNode*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UOptimusNode* UOptimusNodeGraph::AddResourceGetNode(class UOptimusResourceDescription* InResourceDesc)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptimusNodeGraph", "AddResourceGetNode");

	Params::UOptimusNodeGraph_AddResourceGetNode_Params Parms{};

	Parms.InResourceDesc = InResourceDesc;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusNodeGraph.AddNode
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UClass*                      InNodeClass                                                      (ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
// struct FVector2D                   InPosition                                                       (ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UOptimusNode*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UOptimusNode* UOptimusNodeGraph::AddNode(class UClass* InNodeClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptimusNodeGraph", "AddNode");

	Params::UOptimusNodeGraph_AddNode_Params Parms{};

	Parms.InNodeClass = InNodeClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusNodeGraph.AddLink
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UOptimusNodePin*             InNodeOutputPin                                                  (Edit, Net, EditFixedSize, Parm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
// class UOptimusNodePin*             InNodeInputPin                                                   (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UOptimusNodeGraph::AddLink(class UOptimusNodePin* InNodeOutputPin, class UOptimusNodePin* InNodeInputPin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptimusNodeGraph", "AddLink");

	Params::UOptimusNodeGraph_AddLink_Params Parms{};

	Parms.InNodeOutputPin = InNodeOutputPin;
	Parms.InNodeInputPin = InNodeInputPin;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusNodeGraph.AddDataInterfaceNode
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UClass*                      InDataInterfaceClass                                             (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
// struct FVector2D                   InPosition                                                       (ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UOptimusNode*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UOptimusNode* UOptimusNodeGraph::AddDataInterfaceNode(class UClass* InDataInterfaceClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptimusNodeGraph", "AddDataInterfaceNode");

	Params::UOptimusNodeGraph_AddDataInterfaceNode_Params Parms{};

	Parms.InDataInterfaceClass = InDataInterfaceClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OptimusCore.OptimusNodeGraph.AddComponentBindingGetNode
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UOptimusComponentSourceBinding*InComponentBinding                                               (BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
// struct FVector2D                   InPosition                                                       (ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UOptimusNode*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UOptimusNode* UOptimusNodeGraph::AddComponentBindingGetNode(class UOptimusComponentSourceBinding* InComponentBinding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptimusNodeGraph", "AddComponentBindingGetNode");

	Params::UOptimusNodeGraph_AddComponentBindingGetNode_Params Parms{};

	Parms.InComponentBinding = InComponentBinding;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OptimusCore.OptimusNodeSubGraph
// (None)

class UClass* UOptimusNodeSubGraph::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusNodeSubGraph");

	return Clss;
}


// OptimusNodeSubGraph OptimusCore.Default__OptimusNodeSubGraph
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusNodeSubGraph* UOptimusNodeSubGraph::GetDefaultObj()
{
	static class UOptimusNodeSubGraph* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusNodeSubGraph*>(UOptimusNodeSubGraph::StaticClass()->DefaultObject);

	return Default;
}


// Class OptimusCore.OptimusFunctionNodeGraph
// (None)

class UClass* UOptimusFunctionNodeGraph::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusFunctionNodeGraph");

	return Clss;
}


// OptimusFunctionNodeGraph OptimusCore.Default__OptimusFunctionNodeGraph
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusFunctionNodeGraph* UOptimusFunctionNodeGraph::GetDefaultObj()
{
	static class UOptimusFunctionNodeGraph* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusFunctionNodeGraph*>(UOptimusFunctionNodeGraph::StaticClass()->DefaultObject);

	return Default;
}


// Class OptimusCore.OptimusNodeLink
// (None)

class UClass* UOptimusNodeLink::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusNodeLink");

	return Clss;
}


// OptimusNodeLink OptimusCore.Default__OptimusNodeLink
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusNodeLink* UOptimusNodeLink::GetDefaultObj()
{
	static class UOptimusNodeLink* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusNodeLink*>(UOptimusNodeLink::StaticClass()->DefaultObject);

	return Default;
}


// Class OptimusCore.OptimusNodePin
// (None)

class UClass* UOptimusNodePin::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusNodePin");

	return Clss;
}


// OptimusNodePin OptimusCore.Default__OptimusNodePin
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusNodePin* UOptimusNodePin::GetDefaultObj()
{
	static class UOptimusNodePin* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusNodePin*>(UOptimusNodePin::StaticClass()->DefaultObject);

	return Default;
}


// Class OptimusCore.OptimusResourceDescription
// (None)

class UClass* UOptimusResourceDescription::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusResourceDescription");

	return Clss;
}


// OptimusResourceDescription OptimusCore.Default__OptimusResourceDescription
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusResourceDescription* UOptimusResourceDescription::GetDefaultObj()
{
	static class UOptimusResourceDescription* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusResourceDescription*>(UOptimusResourceDescription::StaticClass()->DefaultObject);

	return Default;
}


// Class OptimusCore.OptimusSource
// (None)

class UClass* UOptimusSource::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusSource");

	return Clss;
}


// OptimusSource OptimusCore.Default__OptimusSource
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusSource* UOptimusSource::GetDefaultObj()
{
	static class UOptimusSource* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusSource*>(UOptimusSource::StaticClass()->DefaultObject);

	return Default;
}


// Class OptimusCore.OptimusValueContainerGeneratorClass
// (Field, Struct, Class)

class UClass* UOptimusValueContainerGeneratorClass::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusValueContainerGeneratorClass");

	return Clss;
}


// OptimusValueContainerGeneratorClass OptimusCore.Default__OptimusValueContainerGeneratorClass
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusValueContainerGeneratorClass* UOptimusValueContainerGeneratorClass::GetDefaultObj()
{
	static class UOptimusValueContainerGeneratorClass* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusValueContainerGeneratorClass*>(UOptimusValueContainerGeneratorClass::StaticClass()->DefaultObject);

	return Default;
}


// Class OptimusCore.OptimusValueContainer
// (None)

class UClass* UOptimusValueContainer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusValueContainer");

	return Clss;
}


// OptimusValueContainer OptimusCore.Default__OptimusValueContainer
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusValueContainer* UOptimusValueContainer::GetDefaultObj()
{
	static class UOptimusValueContainer* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusValueContainer*>(UOptimusValueContainer::StaticClass()->DefaultObject);

	return Default;
}


// Class OptimusCore.OptimusVariableDescription
// (None)

class UClass* UOptimusVariableDescription::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusVariableDescription");

	return Clss;
}


// OptimusVariableDescription OptimusCore.Default__OptimusVariableDescription
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusVariableDescription* UOptimusVariableDescription::GetDefaultObj()
{
	static class UOptimusVariableDescription* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusVariableDescription*>(UOptimusVariableDescription::StaticClass()->DefaultObject);

	return Default;
}

}



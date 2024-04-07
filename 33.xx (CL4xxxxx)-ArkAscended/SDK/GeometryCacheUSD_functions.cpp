#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GeometryCacheUSD.GeometryCacheTrackUsd
// (None)

class UClass* UGeometryCacheTrackUsd::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryCacheTrackUsd");

	return Clss;
}


// GeometryCacheTrackUsd GeometryCacheUSD.Default__GeometryCacheTrackUsd
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryCacheTrackUsd* UGeometryCacheTrackUsd::GetDefaultObj()
{
	static class UGeometryCacheTrackUsd* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryCacheTrackUsd*>(UGeometryCacheTrackUsd::StaticClass()->DefaultObject);

	return Default;
}


// Class GeometryCacheUSD.GeometryCacheUsdComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UGeometryCacheUsdComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryCacheUsdComponent");

	return Clss;
}


// GeometryCacheUsdComponent GeometryCacheUSD.Default__GeometryCacheUsdComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryCacheUsdComponent* UGeometryCacheUsdComponent::GetDefaultObj()
{
	static class UGeometryCacheUsdComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryCacheUsdComponent*>(UGeometryCacheUsdComponent::StaticClass()->DefaultObject);

	return Default;
}

}



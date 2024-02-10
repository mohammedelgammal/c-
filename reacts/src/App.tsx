import Posts from "./components/Posts";
import usePosts from "./services/usePosts";

export default (): JSX.Element => {
  const { data: posts, isLoading, error } = usePosts();
  return <Posts posts={posts} isLoading={isLoading} error={error} />;
};
